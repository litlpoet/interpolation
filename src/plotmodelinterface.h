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

  virtual void initializeModel(int const& frames,
                               ML::TimeSeriesMap const& time_series_map) = 0;

  virtual void setBoundary(int const& b_type) = 0;

  virtual void solve(float const& lambda) = 0;

  virtual void solve(int const& initial_knots, int const& level) = 0;

  virtual int numberOfInterpolators() = 0;

  virtual int getTimeDimension() = 0;

  virtual int getDataDimension() = 0;

  virtual void getSample(int const& d, float const& end_time,
                         ML::MatNxN* P) = 0;

  virtual void get1dCurve(INTERP_TYPE const& type, int const& d,
                          float const& end_time, ML::MatNxN* C) = 0;

  virtual void getMean(INTERP_TYPE const& type, ML::MatNxN* Mu) = 0;

  virtual void getVariance(ML::MatNxN* Sigma) = 0;

  virtual void registerObserver(Observer* observer) = 0;

  virtual void removeObserver(Observer* observer) = 0;
};

#endif  // SRC_PLOTMODELINTERFACE_H_
