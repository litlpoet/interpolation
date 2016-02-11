// Copyright (c) 2015 Byungkuk Choi

#include "src/plotmodelinterpolation.h"

#include <MLInterpolation/gaussianinterpolation.h>
#include <MLInterpolation/gaussianinterpolationnoisy.h>
#include <MLInterpolation/multilevelbsplineinterpolation.h>
#include <MLRegression/gaussianprocess.h>
#include <vector>
#include <algorithm>
#include <iostream>

#include "src/observer.h"

class PlotModelInterpolation::Imple {
 public:
  int _frames{0};
  int _data_dim{0};
  float _prev_lambda{1.0f};
  float _prev_alpha{1.0f};
  ML::MatNxN _Sigma;
  ML::TimeSeriesMap _time_series_map;
  std::vector<ML::MatNxN> _mu_s;
  std::vector<ML::Interpolation*> _interps;  // owned by this class
  std::vector<Observer*> _observers;

  Imple() {}

  ~Imple() {
    for (auto it : _interps)
      if (it != nullptr) delete it;
  }

  void initializeFromData(int const& frames,
                          ML::TimeSeriesMap const& time_series_map) {
    _frames = frames;
    _time_series_map = time_series_map;
    _mu_s.resize(TOTAL_INTERP);
    _interps.resize(TOTAL_INTERP);
    _interps[GAUSSIAN_NOISELESS] =
        new ML::GaussianInterpolation(frames, time_series_map);
    _interps[GAUSSIAN_NOISY] =
        new ML::GaussianInterpolationNoisy(frames, time_series_map);
    _interps[MULTILEVEL_B_SPLINE] =
        new ML::MultiLevelBSplineInterpolation(frames, time_series_map);
    ML::MatNxN S;
    _interps[GAUSSIAN_NOISELESS]->solve(1.0f, 1.0f, &_mu_s[GAUSSIAN_NOISELESS],
                                        &S);
    _interps[GAUSSIAN_NOISY]->solve(1.0f, 1.0f, &_mu_s[GAUSSIAN_NOISY]);
    _interps[MULTILEVEL_B_SPLINE]->solve(6, 2, &_mu_s[MULTILEVEL_B_SPLINE]);

    _data_dim = _interps[0]->dataDimension();
  }
};

PlotModelInterpolation::PlotModelInterpolation()
    : _p(new PlotModelInterpolation::Imple) {}

PlotModelInterpolation::~PlotModelInterpolation() {}

void PlotModelInterpolation::initializeModel(
    int const& frames, ML::TimeSeriesMap const& time_series_map) {
  _p->initializeFromData(frames, time_series_map);
}

void PlotModelInterpolation::setBoundary(int const& b_type) {
  dynamic_cast<ML::GaussianInterpolationNoisy*>(_p->_interps[GAUSSIAN_NOISY])
      ->setBoundaryConstraint(b_type);
  solve(_p->_prev_lambda, _p->_prev_alpha);
}

void PlotModelInterpolation::solve(float const& lambda, float const& alpha) {
  _p->_prev_lambda = lambda;
  _p->_prev_alpha = alpha;
  _p->_interps[GAUSSIAN_NOISY]->solve(_p->_prev_lambda, _p->_prev_alpha,
                                      &_p->_mu_s[GAUSSIAN_NOISY], &_p->_Sigma);
  notifyObservers();
}

void PlotModelInterpolation::solve(int const& initial_knots, int const& level) {
  _p->_interps[MULTILEVEL_B_SPLINE]->solve(initial_knots, level,
                                           &_p->_mu_s[MULTILEVEL_B_SPLINE]);
  notifyObservers();
}

int PlotModelInterpolation::numberOfInterpolators() {
  return static_cast<int>(_p->_interps.size());
}

int PlotModelInterpolation::getTimeDimension() { return _p->_frames; }

int PlotModelInterpolation::getDataDimension() { return _p->_data_dim; }

void PlotModelInterpolation::getSample(int const& d, float const& end_time,
                                       ML::MatNxN* P) {
  float step = (1.0f / _p->_frames) * end_time;
  P->resize(_p->_time_series_map.size(), 2);
  int i = 0;
  for (auto const& it : _p->_time_series_map)
    P->row(i++) = Eigen::Vector2f(it.first * step, it.second[d]);
}

void PlotModelInterpolation::get1dCurve(INTERP_TYPE const& type, int const& d,
                                        float const& end_time, ML::MatNxN* C) {
  C->resize(_p->_mu_s[type].rows(), 2);
  (*C) << ML::VecN::LinSpaced(_p->_mu_s[type].rows(), 0.0, end_time),
      _p->_mu_s[type].col(d);
}

void PlotModelInterpolation::getMean(INTERP_TYPE const& type, ML::MatNxN* Mu) {
  (*Mu) = _p->_mu_s[type];
}

void PlotModelInterpolation::getVariance(ML::MatNxN* Sigma) {
  (*Sigma) = _p->_Sigma;
}

void PlotModelInterpolation::registerObserver(Observer* observer) {
  _p->_observers.push_back(observer);
}

void PlotModelInterpolation::removeObserver(Observer* observer) {
  auto it = std::find(_p->_observers.begin(), _p->_observers.end(), observer);
  if (it != _p->_observers.end()) _p->_observers.erase(it);
}

void PlotModelInterpolation::notifyObservers() {
  for (auto it : _p->_observers) it->update();
}
