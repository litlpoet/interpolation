// Copyright (c) 2015 Byungkuk Choi.

#ifndef SRC_PLOTVIEWINTERPOLATION_H_
#define SRC_PLOTVIEWINTERPOLATION_H_

#include <plotter/plotter.h>
#include <memory>
#include "src/observer.h"

class PlotModelInterface;
class PlotControlInterface;

class PlotViewInterpolation : public Plotter, public Observer {
  Q_OBJECT

 public:
  PlotViewInterpolation(PlotModelInterface* model, PlotControlInterface* ctrl);

  ~PlotViewInterpolation();

  void update() final;

  void showPlotter();

 public slots:
  void changePrecision(int const& w);

  void changeAlpha(int const& a);

  void changeLevel(int const& l);

  void setBoundary(int const& b_type);

 protected:
  void resizeEvent(QResizeEvent* event);

 private:
  class Imple;
  std::unique_ptr<Imple> _p;
};

#endif  // SRC_PLOTVIEWINTERPOLATION_H_
