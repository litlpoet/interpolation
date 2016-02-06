// Copyright 2015 Byungkuk

#include <QtWidgets/QApplication>
#include <algorithm>
#include <iostream>
#include <vector>

#include "src/plotcontrolinterpolation.h"
#include "src/plotmodelinterpolation.h"

int const gap{1};

void DataSet1(ML::TimeSeriesMap* t_map);
void DataSet2(ML::TimeSeriesMap* t_map);
void DataSet3(ML::TimeSeriesMap* t_map);

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);

  ML::TimeSeriesMap t_map;
  DataSet1(&t_map);

  int D = 100;
  // int D = t_map.size() * gap;

  std::cout << "Make model and initialize with data" << std::endl;
  PlotModelInterface* model = new PlotModelInterpolation();
  model->initializeModel(D, t_map);
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
  t_map->insert(ML::MakeTimeSample(0, 3, 0, 0, 0));
  t_map->insert(ML::MakeTimeSample(1, 3, 0, 0, 0));
  t_map->insert(
      ML::MakeTimeSample(2, 3, 0.000450728, -7.84477e-05, -8.73272e-05));
  t_map->insert(
      ML::MakeTimeSample(3, 3, 0.000901457, -0.000156895, -0.000174654));
  t_map->insert(
      ML::MakeTimeSample(4, 3, 0.00135219, -0.000235343, -0.000261982));
  t_map->insert(
      ML::MakeTimeSample(5, 3, 0.00180291, -0.000313791, -0.000349309));
  t_map->insert(
      ML::MakeTimeSample(6, 3, 0.00225364, -0.000392239, -0.000436636));
  t_map->insert(
      ML::MakeTimeSample(7, 3, 0.00270437, -0.000470686, -0.000523963));
  t_map->insert(
      ML::MakeTimeSample(8, 3, 0.0031551, -0.000549134, -0.000611291));
  t_map->insert(
      ML::MakeTimeSample(9, 3, 0.00360583, -0.000627582, -0.000698618));
  t_map->insert(
      ML::MakeTimeSample(10, 3, 0.00405656, -0.000706029, -0.000785945));
  t_map->insert(
      ML::MakeTimeSample(11, 3, 0.00450728, -0.000784477, -0.000873272));
  t_map->insert(
      ML::MakeTimeSample(12, 3, 0.00495801, -0.000862925, -0.000960599));
  t_map->insert(
      ML::MakeTimeSample(13, 3, 0.00540874, -0.000941373, -0.00104793));
  t_map->insert(
      ML::MakeTimeSample(14, 3, 0.00585947, -0.00101982, -0.00113525));
  t_map->insert(ML::MakeTimeSample(15, 3, 0.0063102, -0.00109827, -0.00122258));
  t_map->insert(
      ML::MakeTimeSample(16, 3, 0.00676093, -0.00117672, -0.00130991));
  t_map->insert(
      ML::MakeTimeSample(17, 3, 0.00721165, -0.00125516, -0.00139724));
  t_map->insert(
      ML::MakeTimeSample(18, 3, 0.00766238, -0.00133361, -0.00148456));
  t_map->insert(
      ML::MakeTimeSample(19, 3, 0.00811311, -0.00141206, -0.00157189));
  t_map->insert(
      ML::MakeTimeSample(20, 3, 0.00856384, -0.00149051, -0.00165922));
  t_map->insert(
      ML::MakeTimeSample(21, 3, 0.00901457, -0.00156895, -0.00174654));
  t_map->insert(ML::MakeTimeSample(22, 3, 0.0094653, -0.0016474, -0.00183387));
  t_map->insert(ML::MakeTimeSample(23, 3, 0.00991603, -0.00172585, -0.0019212));
  t_map->insert(ML::MakeTimeSample(24, 3, 0.0103668, -0.0018043, -0.00200853));
  t_map->insert(ML::MakeTimeSample(25, 3, 0.0108175, -0.00188274, -0.00209585));
  t_map->insert(ML::MakeTimeSample(26, 3, 0.0112682, -0.00196119, -0.00218318));
  t_map->insert(ML::MakeTimeSample(27, 3, 0.0117189, -0.00203964, -0.00227051));
  t_map->insert(ML::MakeTimeSample(28, 3, 0.0121697, -0.00211809, -0.00235783));
  t_map->insert(ML::MakeTimeSample(29, 3, 0.0126204, -0.00219654, -0.00244516));
  t_map->insert(ML::MakeTimeSample(30, 3, 0.0130711, -0.00227498, -0.00253249));
  t_map->insert(ML::MakeTimeSample(31, 3, 0.0135219, -0.00235343, -0.00261982));
  t_map->insert(ML::MakeTimeSample(32, 3, 0.0139726, -0.00243188, -0.00270714));
  t_map->insert(ML::MakeTimeSample(33, 3, 0.0144233, -0.00251033, -0.00279447));
  t_map->insert(ML::MakeTimeSample(34, 3, 0.014874, -0.00258877, -0.0028818));
  t_map->insert(ML::MakeTimeSample(35, 3, 0.0153248, -0.00266722, -0.00296913));
  t_map->insert(ML::MakeTimeSample(36, 3, 0.0157755, -0.00274567, -0.00305645));
  t_map->insert(ML::MakeTimeSample(37, 3, 0.0162262, -0.00282412, -0.00314378));
  t_map->insert(ML::MakeTimeSample(38, 3, 0.016677, -0.00290257, -0.00323111));
  t_map->insert(ML::MakeTimeSample(39, 3, 0.0171277, -0.00298101, -0.00331843));
  t_map->insert(ML::MakeTimeSample(40, 3, 0.0175784, -0.00305946, -0.00340576));
  t_map->insert(ML::MakeTimeSample(41, 3, 0.0180291, -0.00313791, -0.00349309));
  t_map->insert(ML::MakeTimeSample(42, 3, 0.0184799, -0.00321636, -0.00358042));
  t_map->insert(ML::MakeTimeSample(43, 3, 0.0189306, -0.0032948, -0.00366774));
  t_map->insert(ML::MakeTimeSample(44, 3, 0.0193813, -0.00337325, -0.00375507));
  t_map->insert(ML::MakeTimeSample(45, 3, 0.019832, -0.0034517, -0.0038424));
  t_map->insert(ML::MakeTimeSample(46, 3, 0.0202828, -0.00353015, -0.00392972));
  t_map->insert(ML::MakeTimeSample(47, 3, 0.0207335, -0.00360859, -0.00401705));
  t_map->insert(ML::MakeTimeSample(48, 3, 0.0211842, -0.00368704, -0.00410438));
  t_map->insert(ML::MakeTimeSample(49, 3, 0.021635, -0.00376549, -0.00419171));
  t_map->insert(ML::MakeTimeSample(50, 3, 0.0220857, -0.00384394, -0.00427903));
  t_map->insert(ML::MakeTimeSample(51, 3, 0.0225364, -0.00392239, -0.00436636));
  t_map->insert(ML::MakeTimeSample(52, 3, 0.0229872, -0.00400083, -0.00445369));
  t_map->insert(ML::MakeTimeSample(53, 3, 0.0234379, -0.00407928, -0.00454102));
  t_map->insert(ML::MakeTimeSample(54, 3, 0.0238886, -0.00415773, -0.00462834));
  t_map->insert(ML::MakeTimeSample(55, 3, 0.0243393, -0.00423618, -0.00471567));
  t_map->insert(ML::MakeTimeSample(56, 3, 0.0247901, -0.00431462, -0.004803));
  t_map->insert(ML::MakeTimeSample(57, 3, 0.0252408, -0.00439307, -0.00489032));
  t_map->insert(ML::MakeTimeSample(58, 3, 0.0256915, -0.00447152, -0.00497765));
  t_map->insert(ML::MakeTimeSample(59, 3, 0.0261422, -0.00454997, -0.00506498));
  t_map->insert(ML::MakeTimeSample(60, 3, 0.026593, -0.00462841, -0.00515231));
  t_map->insert(ML::MakeTimeSample(61, 3, 0.0270437, -0.00470686, -0.00523963));
  t_map->insert(ML::MakeTimeSample(62, 3, 0.0811312, -0.0141206, -0.0157189));
  t_map->insert(ML::MakeTimeSample(63, 3, 0.135219, -0.0235344, -0.0261981));
  t_map->insert(ML::MakeTimeSample(64, 3, 0.135299, -0.0234435, -0.0261632));
  t_map->insert(ML::MakeTimeSample(65, 3, 0.13538, -0.0233526, -0.0261283));
  t_map->insert(ML::MakeTimeSample(66, 3, 0.135454, -0.0232539, -0.0261039));
  t_map->insert(ML::MakeTimeSample(67, 3, 0.13552, -0.0231473, -0.02609));
  t_map->insert(ML::MakeTimeSample(68, 3, 0.135586, -0.0230408, -0.0260762));
  t_map->insert(ML::MakeTimeSample(69, 3, 0.13567, -0.0229274, -0.026073));
  t_map->insert(ML::MakeTimeSample(70, 3, 0.135754, -0.022814, -0.0260699));
  t_map->insert(ML::MakeTimeSample(71, 3, 0.135841, -0.0227097, -0.0260636));
  t_map->insert(ML::MakeTimeSample(72, 3, 0.13593, -0.0226146, -0.0260543));
  t_map->insert(ML::MakeTimeSample(73, 3, 0.136018, -0.0225196, -0.026045));
  t_map->insert(ML::MakeTimeSample(74, 3, 0.136148, -0.0224013, -0.0260425));
  t_map->insert(ML::MakeTimeSample(75, 3, 0.136277, -0.022283, -0.0260401));
  t_map->insert(ML::MakeTimeSample(76, 3, 0.136466, -0.0221288, -0.0260483));
  t_map->insert(ML::MakeTimeSample(77, 3, 0.136713, -0.0219386, -0.0260669));
  t_map->insert(ML::MakeTimeSample(78, 3, 0.13696, -0.0217485, -0.0260855));
  t_map->insert(ML::MakeTimeSample(79, 3, 0.137967, -0.0216425, -0.0261384));
  t_map->insert(ML::MakeTimeSample(80, 3, 0.138973, -0.0215366, -0.0261912));
  t_map->insert(ML::MakeTimeSample(81, 3, 0.139546, -0.0215546, -0.0262198));
  t_map->insert(ML::MakeTimeSample(82, 3, 0.139686, -0.0216969, -0.0262242));
  t_map->insert(ML::MakeTimeSample(83, 3, 0.139826, -0.0218392, -0.0262287));
  t_map->insert(ML::MakeTimeSample(84, 3, 0.140089, -0.0219371, -0.0262558));
  t_map->insert(ML::MakeTimeSample(85, 3, 0.140351, -0.022035, -0.0262829));
  t_map->insert(ML::MakeTimeSample(86, 3, 0.140558, -0.0220929, -0.0263029));
  t_map->insert(ML::MakeTimeSample(87, 3, 0.14071, -0.022111, -0.0263157));
  t_map->insert(ML::MakeTimeSample(88, 3, 0.140863, -0.022129, -0.0263286));
  t_map->insert(ML::MakeTimeSample(89, 3, 0.14127, -0.0217057, -0.0264405));
  t_map->insert(ML::MakeTimeSample(90, 3, 0.141677, -0.0212824, -0.0265525));
  t_map->insert(ML::MakeTimeSample(91, 3, 0.141958, -0.0209177, -0.0266));
  t_map->insert(ML::MakeTimeSample(92, 3, 0.142114, -0.0206115, -0.0265829));
  t_map->insert(ML::MakeTimeSample(93, 3, 0.14227, -0.0203052, -0.026566));
  t_map->insert(ML::MakeTimeSample(94, 3, 0.142409, -0.020176, -0.0265436));
  t_map->insert(ML::MakeTimeSample(95, 3, 0.142547, -0.0200467, -0.0265213));
  t_map->insert(ML::MakeTimeSample(96, 3, 0.142672, -0.0200201, -0.0265115));
  t_map->insert(ML::MakeTimeSample(97, 3, 0.142782, -0.0200962, -0.0265144));
  t_map->insert(ML::MakeTimeSample(98, 3, 0.142893, -0.0201723, -0.0265173));
  t_map->insert(ML::MakeTimeSample(99, 3, 0.142986, -0.0203468, -0.0265093));
  t_map->insert(ML::MakeTimeSample(100, 3, 0.14308, -0.0205213, -0.0265015));
  t_map->insert(ML::MakeTimeSample(101, 3, 0.143149, -0.0207531, -0.0264925));
  t_map->insert(ML::MakeTimeSample(102, 3, 0.143193, -0.0210421, -0.0264827));
  t_map->insert(ML::MakeTimeSample(103, 3, 0.143237, -0.0213311, -0.0264728));
  t_map->insert(ML::MakeTimeSample(104, 3, 0.14316, -0.0214693, -0.0264378));
  t_map->insert(ML::MakeTimeSample(105, 3, 0.143083, -0.0216075, -0.0264028));
  t_map->insert(ML::MakeTimeSample(106, 3, 0.142923, -0.021698, -0.0263549));
  t_map->insert(ML::MakeTimeSample(107, 3, 0.142678, -0.0217408, -0.026294));
  t_map->insert(ML::MakeTimeSample(108, 3, 0.142434, -0.0217837, -0.0262332));
  t_map->insert(ML::MakeTimeSample(109, 3, 0.142202, -0.0218791, -0.0261894));
  t_map->insert(ML::MakeTimeSample(110, 3, 0.14197, -0.0219744, -0.0261455));
  t_map->insert(ML::MakeTimeSample(111, 3, 0.141741, -0.0221211, -0.0260967));
  t_map->insert(ML::MakeTimeSample(112, 3, 0.141518, -0.0223191, -0.0260426));
  t_map->insert(ML::MakeTimeSample(113, 3, 0.141294, -0.022517, -0.0259885));
  t_map->insert(ML::MakeTimeSample(114, 3, 0.141013, -0.0229093, -0.0258685));
  t_map->insert(ML::MakeTimeSample(115, 3, 0.140731, -0.0233015, -0.0257484));
  t_map->insert(ML::MakeTimeSample(116, 3, 0.140439, -0.0235482, -0.0256318));
  t_map->insert(ML::MakeTimeSample(117, 3, 0.140136, -0.0236493, -0.0255188));
  t_map->insert(ML::MakeTimeSample(118, 3, 0.139833, -0.0237504, -0.0254057));
  t_map->insert(ML::MakeTimeSample(119, 3, 0.139363, -0.0226656, -0.0252729));
  t_map->insert(ML::MakeTimeSample(120, 3, 0.138892, -0.0215808, -0.02514));
  t_map->insert(ML::MakeTimeSample(121, 3, 0.138322, -0.020275, -0.0250269));
  t_map->insert(ML::MakeTimeSample(122, 3, 0.137653, -0.0187484, -0.0249333));
  t_map->insert(ML::MakeTimeSample(123, 3, 0.136985, -0.0172218, -0.0248397));
  t_map->insert(ML::MakeTimeSample(124, 3, 0.136223, -0.0154936, -0.0249132));
  t_map->insert(ML::MakeTimeSample(125, 3, 0.135461, -0.0137655, -0.0249867));
  t_map->insert(ML::MakeTimeSample(126, 3, 0.13456, -0.0119618, -0.0250981));
  t_map->insert(ML::MakeTimeSample(127, 3, 0.13352, -0.0100826, -0.0252474));
  t_map->insert(ML::MakeTimeSample(128, 3, 0.13248, -0.00820351, -0.0253966));
  t_map->insert(ML::MakeTimeSample(129, 3, 0.131657, -0.00665437, -0.0256984));
  t_map->insert(ML::MakeTimeSample(130, 3, 0.130833, -0.00510529, -0.0260002));
  t_map->insert(ML::MakeTimeSample(131, 3, 0.130016, -0.00327009, -0.0261989));
  t_map->insert(ML::MakeTimeSample(132, 3, 0.129206, -0.0011489, -0.0262947));
  t_map->insert(ML::MakeTimeSample(133, 3, 0.128395, 0.000972182, -0.0263902));
  t_map->insert(ML::MakeTimeSample(134, 3, 0.127655, 0.00593124, -0.026224));
  t_map->insert(ML::MakeTimeSample(135, 3, 0.126912, 0.01089, -0.0260571));
  t_map->insert(ML::MakeTimeSample(136, 3, 0.126419, 0.0184123, -0.026085));
  t_map->insert(ML::MakeTimeSample(137, 3, 0.12617, 0.0284983, -0.0263064));
  t_map->insert(ML::MakeTimeSample(138, 3, 0.125912, 0.0385839, -0.0265261));
  t_map->insert(ML::MakeTimeSample(139, 3, 0.127127, 0.0554592, -0.0274871));
  t_map->insert(ML::MakeTimeSample(140, 3, 0.128319, 0.0723365, -0.0284436));
  t_map->insert(ML::MakeTimeSample(141, 3, 0.131585, 0.0909331, -0.0291825));
  t_map->insert(ML::MakeTimeSample(142, 3, 0.136922, 0.111253, -0.0297014));
  t_map->insert(ML::MakeTimeSample(143, 3, 0.142229, 0.131582, -0.0302126));
  t_map->insert(ML::MakeTimeSample(144, 3, 0.148609, 0.152598, -0.0311776));
  t_map->insert(ML::MakeTimeSample(145, 3, 0.154959, 0.173623, -0.0321352));
  t_map->insert(ML::MakeTimeSample(146, 3, 0.160201, 0.194133, -0.0327089));
  t_map->insert(ML::MakeTimeSample(147, 3, 0.164335, 0.214127, -0.032898));
  t_map->insert(ML::MakeTimeSample(148, 3, 0.168436, 0.234128, -0.0330785));
  t_map->insert(ML::MakeTimeSample(149, 3, 0.171487, 0.251648, -0.0312533));
  t_map->insert(ML::MakeTimeSample(150, 3, 0.174512, 0.269171, -0.0294156));
  t_map->insert(ML::MakeTimeSample(151, 3, 0.17715, 0.283929, -0.0284325));
  t_map->insert(ML::MakeTimeSample(152, 3, 0.179412, 0.295922, -0.0283111));
  t_map->insert(ML::MakeTimeSample(153, 3, 0.181662, 0.307917, -0.0281866));
  t_map->insert(ML::MakeTimeSample(154, 3, 0.183335, 0.316604, -0.0301341));
  t_map->insert(ML::MakeTimeSample(155, 3, 0.185, 0.325293, -0.0320839));
  t_map->insert(ML::MakeTimeSample(156, 3, 0.185311, 0.333574, -0.0343265));
  t_map->insert(ML::MakeTimeSample(157, 3, 0.184264, 0.341444, -0.0368618));
  t_map->insert(ML::MakeTimeSample(158, 3, 0.183206, 0.349313, -0.0393998));
  t_map->insert(ML::MakeTimeSample(159, 3, 0.1802, 0.360146, -0.0438825));
  t_map->insert(ML::MakeTimeSample(160, 3, 0.177169, 0.370971, -0.0483717));
  t_map->insert(ML::MakeTimeSample(161, 3, 0.173731, 0.382885, -0.0519625));
  t_map->insert(ML::MakeTimeSample(162, 3, 0.169879, 0.395891, -0.0546511));
  t_map->insert(ML::MakeTimeSample(163, 3, 0.165994, 0.408886, -0.0573413));
  t_map->insert(ML::MakeTimeSample(164, 3, 0.160264, 0.425797, -0.0600162));
  t_map->insert(ML::MakeTimeSample(165, 3, 0.154475, 0.44269, -0.0626898));
  t_map->insert(ML::MakeTimeSample(166, 3, 0.149466, 0.459483, -0.0653593));
  t_map->insert(ML::MakeTimeSample(167, 3, 0.145243, 0.476183, -0.0680256));
  t_map->insert(ML::MakeTimeSample(168, 3, 0.14097, 0.49287, -0.0706917));
  t_map->insert(ML::MakeTimeSample(169, 3, 0.138186, 0.50938, -0.073005));
  t_map->insert(ML::MakeTimeSample(170, 3, 0.13536, 0.525885, -0.0753173));
  t_map->insert(ML::MakeTimeSample(171, 3, 0.132802, 0.540479, -0.0775151));
  t_map->insert(ML::MakeTimeSample(172, 3, 0.130525, 0.553166, -0.0795998));
  t_map->insert(ML::MakeTimeSample(173, 3, 0.128222, 0.565848, -0.0816852));
  t_map->insert(ML::MakeTimeSample(174, 3, 0.127915, 0.574008, -0.081851));
  t_map->insert(ML::MakeTimeSample(175, 3, 0.127601, 0.582167, -0.0820136));
  t_map->insert(ML::MakeTimeSample(176, 3, 0.126677, 0.588228, -0.0822697));
  t_map->insert(ML::MakeTimeSample(177, 3, 0.125146, 0.592189, -0.0826215));
  t_map->insert(ML::MakeTimeSample(178, 3, 0.123611, 0.59615, -0.0829728));
  t_map->insert(ML::MakeTimeSample(179, 3, 0.119746, 0.600309, -0.0854584));
  t_map->insert(ML::MakeTimeSample(180, 3, 0.115873, 0.604459, -0.0879458));
  t_map->insert(ML::MakeTimeSample(181, 3, 0.112869, 0.605498, -0.0890001));
  t_map->insert(ML::MakeTimeSample(182, 3, 0.110744, 0.603432, -0.0886198));
  t_map->insert(ML::MakeTimeSample(183, 3, 0.10862, 0.601364, -0.0882393));
  t_map->insert(ML::MakeTimeSample(184, 3, 0.107821, 0.598312, -0.0895089));
  t_map->insert(ML::MakeTimeSample(185, 3, 0.107021, 0.595259, -0.0907762));
  t_map->insert(ML::MakeTimeSample(186, 3, 0.106172, 0.594509, -0.0923138));
  t_map->insert(ML::MakeTimeSample(187, 3, 0.105272, 0.596061, -0.0941241));
  t_map->insert(ML::MakeTimeSample(188, 3, 0.104371, 0.597611, -0.0959352));
  t_map->insert(ML::MakeTimeSample(189, 3, 0.10213, 0.597634, -0.0968765));
  t_map->insert(ML::MakeTimeSample(190, 3, 0.09989, 0.597656, -0.0978175));
  t_map->insert(ML::MakeTimeSample(191, 3, 0.0988425, 0.597746, -0.0985821));
  t_map->insert(ML::MakeTimeSample(192, 3, 0.098988, 0.597906, -0.0991707));
  t_map->insert(ML::MakeTimeSample(193, 3, 0.0991335, 0.598067, -0.0997594));
  t_map->insert(ML::MakeTimeSample(194, 3, 0.0997175, 0.596883, -0.100128));
  t_map->insert(ML::MakeTimeSample(195, 3, 0.100301, 0.595698, -0.100496));
  t_map->insert(ML::MakeTimeSample(196, 3, 0.101173, 0.594056, -0.100712));
  t_map->insert(ML::MakeTimeSample(197, 3, 0.102331, 0.591957, -0.100777));
  t_map->insert(ML::MakeTimeSample(198, 3, 0.103488, 0.589857, -0.100842));
  t_map->insert(ML::MakeTimeSample(199, 3, 0.104651, 0.587744, -0.10115));
  t_map->insert(ML::MakeTimeSample(200, 3, 0.105813, 0.58563, -0.101457));
  t_map->insert(ML::MakeTimeSample(201, 3, 0.106838, 0.583147, -0.101686));
  t_map->insert(ML::MakeTimeSample(202, 3, 0.107727, 0.580294, -0.101837));
  t_map->insert(ML::MakeTimeSample(203, 3, 0.108614, 0.577441, -0.101987));
  t_map->insert(ML::MakeTimeSample(204, 3, 0.109155, 0.573194, -0.102197));
  t_map->insert(ML::MakeTimeSample(205, 3, 0.109693, 0.568947, -0.102407));
  t_map->insert(ML::MakeTimeSample(206, 3, 0.110221, 0.564725, -0.102383));
  t_map->insert(ML::MakeTimeSample(207, 3, 0.110738, 0.560527, -0.102128));
  t_map->insert(ML::MakeTimeSample(208, 3, 0.111253, 0.556329, -0.101872));
  t_map->insert(ML::MakeTimeSample(209, 3, 0.111947, 0.551238, -0.101698));
  t_map->insert(ML::MakeTimeSample(210, 3, 0.112639, 0.546148, -0.101521));
  t_map->insert(ML::MakeTimeSample(211, 3, 0.113324, 0.538905, -0.101199));
  t_map->insert(ML::MakeTimeSample(212, 3, 0.114, 0.529511, -0.100727));
  t_map->insert(ML::MakeTimeSample(213, 3, 0.114666, 0.520116, -0.100251));
  t_map->insert(ML::MakeTimeSample(214, 3, 0.116575, 0.510091, -0.0983709));
  t_map->insert(ML::MakeTimeSample(215, 3, 0.118469, 0.500064, -0.09649));
  t_map->insert(ML::MakeTimeSample(216, 3, 0.120088, 0.491776, -0.095247));
  t_map->insert(ML::MakeTimeSample(217, 3, 0.12144, 0.485227, -0.094641));
  t_map->insert(ML::MakeTimeSample(218, 3, 0.122786, 0.478677, -0.0940333));
  t_map->insert(ML::MakeTimeSample(219, 3, 0.123673, 0.474115, -0.0942575));
  t_map->insert(ML::MakeTimeSample(220, 3, 0.124556, 0.469552, -0.0944799));
  t_map->insert(ML::MakeTimeSample(221, 3, 0.125637, 0.465844, -0.0944617));
  t_map->insert(ML::MakeTimeSample(222, 3, 0.126916, 0.46299, -0.0942037));
  t_map->insert(ML::MakeTimeSample(223, 3, 0.128192, 0.460135, -0.0939454));
  t_map->insert(ML::MakeTimeSample(224, 3, 0.128797, 0.458526, -0.0939611));
  t_map->insert(ML::MakeTimeSample(225, 3, 0.129401, 0.456918, -0.0939766));
  t_map->insert(ML::MakeTimeSample(226, 3, 0.129236, 0.456174, -0.0934112));
  t_map->insert(ML::MakeTimeSample(227, 3, 0.128303, 0.456295, -0.0922649));
  t_map->insert(ML::MakeTimeSample(228, 3, 0.127369, 0.456416, -0.0911185));
  t_map->insert(ML::MakeTimeSample(229, 3, 0.12674, 0.46065, -0.0859986));
  t_map->insert(ML::MakeTimeSample(230, 3, 0.126106, 0.464875, -0.0808712));
  t_map->insert(ML::MakeTimeSample(231, 3, 0.125838, 0.470348, -0.0772912));
  t_map->insert(ML::MakeTimeSample(232, 3, 0.125935, 0.477074, -0.0752592));
  t_map->insert(ML::MakeTimeSample(233, 3, 0.126028, 0.483799, -0.0732204));
  t_map->insert(ML::MakeTimeSample(234, 3, 0.124983, 0.48695, -0.0728881));
  t_map->insert(ML::MakeTimeSample(235, 3, 0.123936, 0.490101, -0.0725549));
  t_map->insert(ML::MakeTimeSample(236, 3, 0.122385, 0.492474, -0.0749845));
  t_map->insert(ML::MakeTimeSample(237, 3, 0.120328, 0.494061, -0.0801787));
  t_map->insert(ML::MakeTimeSample(238, 3, 0.118267, 0.495638, -0.0853746));
  t_map->insert(ML::MakeTimeSample(239, 3, 0.118313, 0.499751, -0.0886993));
  t_map->insert(ML::MakeTimeSample(240, 3, 0.118356, 0.503861, -0.0920277));
  t_map->insert(ML::MakeTimeSample(241, 3, 0.119354, 0.50737, -0.0949211));
  t_map->insert(ML::MakeTimeSample(242, 3, 0.121307, 0.510277, -0.0973785));
  t_map->insert(ML::MakeTimeSample(243, 3, 0.123262, 0.513182, -0.0998379));
  t_map->insert(ML::MakeTimeSample(244, 3, 0.126624, 0.516667, -0.101839));
  t_map->insert(ML::MakeTimeSample(245, 3, 0.12999, 0.520148, -0.103841));
  t_map->insert(ML::MakeTimeSample(246, 3, 0.134138, 0.522032, -0.105108));
  t_map->insert(ML::MakeTimeSample(247, 3, 0.139066, 0.522315, -0.105638));
  t_map->insert(ML::MakeTimeSample(248, 3, 0.143995, 0.522591, -0.106166));
  t_map->insert(ML::MakeTimeSample(249, 3, 0.150072, 0.51788, -0.105793));
  t_map->insert(ML::MakeTimeSample(250, 3, 0.156137, 0.513155, -0.105416));
  t_map->insert(ML::MakeTimeSample(251, 3, 0.162947, 0.504516, -0.10381));
  t_map->insert(ML::MakeTimeSample(252, 3, 0.170472, 0.491953, -0.100976));
  t_map->insert(ML::MakeTimeSample(253, 3, 0.177946, 0.479363, -0.0981364));
  t_map->insert(ML::MakeTimeSample(254, 3, 0.187478, 0.460795, -0.0918207));
  t_map->insert(ML::MakeTimeSample(255, 3, 0.196904, 0.442177, -0.0855079));
  t_map->insert(ML::MakeTimeSample(256, 3, 0.203714, 0.416742, -0.0783259));
  t_map->insert(ML::MakeTimeSample(257, 3, 0.207845, 0.384511, -0.0702823));
  t_map->insert(ML::MakeTimeSample(258, 3, 0.211788, 0.352258, -0.0622521));
  t_map->insert(ML::MakeTimeSample(259, 3, 0.208568, 0.310926, -0.0509536));
  t_map->insert(ML::MakeTimeSample(260, 3, 0.205123, 0.269603, -0.0396995));
  t_map->insert(ML::MakeTimeSample(261, 3, 0.198886, 0.225238, -0.0338768));
  t_map->insert(ML::MakeTimeSample(262, 3, 0.18985, 0.17786, -0.0334159));
  t_map->insert(ML::MakeTimeSample(263, 3, 0.180582, 0.130529, -0.0329065));
  t_map->insert(ML::MakeTimeSample(264, 3, 0.174822, 0.0744538, -0.0316418));
  t_map->insert(ML::MakeTimeSample(265, 3, 0.168714, 0.0184187, -0.0303149));
  t_map->insert(ML::MakeTimeSample(266, 3, 0.163194, -0.0397981, -0.027745));
  t_map->insert(ML::MakeTimeSample(267, 3, 0.15822, -0.1002, -0.0239249));
  t_map->insert(ML::MakeTimeSample(268, 3, 0.152841, -0.160564, -0.0200328));
  t_map->insert(ML::MakeTimeSample(269, 3, 0.148975, -0.218951, -0.0132551));
  t_map->insert(ML::MakeTimeSample(270, 3, 0.144732, -0.277305, -0.00639152));
  t_map->insert(ML::MakeTimeSample(271, 3, 0.141287, -0.334197, 4.33232e-05));
  t_map->insert(ML::MakeTimeSample(272, 3, 0.138681, -0.38964, 0.0060393));
  t_map->insert(ML::MakeTimeSample(273, 3, 0.135746, -0.445064, 0.0121092));
  t_map->insert(ML::MakeTimeSample(274, 3, 0.131994, -0.495907, 0.0192818));
  t_map->insert(ML::MakeTimeSample(275, 3, 0.12794, -0.54672, 0.0265417));
  t_map->insert(ML::MakeTimeSample(276, 3, 0.122147, -0.591322, 0.0303715));
  t_map->insert(ML::MakeTimeSample(277, 3, 0.114667, -0.629705, 0.0306848));
  t_map->insert(ML::MakeTimeSample(278, 3, 0.106948, -0.66805, 0.0309712));
  t_map->insert(ML::MakeTimeSample(279, 3, 0.105726, -0.711291, 0.0289441));
  t_map->insert(ML::MakeTimeSample(280, 3, 0.10434, -0.754528, 0.026836));
  t_map->insert(ML::MakeTimeSample(281, 3, 0.110197, -0.808865, 0.0351809));
  t_map->insert(ML::MakeTimeSample(282, 3, 0.12353, -0.874169, 0.0545039));
  t_map->insert(ML::MakeTimeSample(283, 3, 0.137013, -0.93928, 0.0744706));
  t_map->insert(ML::MakeTimeSample(284, 3, 0.150341, -1.05087, 0.111351));
  t_map->insert(ML::MakeTimeSample(285, 3, 0.163339, -1.16188, 0.150507));
  t_map->insert(ML::MakeTimeSample(286, 3, 0.174788, -1.2893, 0.204978));
  t_map->insert(ML::MakeTimeSample(287, 3, 0.183566, -1.43188, 0.278151));
  t_map->insert(ML::MakeTimeSample(288, 3, 0.190114, -1.57149, 0.359599));
  t_map->insert(ML::MakeTimeSample(289, 3, 0.155986, -1.71168, 0.452894));
  t_map->insert(ML::MakeTimeSample(290, 3, 0.1086, -1.84512, 0.55956));
  t_map->insert(ML::MakeTimeSample(291, 3, 0.0645927, -1.96475, 0.655124));
  t_map->insert(ML::MakeTimeSample(292, 3, 0.029526, -2.07455, 0.733589));
  t_map->insert(ML::MakeTimeSample(293, 3, -0.0187128, -2.17807, 0.823989));
  t_map->insert(ML::MakeTimeSample(294, 3, -0.028818, -2.25575, 0.885156));
  t_map->insert(ML::MakeTimeSample(295, 3, -0.0420068, -2.32923, 0.95524));
  t_map->insert(ML::MakeTimeSample(296, 3, -0.0367703, -2.3766, 1.03909));
  t_map->insert(ML::MakeTimeSample(297, 3, -0.00436751, -2.39465, 1.13926));
  t_map->insert(ML::MakeTimeSample(298, 3, 0.0376861, -2.39804, 1.25963));
  t_map->insert(ML::MakeTimeSample(299, 3, 0.111715, -2.37478, 1.39869));
  t_map->insert(ML::MakeTimeSample(300, 3, 0.208222, -2.31859, 1.5672));
  t_map->insert(ML::MakeTimeSample(301, 3, 0.305032, -2.17518, 1.82671));
  t_map->insert(ML::MakeTimeSample(302, 3, 0.397185, -1.84677, 2.2088));
  t_map->insert(ML::MakeTimeSample(303, 3, 0.507153, -1.2329, 2.62651));
  t_map->insert(ML::MakeTimeSample(304, 3, 0.485229, 0.128956, 2.93087));
  t_map->insert(ML::MakeTimeSample(305, 3, 0.335989, 1.55023, 2.496));
  t_map->insert(ML::MakeTimeSample(306, 3, 0.170175, 2.36016, 1.69569));
  t_map->insert(ML::MakeTimeSample(307, 3, 0.0484633, 2.67173, 0.978189));
  t_map->insert(ML::MakeTimeSample(308, 3, -0.0261675, 2.7205, 0.502995));
  t_map->insert(ML::MakeTimeSample(309, 3, -0.0229401, 2.66776, 0.192433));
  t_map->insert(ML::MakeTimeSample(310, 3, -0.0204034, 2.57935, -0.010402));
  t_map->insert(ML::MakeTimeSample(311, 3, -0.0497031, 2.47278, -0.155841));
  t_map->insert(ML::MakeTimeSample(312, 3, -0.0958885, 2.35492, -0.261879));
  t_map->insert(ML::MakeTimeSample(313, 3, -0.128262, 2.23478, -0.335604));
  t_map->insert(ML::MakeTimeSample(314, 3, -0.172159, 2.11367, -0.382161));
  t_map->insert(ML::MakeTimeSample(315, 3, -0.204358, 1.99287, -0.413846));
  t_map->insert(ML::MakeTimeSample(316, 3, -0.238407, 1.861, -0.44484));
  t_map->insert(ML::MakeTimeSample(317, 3, -0.271878, 1.718, -0.47274));
  t_map->insert(ML::MakeTimeSample(318, 3, -0.295363, 1.57605, -0.488759));
  t_map->insert(ML::MakeTimeSample(319, 3, -0.312489, 1.43689, -0.512483));
  t_map->insert(ML::MakeTimeSample(320, 3, -0.323235, 1.29874, -0.526352));
  t_map->insert(ML::MakeTimeSample(321, 3, -0.326119, 1.17294, -0.538061));
  t_map->insert(ML::MakeTimeSample(322, 3, -0.323248, 1.05908, -0.549447));
  t_map->insert(ML::MakeTimeSample(323, 3, -0.317939, 0.945963, -0.555327));
  t_map->insert(ML::MakeTimeSample(324, 3, -0.311672, 0.849254, -0.568353));
  t_map->insert(ML::MakeTimeSample(325, 3, -0.303911, 0.752846, -0.57731));
  t_map->insert(ML::MakeTimeSample(326, 3, -0.288955, 0.67885, -0.601517));
  t_map->insert(ML::MakeTimeSample(327, 3, -0.267446, 0.626044, -0.64224));
  t_map->insert(ML::MakeTimeSample(328, 3, -0.245407, 0.572023, -0.680795));
  t_map->insert(ML::MakeTimeSample(329, 3, -0.23852, 0.537808, -0.703587));
  t_map->insert(ML::MakeTimeSample(330, 3, -0.231422, 0.503174, -0.725617));
  t_map->insert(ML::MakeTimeSample(331, 3, -0.226369, 0.481293, -0.73761));
  t_map->insert(ML::MakeTimeSample(332, 3, -0.223513, 0.472469, -0.740104));
  t_map->insert(ML::MakeTimeSample(333, 3, -0.220652, 0.463637, -0.742553));
  t_map->insert(ML::MakeTimeSample(334, 3, -0.211805, 0.456065, -0.725816));
  t_map->insert(ML::MakeTimeSample(335, 3, -0.203006, 0.448455, -0.709075));
  t_map->insert(ML::MakeTimeSample(336, 3, -0.180828, 0.429384, -0.70987));
  t_map->insert(ML::MakeTimeSample(337, 3, -0.145164, 0.39852, -0.727357));
  t_map->insert(ML::MakeTimeSample(338, 3, -0.109421, 0.367187, -0.743714));
  t_map->insert(ML::MakeTimeSample(339, 3, -0.0647841, 0.370474, -0.723092));
  t_map->insert(ML::MakeTimeSample(340, 3, -0.02058, 0.373183, -0.70166));
  t_map->insert(ML::MakeTimeSample(341, 3, 0.0245227, 0.367648, -0.694861));
  t_map->insert(ML::MakeTimeSample(342, 3, 0.0708671, 0.353895, -0.702561));
  t_map->insert(ML::MakeTimeSample(343, 3, 0.117222, 0.339609, -0.709287));
  t_map->insert(ML::MakeTimeSample(344, 3, 0.139313, 0.327614, -0.689735));
  t_map->insert(ML::MakeTimeSample(345, 3, 0.161094, 0.315533, -0.669944));
  t_map->insert(ML::MakeTimeSample(346, 3, 0.176433, 0.292383, -0.646111));
  t_map->insert(ML::MakeTimeSample(347, 3, 0.185263, 0.258403, -0.618152));
  t_map->insert(ML::MakeTimeSample(348, 3, 0.193702, 0.224653, -0.589851));
  t_map->insert(ML::MakeTimeSample(349, 3, 0.19752, 0.201863, -0.578512));
  t_map->insert(ML::MakeTimeSample(350, 3, 0.201227, 0.17915, -0.567008));
  t_map->insert(ML::MakeTimeSample(351, 3, 0.204167, 0.159947, -0.550814));
  t_map->insert(ML::MakeTimeSample(352, 3, 0.206338, 0.144249, -0.530006));
  t_map->insert(ML::MakeTimeSample(353, 3, 0.208396, 0.128623, -0.509141));
  t_map->insert(ML::MakeTimeSample(354, 3, 0.218679, 0.116186, -0.482428));
  t_map->insert(ML::MakeTimeSample(355, 3, 0.228738, 0.103779, -0.45563));
  t_map->insert(ML::MakeTimeSample(356, 3, 0.241492, 0.0864227, -0.425871));
  t_map->insert(ML::MakeTimeSample(357, 3, 0.2568, 0.0641596, -0.393044));
  t_map->insert(ML::MakeTimeSample(358, 3, 0.271701, 0.0419785, -0.35999));
  t_map->insert(ML::MakeTimeSample(359, 3, 0.266148, 0.0134515, -0.335342));
  t_map->insert(ML::MakeTimeSample(360, 3, 0.260381, -0.0148921, -0.310546));
  t_map->insert(ML::MakeTimeSample(361, 3, 0.254824, -0.0424939, -0.286861));
  t_map->insert(ML::MakeTimeSample(362, 3, 0.249498, -0.0693724, -0.264298));
  t_map->insert(ML::MakeTimeSample(363, 3, 0.243985, -0.0960958, -0.2416));
  t_map->insert(ML::MakeTimeSample(364, 3, 0.242157, -0.123131, -0.214491));
  t_map->insert(ML::MakeTimeSample(365, 3, 0.240101, -0.149994, -0.18723));
  t_map->insert(ML::MakeTimeSample(366, 3, 0.238418, -0.172927, -0.166657));
  t_map->insert(ML::MakeTimeSample(367, 3, 0.237213, -0.192019, -0.152832));
  t_map->insert(ML::MakeTimeSample(368, 3, 0.235921, -0.211056, -0.138941));
  t_map->insert(ML::MakeTimeSample(369, 3, 0.236133, -0.217147, -0.129333));
  t_map->insert(ML::MakeTimeSample(370, 3, 0.236324, -0.22322, -0.119714));
  t_map->insert(ML::MakeTimeSample(371, 3, 0.235697, -0.22915, -0.111337));
  t_map->insert(ML::MakeTimeSample(372, 3, 0.234255, -0.234941, -0.104205));
  t_map->insert(ML::MakeTimeSample(373, 3, 0.2328, -0.24072, -0.0970651));
  t_map->insert(ML::MakeTimeSample(374, 3, 0.235927, -0.247436, -0.0888217));
  t_map->insert(ML::MakeTimeSample(375, 3, 0.239038, -0.254139, -0.0805623));
  t_map->insert(ML::MakeTimeSample(376, 3, 0.245711, -0.251194, -0.0706459));
  t_map->insert(ML::MakeTimeSample(377, 3, 0.255902, -0.238571, -0.0590808));
  t_map->insert(ML::MakeTimeSample(378, 3, 0.266019, -0.225895, -0.0475086));
  t_map->insert(ML::MakeTimeSample(379, 3, 0.272505, -0.21587, -0.03633));
  t_map->insert(ML::MakeTimeSample(380, 3, 0.27894, -0.205813, -0.0251508));
  t_map->insert(ML::MakeTimeSample(381, 3, 0.284061, -0.199372, -0.0173583));
  t_map->insert(ML::MakeTimeSample(382, 3, 0.287902, -0.196565, -0.0129509));
  t_map->insert(ML::MakeTimeSample(383, 3, 0.291736, -0.193751, -0.00854178));
  t_map->insert(ML::MakeTimeSample(384, 3, 0.290822, -0.204149, -0.00856698));
  t_map->insert(ML::MakeTimeSample(385, 3, 0.289886, -0.214544, -0.0085916));
  t_map->insert(ML::MakeTimeSample(386, 3, 0.287022, -0.226324, -0.00623991));
  t_map->insert(ML::MakeTimeSample(387, 3, 0.282213, -0.239475, -0.0015078));
  t_map->insert(ML::MakeTimeSample(388, 3, 0.277358, -0.252609, 0.00323024));
  t_map->insert(ML::MakeTimeSample(389, 3, 0.275134, -0.266491, 0.00452562));
  t_map->insert(ML::MakeTimeSample(390, 3, 0.272868, -0.280367, 0.005823));
  t_map->insert(ML::MakeTimeSample(391, 3, 0.270325, -0.290982, 0.00642107));
  t_map->insert(ML::MakeTimeSample(392, 3, 0.267526, -0.298335, 0.0063179));
  t_map->insert(ML::MakeTimeSample(393, 3, 0.264714, -0.305683, 0.00621431));
  t_map->insert(ML::MakeTimeSample(394, 3, 0.261219, -0.314814, 0.00791288));
  t_map->insert(ML::MakeTimeSample(395, 3, 0.257704, -0.323938, 0.00961322));
  t_map->insert(ML::MakeTimeSample(396, 3, 0.255455, -0.332017, 0.0108291));
  t_map->insert(ML::MakeTimeSample(397, 3, 0.254482, -0.339059, 0.0115598));
  t_map->insert(ML::MakeTimeSample(398, 3, 0.253499, -0.346099, 0.0122911));
  t_map->insert(ML::MakeTimeSample(399, 3, 0.251014, -0.350292, 0.0103605));
  t_map->insert(ML::MakeTimeSample(400, 3, 0.248523, -0.35448, 0.00842873));
  t_map->insert(ML::MakeTimeSample(401, 3, 0.245187, -0.358183, 0.00717925));
  t_map->insert(ML::MakeTimeSample(402, 3, 0.241006, -0.361397, 0.00661309));
  t_map->insert(ML::MakeTimeSample(403, 3, 0.23682, -0.364604, 0.00604668));
  t_map->insert(ML::MakeTimeSample(404, 3, 0.232593, -0.364796, 0.00633708));
  t_map->insert(ML::MakeTimeSample(405, 3, 0.228366, -0.364984, 0.00662721));
  t_map->insert(ML::MakeTimeSample(406, 3, 0.223015, -0.366241, 0.00710287));
  t_map->insert(ML::MakeTimeSample(407, 3, 0.216537, -0.368561, 0.00776393));
  t_map->insert(ML::MakeTimeSample(408, 3, 0.210054, -0.370869, 0.00842455));
  t_map->insert(ML::MakeTimeSample(409, 3, 0.204846, -0.374625, 0.00849195));
  t_map->insert(ML::MakeTimeSample(410, 3, 0.199631, -0.378371, 0.00855917));
  t_map->insert(ML::MakeTimeSample(411, 3, 0.193803, -0.382712, 0.00886118));
  t_map->insert(ML::MakeTimeSample(412, 3, 0.187358, -0.387643, 0.00939802));
  t_map->insert(ML::MakeTimeSample(413, 3, 0.180903, -0.39256, 0.00993469));
  t_map->insert(ML::MakeTimeSample(414, 3, 0.17535, -0.398881, 0.012195));
  t_map->insert(ML::MakeTimeSample(415, 3, 0.169783, -0.405188, 0.0144571));
  t_map->insert(ML::MakeTimeSample(416, 3, 0.164823, -0.412604, 0.015692));
  t_map->insert(ML::MakeTimeSample(417, 3, 0.160469, -0.421131, 0.015898));
  t_map->insert(ML::MakeTimeSample(418, 3, 0.156096, -0.42965, 0.0161033));
  t_map->insert(ML::MakeTimeSample(419, 3, 0.154333, -0.435395, 0.0160925));
  t_map->insert(ML::MakeTimeSample(420, 3, 0.152564, -0.441138, 0.0160812));
  t_map->insert(ML::MakeTimeSample(421, 3, 0.151441, -0.446101, 0.0157593));
  t_map->insert(ML::MakeTimeSample(422, 3, 0.150969, -0.450283, 0.0151264));
  t_map->insert(ML::MakeTimeSample(423, 3, 0.150493, -0.454465, 0.0144925));
  t_map->insert(ML::MakeTimeSample(424, 3, 0.149895, -0.455288, 0.0138653));
  t_map->insert(ML::MakeTimeSample(425, 3, 0.149295, -0.456111, 0.013238));
  t_map->insert(ML::MakeTimeSample(426, 3, 0.148526, -0.454657, 0.0136488));
  t_map->insert(ML::MakeTimeSample(427, 3, 0.147587, -0.450927, 0.0150963));
  t_map->insert(ML::MakeTimeSample(428, 3, 0.146647, -0.447196, 0.0165419));
  t_map->insert(ML::MakeTimeSample(429, 3, 0.145924, -0.44044, 0.0178398));
  t_map->insert(ML::MakeTimeSample(430, 3, 0.145198, -0.433685, 0.0191344));
  t_map->insert(ML::MakeTimeSample(431, 3, 0.145018, -0.426656, 0.0199483));
  t_map->insert(ML::MakeTimeSample(432, 3, 0.145383, -0.419354, 0.0202829));
  t_map->insert(ML::MakeTimeSample(433, 3, 0.145742, -0.412051, 0.0206161));
  t_map->insert(ML::MakeTimeSample(434, 3, 0.147301, -0.406058, 0.0203079));
  t_map->insert(ML::MakeTimeSample(435, 3, 0.148853, -0.400064, 0.0199996));
  t_map->insert(ML::MakeTimeSample(436, 3, 0.150631, -0.393772, 0.0189596));
  t_map->insert(ML::MakeTimeSample(437, 3, 0.152631, -0.387183, 0.0171893));
  t_map->insert(ML::MakeTimeSample(438, 3, 0.154623, -0.380591, 0.0154212));
  t_map->insert(ML::MakeTimeSample(439, 3, 0.15612, -0.374509, 0.0133872));
  t_map->insert(ML::MakeTimeSample(440, 3, 0.15761, -0.368424, 0.0113556));
  t_map->insert(ML::MakeTimeSample(441, 3, 0.159202, -0.361343, 0.00854529));
  t_map->insert(ML::MakeTimeSample(442, 3, 0.160892, -0.353264, 0.00495887));
  t_map->insert(ML::MakeTimeSample(443, 3, 0.16257, -0.34518, 0.00137854));
  t_map->insert(ML::MakeTimeSample(444, 3, 0.165748, -0.335077, -0.00274334));
  t_map->insert(ML::MakeTimeSample(445, 3, 0.168906, -0.324966, -0.00685701));
  t_map->insert(ML::MakeTimeSample(446, 3, 0.171642, -0.313883, -0.0102381));
  t_map->insert(ML::MakeTimeSample(447, 3, 0.173952, -0.301832, -0.0128871));
  t_map->insert(ML::MakeTimeSample(448, 3, 0.17624, -0.289775, -0.0155292));
  t_map->insert(ML::MakeTimeSample(449, 3, 0.176733, -0.276617, -0.0128146));
  t_map->insert(ML::MakeTimeSample(450, 3, 0.177203, -0.263458, -0.0101052));
  t_map->insert(ML::MakeTimeSample(451, 3, 0.177714, -0.250352, -0.00860846));
  t_map->insert(ML::MakeTimeSample(452, 3, 0.178265, -0.2373, -0.00832058));
  t_map->insert(ML::MakeTimeSample(453, 3, 0.178795, -0.224248, -0.00803228));
  t_map->insert(ML::MakeTimeSample(454, 3, 0.180174, -0.212218, -0.00828843));
  t_map->insert(ML::MakeTimeSample(455, 3, 0.181533, -0.200186, -0.00854343));
  t_map->insert(ML::MakeTimeSample(456, 3, 0.183494, -0.18791, -0.00981403));
  t_map->insert(ML::MakeTimeSample(457, 3, 0.186055, -0.175387, -0.0120981));
  t_map->insert(ML::MakeTimeSample(458, 3, 0.188592, -0.162859, -0.0143782));
  t_map->insert(ML::MakeTimeSample(459, 3, 0.189768, -0.153505, -0.0196424));
  t_map->insert(ML::MakeTimeSample(460, 3, 0.190928, -0.144147, -0.0249011));
  t_map->insert(ML::MakeTimeSample(461, 3, 0.191394, -0.134353, -0.0295499));
  t_map->insert(ML::MakeTimeSample(462, 3, 0.191164, -0.124128, -0.0335884));
  t_map->insert(ML::MakeTimeSample(463, 3, 0.19092, -0.1139, -0.0376211));
  t_map->insert(ML::MakeTimeSample(464, 3, 0.190677, -0.103742, -0.0415026));
  t_map->insert(ML::MakeTimeSample(465, 3, 0.19042, -0.0935829, -0.0453784));
  t_map->insert(ML::MakeTimeSample(466, 3, 0.190229, -0.0842485, -0.0486501));
  t_map->insert(ML::MakeTimeSample(467, 3, 0.190108, -0.07574, -0.0513191));
  t_map->insert(ML::MakeTimeSample(468, 3, 0.189977, -0.0672303, -0.0539846));
  t_map->insert(ML::MakeTimeSample(469, 3, 0.189431, -0.0604184, -0.0558645));
  t_map->insert(ML::MakeTimeSample(470, 3, 0.18888, -0.0536062, -0.0577421));
  t_map->insert(ML::MakeTimeSample(471, 3, 0.187942, -0.0482145, -0.059243));
  t_map->insert(ML::MakeTimeSample(472, 3, 0.186622, -0.0442434, -0.060368));
  t_map->insert(ML::MakeTimeSample(473, 3, 0.1853, -0.0402729, -0.0614921));
  t_map->insert(ML::MakeTimeSample(474, 3, 0.183363, -0.0379383, -0.0616946));
  t_map->insert(ML::MakeTimeSample(475, 3, 0.181425, -0.0356041, -0.0618968));
  t_map->insert(ML::MakeTimeSample(476, 3, 0.179152, -0.0342551, -0.0615133));
  t_map->insert(ML::MakeTimeSample(477, 3, 0.176543, -0.033891, -0.0605446));
  t_map->insert(ML::MakeTimeSample(478, 3, 0.173935, -0.0335267, -0.0595759));
  t_map->insert(ML::MakeTimeSample(479, 3, 0.172763, -0.0342639, -0.0575821));
  t_map->insert(ML::MakeTimeSample(480, 3, 0.171591, -0.0350008, -0.0555886));
  t_map->insert(ML::MakeTimeSample(481, 3, 0.170795, -0.0360016, -0.0531864));
  t_map->insert(ML::MakeTimeSample(482, 3, 0.170374, -0.037266, -0.0503754));
  t_map->insert(ML::MakeTimeSample(483, 3, 0.169952, -0.0385302, -0.0475643));
  t_map->insert(ML::MakeTimeSample(484, 3, 0.169733, -0.0411173, -0.0450725));
  t_map->insert(ML::MakeTimeSample(485, 3, 0.169512, -0.0437042, -0.0425804));
  t_map->insert(ML::MakeTimeSample(486, 3, 0.169223, -0.0468523, -0.0403271));
  t_map->insert(ML::MakeTimeSample(487, 3, 0.168866, -0.0505621, -0.0383125));
  t_map->insert(ML::MakeTimeSample(488, 3, 0.168507, -0.0542713, -0.0362973));
  t_map->insert(ML::MakeTimeSample(489, 3, 0.167735, -0.0557787, -0.033939));
  t_map->insert(ML::MakeTimeSample(490, 3, 0.166962, -0.0572857, -0.0315807));
  t_map->insert(ML::MakeTimeSample(491, 3, 0.16629, -0.0569566, -0.0289235));
  t_map->insert(ML::MakeTimeSample(492, 3, 0.165718, -0.0547915, -0.0259676));
  t_map->insert(ML::MakeTimeSample(493, 3, 0.165145, -0.0526263, -0.0230119));
  t_map->insert(ML::MakeTimeSample(494, 3, 0.16529, -0.0494828, -0.02037));
  t_map->insert(ML::MakeTimeSample(495, 3, 0.165433, -0.0463391, -0.0177282));
  t_map->insert(ML::MakeTimeSample(496, 3, 0.165712, -0.0437374, -0.0153419));
  t_map->insert(ML::MakeTimeSample(497, 3, 0.166126, -0.0416777, -0.013211));
  t_map->insert(ML::MakeTimeSample(498, 3, 0.166539, -0.0396179, -0.01108));
  t_map->insert(ML::MakeTimeSample(499, 3, 0.168013, -0.0361678, -0.0112295));
  t_map->insert(ML::MakeTimeSample(500, 3, 0.169486, -0.032717, -0.0113789));
  t_map->insert(ML::MakeTimeSample(501, 3, 0.170392, -0.028624, -0.0126891));
  t_map->insert(ML::MakeTimeSample(502, 3, 0.170729, -0.0238889, -0.0151599));
  t_map->insert(ML::MakeTimeSample(503, 3, 0.171063, -0.0191534, -0.0176303));
  t_map->insert(ML::MakeTimeSample(504, 3, 0.171259, -0.0130547, -0.0220904));
  t_map->insert(ML::MakeTimeSample(505, 3, 0.171449, -0.0069552, -0.0265496));
  t_map->insert(ML::MakeTimeSample(506, 3, 0.17122, -0.0017145, -0.0302349));
  t_map->insert(ML::MakeTimeSample(507, 3, 0.170574, 0.00266658, -0.0331461));
  t_map->insert(ML::MakeTimeSample(508, 3, 0.169924, 0.00704773, -0.0360566));
  t_map->insert(ML::MakeTimeSample(509, 3, 0.169269, 0.0132335, -0.0378564));
  t_map->insert(ML::MakeTimeSample(510, 3, 0.168609, 0.0194189, -0.0396552));
  t_map->insert(ML::MakeTimeSample(511, 3, 0.168136, 0.0265598, -0.0406137));
  t_map->insert(ML::MakeTimeSample(512, 3, 0.167848, 0.0346556, -0.0407313));
  t_map->insert(ML::MakeTimeSample(513, 3, 0.167552, 0.0427515, -0.0408472));
  t_map->insert(ML::MakeTimeSample(514, 3, 0.167101, 0.051176, -0.0398465));
  t_map->insert(ML::MakeTimeSample(515, 3, 0.166641, 0.0596001, -0.0388437));
  t_map->insert(ML::MakeTimeSample(516, 3, 0.166279, 0.067293, -0.0375952));
  t_map->insert(ML::MakeTimeSample(517, 3, 0.166016, 0.0742551, -0.0361012));
  t_map->insert(ML::MakeTimeSample(518, 3, 0.165748, 0.0812165, -0.0346057));
  t_map->insert(ML::MakeTimeSample(519, 3, 0.164871, 0.0862537, -0.0332172));
  t_map->insert(ML::MakeTimeSample(520, 3, 0.163991, 0.0912899, -0.031828));
  t_map->insert(ML::MakeTimeSample(521, 3, 0.162972, 0.0964139, -0.0310831));
  t_map->insert(ML::MakeTimeSample(522, 3, 0.161815, 0.101626, -0.030983));
  t_map->insert(ML::MakeTimeSample(523, 3, 0.160654, 0.106837, -0.0308824));
  t_map->insert(ML::MakeTimeSample(524, 3, 0.159274, 0.114667, -0.0319933));
  t_map->insert(ML::MakeTimeSample(525, 3, 0.157886, 0.122497, -0.0331035));
  t_map->insert(ML::MakeTimeSample(526, 3, 0.156617, 0.1318, -0.0346875));
  t_map->insert(ML::MakeTimeSample(527, 3, 0.155463, 0.142575, -0.0367449));
  t_map->insert(ML::MakeTimeSample(528, 3, 0.154295, 0.153349, -0.0388015));
  t_map->insert(ML::MakeTimeSample(529, 3, 0.153196, 0.168826, -0.0414372));
  t_map->insert(ML::MakeTimeSample(530, 3, 0.152071, 0.184303, -0.0440706));
  t_map->insert(ML::MakeTimeSample(531, 3, 0.151082, 0.201361, -0.0469756));
  t_map->insert(ML::MakeTimeSample(532, 3, 0.150222, 0.220004, -0.0501517));
  t_map->insert(ML::MakeTimeSample(533, 3, 0.149323, 0.238644, -0.0533246));
  t_map->insert(ML::MakeTimeSample(534, 3, 0.146653, 0.260897, -0.0597412));
  t_map->insert(ML::MakeTimeSample(535, 3, 0.143919, 0.28314, -0.0661611));
  t_map->insert(ML::MakeTimeSample(536, 3, 0.14098, 0.305601, -0.0728331));
  t_map->insert(ML::MakeTimeSample(537, 3, 0.137833, 0.328276, -0.0797581));
  t_map->insert(ML::MakeTimeSample(538, 3, 0.134617, 0.350941, -0.0866881));
  t_map->insert(ML::MakeTimeSample(539, 3, 0.131641, 0.369535, -0.0923711));
  t_map->insert(ML::MakeTimeSample(540, 3, 0.128617, 0.388122, -0.0980573));
  t_map->insert(ML::MakeTimeSample(541, 3, 0.12647, 0.405232, -0.101641));
  t_map->insert(ML::MakeTimeSample(542, 3, 0.125216, 0.42087, -0.103111));
  t_map->insert(ML::MakeTimeSample(543, 3, 0.123935, 0.436508, -0.104571));
  t_map->insert(ML::MakeTimeSample(544, 3, 0.123968, 0.446759, -0.101499));
  t_map->insert(ML::MakeTimeSample(545, 3, 0.123992, 0.457006, -0.0984093));
  t_map->insert(ML::MakeTimeSample(546, 3, 0.123435, 0.463209, -0.0958982));
  t_map->insert(ML::MakeTimeSample(547, 3, 0.122305, 0.465373, -0.0939766));
  t_map->insert(ML::MakeTimeSample(548, 3, 0.121173, 0.467534, -0.0920533));
  t_map->insert(ML::MakeTimeSample(549, 3, 0.120271, 0.470017, -0.0925046));
  t_map->insert(ML::MakeTimeSample(550, 3, 0.119368, 0.472499, -0.0929558));
  t_map->insert(ML::MakeTimeSample(551, 3, 0.118852, 0.476322, -0.0943697));
  t_map->insert(ML::MakeTimeSample(552, 3, 0.118722, 0.481488, -0.0967483));
  t_map->insert(ML::MakeTimeSample(553, 3, 0.11859, 0.486652, -0.099129));
  t_map->insert(ML::MakeTimeSample(554, 3, 0.120404, 0.492805, -0.0991004));
  t_map->insert(ML::MakeTimeSample(555, 3, 0.122218, 0.498958, -0.0990691));
  t_map->insert(ML::MakeTimeSample(556, 3, 0.124557, 0.5038, -0.0966524));
  t_map->insert(ML::MakeTimeSample(557, 3, 0.127419, 0.507324, -0.0918462));
  t_map->insert(ML::MakeTimeSample(558, 3, 0.13028, 0.510837, -0.0870318));
  t_map->insert(ML::MakeTimeSample(559, 3, 0.13394, 0.513884, -0.0810764));
  t_map->insert(ML::MakeTimeSample(560, 3, 0.137599, 0.516914, -0.0751119));
  t_map->insert(ML::MakeTimeSample(561, 3, 0.137312, 0.519793, -0.0723687));
  t_map->insert(ML::MakeTimeSample(562, 3, 0.133076, 0.522526, -0.0728531));
  t_map->insert(ML::MakeTimeSample(563, 3, 0.128836, 0.525252, -0.0733367));
  t_map->insert(ML::MakeTimeSample(564, 3, 0.126079, 0.524909, -0.0733468));
  t_map->insert(ML::MakeTimeSample(565, 3, 0.123323, 0.524563, -0.0733565));
  t_map->insert(ML::MakeTimeSample(566, 3, 0.120811, 0.523698, -0.0738928));
  t_map->insert(ML::MakeTimeSample(567, 3, 0.118544, 0.522313, -0.0749552));
  t_map->insert(ML::MakeTimeSample(568, 3, 0.116278, 0.520927, -0.0760166));
  t_map->insert(ML::MakeTimeSample(569, 3, 0.115908, 0.520195, -0.0764655));
  t_map->insert(ML::MakeTimeSample(570, 3, 0.115537, 0.519464, -0.0769142));
  t_map->insert(ML::MakeTimeSample(571, 3, 0.114389, 0.520092, -0.0782209));
  t_map->insert(ML::MakeTimeSample(572, 3, 0.112463, 0.522078, -0.0803861));
  t_map->insert(ML::MakeTimeSample(573, 3, 0.110534, 0.524062, -0.0825522));
  t_map->insert(ML::MakeTimeSample(574, 3, 0.108832, 0.526383, -0.0833229));
  t_map->insert(ML::MakeTimeSample(575, 3, 0.107128, 0.528703, -0.0840936));
  t_map->insert(ML::MakeTimeSample(576, 3, 0.106259, 0.530821, -0.0843388));
  t_map->insert(ML::MakeTimeSample(577, 3, 0.106227, 0.532739, -0.0840581));
  t_map->insert(ML::MakeTimeSample(578, 3, 0.106194, 0.534656, -0.0837769));
  t_map->insert(ML::MakeTimeSample(579, 3, 0.106101, 0.533732, -0.0832302));
  t_map->insert(ML::MakeTimeSample(580, 3, 0.106008, 0.532807, -0.0826835));
  t_map->insert(ML::MakeTimeSample(581, 3, 0.106138, 0.531639, -0.0821586));
  t_map->insert(ML::MakeTimeSample(582, 3, 0.106492, 0.530227, -0.0816556));
  t_map->insert(ML::MakeTimeSample(583, 3, 0.106845, 0.528816, -0.0811527));
  t_map->insert(ML::MakeTimeSample(584, 3, 0.107896, 0.527503, -0.0800931));
  t_map->insert(ML::MakeTimeSample(585, 3, 0.108947, 0.526189, -0.0790336));
  t_map->insert(ML::MakeTimeSample(586, 3, 0.109495, 0.525544, -0.0783405));
  t_map->insert(ML::MakeTimeSample(587, 3, 0.109541, 0.525569, -0.0780133));
  t_map->insert(ML::MakeTimeSample(588, 3, 0.109587, 0.525595, -0.0776861));
  t_map->insert(ML::MakeTimeSample(589, 3, 0.109385, 0.527042, -0.0777879));
  t_map->insert(ML::MakeTimeSample(590, 3, 0.109183, 0.528489, -0.0778896));
  t_map->insert(ML::MakeTimeSample(591, 3, 0.108885, 0.530173, -0.0782237));
  t_map->insert(ML::MakeTimeSample(592, 3, 0.108493, 0.532093, -0.0787904));
  t_map->insert(ML::MakeTimeSample(593, 3, 0.1081, 0.534012, -0.0793573));
  t_map->insert(ML::MakeTimeSample(594, 3, 0.108022, 0.534968, -0.0793989));
  t_map->insert(ML::MakeTimeSample(595, 3, 0.107943, 0.535924, -0.0794405));
  t_map->insert(ML::MakeTimeSample(596, 3, 0.108077, 0.536476, -0.0793303));
  t_map->insert(ML::MakeTimeSample(597, 3, 0.108423, 0.536624, -0.079068));
  t_map->insert(ML::MakeTimeSample(598, 3, 0.108769, 0.536772, -0.0788058));
  t_map->insert(ML::MakeTimeSample(599, 3, 0.112092, 0.537571, -0.0790708));
  t_map->insert(ML::MakeTimeSample(600, 3, 0.115416, 0.538366, -0.0793354));
  t_map->insert(ML::MakeTimeSample(601, 3, 0.118835, 0.538985, -0.0794408));
  t_map->insert(ML::MakeTimeSample(602, 3, 0.122349, 0.539429, -0.0793869));
  t_map->insert(ML::MakeTimeSample(603, 3, 0.125863, 0.539868, -0.0793324));
  t_map->insert(ML::MakeTimeSample(604, 3, 0.129463, 0.541907, -0.0793298));
  t_map->insert(ML::MakeTimeSample(605, 3, 0.133065, 0.543941, -0.0793262));
  t_map->insert(ML::MakeTimeSample(606, 3, 0.13563, 0.546413, -0.0798274));
  t_map->insert(ML::MakeTimeSample(607, 3, 0.137156, 0.549325, -0.0808343));
  t_map->insert(ML::MakeTimeSample(608, 3, 0.138683, 0.552236, -0.081842));
  t_map->insert(ML::MakeTimeSample(609, 3, 0.137608, 0.550573, -0.0835401));
  t_map->insert(ML::MakeTimeSample(610, 3, 0.136533, 0.548909, -0.0852368));
  t_map->insert(ML::MakeTimeSample(611, 3, 0.134932, 0.545133, -0.0870694));
  t_map->insert(ML::MakeTimeSample(612, 3, 0.132806, 0.539244, -0.0890339));
  t_map->insert(ML::MakeTimeSample(613, 3, 0.130681, 0.533354, -0.0909913));
  t_map->insert(ML::MakeTimeSample(614, 3, 0.12847, 0.527927, -0.0928132));
  t_map->insert(ML::MakeTimeSample(615, 3, 0.126261, 0.522498, -0.0946291));
  t_map->insert(ML::MakeTimeSample(616, 3, 0.124899, 0.518154, -0.094874));
  t_map->insert(ML::MakeTimeSample(617, 3, 0.124382, 0.514898, -0.0935531));
  t_map->insert(ML::MakeTimeSample(618, 3, 0.123866, 0.511641, -0.0922331));
  t_map->insert(ML::MakeTimeSample(619, 3, 0.124042, 0.512126, -0.0909194));
  t_map->insert(ML::MakeTimeSample(620, 3, 0.124218, 0.512611, -0.0896056));
  t_map->insert(ML::MakeTimeSample(621, 3, 0.123972, 0.514016, -0.0889872));
  t_map->insert(ML::MakeTimeSample(622, 3, 0.123304, 0.516342, -0.0890645));
  t_map->insert(ML::MakeTimeSample(623, 3, 0.122635, 0.518668, -0.0891413));
  t_map->insert(ML::MakeTimeSample(624, 3, 0.121415, 0.518909, -0.089269));
  t_map->insert(ML::MakeTimeSample(625, 3, 0.120195, 0.519149, -0.0893967));
  t_map->insert(ML::MakeTimeSample(626, 3, 0.119408, 0.520285, -0.0891792));
  t_map->insert(ML::MakeTimeSample(627, 3, 0.119055, 0.522316, -0.088616));
  t_map->insert(ML::MakeTimeSample(628, 3, 0.118701, 0.524347, -0.0880522));
  t_map->insert(ML::MakeTimeSample(629, 3, 0.118053, 0.528675, -0.0881456));
  t_map->insert(ML::MakeTimeSample(630, 3, 0.117403, 0.533003, -0.088238));
  t_map->insert(ML::MakeTimeSample(631, 3, 0.11596, 0.5375, -0.0891139));
  t_map->insert(ML::MakeTimeSample(632, 3, 0.113723, 0.542165, -0.0907746));
  t_map->insert(ML::MakeTimeSample(633, 3, 0.111479, 0.546827, -0.0924362));
}

