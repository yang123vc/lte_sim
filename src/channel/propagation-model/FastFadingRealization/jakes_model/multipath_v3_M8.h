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



#ifndef MULTIPATH_V3_M8_H_
#define MULTIPATH_V3_M8_H_

static float multipath_M8_v_3[3000] = {
 8.84395, 8.83757, 8.82693, 8.81201, 8.79278, 8.76919, 8.74121, 8.70877, 8.67181, 8.63025, 8.584, 8.53297, 8.47703, 8.41607, 8.34994, 8.27847, 8.2015, 8.11883, 8.03023, 7.93547, 7.83425, 7.72629, 7.61124, 7.4887, 7.35826, 7.21941, 7.07161, 6.91423, 6.74655, 6.56775, 6.37686, 6.17278, 5.95421, 5.71962, 5.46717, 5.19467, 4.89943, 4.57813, 4.2266, 3.83952, 3.40992, 2.92844, 2.38213, 1.75224, 1.01032, 0.109893, -1.03278, -2.59372, -5.06126, -11.3684, -7.80123, -3.92947, -1.9183, -0.55209, 0.482304, 1.31364, 2.00755, 2.60207, 3.12122, 3.58114, 3.9932, 4.36573, 4.70498, 5.01579, 5.30197, 5.56657, 5.81208, 6.04055, 6.2537, 6.45295, 6.63954, 6.81452, 6.97879, 7.13315, 7.27828, 7.41477, 7.54318, 7.66397, 7.77755, 7.88431, 7.98457, 8.07865, 8.16681, 8.24929, 8.32631, 8.39809, 8.46478, 8.52656, 8.58358, 8.63596, 8.68383, 8.7273, 8.76647, 8.80142, 8.83223, 8.85898, 8.88172, 8.90051, 8.91539, 8.92642, 8.93361, 8.937, 8.93662, 8.93246, 8.92455, 8.91288, 8.89746, 8.87828, 8.85531, 8.82854, 8.79795, 8.7635, 8.72514, 8.68284, 8.63655, 8.58619, 8.5317, 8.47301, 8.41002, 8.34265, 8.27078, 8.1943, 8.11308, 8.02698, 7.93583, 7.83946, 7.73768, 7.63028, 7.51703, 7.39765, 7.27186, 7.13935, 6.99975, 6.85265, 6.69762, 6.53415, 6.36165, 6.17949, 5.98692, 5.78309, 5.56702, 5.33756, 5.09338, 4.8329, 4.55423, 4.2551, 3.93274, 3.58373, 3.20373, 2.78723, 2.32696, 1.81314, 1.23216, 0.564223, -0.221038, -1.17374, -2.38579, -4.05597, -6.7693, -15.2699, -8.27116, -4.87781, -3.01747, -1.73603, -0.762108, 0.0202704, 0.671513, 1.22711, 1.7097, 2.1346, 2.51265, 2.85183, 3.15816, 3.43628, 3.68988, 3.9219, 4.13474, 4.33039, 4.51049, 4.67644, 4.82942, 4.97042, 5.10033, 5.21988, 5.32973, 5.43044, 5.52252, 5.60639, 5.68245, 5.75103, 5.81242, 5.86689, 5.91466, 5.95594, 5.99089, 6.01968, 6.04242, 6.05923, 6.07019, 6.07538, 6.07485, 6.06864, 6.05677, 6.03925, 6.01607, 5.9872, 5.9526, 5.91222, 5.86598, 5.81378, 5.75552, 5.69107, 5.62027, 5.54295, 5.45889, 5.36788, 5.26964, 5.16388, 5.05026, 4.92839, 4.79784, 4.6581, 4.5086, 4.3487, 4.17764, 3.99455, 3.79842, 3.58809, 3.36215, 3.11895, 2.85654, 2.57249, 2.26388, 1.92705, 1.55735, 1.1488, 0.693486, 0.180617, -0.405009, -1.08583, -1.89697, -2.8981, -4.2034, -6.07853, -9.44483, -17.1896, -8.19988, -5.48238, -3.83195, -2.64647, -1.72331, -0.969221, -0.333507, 0.21449, 0.694724, 1.12091, 1.50289, 1.84795, 2.16164, 2.44829, 2.71135, 2.95357, 3.17723, 3.3842, 3.57607, 3.75416, 3.9196, 4.07336, 4.21629, 4.3491, 4.47243, 4.58684, 4.69282, 4.7908, 4.88115, 4.96423, 5.04032, 5.10969, 5.17257, 5.22918, 5.2797, 5.32428, 5.36308, 5.39621, 5.42379, 5.44589, 5.4626, 5.47398, 5.48008, 5.48092, 5.47653, 5.46693, 5.4521, 5.43203, 5.40669, 5.37604, 5.34002, 5.29857, 5.2516, 5.199, 5.14068, 5.07648, 5.00626, 4.92984, 4.84702, 4.75759, 4.66128, 4.55782, 4.44689, 4.32812, 4.2011, 4.06537, 3.92041, 3.76561, 3.60029, 3.42366, 3.2348, 3.03267, 2.81602, 2.58339, 2.33303, 2.06287, 1.77035, 1.45235, 1.10495, 0.723182, 0.300569, -0.171509, -0.704896, -1.31649, -2.03162, -2.89072, -3.96452, -5.39462, -7.53844, -11.9375, -13.2009, -7.98067, -5.68824, -4.20467, -3.10907, -2.24258, -1.52782, -0.921257, -0.395928, 0.0660122, 0.476993, 0.846017, 1.17981, 1.48354, 1.76124, 2.01613, 2.25084, 2.4675, 2.6679, 2.85352, 3.02565, 3.18534, 3.33354, 3.47104, 3.59854, 3.71664, 3.82587, 3.9267, 4.01954, 4.10476, 4.18267, 4.25356, 4.31767, 4.37523, 4.42642, 4.47143, 4.51039, 4.54343, 4.57066, 4.59218, 4.60805, 4.61833, 4.62308, 4.62231, 4.61605, 4.60428, 4.58701, 4.5642, 4.5358, 4.50177, 4.46202, 4.41647, 4.36502, 4.30753, 4.24385, 4.17383, 4.09727, 4.01396, 3.92364, 3.82603, 3.72083, 3.60767, 3.48614, 3.35579, 3.21609, 3.06644, 2.90615, 2.73444, 2.55039, 2.35295, 2.14085, 1.91265, 1.66657, 1.40053, 1.11196, 0.797702, 0.45381, 0.0752542, -0.344511, -0.814218, -1.34588, -1.95667, -2.67238, -3.53435, -4.6152, -6.0614, -8.24785, -12.8606, -13.3679, -8.42887, -6.18451, -4.71867, -3.63093, -2.76787, -2.05419, -1.4473, -0.920738, -0.456954, -0.043694, 0.327928, 0.664562, 0.971315, 1.25219, 1.51038, 1.74849, 1.96863, 2.17258, 2.36182, 2.53762, 2.70104, 2.85301, 2.99432, 3.12567, 3.24767, 3.36084, 3.46565, 3.56252, 3.65179, 3.7338, 3.80884, 3.87714, 3.93893, 3.99442, 4.04376, 4.08712, 4.12461, 4.15636, 4.18246, 4.20298, 4.218, 4.22756, 4.23168, 4.23041, 4.22374, 4.21166, 4.19416, 4.17121, 4.14275, 4.10873, 4.06906, 4.02366, 3.97241, 3.91518, 3.85183, 3.78219, 3.70607, 3.62324, 3.53345, 3.43643, 3.33186, 3.21937, 3.09857, 2.969, 2.83012, 2.68134, 2.52198, 2.35124, 2.16823, 1.97188, 1.76095, 1.53397, 1.28922, 1.02459, 0.737539, 0.424935, 0.0828566, -0.293687, -0.711184, -1.17828, -1.70687, -2.31391, -3.02484, -3.88035, -4.95161, -6.38146, -8.53166, -12.9788, -14.0436, -8.89433, -6.61013, -5.12687, -4.02902, -3.15914, -2.44039, -1.82946, -1.29953, -0.832827, -0.416963, -0.0429661, 0.295875, 0.604707, 0.887564, 1.14766, 1.38762, 1.60957, 1.81529, 2.00628, 2.18381, 2.34895, 2.50264, 2.64567, 2.77874, 2.90246, 3.01736, 3.12392, 3.22254, 3.31359, 3.3974, 3.47426, 3.54441, 3.60808, 3.66548, 3.71676, 3.7621, 3.80162, 3.83543, 3.86364, 3.88633, 3.90357, 3.9154, 3.92187, 3.923, 3.91881, 3.9093, 3.89445, 3.87423, 3.84862, 3.81754, 3.78094, 3.73874, 3.69083, 3.63709, 3.5774, 3.5116, 3.43951, 3.36094, 3.27566, 3.18342, 3.08392, 2.97684, 2.86183, 2.73846, 2.60625, 2.46469, 2.31316, 2.15096, 1.97728, 1.7912, 1.59164, 1.37734, 1.14678, 0.898201, 0.629447, 0.337909, 0.0203634, -0.327229, -0.710022, -1.13473, -1.61036, -2.14929, -2.76934, -3.4974, -4.37688, -5.48483, -6.97933, -9.27821, -14.469, -13.3296, -8.91471, -6.77855, -5.3599, -4.29888, -3.4532, -2.75188, -2.15433, -1.63518, -1.1775, -0.769405, -0.402272, -0.0696234, 0.233526, 0.511089, 0.766195, 1.00138, 1.21875, 1.42001, 1.60665, 1.77989, 1.94078, 2.09024, 2.22905, 2.35788, 2.47733, 2.58792, 2.6901, 2.78428, 2.87081, 2.95001, 3.02214, 3.08744, 3.14614, 3.19841, 3.24442, 3.28431, 3.31819, 3.34617, 3.36833, 3.38473, 3.39542, 3.40045, 3.39981, 3.39353, 3.38158, 3.36394, 3.34056, 3.31138, 3.27634, 3.23533, 3.18825, 3.13495, 3.0753, 3.0091, 2.93617, 2.85626, 2.76911, 2.67443, 2.57187, 2.46106, 2.34155, 2.21285, 2.07438, 1.92551, 1.76548, 1.59342, 1.40834, 1.20905, 0.994184, 0.762087, 0.510794, 0.23792, -0.0594627, -0.384997, -0.743297, -1.14032, -1.58393, -2.08484, -2.65816, -3.32613, -4.12355, -5.10941, -6.39627, -8.24472, -11.5476, -20.0138, -10.4541, -7.69068, -6.01668, -4.81374, -3.87564, -3.1079, -2.45924, -1.89874, -1.40628, -0.968049, -0.574141, -0.217221, 0.108294, 0.406759, 0.681627, 0.935688, 1.17122, 1.39013, 1.59398, 1.78412, 1.96169, 2.12767, 2.28291, 2.42815, 2.56402, 2.69109, 2.80987, 2.92079, 3.02424, 3.12058, 3.21011, 3.29311, 3.36983, 3.44049, 3.50528, 3.5644, 3.61798, 3.66618, 3.70912, 3.74691, 3.77965, 3.80741, 3.83028, 3.84832, 3.86157, 3.87007, 3.87387, 3.87297, 3.86739, 3.85713, 3.84219, 3.82254, 3.79817, 3.76904, 3.73511, 3.69631, 3.65258, 3.60386, 3.55004, 3.49102, 3.4267, 3.35694, 3.28159, 3.2005, 3.11348, 3.02032, 2.92081, 2.81468, 2.70165, 2.5814, 2.45359, 2.31781, 2.17361, 2.02049, 1.85788, 1.68511, 1.50145, 1.30604, 1.09787, 0.875811, 0.638492, 0.384315, 0.111369, -0.182654, -0.500574, -0.845886, -1.22299, -1.63754, -2.09697, -2.6113, -3.19456, -3.8672, -4.66074, -5.62759, -6.86484, -8.58629, -11.4452, -22.5343, -12.2344, -9.05535, -7.26103, -6.01258, -5.05929, -4.2918, -3.65247, -3.10718, -2.63406, -2.21826, -1.84922, -1.51919, -1.22231, -0.954044, -0.710806, -0.489732, -0.288492, -0.105171, 0.061817, 0.213801, 0.351899, 0.477055, 0.590071, 0.69163, 0.782311, 0.862607, 0.932935, 0.993644, 1.04502, 1.08731, 1.12069, 1.1453, 1.16124, 1.16857, 1.1673, 1.1574, 1.13881, 1.11142, 1.07507, 1.02956, 0.974653, 0.910027, 0.835317, 0.750085, 0.65381, 0.545881, 0.425579, 0.292058, 0.144317, -0.0188277, -0.198787, -0.397252, -0.616272, -0.858348, -1.12657, -1.42484, -1.75809, -2.13279, -2.55756, -3.04427, -3.60986, -4.27978, -5.09474, -6.12602, -7.51673, -9.62975, -14.0508, -15.0263, -9.85658, -7.53631, -6.01508, -4.87871, -3.97008, -3.21247, -2.56262, -1.99372, -1.48799, -1.03303, -0.619859, -0.241751, 0.106461, 0.428829, 0.728592, 1.00838, 1.27036, 1.51632, 1.74779, 1.96606, 2.17222, 2.36724, 2.55193, 2.72702, 2.89315, 3.05088, 3.20069, 3.34305, 3.47835, 3.60693, 3.72913, 3.84523, 3.9555, 4.06016, 4.15944, 4.25353, 4.34262, 4.42686, 4.5064, 4.58139, 4.65194, 4.71817, 4.78018, 4.83808, 4.89193, 4.94183, 4.98785, 5.03005, 5.06848, 5.10321, 5.13428, 5.16173, 5.18559, 5.20591, 5.2227, 5.23598, 5.24579, 5.25212, 5.25498, 5.25439, 5.25034, 5.24282, 5.23184, 5.21737, 5.1994, 5.1779, 5.15286, 5.12424, 5.09199, 5.05609, 5.01649, 4.97312, 4.92594, 4.87487, 4.81985, 4.76079, 4.69761, 4.63021, 4.55849, 4.48232, 4.40159, 4.31615, 4.22586, 4.13054, 4.03001, 3.92407, 3.81251, 3.69506, 3.57148, 3.44145, 3.30465, 3.16071, 3.00921, 2.8497, 2.68165, 2.50448, 2.31753, 2.12002, 1.9111, 1.68975, 1.4548, 1.20489, 0.938377, 0.65334, 0.347435, 0.0178053, -0.339092, -0.727726, -1.15384, -1.625, -2.15142, -2.74745, -3.43403, -4.24361, -5.23041, -6.49574, -8.26581, -11.2534, -27.6493, -11.5193, -8.4895, -6.74581, -5.52402, -4.58771, -3.83215, -3.20169, -2.66317, -2.19525, -1.78339, -1.41722, -1.08911, -0.793271, -0.525205, -0.28136, -0.0588811, 0.144564, 0.330897, 0.501723, 0.658393, 0.802051, 0.933678, 1.05411, 1.16409, 1.26423, 1.35508, 1.43713, 1.51079, 1.57643, 1.63437, 1.68489, 1.72823, 1.7646, 1.7942, 1.81716, 1.83362, 1.8437, 1.84748, 1.84502, 1.83637, 1.82156, 1.8006, 1.77348, 1.74018, 1.70065, 1.65482, 1.60261, 1.54391, 1.4786, 1.40652, 1.3275, 1.24133, 1.14778, 1.04657, 0.937391, 0.819897, 0.693683, 0.55829, 0.413193, 0.25779, 0.0913918, -0.0868, -0.277709, -0.482414, -0.70218, -0.938502, -1.19317, -1.46832, -1.76659, -2.09122, -2.44625, -2.83689, -3.26989, -3.75432, -4.30269, -4.933, -5.67245, -6.56509, -7.68931, -9.20676, -11.5489, -16.9469, -15.3311, -11.0551, -8.9578, -7.56196, -6.51835, -5.68772, -5.00026, -4.41595, -3.90971, -3.46477, -3.06939, -2.71499, -2.39515, -2.10492, -1.84042, -1.59854, -1.37676, -1.17299, -0.985521, -0.812898, -0.653896, -0.507468, -0.372715, -0.248861, -0.135232, -0.0312432, 0.0636197, 0.149806, 0.22771, 0.297679, 0.360018, 0.414995, 0.462845, 0.503774, 0.537961, 0.56556, 0.586704, 0.601505, 0.610055, 0.61243, 0.608686, 0.598865, 0.582993, 0.561079, 0.533118, 0.499089, 0.458957, 0.412669, 0.360159, 0.301342, 0.236116, 0.164363, 0.0859413, 0.000691624, -0.0915696, -0.191051, -0.297987, -0.412644, -0.535321, -0.666357, -0.80613, -0.955071, -1.11366, -1.28246, -1.46208, -1.65324, -1.85676, -2.07358, -2.30479, -2.55166, -2.8157, -3.09867, -3.4027, -3.73037, -4.08485, -4.47008, -4.89106, -5.35429, -5.86836, -6.44509, -7.10125, -7.86191, -8.76698, -9.88591, -11.3569, -13.5252, -17.836, -19.7371, -14.3444, -12.0807, -10.6531, -9.62453, -8.83225, -8.19752, -7.67635, -7.24173, -6.87594, -6.56684, -6.30578, -6.08648, -5.90433, -5.75592, -5.63875, -5.55106, -5.4917, -5.46006, -5.45601, -5.47991, -5.53264, -5.61565, -5.73104, -5.88175, -6.07174, -6.30644, -6.59319, -6.94228, -7.36839, -7.89339, -8.55172, -9.40197, -10.5562, -12.2741, -15.4441, -23.9025, -14.1334, -11.2473, -9.45621, -8.13925, -7.0895, -6.21216, -5.45578, -4.78926, -4.19237, -3.65117, -3.15568, -2.69845, -2.27382, -1.87735, -1.50551, -1.15544, -0.824783, -0.511592, -0.214214, 0.0687498, 0.338499, 0.59607, 0.842365, 1.07817, 1.30419, 1.52104, 1.72926, 1.92934, 2.12173, 2.30681, 2.48495, 2.65648, 2.82168, 2.98082, 3.13415, 3.2819, 3.42426, 3.56144, 3.69359, 3.82089, 3.94348, 4.0615, 4.17506, 4.2843, 4.38932, 4.49021, 4.58707, 4.67998, 4.76902, 4.85427, 4.93579, 5.01364, 5.08787, 5.15855, 5.2257, 5.28939, 5.34964, 5.40648, 5.45996, 5.51009, 5.55689, 5.60038, 5.64059, 5.67751, 5.71116, 5.74154, 5.76865, 5.79249, 5.81305, 5.83032, 5.84429, 5.85494, 5.86224, 5.86616, 5.86669, 5.86378, 5.85739, 5.84748, 5.834, 5.81689, 5.79609, 5.77153, 5.74313, 5.71082, 5.6745, 5.63407, 5.58943, 5.54045, 5.48701, 5.42895, 5.36614, 5.29838, 5.22551, 5.14729, 5.06352, 4.97393, 4.87825, 4.77617, 4.66733, 4.55137, 4.42784, 4.29626, 4.15609, 4.00671, 3.84742, 3.67742, 3.49576, 3.30139, 3.09304, 2.86924, 2.62823, 2.3679, 2.08571, 1.77849, 1.44231, 1.07216, 0.661541, 0.201767, -0.31908, -0.918024, -1.62059, -2.46762, -3.53064, -4.95334, -7.10059, -11.5741, -12.4924, -7.38218, -5.09412, -3.60105, -2.49112, -1.60786, -0.87481, -0.248831, 0.296815, 0.779856, 1.21265, 1.60415, 1.96105, 2.28852, 2.59056, 2.87042, 3.13069, 3.37354, 3.60073, 3.81379, 4.01398, 4.20239, 4.37996, 4.54751, 4.70575, 4.8553, 4.99671, 5.13047, 5.25701, 5.37672, 5.48994, 5.59698, 5.69812, 5.79362, 5.88369, 5.96855, 6.04838, 6.12334, 6.1936, 6.25928, 6.32052, 6.37743, 6.4301, 6.47864, 6.52312, 6.56362, 6.60021, 6.63294, 6.66187, 6.68704, 6.70849, 6.72625, 6.74034, 6.75079, 6.75761, 6.76081, 6.76039, 6.75635, 6.74868, 6.73736, 6.72238, 6.70371, 6.68131, 6.65516, 6.6252, 6.59138, 6.55364, 6.51192, 6.46615, 6.41623, 6.36208, 6.3036, 6.24066, 6.17314, 6.10091, 6.02381, 5.94167, 5.85431, 5.76152, 5.66307, 5.5587, 5.44815, 5.33109, 5.20718, 5.07603, 4.9372, 4.79021, 4.6345, 4.46945, 4.29433, 4.10833, 3.91049, 3.69972, 3.47474, 3.23402, 2.97575, 2.69778, 2.39745, 2.07151, 1.71586, 1.3253, 0.893004, 0.409873, -0.136693, -0.764807, -1.50188, -2.39233, -3.5154, -5.03495, -7.39099, -12.9087, -10.9864, -6.77502, -4.68449, -3.28519, -2.23408, -1.39367, -0.694831, -0.0978798, 0.422098, 0.881767, 1.29283, 1.66381, 2.00112, 2.3097, 2.59342, 2.8554, 3.09818, 3.32382, 3.53407, 3.73038, 3.914, 4.086, 4.24728, 4.39864, 4.54079, 4.67432, 4.79978, 4.91764, 5.02833, 5.13223, 5.22966, 5.32094, 5.40634, 5.4861, 5.56045, 5.62958, 5.69367, 5.7529, 5.8074, 5.85731, 5.90276, 5.94384, 5.98067, 6.01333, 6.04189, 6.06643, 6.08701, 6.10368, 6.11649, 6.12548, 6.13068, 6.13212, 6.12983, 6.1238, 6.11406, 6.1006, 6.08341, 6.0625, 6.03784, 6.00941, 5.97718, 5.94111, 5.90117, 5.8573, 5.80945, 5.75754, 5.70152, 5.64128, 5.57675, 5.50783, 5.43438, 5.3563, 5.27344, 5.18565, 5.09275, 4.99456, 4.89088, 4.78146, 4.66605, 4.54438, 4.41612, 4.28092, 4.13838, 3.98806, 3.82947, 3.66203, 3.48511, 3.29796, 3.09976, 2.88952, 2.66612, 2.42822, 2.17428, 1.90242, 1.61039, 1.29546, 0.954216, 0.5824, 0.17454, -0.276532, -0.780468, -1.3507, -2.00669, -2.77826, -3.71444, -4.90471, -6.54099, -9.1783, -16.8806, -11.018, -7.49753, -5.59279, -4.28433, -3.28973, -2.48955, -1.82195, -1.25073, -0.752874, -0.312817, 0.0804459, 0.434988, 0.756906, 1.05092, 1.32075, 1.56938, 1.79927, 2.01242, 2.21051, 2.39497, 2.567, 2.72763, 2.87777, 3.0182, 3.14959, 3.27254, 3.38758, 3.49519, 3.59577, 3.68971, 3.77734, 3.85896, 3.93485, 4.00524, 4.07036, 4.13042, 4.18559, 4.23604, 4.28193, 4.32339, 4.36055, 4.39352, 4.42241, 4.44731, 4.46831, 4.48549, 4.49891, 4.50863, 4.51473, 4.51724, 4.5162, 4.51167, 4.50367, 4.49223, 4.47737, 4.45911, 4.43747, 4.41245, 4.38406, 4.35229, 4.31714, 4.27861, 4.23667, 4.1913, 4.14249, 4.09019, 4.03439, 3.97503, 3.91206, 3.84545, 3.77512, 3.70101, 3.62305, 3.54116, 3.45525, 3.36522, 3.27095, 3.17234, 3.06925, 2.96154, 2.84904, 2.73159, 2.609, 2.48104, 2.34749, 2.20809, 2.06256, 1.91057, 1.75177, 1.58577, 1.41212, 1.23032, 1.03981, 0.839951, 0.630005, 0.409137, 0.176378, -0.0693963, -0.329504, -0.605501, -0.899242, -1.21296, -1.54938, -1.91188, -2.30468, -2.73322, -3.2046, -3.72837, -4.31781, -4.99215, -5.78077, -6.73186, -7.93304, -9.57098, -12.1783, -19.3901, -14.3487, -10.7493, -8.83686, -7.53535, -6.55304, -5.76763, -5.11611, -4.56171, -4.0811, -3.65853, -3.28286, -2.94596, -2.64165, -2.36519, -2.11281, -1.88151, -1.6688, -1.47268, -1.29143, -1.12362, -0.968026, -0.823609, -0.689456, -0.564776, -0.448879, -0.341153, -0.241059, -0.148116, -0.0618965, 0.0179854, 0.0918755, 0.160086, 0.222901, 0.280576, 0.333346, 0.381423, 0.425004, 0.464266, 0.499373, 0.530477, 0.557714, 0.581214, 0.601092, 0.617457, 0.630408, 0.640037, 0.646428, 0.649659, 0.649799, 0.646915, 0.641066, 0.632304, 0.620679, 0.606234, 0.589008, 0.569034, 0.546342, 0.520956, 0.492897, 0.46218, 0.428817, 0.392814, 0.354173, 0.312892, 0.268962, 0.222371, 0.173101, 0.121129, 0.066426, 0.00895687, -0.0513199, -0.114452, -0.180496, -0.249514, -0.321578, -0.396768, -0.475175, -0.5569, -0.642055, -0.730766, -0.823172, -0.919428, -1.01971, -1.1242, -1.23312, -1.3467, -1.4652, -1.58893, -1.71821, -1.8534, -1.99493, -2.14327, -2.29893, -2.46252, -2.63473, -2.81634, -3.00826, -3.21154, -3.42741, -3.65732, -3.90299, -4.16647, -4.45027, -4.75748, -5.09192, -5.45849, -5.8635, -6.31537, -6.82562, -7.41063, -8.09479, -8.91689, -9.94409, -11.3089, -13.3375, -17.3346, -20.1242, -14.1789, -11.7402, -10.1745, -9.01572, -8.09357, -7.32634, -6.6685, -6.09205, -5.57856, -5.11523, -4.69283, -4.30446, -3.94485, -3.60989, -3.29627, -3.00136, -2.72295, -2.45924, -2.2087, -1.97006, -1.7422, -1.52419, -1.3152, -1.11452, -0.92152, -0.735653, -0.556429, -0.383418, -0.216232, -0.0545269, 0.102007, 0.253649, 0.40065, 0.543238, 0.681619, 0.81598, 0.946493, 1.07331, 1.19658, 1.31643, 1.43298, 1.54634, 1.6566, 1.76386, 1.86821, 1.96972, 2.06847, 2.16452, 2.25793, 2.34875, 2.43705, 2.52286, 2.60623, 2.6872, 2.76581, 2.84209, 2.91607, 2.98778, 3.05724, 3.12448, 3.18952, 3.25238, 3.31307, 3.37162, 3.42802, 3.4823, 3.53446, 3.58451, 3.63246, 3.67832, 3.72207, 3.76374, 3.80332, 3.8408, 3.87619, 3.90948, 3.94066, 3.96974, 3.9967, 4.02153, 4.04423, 4.06478, 4.08317, 4.09938, 4.1134, 4.12522, 4.13481, 4.14214, 4.14721, 4.14999, 4.15044, 4.14855, 4.14428, 4.13761, 4.12849, 4.1169, 4.1028, 4.08613, 4.06688, 4.04497, 4.02038, 3.99304, 3.9629, 3.9299, 3.89398, 3.85507, 3.8131, 3.768, 3.71967, 3.66804, 3.61301, 3.55449, 3.49236, 3.4265, 3.3568, 3.28312, 3.20531, 3.12322, 3.03669, 2.94552, 2.84951, 2.74845, 2.6421, 2.5302, 2.41247, 2.28857, 2.15818, 2.02089, 1.87628, 1.72386, 1.5631, 1.39338, 1.214, 1.02418, 0.823018, 0.609459, 0.382289, 0.14008, -0.118855, -0.396535, -0.695402, -1.01844, -1.36938, -1.7529, -2.17509, -2.64398, -3.17048, -3.77003, -4.46544, -5.29245, -6.31203, -7.64141, -9.55592, -13.0327, -19.6354, -11.4857, -8.83893, -7.21983, -6.05459, -5.14697, -4.40597, -3.78191, -3.24464, -2.77453, -2.35803, -1.98546, -1.64962, -1.34502, -1.0674, -0.813372, -0.580213, -0.365693, -0.167973, 0.0144853, 0.182973, 0.338585, 0.482257, 0.61479, 0.736872, 0.8491, 0.951988, 1.04598, 1.13147, 1.20878, 1.27821, 1.33999, 1.39433, 1.44142, 1.48139, 1.51435, 1.5404, 1.55958, 1.57194, 1.57748, 1.57618, 1.56801, 1.5529, 1.53075, 1.50144, 1.46482, 1.42071, 1.36889, 1.30911, 1.24106, 1.16441, 1.07874, 0.98361, 0.878478, 0.762731, 0.63566, 0.496439, 0.344103, 0.177523, -0.004635, -0.203958, -0.422348, -0.662115, -0.926087, -1.21779, -1.54166, -1.90344, -2.31069, -2.77364, -3.30666, -3.93078, -4.67861, -5.60472, -6.81128, -8.52708, -11.4778, -30.963, -11.5108, -8.44572, -6.64829, -5.3682, -4.37173, -3.55505, -2.86286, -2.26217, -1.73175, -1.25706, -0.827784, -0.43627, -0.0767275, 0.255349, 0.563528, 0.850686, 1.11918, 1.37094, 1.60762, 1.83058, 2.041, 2.23988, 2.42811, 2.60644, 2.77553, 2.93598, 3.08829, 3.23293, 3.3703, 3.50077, 3.62467, 3.74229, 3.85389, 3.95972, 4.05998, 4.15488, 4.24458, 4.32925, 4.40902, 4.48404, 4.55441, 4.62025, 4.68164, 4.73867, 4.79142, 4.83996, 4.88433, 4.92459, 4.96079, 4.99296, 5.02112, 5.04531, 5.06553, 5.08179, 5.0941, 5.10245, 5.10683, 5.10722, 5.10361, 5.09595, 5.08421, 5.06835, 5.0483, 5.02402, 4.99543, 4.96244, 4.92498, 4.88294, 4.83622, 4.78468, 4.72819, 4.66661, 4.59976, 4.52745, 4.44949, 4.36564, 4.27565, 4.17924, 4.0761, 3.96588, 3.84818, 3.72257, 3.58856, 3.44557, 3.29298, 3.13007, 2.95599, 2.7698, 2.57037, 2.35639, 2.12634, 1.87836, 1.61025, 1.3193, 1.00221, 0.654767, 0.271643, -0.15416, -0.632025, -1.17497, -1.80179, -2.54111, -3.43962, -4.58162, -6.14461, -8.62297, -15.0361, -11.2625, -7.42359, -5.41879, -4.05407, -3.01949, -2.18727, -1.49216, -0.896321, -0.375839, 0.0853615, 0.498611, 0.872193, 1.21235, 1.52388, 1.8106, 2.07553, 2.32115, 2.54949, 2.76226, 2.96088, 3.14656, 3.32034, 3.48311, 3.63565, 3.77863, 3.91264, 4.03819, 4.15574, 4.26569, 4.3684, 4.46419, 4.55333, 4.63607, 4.71264, 4.78323, 4.84802, 4.90715, 4.96076, 5.00897, 5.05187, 5.08955, 5.12209, 5.14953, 5.17193, 5.18931, 5.2017, 5.2091, 5.21151, 5.20891, 5.20127, 5.18855, 5.1707, 5.14765, 5.11932, 5.0856, 5.0464, 5.00158, 4.95099, 4.89447, 4.83181, 4.76282, 4.68723, 4.60479, 4.51519, 4.41806, 4.31303, 4.19965, 4.07741, 3.94573, 3.80398, 3.65138, 3.48707, 3.31005, 3.11913, 2.91294, 2.68982, 2.44782, 2.18453, 1.89705, 1.58173, 1.23396, 0.847794, 0.415385, -0.0739564, -0.635285, -1.29078, -2.07512, -3.04703, -4.31843, -6.14797, -9.41762, -18.1856, -8.36515, -5.57378, -3.8806, -2.66066, -1.70629, -0.922505, -0.25782, 0.318815, 0.827577, 1.28232, 1.69299, 2.06692, 2.40972, 2.72575, 3.01849, 3.29073, 3.54476, 3.78248, 4.00548, 4.21512, 4.41254, 4.59873, 4.77454, 4.94073, 5.09794, 5.24676, 5.38768, 5.52117, 5.64762, 5.7674, 5.88083, 5.9882, 6.08977, 6.18578, 6.27644, 6.36195, 6.44248, 6.5182, 6.58924, 6.65575, 6.71783, 6.7756, 6.82915, 6.87858, 6.92396, 6.96537, 7.00286, 7.0365, 7.06633, 7.0924, 7.11474, 7.13338, 7.14836, 7.15968, 7.16736, 7.17141, 7.17184, 7.16863, 7.16179, 7.15129, 7.13713, 7.11926, 7.09768, 7.07232, 7.04317, 7.01016, 6.97323, 6.93233, 6.88739, 6.83832, 6.78504, 6.72744, 6.66543, 6.59887, 6.52764, 6.4516, 6.37058, 6.28441, 6.19289, 6.09581, 5.99293, 5.884, 5.7687, 5.64673, 5.51773, 5.38128, 5.23694, 5.08419, 4.92245, 4.75108, 4.56931, 4.3763, 4.17105, 3.9524, 3.71899, 3.46923, 3.2012, 2.91261, 2.60062, 2.26174, 1.89157, 1.48447, 1.03299, 0.527089, -0.0472624, -0.710545, -1.49434, -2.45119, -3.67849, -5.39093, -8.2461, -19.5508, -8.96659, -5.78443, -3.97834, -2.71555, -1.74648, -0.962102, -0.304921, 0.25913, 0.751906, 1.18827, 1.57877, 1.9312, 2.25143, 2.54405, 2.81266, 3.06017, 3.28895, 3.50097, 3.69785, 3.88098, 4.05154, 4.21053, 4.35882, 4.49718, 4.62625, 4.74661, 4.85878, 4.96321, 5.06029, 5.15038, 5.2338, 5.31083, 5.38172, 5.44669, 5.50596, 5.5597, 5.60807, 5.65121, 5.68927, 5.72234, 5.75053, 5.77393, 5.79261, 5.80664, 5.81607, 5.82095, 5.82132, 5.81719, 5.80859, 5.79553, 5.778, 5.75599, 5.72949, 5.69847, 5.66289, 5.62271, 5.57787, 5.52831, 5.47395, 5.41471, 5.35048, 5.28116, 5.20661, 5.12669, 5.04125, 4.95011, 4.85308, 4.74993, 4.64042, 4.52428, 4.40121, 4.27086, 4.13286, 3.98678, 3.83214, 3.66838, 3.4949, 3.31099, 3.11584, 2.90852, 2.68794, 2.45285, 2.20174, 1.93285, 1.64406, 1.33277, 0.995799, 0.629171, 0.227811, -0.214878, -0.707698, -1.26276, -1.8974, -2.63766, -3.52535, -4.63409, -6.11288, -8.34582, -13.0992, -13.2558, -8.46966, -6.27318, -4.84082, -3.7819, -2.94566, -2.25782, -1.67627, -1.17482, -0.736087, -0.347918, -0.00150494, 0.309742, 0.590879, 0.845867, 1.07786, 1.28942, 1.48264, 1.65926, 1.82071, 1.96824, 2.10286, 2.22548, 2.33684, 2.4376, 2.52832, 2.60949, 2.68152, 2.74476, 2.79954, 2.8461, 2.88467, 2.91542, 2.93851, 2.95405, 2.96212, 2.96277, 2.95604, 2.9419, 2.92034, 2.89129, 2.85467, 2.81034, 2.75815, 2.69792, 2.62942, 2.55237, 2.46646, 2.37131, 2.2665, 2.15153, 2.02582, 1.8887, 1.73939, 1.57698, 1.40041, 1.20841, 0.999498, 0.77188, 0.523396, 0.251409, -0.0473499, -0.376989, -0.742766, -1.15156, -1.61259, -2.13865, -2.74818, -3.46916, -4.34713, -5.46382, -6.98976, -9.39127, -15.3074, -12.4691, -8.44282, -6.38485, -4.99216, -3.93901, -3.09288, -2.38667, -1.78161, -1.2533, -0.785381, -0.366331, 0.0122519, 0.356691, 0.671859, 0.961594, 1.22897, 1.47647, 1.70617, 1.91976, 2.1187, 2.3042, 2.4773, 2.63889, 2.78976, 2.93057, 3.06191, 3.18429, 3.29817, 3.40394, 3.50195, 3.59251, 3.67588, 3.75231, 3.822, 3.88514, 3.94187, 3.99233, 4.03665, 4.07489, 4.10716, 4.13349, 4.15394, 4.16852, 4.17724, 4.1801, 4.17706, 4.16808, 4.15311, 4.13207, 4.10485, 4.07135, 4.03142, 3.9849, 3.93161, 3.87133, 3.8038, 3.72876, 3.64588, 3.5548, 3.4551, 3.34631, 3.22789, 3.09921, 2.95957, 2.80815, 2.64399, 2.46596, 2.27278, 2.06287, 1.83438, 1.58507, 1.31219, 1.01234, 0.681234, 0.313383, -0.0984301, -0.563927, -1.09665, -1.71629, -2.453, -3.35655, -4.51806, -6.13411, -8.78, -16.9645, -10.3022, -6.82732, -4.91092, -3.579, -2.55677, -1.72716, -1.02931, -0.42748, 0.101082, 0.571784, 0.995537, 1.38035, 1.73228, 2.056, 2.35523, 2.63293, 2.89153, 3.13302, 3.35909, 3.57114, 3.77036, 3.9578, 4.13433, 4.30073, 4.45767, 4.60573, 4.74545, 4.87728, 5.00163, 5.11885, 5.22929, 5.33322, 5.43091, 5.52258, 5.60845, 5.6887, 5.76351, 5.83301, 5.89734, 5.95662, 6.01095, 6.06043, 6.10514, 6.14514, 6.18049, 6.21123, 6.23742, 6.25906, 6.2762, 6.28882, 6.29694, 6.30054, 6.29961, 6.29412, 6.28403, 6.26931, 6.24988, 6.22569, 6.19665, 6.16267, 6.12365, 6.07948, 6.03001, 5.97509, 5.91457, 5.84825, 5.77592, 5.69734, 5.61226, 5.52037, 5.42134, 5.31481, 5.20036, 5.0775, 4.94572, 4.8044, 4.65284, 4.49024, 4.31569, 4.12812, 3.92627, 3.70866, 3.47354, 3.2188, 2.94187, 2.63959, 2.308, 1.94206, 1.53521, 1.0787, 0.560496, -0.0366271, -0.738528, -1.58669, -2.65401, -4.08772, -6.26542, -10.8966, -11.2755, -6.35927, -4.10515, -2.62479, -1.52072, -0.640302, 0.0914662, 0.71704, 1.2628, 1.74628, 2.17969, 2.57193, 2.92963, 3.2579, 3.56075, 3.84138, 4.10238, 4.3459, 4.57371, 4.78731, 4.98797, 5.17677, 5.35465, 5.52243, 5.6808, 5.8304, 5.97177, 6.1054, 6.23171, 6.3511, 6.46391, 6.57044, 6.67097, 6.76576, 6.85503, 6.93898, 7.0178, 7.09165, 7.16069, 7.22506, 7.28487, 7.34024, 7.39126, 7.43804, 7.48065, 7.51916, 7.55363, 7.58413, 7.6107, 7.63339, 7.65222, 7.66723, 7.67844, 7.68586, 7.68951, 7.68938, 7.68548, 7.6778, 7.66632, 7.65102, 7.63188, 7.60886, 7.58193, 7.55103, 7.51611, 7.47711, 7.43396, 7.38658, 7.33488, 7.27877, 7.21813, 7.15285, 7.08279, 7.0078, 6.92772, 6.84237, 6.75156, 6.65505, 6.55262, 6.44397, 6.32883, 6.20684, 6.07764, 5.94081, 5.79588, 5.6423, 5.47949, 5.30675, 5.12329, 4.92822, 4.72049, 4.49887, 4.26194, 4.00797, 3.73494, 3.44037, 3.12122, 2.7737, 2.39301, 1.97293, 1.5052, 0.978554, 0.376997, -0.323222, -1.15964, -2.19686, -3.5611, -5.55695, -9.34323, -13.4757, -6.87382, -4.37727, -2.81094, -1.67004, -0.774531, -0.0392083, 0.583049, 1.12106, 1.59374, 2.01416, 2.39176, 2.73355, 3.0449, 3.32998, 3.59214, 3.83408, 4.05799, 4.26572, 4.45879, 4.63852, 4.806, 4.9622, 5.10793, 5.24391, 5.37076, 5.48904, 5.59922, 5.70173, 5.79695, 5.88521, 5.96682, 6.04204, 6.1111, 6.17421, 6.23157, 6.28333, 6.32964, 6.37063, 6.40642, 6.43709, 6.46274, 6.48344, 6.49923, 6.51017, 6.51629, 6.51762, 6.51416, 6.50591, 6.49286, 6.475, 6.45229, 6.42468, 6.39212, 6.35453, 6.31184, 6.26395, 6.21075, 6.15211, 6.08788, 6.0179, 5.94199, 5.85993, 5.77148, 5.6764, 5.57437, 5.46507, 5.34812, 5.22309, 5.08951, 4.94682, 4.7944, 4.63155, 4.45743, 4.27111, 4.07148, 3.85724, 3.62686, 3.37851, 3.11001, 2.81865, 2.50113, 2.15328, 1.76975, 1.34359, 0.865414, 0.322239, -0.304702, -1.04396, -1.94216, -3.08338, -4.64458, -7.11797, -13.4915, -9.79106, -5.93925, -3.9309, -2.56428, -1.52833, -0.694907, 0.00138935, 0.59847, 1.12029, 1.58297, 1.99785, 2.37325, 2.7154, 3.02915, 3.3183, 3.58591, 3.83446, 4.06601, 4.28226, 4.48466, 4.67444, 4.85264, 5.02019, 5.17787, 5.32637, 5.46629, 5.59819, 5.72252, 5.83972, 5.95017, 6.0542, 6.15211, 6.2442, 6.3307, 6.41184, 6.48782, 6.55883, 6.62504, 6.68661, 6.74366, 6.79634, 6.84476, 6.88901, 6.92921, 6.96543, 6.99775, 7.02625, 7.05099, 7.07203, 7.08942, 7.10321, 7.11343, 7.12011, 7.1233, 7.12301, 7.11925, 7.11206, 7.10142, 7.08736, 7.06987, 7.04894, 7.02458, 6.99675, 6.96545, 6.93065, 6.89233, 6.85045, 6.80497, 6.75586, 6.70305, 6.64649, 6.58612, 6.52188, 6.45368, 6.38145, 6.30508, 6.22447, 6.13952, 6.0501, 5.95607, 5.8573, 5.7536, 5.64482, 5.53075, 5.41117, 5.28585, 5.15453, 5.01691, 4.87268, 4.72147, 4.56289, 4.39648, 4.22175, 4.03812, 3.84495, 3.64151, 3.42694, 3.20029, 2.96042, 2.70601, 2.43552, 2.14707, 1.83845, 1.50693, 1.14915, 0.760904, 0.336781, -0.130276, -0.649753, -1.23482, -1.90452, -2.6879, -3.63249, -4.82442, -6.44622, -9.01304, -15.8627, -11.4254, -7.74074, -5.8063, -4.49573, -3.50945, -2.72279, -2.07175, -1.51912, -1.04132, -0.622469, -0.25136, 0.0802003, 0.37839, 0.647977, 0.892718, 1.11563, 1.31915, 1.5053, 1.67577, 1.83195, 1.97506, 2.10612
 };


 #endif /* MULTIPATH_V3_M8_H_ */
 
