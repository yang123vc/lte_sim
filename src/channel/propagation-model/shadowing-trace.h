/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010,2011,2012 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of LTE-Sim
 *
 * LTE-Sim is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * LTE-Sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LTE-Sim; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Giuseppe Piro <g.piro@poliba.it>
 */




#ifndef SHADOWNING_TRACE_H_
#define SHADOWNING_TRACE_H_

/*
 * Shadowing (LogNormal Distribution, 0db average and 6dB deviation)
 */
static double shadowing_probability[201] = {
0, 0.0106511, 0.0537603, 0.1143, 0.179757, 0.244109, 0.304737, 0.360668, 0.411712, 0.458045, 0.5, 0.537966, 0.572335, 0.60348, 0.631743, 0.657432, 0.680824, 0.702162, 0.721662, 0.739516, 0.755891, 0.770937, 0.784785, 0.797552, 0.809341, 0.820243, 0.83034, 0.839706, 0.848406, 0.856497, 0.864031, 0.871057, 0.877616, 0.883746, 0.889482, 0.894854, 0.899892, 0.90462, 0.909062, 0.913239, 0.917171, 0.920876, 0.924368, 0.927664, 0.930777, 0.933719, 0.936502, 0.939136, 0.941631, 0.943996, 0.94624, 0.948369, 0.950391, 0.952313, 0.954141, 0.955879, 0.957535, 0.959111, 0.960614, 0.962047, 0.963414, 0.964719, 0.965965, 0.967156, 0.968294, 0.969383, 0.970425, 0.971421, 0.972376, 0.973291, 0.974167, 0.975008, 0.975814, 0.976587, 0.97733, 0.978043, 0.978727, 0.979386, 0.980018, 0.980626, 0.981212, 0.981775, 0.982317, 0.982838, 0.983341, 0.983825, 0.984292, 0.984742, 0.985176, 0.985594, 0.985998, 0.986387, 0.986764, 0.987127, 0.987478, 0.987816, 0.988144, 0.988461, 0.988767, 0.989063, 0.989349, 0.989626, 0.989894, 0.990153, 0.990405, 0.990648, 0.990884, 0.991112, 0.991333, 0.991547, 0.991755, 0.991957, 0.992152, 0.992342, 0.992526, 0.992704, 0.992877, 0.993045, 0.993208, 0.993367, 0.993521, 0.99367, 0.993815, 0.993957, 0.994094, 0.994227, 0.994357, 0.994483, 0.994605, 0.994724, 0.99484, 0.994953, 0.995063, 0.99517, 0.995274, 0.995375, 0.995474, 0.99557, 0.995663, 0.995754, 0.995843, 0.99593, 0.996014, 0.996096, 0.996176, 0.996254, 0.99633, 0.996404, 0.996477, 0.996547, 0.996616, 0.996683, 0.996749, 0.996813, 0.996875, 0.996936, 0.996995, 0.997053, 0.99711, 0.997165, 0.997219, 0.997272, 0.997324, 0.997374, 0.997423, 0.997471, 0.997518, 0.997564, 0.997609, 0.997653, 0.997696, 0.997738, 0.997779, 0.997819, 0.997858, 0.997896, 0.997934, 0.997971, 0.998007, 0.998042, 0.998076, 0.99811, 0.998143, 0.998175, 0.998206, 0.998237, 0.998268, 0.998297, 0.998326, 0.998354, 0.998382, 0.99841, 0.998436, 0.998462, 0.998488, 0.998513, 0.998538, 0.998562, 0.998585, 0.998608, 0.998631,
 };

static double shadowing_value[201] = {
0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10, 10.1, 10.2, 10.3, 10.4, 10.5, 10.6, 10.7, 10.8, 10.9, 11, 11.1, 11.2, 11.3, 11.4, 11.5, 11.6, 11.7, 11.8, 11.9, 12, 12.1, 12.2, 12.3, 12.4, 12.5, 12.6, 12.7, 12.8, 12.9, 13, 13.1, 13.2, 13.3, 13.4, 13.5, 13.6, 13.7, 13.8, 13.9, 14, 14.1, 14.2, 14.3, 14.4, 14.5, 14.6, 14.7, 14.8, 14.9, 15, 15.1, 15.2, 15.3, 15.4, 15.5, 15.6, 15.7, 15.8, 15.9, 16, 16.1, 16.2, 16.3, 16.4, 16.5, 16.6, 16.7, 16.8, 16.9, 17, 17.1, 17.2, 17.3, 17.4, 17.5, 17.6, 17.7, 17.8, 17.9, 18, 18.1, 18.2, 18.3, 18.4, 18.5, 18.6, 18.7, 18.8, 18.9, 19, 19.1, 19.2, 19.3, 19.4, 19.5, 19.6, 19.7, 19.8, 19.9, 20,
 };


#endif /* SHADOWNING_TRACE_H_ */
