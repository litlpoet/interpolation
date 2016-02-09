// Copyright (c) 2015 Byungkuk Choi

#include "src/plotcontrolinterpolation.h"

#include <iostream>
#include "src/plotmodelinterface.h"
#include "src/plotviewinterpolation.h"

class PlotControlInterpolation::Imple {
 public:
  int _prev_init_knot;
  int _prev_level;
  float _lambda{1.0f};
  float _alpha{1.0f};
  PlotModelInterface* _model;
  PlotViewInterpolation* _view;

  explicit Imple(PlotModelInterface* model)
      : _prev_init_knot(6), _prev_level(1), _model(model), _view(nullptr) {}

  ~Imple() {}
};

PlotControlInterpolation::PlotControlInterpolation(PlotModelInterface* model)
    : _p(new PlotControlInterpolation::Imple(model)) {
  _p->_view = new PlotViewInterpolation(model, this);
}

PlotControlInterpolation::~PlotControlInterpolation() {}

// void PlotControlInterpolation::initializeModelData(
//     const int& frames, const ML::TimeSeriesMap& time_series_map) {
//   _p->_model->initializeModel(frames, time_series_map);
// }

void PlotControlInterpolation::showPlotter() {
  ML::MatNxN P;
  for (int i = 0, n = _p->_model->getDataDimension(); i < n; ++i) {
    _p->_model->getSample(i, 10.0f, &P);
    _p->_view->setPointData(i, P);
  }
  _p->_view->showPlotter();
}

void PlotControlInterpolation::setBoundary(int const& b_type) {
  _p->_model->setBoundary(b_type);
}

void PlotControlInterpolation::setPrecision(float const& w) {
  _p->_lambda = w;
  _p->_model->solve(w, _p->_alpha);
}

void PlotControlInterpolation::setAlpha(float const& a) {
  _p->_alpha = a;
  _p->_model->solve(_p->_lambda, a);
}

void PlotControlInterpolation::setLevel(int const& l) {
  _p->_model->solve(_p->_prev_init_knot, l);
  _p->_prev_level = l;
}
