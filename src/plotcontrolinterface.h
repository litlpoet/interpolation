// Copyright (c) 2015 Byungkuk Choi

#ifndef SRC_PLOTCONTROLINTERFACE_H_
#define SRC_PLOTCONTROLINTERFACE_H_

// #include <MLCore/timeseriesdata.h>

class PlotControlInterface {
 public:
  PlotControlInterface() {}

  virtual ~PlotControlInterface() {}

  // virtual void initializeModelData(
  //     const int& frames, const ML::TimeSeriesMap& time_series_map) = 0;

  virtual void showPlotter() = 0;

  virtual void setBoundary(int const& b_type) = 0;

  virtual void setPrecision(float const& w) = 0;

  virtual void setAlpha(float const& a) = 0;

  virtual void setLevel(int const& l) = 0;
};

#endif  // SRC_PLOTCONTROLINTERFACE_H_
