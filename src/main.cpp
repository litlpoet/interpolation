// Copyright 2015 Byungkuk

#include <QtWidgets/QApplication>
#include <algorithm>
#include <iostream>
#include <vector>

#include "src/plotcontrolinterpolation.h"
#include "src/plotmodelinterpolation.h"

void DataSet1(ML::TimeSeriesMap* time_series_map);
void DataSet2(ML::TimeSeriesMap* time_series_map);
void DataSet3(ML::TimeSeriesMap* time_series_map);

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);

  ML::TimeSeriesMap time_series_map;
  DataSet2(&time_series_map);

  std::cout << "Make model and initialize with data" << std::endl;
  PlotModelInterface* model = new PlotModelInterpolation();
  model->initializeModel(100, time_series_map);
  std::cout << "Interpolation model initialized" << std::endl;

  PlotControlInterface* ctrl = new PlotControlInterpolation(model);
  ctrl->showPlotter();
  std::cout << "Show interpolation plotter view" << std::endl;

  return a.exec();
}

void DataSet1(ML::TimeSeriesMap* time_series_map) {
  time_series_map->insert(ML::MakeTimeSample(1, 1, 0.1f));
  time_series_map->insert(ML::MakeTimeSample(10, 1, 0.5f));
  time_series_map->insert(ML::MakeTimeSample(11, 1, 1.1f));
  time_series_map->insert(ML::MakeTimeSample(13, 1, 1.3f));
  time_series_map->insert(ML::MakeTimeSample(20, 1, -1.0f));
  time_series_map->insert(ML::MakeTimeSample(22, 1, -1.7f));
  time_series_map->insert(ML::MakeTimeSample(40, 1, 1.0f));
  time_series_map->insert(ML::MakeTimeSample(50, 1, 0.8f));
  time_series_map->insert(ML::MakeTimeSample(51, 1, 1.0f));
  time_series_map->insert(ML::MakeTimeSample(70, 1, 1.4f));
  time_series_map->insert(ML::MakeTimeSample(80, 1, 2.9f));
  time_series_map->insert(ML::MakeTimeSample(85, 1, 3.0f));
}

void DataSet2(ML::TimeSeriesMap* time_series_map) {
  // time_series_map->insert(ML::MakeTimeSample(0, 1, 0.0f));
  // time_series_map->insert(ML::MakeTimeSample(1, 1, 0.0f));
  time_series_map->insert(ML::MakeTimeSample(10, 1, 0.1f));
  time_series_map->insert(ML::MakeTimeSample(11, 1, 0.5f));
  time_series_map->insert(ML::MakeTimeSample(12, 1, 0.1f));
  time_series_map->insert(ML::MakeTimeSample(13, 1, 0.3f));
  time_series_map->insert(ML::MakeTimeSample(14, 1, 0.0f));
  time_series_map->insert(ML::MakeTimeSample(15, 1, 0.7f));
  time_series_map->insert(ML::MakeTimeSample(16, 1, 0.0f));
  time_series_map->insert(ML::MakeTimeSample(17, 1, 0.8f));
  time_series_map->insert(ML::MakeTimeSample(18, 1, 0.0f));
  time_series_map->insert(ML::MakeTimeSample(19, 1, 0.2f));
  time_series_map->insert(ML::MakeTimeSample(20, 1, 0.1f));
  time_series_map->insert(ML::MakeTimeSample(21, 1, 0.0f));
  // time_series_map->insert(ML::MakeTimeSample(98, 1, 0.0f));
  // time_series_map->insert(ML::MakeTimeSample(99, 1, 0.0f));
}

void DataSet3(ML::TimeSeriesMap* time_series_map) {
  // time_series_map->insert(ML::MakeTimeSample(0, 1, 0.0f));
  // time_series_map->insert(ML::MakeTimeSample(1, 1, 0.0f));
  // time_series_map->insert(ML::MakeTimeSample(25, 1, 1.5f));
  time_series_map->insert(ML::MakeTimeSample(51, 1, 1.5f));
  // time_series_map->insert(ML::MakeTimeSample(75, 1, 1.5f));
  // time_series_map->insert(ML::MakeTimeSample(98, 1, 0.0f));
  // time_series_map->insert(ML::MakeTimeSample(99, 1, 0.0f));
}
