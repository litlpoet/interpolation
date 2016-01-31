// Copyright (c) 2015 Byungkuk Choi

#ifndef SRC_PLOTMODELINTERPOLATION_H_
#define SRC_PLOTMODELINTERPOLATION_H_

#include <memory>
#include "src/plotmodelinterface.h"

class PlotModelInterpolation : public PlotModelInterface {
 public:
  PlotModelInterpolation();

  ~PlotModelInterpolation();

  void initializeModel(int const& frames,
                       ML::TimeSeriesMap const& time_series_map) final;

  void setBoundary(int const& b_type) final;

  void solve(float const& lambda) final;

  void solve(int const& initial_knots, int const& level) final;

  int numberOfInterpolators() final;

  int getTimeDimension() final;

  int getDataDimension() final;

  void getSample(int const& d, float const& end_time, ML::MatNxN* P) final;

  void get1dCurve(INTERP_TYPE const& type, int const& d, float const& end_time,
                  ML::MatNxN* C) final;

  void getMean(INTERP_TYPE const& type, ML::MatNxN* Mu) final;

  void getVariance(ML::MatNxN* Sigma) final;

  void registerObserver(Observer* observer) final;

  void removeObserver(Observer* observer) final;

 protected:
  void notifyObservers();

 private:
  class Imple;
  std::unique_ptr<Imple> _p;
};

#endif  // SRC_PLOTMODELINTERPOLATION_H_
