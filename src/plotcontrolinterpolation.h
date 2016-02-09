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

  void setBoundary(int const& b_type) final;

  void setPrecision(float const& w) final;

  void setAlpha(float const& a) final;

  void setLevel(int const& l) final;

 private:
  class Imple;
  std::unique_ptr<Imple> _p;
};

#endif  // SRC_PLOTCONTROLINTERPOLATION_H_
