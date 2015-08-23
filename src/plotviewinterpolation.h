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
  void changeWeight(const int& w);

  void changeLevel(const int& l);

  void setBoundary(const int& b_type);

 protected:
  void resizeEvent(QResizeEvent* event);

 private:
  class Imple;
  std::unique_ptr<Imple> _p;
};

#endif  // SRC_PLOTVIEWINTERPOLATION_H_
