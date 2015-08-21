// Copyright (c) 2015 Byungkuk Choi
#ifndef SRC_PLOTMODELINTERFACE_H_
#define SRC_PLOTMODELINTERFACE_H_

#include <MLCore/mathtypes.h>
#include <MLCore/timeseriesdata.h>
#include "src/interpolationtypes.h"

namespace ML {
class GaussianInterpolationNoisy;
}

class Observer;

class PlotModelInterface {
 public:
  PlotModelInterface() {}

  virtual ~PlotModelInterface() {}

  virtual void initializeModel(const int& frames,
                               const ML::TimeSeriesMap& time_series_map) = 0;

  virtual void setBoundary(const bool& b) = 0;

  virtual void solve(const float& lambda) = 0;

  virtual void solve(const int& initial_knots, const int& level) = 0;

  virtual int numberOfInterpolators() = 0;

  virtual int getTimeDimension() = 0;

  virtual int getDataDimension() = 0;

  virtual void getSample(const int& d, const float& end_time,
                         ML::MatNxN* P) = 0;

  virtual void get1dCurve(const INTERP_TYPE& type, const int& d,
                          const float& end_time, ML::MatNxN* C) = 0;

  virtual void getMean(const INTERP_TYPE& type, ML::MatNxN* Mu) = 0;

  virtual void getVariance(ML::MatNxN* Sigma) = 0;

  virtual void registerObserver(Observer* observer) = 0;

  virtual void removeObserver(Observer* observer) = 0;
};

#endif  // SRC_PLOTMODELINTERFACE_H_
