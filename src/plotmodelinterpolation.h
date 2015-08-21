// Copyright (c) 2015 Byungkuk Choi

#ifndef SRC_PLOTMODELINTERPOLATION_H_
#define SRC_PLOTMODELINTERPOLATION_H_

#include <memory>
#include "src/plotmodelinterface.h"

class PlotModelInterpolation : public PlotModelInterface {
 public:
  PlotModelInterpolation();

  ~PlotModelInterpolation();

  void initializeModel(const int& frames,
                       const ML::TimeSeriesMap& time_series_map) final;

  void setBoundary(const bool& b) final;

  void solve(const float& lambda) final;

  void solve(const int& initial_knots, const int& level) final;

  int numberOfInterpolators() final;

  int getTimeDimension() final;

  int getDataDimension() final;

  void getSample(const int& d, const float& end_time, ML::MatNxN* P) final;

  void get1dCurve(const INTERP_TYPE& type, const int& d, const float& end_time,
                  ML::MatNxN* C) final;

  void getMean(const INTERP_TYPE& type, ML::MatNxN* Mu) final;

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
