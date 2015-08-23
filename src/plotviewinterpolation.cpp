// Copyright (c) 2015 Byungkuk Choi

#include "src/plotviewinterpolation.h"

#include <QtCore/QSignalMapper>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QLabel>
#include <iostream>

#include "src/plotmodelinterface.h"
#include "src/plotcontrolinterface.h"

class PlotViewInterpolation::Imple {
 public:
  QRadioButton* _b1_rbtn;
  QRadioButton* _b2_rbtn;
  QRadioButton* _b3_rbtn;
  QLabel* _lbl_weight;
  QLabel* _lbl_knot;
  QLabel* _lbl_level;
  QSlider* _sld_weight;
  QSlider* _sld_level;
  PlotModelInterface* _model;
  PlotControlInterface* _ctrl;

  Imple(PlotModelInterface* model, PlotControlInterface* ctrl)
      : _b1_rbtn(nullptr),
        _b2_rbtn(nullptr),
        _lbl_weight(nullptr),
        _lbl_knot(nullptr),
        _lbl_level(nullptr),
        _sld_weight(nullptr),
        _sld_level(nullptr),
        _model(model),
        _ctrl(ctrl) {}

  ~Imple() {}

  void createUi(PlotViewInterpolation* plot_view) {
    _b1_rbtn = new QRadioButton("no boundary", plot_view);
    _b2_rbtn = new QRadioButton("c1 boundary", plot_view);
    _b3_rbtn = new QRadioButton("c2 boundary", plot_view);
    _b1_rbtn->setDown(true);

    _lbl_weight = new QLabel("lambda", plot_view);
    _lbl_weight->setAlignment(Qt::AlignRight);
    _lbl_weight->adjustSize();

    _sld_weight = new QSlider(Qt::Horizontal, plot_view);
    _sld_weight->setMinimum(1);
    _sld_weight->setMaximum(1000);
    _sld_weight->setTickInterval(1);
    _sld_weight->setValue(20);
    _sld_weight->adjustSize();

    _lbl_knot = new QLabel("initial knots", plot_view);
    _lbl_knot->setAlignment(Qt::AlignRight);
    _lbl_knot->adjustSize();

    _lbl_level = new QLabel("level", plot_view);
    _lbl_level->setAlignment(Qt::AlignRight);
    _lbl_knot->adjustSize();

    _sld_level = new QSlider(Qt::Horizontal, plot_view);
    _sld_level->setMinimum(1);
    _sld_level->setMaximum(10);
    _sld_level->setTickInterval(1);
    _sld_level->setValue(1);
    _sld_level->adjustSize();

    QSignalMapper* signal_map = new QSignalMapper(plot_view);
    signal_map->setMapping(_b1_rbtn, 0);  // no boundary
    signal_map->setMapping(_b2_rbtn, 1);  // c1 boundary
    signal_map->setMapping(_b3_rbtn, 2);  // c2 boundary

    QObject::connect(_b1_rbtn, SIGNAL(clicked()), signal_map, SLOT(map()));
    QObject::connect(_b2_rbtn, SIGNAL(clicked()), signal_map, SLOT(map()));
    QObject::connect(_b3_rbtn, SIGNAL(clicked()), signal_map, SLOT(map()));
    QObject::connect(signal_map, SIGNAL(mapped(int)), plot_view,
                     SLOT(setBoundary(int)));
    QObject::connect(_sld_weight, &QSlider::valueChanged, plot_view,
                     &PlotViewInterpolation::changeWeight);
    QObject::connect(_sld_level, &QSlider::valueChanged, plot_view,
                     &PlotViewInterpolation::changeLevel);
  }
};

PlotViewInterpolation::PlotViewInterpolation(PlotModelInterface* model,
                                             PlotControlInterface* ctrl)
    : Plotter(), _p(new PlotViewInterpolation::Imple(model, ctrl)) {
  _p->_model->registerObserver(this);
  _p->createUi(this);
}

PlotViewInterpolation::~PlotViewInterpolation() {}

void PlotViewInterpolation::update() {
  ML::MatNxN C;
  for (int t = 0; t < TOTAL_INTERP; ++t) {
    for (int d = 0, n = _p->_model->getDataDimension(); d < n; ++d) {
      int c_id = n * t + d;
      INTERP_TYPE type = static_cast<INTERP_TYPE>(t);
      _p->_model->get1dCurve(type, d, 10.0f, &C);
      clearCurve(c_id);
      setCurveData(c_id, C);
    }
  }
}

void PlotViewInterpolation::showPlotter() { show(); }

void PlotViewInterpolation::changeWeight(const int& w) {
  float real_w = static_cast<float>(w) / 20;
  std::cout << "current weight: " << real_w << std::endl;
  _p->_ctrl->setPrecision(real_w);
}

void PlotViewInterpolation::changeLevel(const int& l) {
  std::cout << "current level:" << l << std::endl;
  _p->_ctrl->setLevel(l);
}

void PlotViewInterpolation::setBoundary(const int& b_type) {
  _p->_ctrl->setBoundary(b_type);
}

void PlotViewInterpolation::resizeEvent(QResizeEvent* event) {
  int mid_x = width() / 2;
  _p->_b1_rbtn->move(0, height() - 25);
  _p->_b2_rbtn->move(100, height() - 25);
  _p->_b3_rbtn->move(200, height() - 25);
  _p->_lbl_weight->move(300, height() - 25);
  _p->_sld_weight->move(300 + _p->_lbl_weight->width(), height() - 30);
  _p->_lbl_knot->move(mid_x, height() - 25);
  _p->_lbl_level->move(mid_x + _p->_lbl_knot->width(), height() - 25);
  _p->_sld_level->move(mid_x + _p->_lbl_knot->width() + _p->_lbl_level->width(),
                       height() - 30);
  Plotter::resizeEvent(event);
}
