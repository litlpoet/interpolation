// Copyright (c) 2015 Byungkuk Choi
#ifndef SRC_PLOTCONTROLINTERPOLATION_H_
#define SRC_PLOTCONTROLINTERPOLATION_H_

#include <memory>
#include "src/plotcontrolinterface.h"

class PlotModelInterface;

class PlotControlInterpolation : public PlotControlInterface {
 public:
  explicit PlotControlInterpolation(PlotModelInterface* model);

  ~PlotControlInterpolation();

  // void initializeModelData(const int& frames,
  //                          const ML::TimeSeriesMap& time_series_map) final;

  void showPlotter() final;

  void setBoundary(const int& b_type) final;

  void setPrecision(const float& w) final;

  void setLevel(const int& l) final;

 private:
  class Imple;
  std::unique_ptr<Imple> _p;
};

#endif  // SRC_PLOTCONTROLINTERPOLATION_H_