void DataSet3(ML::TimeSeriesMap* t_map) {
  t_map->insert(ML::MakeTimeSample(0 * gap, 3, 0, 0, 0));
  t_map->insert(ML::MakeTimeSample(1 * gap, 3, 0, 0, 0));
  t_map->insert(
      ML::MakeTimeSample(2 * gap, 3, 0.00105661, 0.00573602, -0.000816928));
  t_map->insert(
      ML::MakeTimeSample(3 * gap, 3, 0.00211321, 0.011472, -0.00163386));
  t_map->insert(
      ML::MakeTimeSample(4 * gap, 3, 0.00316982, 0.0172081, -0.00245078));
  t_map->insert(
      ML::MakeTimeSample(5 * gap, 3, 0.00422643, 0.0229441, -0.00326771));
  t_map->insert(
      ML::MakeTimeSample(6 * gap, 3, 0.00528304, 0.0286801, -0.00408464));
  t_map->insert(
      ML::MakeTimeSample(7 * gap, 3, 0.00633964, 0.0344161, -0.00490157));
  t_map->insert(
      ML::MakeTimeSample(8 * gap, 3, 0.00739625, 0.0401521, -0.0057185));
  t_map->insert(
      ML::MakeTimeSample(9 * gap, 3, 0.00845286, 0.0458881, -0.00653542));
  t_map->insert(
      ML::MakeTimeSample(10 * gap, 3, 0.00950946, 0.0516242, -0.00735235));
  t_map->insert(
      ML::MakeTimeSample(11 * gap, 3, 0.0105661, 0.0573602, -0.00816928));
  t_map->insert(
      ML::MakeTimeSample(12 * gap, 3, 0.0116227, 0.0630962, -0.00898621));
  t_map->insert(
      ML::MakeTimeSample(13 * gap, 3, 0.0126793, 0.0688322, -0.00980314));
  t_map->insert(
      ML::MakeTimeSample(14 * gap, 3, 0.0137359, 0.0745682, -0.0106201));
  t_map->insert(
      ML::MakeTimeSample(15 * gap, 3, 0.0147925, 0.0803043, -0.011437));
  t_map->insert(
      ML::MakeTimeSample(16 * gap, 3, 0.0158491, 0.0860403, -0.0122539));
  t_map->insert(
      ML::MakeTimeSample(17 * gap, 3, 0.0169057, 0.0917763, -0.0130708));
  t_map->insert(
      ML::MakeTimeSample(18 * gap, 3, 0.0179623, 0.0975123, -0.0138878));
  t_map->insert(
      ML::MakeTimeSample(19 * gap, 3, 0.0190189, 0.103248, -0.0147047));
  t_map->insert(
      ML::MakeTimeSample(20 * gap, 3, 0.0200755, 0.108984, -0.0155216));
  t_map->insert(
      ML::MakeTimeSample(21 * gap, 3, 0.0211321, 0.11472, -0.0163386));
  t_map->insert(
      ML::MakeTimeSample(22 * gap, 3, 0.0221888, 0.120456, -0.0171555));
  t_map->insert(
      ML::MakeTimeSample(23 * gap, 3, 0.0232454, 0.126192, -0.0179724));
  t_map->insert(
      ML::MakeTimeSample(24 * gap, 3, 0.024302, 0.131928, -0.0187893));
  t_map->insert(
      ML::MakeTimeSample(25 * gap, 3, 0.0253586, 0.137664, -0.0196063));
  t_map->insert(ML::MakeTimeSample(26 * gap, 3, 0.0264152, 0.1434, -0.0204232));
  t_map->insert(
      ML::MakeTimeSample(27 * gap, 3, 0.0274718, 0.149136, -0.0212401));
  t_map->insert(
      ML::MakeTimeSample(28 * gap, 3, 0.0285284, 0.154872, -0.0220571));
  t_map->insert(ML::MakeTimeSample(29 * gap, 3, 0.029585, 0.160608, -0.022874));
  t_map->insert(
      ML::MakeTimeSample(30 * gap, 3, 0.0306416, 0.166345, -0.0236909));
  t_map->insert(
      ML::MakeTimeSample(31 * gap, 3, 0.0316982, 0.172081, -0.0245078));
  t_map->insert(
      ML::MakeTimeSample(32 * gap, 3, 0.0327548, 0.177817, -0.0253248));
  t_map->insert(
      ML::MakeTimeSample(33 * gap, 3, 0.0338114, 0.183553, -0.0261417));
  t_map->insert(
      ML::MakeTimeSample(34 * gap, 3, 0.034868, 0.189289, -0.0269586));
  t_map->insert(
      ML::MakeTimeSample(35 * gap, 3, 0.0359246, 0.195025, -0.0277756));
  t_map->insert(
      ML::MakeTimeSample(36 * gap, 3, 0.0369813, 0.200761, -0.0285925));
  t_map->insert(
      ML::MakeTimeSample(37 * gap, 3, 0.0380379, 0.206497, -0.0294094));
  t_map->insert(
      ML::MakeTimeSample(38 * gap, 3, 0.0390945, 0.212233, -0.0302263));
  t_map->insert(
      ML::MakeTimeSample(39 * gap, 3, 0.0401511, 0.217969, -0.0310433));
  t_map->insert(
      ML::MakeTimeSample(40 * gap, 3, 0.0412077, 0.223705, -0.0318602));
  t_map->insert(
      ML::MakeTimeSample(41 * gap, 3, 0.0422643, 0.229441, -0.0326771));
  t_map->insert(
      ML::MakeTimeSample(42 * gap, 3, 0.0433209, 0.235177, -0.0334941));
  t_map->insert(
      ML::MakeTimeSample(43 * gap, 3, 0.0443775, 0.240913, -0.034311));
  t_map->insert(
      ML::MakeTimeSample(44 * gap, 3, 0.0454341, 0.246649, -0.0351279));
  t_map->insert(
      ML::MakeTimeSample(45 * gap, 3, 0.0464907, 0.252385, -0.0359448));
  t_map->insert(
      ML::MakeTimeSample(46 * gap, 3, 0.0475473, 0.258121, -0.0367618));
  t_map->insert(
      ML::MakeTimeSample(47 * gap, 3, 0.0486039, 0.263857, -0.0375787));
  t_map->insert(
      ML::MakeTimeSample(48 * gap, 3, 0.0496605, 0.269593, -0.0383956));
  t_map->insert(
      ML::MakeTimeSample(49 * gap, 3, 0.0507171, 0.275329, -0.0392125));
  t_map->insert(
      ML::MakeTimeSample(50 * gap, 3, 0.0517737, 0.281065, -0.0400295));
  t_map->insert(
      ML::MakeTimeSample(51 * gap, 3, 0.0528304, 0.286801, -0.0408464));
  t_map->insert(
      ML::MakeTimeSample(52 * gap, 3, 0.053887, 0.292537, -0.0416633));
  t_map->insert(
      ML::MakeTimeSample(53 * gap, 3, 0.0549436, 0.298273, -0.0424803));
  t_map->insert(
      ML::MakeTimeSample(54 * gap, 3, 0.0560002, 0.304009, -0.0432972));
  t_map->insert(
      ML::MakeTimeSample(55 * gap, 3, 0.0570568, 0.309745, -0.0441141));
  t_map->insert(
      ML::MakeTimeSample(56 * gap, 3, 0.0581134, 0.315481, -0.044931));
  t_map->insert(ML::MakeTimeSample(57 * gap, 3, 0.05917, 0.321217, -0.045748));
  t_map->insert(
      ML::MakeTimeSample(58 * gap, 3, 0.0602266, 0.326953, -0.0465649));
  t_map->insert(
      ML::MakeTimeSample(59 * gap, 3, 0.0612832, 0.332689, -0.0473818));
  t_map->insert(
      ML::MakeTimeSample(60 * gap, 3, 0.0623398, 0.338425, -0.0481987));
  t_map->insert(
      ML::MakeTimeSample(61 * gap, 3, 0.0633964, 0.344161, -0.0490157));
  t_map->insert(
      ML::MakeTimeSample(62 * gap, 3, 0.0366773, 0.385925, -0.0560912));
  t_map->insert(
      ML::MakeTimeSample(63 * gap, 3, 0.0120733, 0.424634, -0.0608304));
  t_map->insert(
      ML::MakeTimeSample(64 * gap, 3, -0.0097957, 0.458297, -0.0635012));
  t_map->insert(
      ML::MakeTimeSample(65 * gap, 3, -0.0292913, 0.488201, -0.0641929));
  t_map->insert(
      ML::MakeTimeSample(66 * gap, 3, -0.0471049, 0.514844, -0.0634709));
  t_map->insert(
      ML::MakeTimeSample(67 * gap, 3, -0.0634871, 0.539225, -0.0622526));
  t_map->insert(
      ML::MakeTimeSample(68 * gap, 3, -0.0778417, 0.562098, -0.0612432));
  t_map->insert(
      ML::MakeTimeSample(69 * gap, 3, -0.0909455, 0.584358, -0.0603977));
  t_map->insert(
      ML::MakeTimeSample(70 * gap, 3, -0.102535, 0.60677, -0.0600985));
  t_map->insert(ML::MakeTimeSample(71 * gap, 3, -0.112479, 0.62969, -0.060496));
  t_map->insert(
      ML::MakeTimeSample(72 * gap, 3, -0.121143, 0.653316, -0.0615377));
  t_map->insert(
      ML::MakeTimeSample(73 * gap, 3, -0.128821, 0.677398, -0.0640899));
  t_map->insert(
      ML::MakeTimeSample(74 * gap, 3, -0.135673, 0.703159, -0.0683858));
  t_map->insert(ML::MakeTimeSample(75 * gap, 3, -0.14199, 0.73859, -0.0760915));
  t_map->insert(
      ML::MakeTimeSample(76 * gap, 3, -0.147423, 0.777769, -0.0849664));
  t_map->insert(
      ML::MakeTimeSample(77 * gap, 3, -0.150037, 0.819884, -0.0939017));
  t_map->insert(
      ML::MakeTimeSample(78 * gap, 3, -0.149959, 0.864308, -0.104512));
  t_map->insert(ML::MakeTimeSample(79 * gap, 3, -0.14778, 0.910103, -0.118158));
  t_map->insert(
      ML::MakeTimeSample(80 * gap, 3, -0.142361, 0.955739, -0.137786));
  t_map->insert(ML::MakeTimeSample(81 * gap, 3, -0.131218, 0.999063, -0.16973));
  t_map->insert(ML::MakeTimeSample(82 * gap, 3, -0.119019, 1.03855, -0.209982));
  t_map->insert(ML::MakeTimeSample(83 * gap, 3, -0.110653, 1.07403, -0.251569));
  t_map->insert(ML::MakeTimeSample(84 * gap, 3, -0.105177, 1.10421, -0.295037));
  t_map->insert(ML::MakeTimeSample(85 * gap, 3, -0.097827, 1.12836, -0.344321));
  t_map->insert(
      ML::MakeTimeSample(86 * gap, 3, -0.0902362, 1.14413, -0.399529));
  t_map->insert(
      ML::MakeTimeSample(87 * gap, 3, -0.0852941, 1.14961, -0.458165));
  t_map->insert(ML::MakeTimeSample(88 * gap, 3, -0.085444, 1.14543, -0.517042));
  t_map->insert(
      ML::MakeTimeSample(89 * gap, 3, -0.0924328, 1.13322, -0.572244));
  t_map->insert(ML::MakeTimeSample(90 * gap, 3, -0.107664, 1.11116, -0.622162));
  t_map->insert(ML::MakeTimeSample(91 * gap, 3, -0.131464, 1.08386, -0.665295));
  t_map->insert(ML::MakeTimeSample(92 * gap, 3, -0.162523, 1.05553, -0.704421));
  t_map->insert(ML::MakeTimeSample(93 * gap, 3, -0.202073, 1.02905, -0.741917));
  t_map->insert(
      ML::MakeTimeSample(94 * gap, 3, -0.250731, 0.997404, -0.779662));
  t_map->insert(
      ML::MakeTimeSample(95 * gap, 3, -0.302923, 0.959572, -0.817974));
  t_map->insert(ML::MakeTimeSample(96 * gap, 3, -0.355935, 0.92188, -0.852464));
  t_map->insert(
      ML::MakeTimeSample(97 * gap, 3, -0.410116, 0.887478, -0.880923));
  t_map->insert(ML::MakeTimeSample(98 * gap, 3, -0.465383, 0.851118, -0.90638));
  t_map->insert(
      ML::MakeTimeSample(99 * gap, 3, -0.519568, 0.812055, -0.928966));
  t_map->insert(
      ML::MakeTimeSample(100 * gap, 3, -0.576661, 0.770706, -0.949071));
  t_map->insert(
      ML::MakeTimeSample(101 * gap, 3, -0.633719, 0.730709, -0.963875));
  t_map->insert(
      ML::MakeTimeSample(102 * gap, 3, -0.686865, 0.694601, -0.973195));
  t_map->insert(
      ML::MakeTimeSample(103 * gap, 3, -0.741166, 0.667789, -0.978745));
  t_map->insert(
      ML::MakeTimeSample(104 * gap, 3, -0.793558, 0.64542, -0.984849));
  t_map->insert(
      ML::MakeTimeSample(105 * gap, 3, -0.837259, 0.614669, -0.997072));
  t_map->insert(
      ML::MakeTimeSample(106 * gap, 3, -0.873087, 0.579084, -1.01699));
  t_map->insert(
      ML::MakeTimeSample(107 * gap, 3, -0.901084, 0.541425, -1.04699));
  t_map->insert(
      ML::MakeTimeSample(108 * gap, 3, -0.930649, 0.501465, -1.07922));
  t_map->insert(ML::MakeTimeSample(109 * gap, 3, -0.965036, 0.468, -1.11087));
  t_map->insert(ML::MakeTimeSample(110 * gap, 3, -1.00023, 0.436888, -1.1421));
  t_map->insert(ML::MakeTimeSample(111 * gap, 3, -1.03441, 0.408579, -1.17178));
  t_map->insert(ML::MakeTimeSample(112 * gap, 3, -1.06625, 0.383024, -1.19939));
  t_map->insert(ML::MakeTimeSample(113 * gap, 3, -1.09651, 0.357157, -1.22877));
  t_map->insert(ML::MakeTimeSample(114 * gap, 3, -1.12474, 0.329323, -1.26055));
  t_map->insert(ML::MakeTimeSample(115 * gap, 3, -1.15021, 0.298959, -1.29461));
  t_map->insert(ML::MakeTimeSample(116 * gap, 3, -1.17221, 0.266011, -1.33167));
  t_map->insert(ML::MakeTimeSample(117 * gap, 3, -1.19013, 0.229648, -1.37181));
  t_map->insert(ML::MakeTimeSample(118 * gap, 3, -1.20316, 0.191911, -1.416));
  t_map->insert(ML::MakeTimeSample(119 * gap, 3, -1.20957, 0.152518, -1.46475));
  t_map->insert(ML::MakeTimeSample(120 * gap, 3, -1.20764, 0.109545, -1.51844));
  t_map->insert(ML::MakeTimeSample(121 * gap, 3, -1.1973, 0.0614206, -1.57516));
  t_map->insert(
      ML::MakeTimeSample(122 * gap, 3, -1.17923, 0.00538449, -1.63196));
  t_map->insert(
      ML::MakeTimeSample(123 * gap, 3, -1.1552, -0.0614122, -1.68489));
  t_map->insert(
      ML::MakeTimeSample(124 * gap, 3, -1.12643, -0.133948, -1.73367));
  t_map->insert(
      ML::MakeTimeSample(125 * gap, 3, -1.09398, -0.207897, -1.77863));
  t_map->insert(
      ML::MakeTimeSample(126 * gap, 3, -1.05959, -0.281249, -1.81909));
  t_map->insert(
      ML::MakeTimeSample(127 * gap, 3, -1.02507, -0.353024, -1.85426));
  t_map->insert(
      ML::MakeTimeSample(128 * gap, 3, -0.989323, -0.428637, -1.8832));
  t_map->insert(
      ML::MakeTimeSample(129 * gap, 3, -0.951353, -0.509812, -1.90679));
  t_map->insert(
      ML::MakeTimeSample(130 * gap, 3, -0.921218, -0.600587, -1.91469));
  t_map->insert(
      ML::MakeTimeSample(131 * gap, 3, -0.893946, -0.693193, -1.91469));
  t_map->insert(
      ML::MakeTimeSample(132 * gap, 3, -0.867918, -0.783398, -1.91075));
  t_map->insert(
      ML::MakeTimeSample(133 * gap, 3, -0.845857, -0.871789, -1.90242));
  t_map->insert(
      ML::MakeTimeSample(134 * gap, 3, -0.829712, -0.957745, -1.88922));
  t_map->insert(
      ML::MakeTimeSample(135 * gap, 3, -0.818934, -1.04207, -1.87036));
  t_map->insert(
      ML::MakeTimeSample(136 * gap, 3, -0.811536, -1.12515, -1.84629));
  t_map->insert(
      ML::MakeTimeSample(137 * gap, 3, -0.803802, -1.20993, -1.81643));
  t_map->insert(
      ML::MakeTimeSample(138 * gap, 3, -0.792811, -1.29887, -1.77915));
  t_map->insert(
      ML::MakeTimeSample(139 * gap, 3, -0.774697, -1.39143, -1.73446));
  t_map->insert(ML::MakeTimeSample(140 * gap, 3, -0.749088, -1.48473, -1.6821));
  t_map->insert(
      ML::MakeTimeSample(141 * gap, 3, -0.714611, -1.57506, -1.62426));
  t_map->insert(
      ML::MakeTimeSample(142 * gap, 3, -0.671748, -1.66144, -1.56025));
  t_map->insert(
      ML::MakeTimeSample(143 * gap, 3, -0.617086, -1.74148, -1.49221));
  t_map->insert(
      ML::MakeTimeSample(144 * gap, 3, -0.552153, -1.80966, -1.42647));
  t_map->insert(
      ML::MakeTimeSample(145 * gap, 3, -0.478969, -1.87268, -1.35607));
  t_map->insert(
      ML::MakeTimeSample(146 * gap, 3, -0.400941, -1.93318, -1.27461));
  t_map->insert(ML::MakeTimeSample(147 * gap, 3, -0.31794, -1.98679, -1.18759));
  t_map->insert(
      ML::MakeTimeSample(148 * gap, 3, -0.235583, -2.02912, -1.10214));
  t_map->insert(
      ML::MakeTimeSample(149 * gap, 3, -0.151595, -2.06122, -1.01895));
  t_map->insert(
      ML::MakeTimeSample(150 * gap, 3, -0.0712978, -2.08456, -0.937842));
  t_map->insert(
      ML::MakeTimeSample(151 * gap, 3, 0.00304343, -2.09884, -0.863138));
  t_map->insert(
      ML::MakeTimeSample(152 * gap, 3, 0.0692072, -2.10524, -0.797635));
  t_map->insert(ML::MakeTimeSample(153 * gap, 3, 0.13127, -2.10181, -0.747015));
  t_map->insert(
      ML::MakeTimeSample(154 * gap, 3, 0.185018, -2.09337, -0.704718));
  t_map->insert(
      ML::MakeTimeSample(155 * gap, 3, 0.230394, -2.08225, -0.666614));
  t_map->insert(
      ML::MakeTimeSample(156 * gap, 3, 0.266327, -2.07092, -0.628667));
  t_map->insert(ML::MakeTimeSample(157 * gap, 3, 0.29411, -2.05998, -0.589396));
  t_map->insert(ML::MakeTimeSample(158 * gap, 3, 0.318459, -2.04775, -0.55288));
  t_map->insert(
      ML::MakeTimeSample(159 * gap, 3, 0.342058, -2.03399, -0.517271));
  t_map->insert(
      ML::MakeTimeSample(160 * gap, 3, 0.363822, -2.02021, -0.480675));
}
