// Copyright 2015 Byungkuk

#include <QtWidgets/QApplication>
#include <algorithm>
#include <iostream>
#include <vector>

#include "src/plotcontrolinterpolation.h"
#include "src/plotmodelinterpolation.h"

void DataSet1(ML::TimeSeriesMap* t_map);
void DataSet2(ML::TimeSeriesMap* t_map);
void DataSet3(ML::TimeSeriesMap* t_map);

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);

  ML::TimeSeriesMap t_map;
  DataSet3(&t_map);

  std::cout << "Make model and initialize with data" << std::endl;
  PlotModelInterface* model = new PlotModelInterpolation();
  model->initializeModel(161, t_map);
  std::cout << "Interpolation model initialized" << std::endl;

  PlotControlInterface* ctrl = new PlotControlInterpolation(model);
  ctrl->showPlotter();
  std::cout << "Show interpolation plotter view" << std::endl;

  return a.exec();
}

void DataSet1(ML::TimeSeriesMap* t_map) {
  t_map->insert(ML::MakeTimeSample(1, 1, 0.1f));
  t_map->insert(ML::MakeTimeSample(10, 1, 0.5f));
  t_map->insert(ML::MakeTimeSample(11, 1, 1.1f));
  t_map->insert(ML::MakeTimeSample(13, 1, 1.3f));
  t_map->insert(ML::MakeTimeSample(20, 1, -1.0f));
  t_map->insert(ML::MakeTimeSample(22, 1, -1.7f));
  t_map->insert(ML::MakeTimeSample(40, 1, 1.0f));
  t_map->insert(ML::MakeTimeSample(50, 1, 0.8f));
  t_map->insert(ML::MakeTimeSample(51, 1, 1.0f));
  t_map->insert(ML::MakeTimeSample(70, 1, 1.4f));
  t_map->insert(ML::MakeTimeSample(80, 1, 2.9f));
  t_map->insert(ML::MakeTimeSample(85, 1, 3.0f));
}

void DataSet2(ML::TimeSeriesMap* t_map) {
  // t_map->insert(ML::MakeTimeSample(0, 1, 0.0f));
  // t_map->insert(ML::MakeTimeSample(1, 1, 0.0f));
  t_map->insert(ML::MakeTimeSample(10, 1, 0.1f));
  t_map->insert(ML::MakeTimeSample(11, 1, 0.5f));
  t_map->insert(ML::MakeTimeSample(12, 1, 0.1f));
  t_map->insert(ML::MakeTimeSample(13, 1, 0.3f));
  t_map->insert(ML::MakeTimeSample(14, 1, 0.0f));
  t_map->insert(ML::MakeTimeSample(15, 1, 0.7f));
  t_map->insert(ML::MakeTimeSample(16, 1, 0.0f));
  t_map->insert(ML::MakeTimeSample(17, 1, 0.8f));
  t_map->insert(ML::MakeTimeSample(18, 1, 0.0f));
  t_map->insert(ML::MakeTimeSample(19, 1, 0.2f));
  t_map->insert(ML::MakeTimeSample(20, 1, 0.1f));
  t_map->insert(ML::MakeTimeSample(21, 1, 0.0f));
  // t_map->insert(ML::MakeTimeSample(98, 1, 0.0f));
  // t_map->insert(ML::MakeTimeSample(99, 1, 0.0f));
}

void DataSet3(ML::TimeSeriesMap* t_map) {
  t_map->insert(ML::MakeTimeSample(0, 3, 0, 0, 0));
  t_map->insert(ML::MakeTimeSample(1, 3, 0, 0, 0));
  t_map->insert(ML::MakeTimeSample(2, 3, 0.00105661, 0.00573602, -0.000816928));
  t_map->insert(ML::MakeTimeSample(3, 3, 0.00211321, 0.011472, -0.00163386));
  t_map->insert(ML::MakeTimeSample(4, 3, 0.00316982, 0.0172081, -0.00245078));
  t_map->insert(ML::MakeTimeSample(5, 3, 0.00422643, 0.0229441, -0.00326771));
  t_map->insert(ML::MakeTimeSample(6, 3, 0.00528304, 0.0286801, -0.00408464));
  t_map->insert(ML::MakeTimeSample(7, 3, 0.00633964, 0.0344161, -0.00490157));
  t_map->insert(ML::MakeTimeSample(8, 3, 0.00739625, 0.0401521, -0.0057185));
  t_map->insert(ML::MakeTimeSample(9, 3, 0.00845286, 0.0458881, -0.00653542));
  t_map->insert(ML::MakeTimeSample(10, 3, 0.00950946, 0.0516242, -0.00735235));
  t_map->insert(ML::MakeTimeSample(11, 3, 0.0105661, 0.0573602, -0.00816928));
  t_map->insert(ML::MakeTimeSample(12, 3, 0.0116227, 0.0630962, -0.00898621));
  t_map->insert(ML::MakeTimeSample(13, 3, 0.0126793, 0.0688322, -0.00980314));
  t_map->insert(ML::MakeTimeSample(14, 3, 0.0137359, 0.0745682, -0.0106201));
  t_map->insert(ML::MakeTimeSample(15, 3, 0.0147925, 0.0803043, -0.011437));
  t_map->insert(ML::MakeTimeSample(16, 3, 0.0158491, 0.0860403, -0.0122539));
  t_map->insert(ML::MakeTimeSample(17, 3, 0.0169057, 0.0917763, -0.0130708));
  t_map->insert(ML::MakeTimeSample(18, 3, 0.0179623, 0.0975123, -0.0138878));
  t_map->insert(ML::MakeTimeSample(19, 3, 0.0190189, 0.103248, -0.0147047));
  t_map->insert(ML::MakeTimeSample(20, 3, 0.0200755, 0.108984, -0.0155216));
  t_map->insert(ML::MakeTimeSample(21, 3, 0.0211321, 0.11472, -0.0163386));
  t_map->insert(ML::MakeTimeSample(22, 3, 0.0221888, 0.120456, -0.0171555));
  t_map->insert(ML::MakeTimeSample(23, 3, 0.0232454, 0.126192, -0.0179724));
  t_map->insert(ML::MakeTimeSample(24, 3, 0.024302, 0.131928, -0.0187893));
  t_map->insert(ML::MakeTimeSample(25, 3, 0.0253586, 0.137664, -0.0196063));
  t_map->insert(ML::MakeTimeSample(26, 3, 0.0264152, 0.1434, -0.0204232));
  t_map->insert(ML::MakeTimeSample(27, 3, 0.0274718, 0.149136, -0.0212401));
  t_map->insert(ML::MakeTimeSample(28, 3, 0.0285284, 0.154872, -0.0220571));
  t_map->insert(ML::MakeTimeSample(29, 3, 0.029585, 0.160608, -0.022874));
  t_map->insert(ML::MakeTimeSample(30, 3, 0.0306416, 0.166345, -0.0236909));
  t_map->insert(ML::MakeTimeSample(31, 3, 0.0316982, 0.172081, -0.0245078));
  t_map->insert(ML::MakeTimeSample(32, 3, 0.0327548, 0.177817, -0.0253248));
  t_map->insert(ML::MakeTimeSample(33, 3, 0.0338114, 0.183553, -0.0261417));
  t_map->insert(ML::MakeTimeSample(34, 3, 0.034868, 0.189289, -0.0269586));
  t_map->insert(ML::MakeTimeSample(35, 3, 0.0359246, 0.195025, -0.0277756));
  t_map->insert(ML::MakeTimeSample(36, 3, 0.0369813, 0.200761, -0.0285925));
  t_map->insert(ML::MakeTimeSample(37, 3, 0.0380379, 0.206497, -0.0294094));
  t_map->insert(ML::MakeTimeSample(38, 3, 0.0390945, 0.212233, -0.0302263));
  t_map->insert(ML::MakeTimeSample(39, 3, 0.0401511, 0.217969, -0.0310433));
  t_map->insert(ML::MakeTimeSample(40, 3, 0.0412077, 0.223705, -0.0318602));
  t_map->insert(ML::MakeTimeSample(41, 3, 0.0422643, 0.229441, -0.0326771));
  t_map->insert(ML::MakeTimeSample(42, 3, 0.0433209, 0.235177, -0.0334941));
  t_map->insert(ML::MakeTimeSample(43, 3, 0.0443775, 0.240913, -0.034311));
  t_map->insert(ML::MakeTimeSample(44, 3, 0.0454341, 0.246649, -0.0351279));
  t_map->insert(ML::MakeTimeSample(45, 3, 0.0464907, 0.252385, -0.0359448));
  t_map->insert(ML::MakeTimeSample(46, 3, 0.0475473, 0.258121, -0.0367618));
  t_map->insert(ML::MakeTimeSample(47, 3, 0.0486039, 0.263857, -0.0375787));
  t_map->insert(ML::MakeTimeSample(48, 3, 0.0496605, 0.269593, -0.0383956));
  t_map->insert(ML::MakeTimeSample(49, 3, 0.0507171, 0.275329, -0.0392125));
  t_map->insert(ML::MakeTimeSample(50, 3, 0.0517737, 0.281065, -0.0400295));
  t_map->insert(ML::MakeTimeSample(51, 3, 0.0528304, 0.286801, -0.0408464));
  t_map->insert(ML::MakeTimeSample(52, 3, 0.053887, 0.292537, -0.0416633));
  t_map->insert(ML::MakeTimeSample(53, 3, 0.0549436, 0.298273, -0.0424803));
  t_map->insert(ML::MakeTimeSample(54, 3, 0.0560002, 0.304009, -0.0432972));
  t_map->insert(ML::MakeTimeSample(55, 3, 0.0570568, 0.309745, -0.0441141));
  t_map->insert(ML::MakeTimeSample(56, 3, 0.0581134, 0.315481, -0.044931));
  t_map->insert(ML::MakeTimeSample(57, 3, 0.05917, 0.321217, -0.045748));
  t_map->insert(ML::MakeTimeSample(58, 3, 0.0602266, 0.326953, -0.0465649));
  t_map->insert(ML::MakeTimeSample(59, 3, 0.0612832, 0.332689, -0.0473818));
  t_map->insert(ML::MakeTimeSample(60, 3, 0.0623398, 0.338425, -0.0481987));
  t_map->insert(ML::MakeTimeSample(61, 3, 0.0633964, 0.344161, -0.0490157));
  t_map->insert(ML::MakeTimeSample(62, 3, 0.0366773, 0.385925, -0.0560912));
  t_map->insert(ML::MakeTimeSample(63, 3, 0.0120733, 0.424634, -0.0608304));
  t_map->insert(ML::MakeTimeSample(64, 3, -0.0097957, 0.458297, -0.0635012));
  t_map->insert(ML::MakeTimeSample(65, 3, -0.0292913, 0.488201, -0.0641929));
  t_map->insert(ML::MakeTimeSample(66, 3, -0.0471049, 0.514844, -0.0634709));
  t_map->insert(ML::MakeTimeSample(67, 3, -0.0634871, 0.539225, -0.0622526));
  t_map->insert(ML::MakeTimeSample(68, 3, -0.0778417, 0.562098, -0.0612432));
  t_map->insert(ML::MakeTimeSample(69, 3, -0.0909455, 0.584358, -0.0603977));
  t_map->insert(ML::MakeTimeSample(70, 3, -0.102535, 0.60677, -0.0600985));
  t_map->insert(ML::MakeTimeSample(71, 3, -0.112479, 0.62969, -0.060496));
  t_map->insert(ML::MakeTimeSample(72, 3, -0.121143, 0.653316, -0.0615377));
  t_map->insert(ML::MakeTimeSample(73, 3, -0.128821, 0.677398, -0.0640899));
  t_map->insert(ML::MakeTimeSample(74, 3, -0.135673, 0.703159, -0.0683858));
  t_map->insert(ML::MakeTimeSample(75, 3, -0.14199, 0.73859, -0.0760915));
  t_map->insert(ML::MakeTimeSample(76, 3, -0.147423, 0.777769, -0.0849664));
  t_map->insert(ML::MakeTimeSample(77, 3, -0.150037, 0.819884, -0.0939017));
  t_map->insert(ML::MakeTimeSample(78, 3, -0.149959, 0.864308, -0.104512));
  t_map->insert(ML::MakeTimeSample(79, 3, -0.14778, 0.910103, -0.118158));
  t_map->insert(ML::MakeTimeSample(80, 3, -0.142361, 0.955739, -0.137786));
  t_map->insert(ML::MakeTimeSample(81, 3, -0.131218, 0.999063, -0.16973));
  t_map->insert(ML::MakeTimeSample(82, 3, -0.119019, 1.03855, -0.209982));
  t_map->insert(ML::MakeTimeSample(83, 3, -0.110653, 1.07403, -0.251569));
  t_map->insert(ML::MakeTimeSample(84, 3, -0.105177, 1.10421, -0.295037));
  t_map->insert(ML::MakeTimeSample(85, 3, -0.097827, 1.12836, -0.344321));
  t_map->insert(ML::MakeTimeSample(86, 3, -0.0902362, 1.14413, -0.399529));
  t_map->insert(ML::MakeTimeSample(87, 3, -0.0852941, 1.14961, -0.458165));
  t_map->insert(ML::MakeTimeSample(88, 3, -0.085444, 1.14543, -0.517042));
  t_map->insert(ML::MakeTimeSample(89, 3, -0.0924328, 1.13322, -0.572244));
  t_map->insert(ML::MakeTimeSample(90, 3, -0.107664, 1.11116, -0.622162));
  t_map->insert(ML::MakeTimeSample(91, 3, -0.131464, 1.08386, -0.665295));
  t_map->insert(ML::MakeTimeSample(92, 3, -0.162523, 1.05553, -0.704421));
  t_map->insert(ML::MakeTimeSample(93, 3, -0.202073, 1.02905, -0.741917));
  t_map->insert(ML::MakeTimeSample(94, 3, -0.250731, 0.997404, -0.779662));
  t_map->insert(ML::MakeTimeSample(95, 3, -0.302923, 0.959572, -0.817974));
  t_map->insert(ML::MakeTimeSample(96, 3, -0.355935, 0.92188, -0.852464));
  t_map->insert(ML::MakeTimeSample(97, 3, -0.410116, 0.887478, -0.880923));
  t_map->insert(ML::MakeTimeSample(98, 3, -0.465383, 0.851118, -0.90638));
  t_map->insert(ML::MakeTimeSample(99, 3, -0.519568, 0.812055, -0.928966));
  t_map->insert(ML::MakeTimeSample(100, 3, -0.576661, 0.770706, -0.949071));
  t_map->insert(ML::MakeTimeSample(101, 3, -0.633719, 0.730709, -0.963875));
  t_map->insert(ML::MakeTimeSample(102, 3, -0.686865, 0.694601, -0.973195));
  t_map->insert(ML::MakeTimeSample(103, 3, -0.741166, 0.667789, -0.978745));
  t_map->insert(ML::MakeTimeSample(104, 3, -0.793558, 0.64542, -0.984849));
  t_map->insert(ML::MakeTimeSample(105, 3, -0.837259, 0.614669, -0.997072));
  t_map->insert(ML::MakeTimeSample(106, 3, -0.873087, 0.579084, -1.01699));
  t_map->insert(ML::MakeTimeSample(107, 3, -0.901084, 0.541425, -1.04699));
  t_map->insert(ML::MakeTimeSample(108, 3, -0.930649, 0.501465, -1.07922));
  t_map->insert(ML::MakeTimeSample(109, 3, -0.965036, 0.468, -1.11087));
  t_map->insert(ML::MakeTimeSample(110, 3, -1.00023, 0.436888, -1.1421));
  t_map->insert(ML::MakeTimeSample(111, 3, -1.03441, 0.408579, -1.17178));
  t_map->insert(ML::MakeTimeSample(112, 3, -1.06625, 0.383024, -1.19939));
  t_map->insert(ML::MakeTimeSample(113, 3, -1.09651, 0.357157, -1.22877));
  t_map->insert(ML::MakeTimeSample(114, 3, -1.12474, 0.329323, -1.26055));
  t_map->insert(ML::MakeTimeSample(115, 3, -1.15021, 0.298959, -1.29461));
  t_map->insert(ML::MakeTimeSample(116, 3, -1.17221, 0.266011, -1.33167));
  t_map->insert(ML::MakeTimeSample(117, 3, -1.19013, 0.229648, -1.37181));
  t_map->insert(ML::MakeTimeSample(118, 3, -1.20316, 0.191911, -1.416));
  t_map->insert(ML::MakeTimeSample(119, 3, -1.20957, 0.152518, -1.46475));
  t_map->insert(ML::MakeTimeSample(120, 3, -1.20764, 0.109545, -1.51844));
  t_map->insert(ML::MakeTimeSample(121, 3, -1.1973, 0.0614206, -1.57516));
  t_map->insert(ML::MakeTimeSample(122, 3, -1.17923, 0.00538449, -1.63196));
  t_map->insert(ML::MakeTimeSample(123, 3, -1.1552, -0.0614122, -1.68489));
  t_map->insert(ML::MakeTimeSample(124, 3, -1.12643, -0.133948, -1.73367));
  t_map->insert(ML::MakeTimeSample(125, 3, -1.09398, -0.207897, -1.77863));
  t_map->insert(ML::MakeTimeSample(126, 3, -1.05959, -0.281249, -1.81909));
  t_map->insert(ML::MakeTimeSample(127, 3, -1.02507, -0.353024, -1.85426));
  t_map->insert(ML::MakeTimeSample(128, 3, -0.989323, -0.428637, -1.8832));
  t_map->insert(ML::MakeTimeSample(129, 3, -0.951353, -0.509812, -1.90679));
  t_map->insert(ML::MakeTimeSample(130, 3, -0.921218, -0.600587, -1.91469));
  t_map->insert(ML::MakeTimeSample(131, 3, -0.893946, -0.693193, -1.91469));
  t_map->insert(ML::MakeTimeSample(132, 3, -0.867918, -0.783398, -1.91075));
  t_map->insert(ML::MakeTimeSample(133, 3, -0.845857, -0.871789, -1.90242));
  t_map->insert(ML::MakeTimeSample(134, 3, -0.829712, -0.957745, -1.88922));
  t_map->insert(ML::MakeTimeSample(135, 3, -0.818934, -1.04207, -1.87036));
  t_map->insert(ML::MakeTimeSample(136, 3, -0.811536, -1.12515, -1.84629));
  t_map->insert(ML::MakeTimeSample(137, 3, -0.803802, -1.20993, -1.81643));
  t_map->insert(ML::MakeTimeSample(138, 3, -0.792811, -1.29887, -1.77915));
  t_map->insert(ML::MakeTimeSample(139, 3, -0.774697, -1.39143, -1.73446));
  t_map->insert(ML::MakeTimeSample(140, 3, -0.749088, -1.48473, -1.6821));
  t_map->insert(ML::MakeTimeSample(141, 3, -0.714611, -1.57506, -1.62426));
  t_map->insert(ML::MakeTimeSample(142, 3, -0.671748, -1.66144, -1.56025));
  t_map->insert(ML::MakeTimeSample(143, 3, -0.617086, -1.74148, -1.49221));
  t_map->insert(ML::MakeTimeSample(144, 3, -0.552153, -1.80966, -1.42647));
  t_map->insert(ML::MakeTimeSample(145, 3, -0.478969, -1.87268, -1.35607));
  t_map->insert(ML::MakeTimeSample(146, 3, -0.400941, -1.93318, -1.27461));
  t_map->insert(ML::MakeTimeSample(147, 3, -0.31794, -1.98679, -1.18759));
  t_map->insert(ML::MakeTimeSample(148, 3, -0.235583, -2.02912, -1.10214));
  t_map->insert(ML::MakeTimeSample(149, 3, -0.151595, -2.06122, -1.01895));
  t_map->insert(ML::MakeTimeSample(150, 3, -0.0712978, -2.08456, -0.937842));
  t_map->insert(ML::MakeTimeSample(151, 3, 0.00304343, -2.09884, -0.863138));
  t_map->insert(ML::MakeTimeSample(152, 3, 0.0692072, -2.10524, -0.797635));
  t_map->insert(ML::MakeTimeSample(153, 3, 0.13127, -2.10181, -0.747015));
  t_map->insert(ML::MakeTimeSample(154, 3, 0.185018, -2.09337, -0.704718));
  t_map->insert(ML::MakeTimeSample(155, 3, 0.230394, -2.08225, -0.666614));
  t_map->insert(ML::MakeTimeSample(156, 3, 0.266327, -2.07092, -0.628667));
  t_map->insert(ML::MakeTimeSample(157, 3, 0.29411, -2.05998, -0.589396));
  t_map->insert(ML::MakeTimeSample(158, 3, 0.318459, -2.04775, -0.55288));
  t_map->insert(ML::MakeTimeSample(159, 3, 0.342058, -2.03399, -0.517271));
  t_map->insert(ML::MakeTimeSample(160, 3, 0.363822, -2.02021, -0.480675));
}
