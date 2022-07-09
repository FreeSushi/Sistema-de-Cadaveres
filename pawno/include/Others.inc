#define CAR 1
#define BIKE 2
#define MOTORBIKE 3
#define BOAT 4
#define PLANE 5 
#define RCCAR 6
#define TRAIN 7
#define TRAILER 8 
#define HELICOPTER 9
#define MAX_AUTOBULLET_INFRACTIONS          3
#define AUTOBULLET_RESET_DELAY              30
new groupColors[12][1] = {
	{0x456FCFFF}, 
	{0x456FCFFF}, 
	{0xffb48aFF}, 
	{0xF86448FF}, 
	{0x00D179FF}, 
	{0xFFFF00AA}, 
	{0xF6A8FFFF}, 
	{0xce0c00FF}, 
	
	{0x40863CAA}, 
	{0x00F2FFAA}, 
	{0x2F2F2FFF}, 
	{0xBD1CDEFF}
};
new Float:farmerCheck[10][3] = {
{1057.8766,-305.9851,73.9922},
{1058.0282,-300.9817,73.9922},
{1058.8374,-296.1405,73.9851},
{1058.7201,-291.2311,73.9922},
{1058.1161,-285.8345,73.9922},
{1032.2606,-287.3821,73.9922},
{1032.0863,-292.4011,73.9922},
{1032.1455,-297.2957,73.9922},
{1032.3008,-302.6118,73.9922},
{1031.8202,-307.7604,73.9889}
};
new Float:pozitionsFamer[13][4] = {
    {1118.1335,-334.6554,73.9922,89.0126},
    {1117.9615,-344.6346,74.0031,89.0146},
    {1101.3706,-349.2136,74.0113,89.012},
    {1111.6707,-306.4589,73.9794,89.1506},
    {1089.1895,-297.8390,73.9878,89.2180},
    {1073.5229,-296.9862,73.9691,177.9792},
    {1067.5061,-296.7740,73.9693,177.9792},
    {1083.5979,-297.3417,73.9688,177.9792},
    {1090.4740,-321.5683,74.3854,177.9792},
    {1084.3672,-321.3529,74.3856,177.9792},
    {1014.4454,-323.1542,73.9868,179.8794},
    {1024.8209,-322.4062,73.9922,179.8247},
    {1041.0852,-321.2244,73.9922,179.6798}
};
new Float:randomUnderSpawn[10][3] = {
{1118.8560,-2049.9348,74.4297},
{1730.7086,-2238.5967,-2.7128},
{1865.4486,-2136.5459,15.1614},
{2236.1382,-2273.3560,14.7647},
{2450.3293,-2133.9810,17.2712},
{2590.9438,-1200.1179,64.6129},
{2510.5044,-1069.6481,69.9327},
{2259.6941,-1092.1349,41.6016},
{1017.0570,-761.9970,112.5630},
{1135.5756,-746.7418,97.1622}
};
new Float:randomDSPositions[13][4] = {
{2161.2761,-1197.2484,23.6200,91.1219}, // p1
{2161.3508,-1187.7800,23.5463,90.2877}, // p2
{2160.8994,-1177.9072,23.5456,90.0102}, // p3
{2160.8923,-1168.2021,23.5453,89.6369}, // p4
{2161.1440,-1158.1156,23.5658,90.1162}, // p5
{2161.5559,-1148.3022,24.1073,91.7817}, // p6
{2148.9875,-1138.7295,25.1938,270.8910}, // p7
{2149.1304,-1148.0770,24.1661,271.3997}, // p8
{2148.6567,-1157.2400,23.5730,270.0395}, // p9
{2148.4426,-1166.1725,23.5474,267.2718}, // p10
{2148.5679,-1175.5269,23.5474,268.6926}, // p11
{2148.5898,-1184.7809,23.5474,268.7801}, // p12
{2148.3611,-1194.3053,23.5592,270.6785} //
};
new TutorialPlayerSkin[78][0] = {
	{2},  {4}, {5}, {7}, {11}, {12}, {14},  {15}, {16}, {17}, {18},  {19}, {20}, {21}, {22}, {23}, {24}, {25},
	{26}, {27}, {28}, {29}, {30}, {31}, {32}, {33}, {37}, {38}, {40}, {44}, {45}, {47}, {48}, {51}, {52}, {53},
	{55}, {56}, {60}, {63}, {64}, {66}, {67}, {69}, {72}, {79}, {80}, {81}, {82}, {83}, {84}, {85}, {90}, {91},
	{92}, {94}, {95}, {96}, {97}, {99}, {100}, {128}, {129}, {144}, {146}, {154}, {176}, {177}, {178}, {179},
	{180}, {184}, {192}, {193}, {191}, {250}, {293}, {299}
};

new Float:randomJailSpawns[23][3] = {
	{1778.5212,-1582.3376,1734.9430}, {1774.1602,-1582.8796,1734.9430},
	{1769.7942,-1582.4847,1734.9430}, {1765.7050,-1582.4812,1734.9430},
	{1761.9366,-1582.2782,1734.9430}, {1757.2307,-1583.3904,1734.9430},
	{1757.2823,-1564.4154,1734.9430}, {1761.9403,-1562.9795,1734.9430},
	{1766.0546,-1562.8584,1734.9430}, {1770.3213,-1563.0205,1734.9430},
	{1774.5715,-1563.7369,1734.9430}, {1757.4189,-1563.7510,1738.6935},
	{1761.2991,-1563.3671,1738.6935}, {1765.6201,-1563.2388,1738.6935},
	{1769.5911,-1564.3970,1738.6935}, {1773.7213,-1564.3955,1738.6935},
	{1778.7367,-1562.6769,1738.6938}, {1778.5969,-1583.1412,1738.7173},
	{1774.2385,-1582.7462,1738.7173}, {1769.2456,-1583.5513,1738.7173},
	{1765.5283,-1584.1222,1738.7173}, {1760.6541,-1582.6287,1738.7173},
	{1756.6204,-1582.1888,1738.7173}
};

new Float:randomEventSpawns[12][3] = {
	{1398.8252,-44.4338,1000.9657}, {1369.6826,-1.7738,1000.9657}, {1395.1248,0.7802,1000.9657},
	{1367.3448,-39.5272,1000.9657}, {1412.2659,-34.1695,1000.9657}, {1386.2261,-3.6307,1000.9657},
	{1402.8066,-1.5735,1000.9657}, {1391.6638,-12.7538,1000.9657}, {1370.9459,-24.5496,1000.9657},
	{1399.4434,-3.1972,1000.9657}, {1393.5708,-29.3706,1000.9657}, {1406.6636,-41.5091,1000.9657}
};

new Float:DMVCheck[22][3] = {
{1400.1361,-1650.5934,13.2522}, // pos 1
{1426.6912,-1713.0104,13.2578}, // pos 2
{1377.7338,-1729.5231,13.2578}, // pos 3
{1315.6008,-1718.4545,13.2577}, // pos 4
{1317.3539,-1550.1147,13.2655}, // pos 5
{1352.8523,-1470.5469,13.2577}, // pos 6
{1360.3186,-1372.6781,13.3279}, // pos 7
{1360.1331,-1258.9510,13.2577}, // pos 8
{1380.1426,-1243.5835,13.2578}, // pos 9
{1452.1722,-1254.3768,13.2578}, // pos 10
{1452.4664,-1365.5686,13.2578}, // pos 11
{1449.9661,-1470.8478,13.2447}, // pos 12
{1427.2297,-1575.5708,13.2348}, // pos 13
{1449.5553,-1595.0385,13.2578}, // pos 14
{1508.1172,-1594.6274,13.2578}, // pos 15
{1527.1616,-1611.3646,13.2578}, // pos 16
{1527.2014,-1682.4280,13.2578}, // pos 17
{1514.2565,-1729.1121,13.2578}, // pos 18
{1451.8839,-1730.0472,13.2578}, // pos 19
{1432.9688,-1713.0850,13.2578}, // pos 20
{1414.9677,-1648.5166,13.2546}, // pos 21
{1364.4662,-1650.8046,13.2578} // pos 22
};
new vehicleName[212][] = {
	{"Landstalker"}, {"Bravura"}, {"Buffalo"}, {"Linerunner"}, {"Perrenial"}, {"Sentinel"}, {"Dumper"}, {"Firetruck"},
	{"Trashmaster"}, {"Stretch"}, {"Manana"}, {"Infernus"},	{"Voodoo"}, {"Pony"}, {"Mule"}, {"Cheetah"},
	{"Ambulance"}, {"Leviathan"}, {"Moonbeam"}, {"Esperanto"}, {"Taxi"}, {"Washington"}, {"Bobcat"}, {"Mr Whoopee"},
	{"BF Injection"}, {"Hunter"}, {"Premier"}, {"Enforcer"}, {"Securicar"}, {"Banshee"}, {"Predator"}, {"Bus"},
	{"Rhino"}, {"Barracks"}, {"Hotknife"}, {"Trailer 1"}, {"Previon"}, {"Coach"},	{"Cabbie"}, {"Stallion"},
	{"Rumpo"}, {"RC Bandit"}, {"Romero"}, {"Packer"}, {"Monster"}, {"Admiral"}, {"Squalo"}, {"Seasparrow"},
	{"Pizzaboy"}, {"Tram"},	{"Trailer 2"}, {"Turismo"}, {"Speeder"}, {"Reefer"}, {"Tropic"}, {"Flatbed"},
	{"Yankee"}, {"Caddy"}, {"Solair"}, {"Berkley's RC Van"}, {"Skimmer"}, {"PCJ-600"}, {"Faggio"}, {"Freeway"},
	{"RC Baron"}, {"RC Raider"}, {"Glendale"}, {"Oceanic"}, {"Sanchez"}, {"Sparrow"}, {"Patriot"}, {"Quad"},
	{"Coastguard"}, {"Dinghy"}, {"Hermes"},	{"Sabre"}, {"Rustler"}, {"ZR-350"}, {"Walton"}, {"Regina"},
	{"Comet"}, {"BMX"},	{"Burrito"}, {"Camper"}, {"Marquis"}, {"Baggage"}, {"Dozer"}, {"Maverick"},
	{"News Chopper"}, {"Rancher"}, {"FBI-Rancher"}, {"Virgo"}, {"Greenwood"}, {"Jetmax"}, {"Hotring"}, {"Sandking"},
	{"Blista Compact"},	{"Police Maverick"}, {"Boxville"}, {"Benson"}, {"Mesa"}, {"RC Goblin"}, {"Hotring Racer A"}, {"Hotring Racer B"},
	{"Bloodring Banger"}, {"Rancher"}, {"Super GT"}, {"Elegant"}, {"Journey"}, {"Bike"}, {"Mountain Bike"}, {"Beagle"},
	{"Cropdust"}, {"Stunt"}, {"Tanker"}, {"Roadtrain"}, {"Nebula"}, {"Majestic"}, {"Buccaneer"}, {"Shamal"},
	{"Hydra"}, {"FCR-900"},	{"NRG-500"}, {"HPV-1000"}, {"Cement Truck"}, {"Tow Truck"}, {"Fortune"}, {"Cadrona"},
	{"FBI-Truck"}, {"Willard"},	{"Forklift"}, {"Tractor"}, {"Combine"}, {"Feltzer"}, {"Remington"}, {"Slamvan"},
	{"Blade"}, {"Freight"},	{"Streak"}, {"Vortex"}, {"Vincent"}, {"Bullet"}, {"Clover"}, {"Sadler"},
	{"Firetruck LA"}, {"Hustler"}, {"Intruder"}, {"Primo"},	{"Cargobob"}, {"Tampa"}, {"Sunrise"}, {"Merit"},
	{"Utility"}, {"Nevada"}, {"Yosemite"}, {"Windsor"},	{"Monster A"}, {"Monster B"}, {"Uranus"}, {"Jester"},
	{"Sultan"}, {"Stratum"}, {"Elegy"}, {"Raindance"}, {"RC Tiger"}, {"Flash"}, {"Tahoma"}, {"Savanna"},
	{"Bandito"}, {"Freight Flat"}, {"Streak Carriage"}, {"Kart"}, {"Mower"}, {"Duneride"}, {"Sweeper"}, {"Broadway"},
	{"Tornado"}, {"AT-400"}, {"DFT-30"}, {"Huntley"}, {"Stafford"}, {"BF-400"}, {"Newsvan"}, {"Tug"},
	{"Trailer 3"}, {"Emperor"}, {"Wayfarer"}, {"Euros"}, {"Hotdog"}, {"Club"}, {"Freight Carriage"}, {"Trailer 3"},
	{"Andromada"}, {"Dodo"}, {"RC Cam"}, {"Launch"}, {"Police Car"},	{"Police Car"},	{"Police Car"},	{"Ranger"},
	{"Picador"}, {"S.W.A.T. Van"}, {"Alpha"}, {"Phoenix"},	{"Glendale"}, {"Sadler"}, {"Luggage Trailer A"}, {"Luggage Trailer B"},
	{"Stair Trailer"}, {"Boxville"}, {"Farm Plow"},	{"Utility Trailer"}
};

new legalmods[48][22] = {
    {400, 1024,1021,1020,1019,1018,1013,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {401, 1145,1144,1143,1142,1020,1019,1017,1013,1007,1006,1005,1004,1003,1001,0000,0000,0000,0000},
    {404, 1021,1020,1019,1017,1016,1013,1007,1002,1000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {405, 1023,1021,1020,1019,1018,1014,1001,1000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {410, 1024,1023,1021,1020,1019,1017,1013,1007,1003,1001,0000,0000,0000,0000,0000,0000,0000,0000}, {415, 1023,1019,1018,1017,1007,1003,1001,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {418, 1021,1020,1016,1006,1002,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {420, 1021,1019,1005,1004,1003,1001,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {421, 1023,1021,1020,1019,1018,1016,1014,1000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {422, 1021,1020,1019,1017,1013,1007,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {426, 1021,1019,1006,1005,1004,1003,1001,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {436, 1022,1021,1020,1019,1017,1013,1007,1006,1003,1001,0000,0000,0000,0000,0000,0000,0000,0000},
    {439, 1145,1144,1143,1142,1023,1017,1013,1007,1003,1001,0000,0000,0000,0000,0000,0000,0000,0000}, {477, 1021,1020,1019,1018,1017,1007,1006,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {478, 1024,1022,1021,1020,1013,1012,1005,1004,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {489, 1024,1020,1019,1018,1016,1013,1006,1005,1004,1002,1000,0000,0000,0000,0000,0000,0000,0000},
    {491, 1145,1144,1143,1142,1023,1021,1020,1019,1018,1017,1014,1007,1003,0000,0000,0000,0000,0000}, {492, 1016,1006,1005,1004,1000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {496, 1143,1142,1023,1020,1019,1017,1011,1007,1006,1003,1002,1001,0000,0000,0000,0000,0000,0000}, {500, 1024,1021,1020,1019,1013,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {516, 1021,1020,1019,1018,1017,1016,1015,1007,1004,1002,1000,0000,0000,0000,0000,0000,0000,0000}, {517, 1145,1144,1143,1142,1023,1020,1019,1018,1017,1016,1007,1003,1002,0000,0000,0000,0000,0000},
    {518, 1145,1144,1143,1142,1023,1020,1018,1017,1013,1007,1006,1005,1003,1001,0000,0000,0000,0000}, {527, 1021,1020,1018,1017,1015,1014,1007,1001,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {529, 1023,1020,1019,1018,1017,1012,1011,1007,1006,1003,1001,0000,0000,0000,0000,0000,0000,0000}, {534, 1185,1180,1179,1178,1127,1126,1125,1124,1123,1122,1106,1101,1100,0000,0000,0000,0000,0000},
    {535, 1121,1120,1119,1118,1117,1116,1115,1114,1113,1110,1109,0000,0000,0000,0000,0000,0000,0000}, {536, 1184,1183,1182,1181,1128,1108,1107,1105,1104,1103,0000,0000,0000,0000,0000,0000,0000,0000},
    {540, 1145,1144,1143,1142,1024,1023,1020,1019,1018,1017,1007,1006,1004,1001,0000,0000,0000,0000}, {542, 1145,1144,1021,1020,1019,1018,1015,1014,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {546, 1145,1144,1143,1142,1024,1023,1019,1018,1017,1007,1006,1004,1002,1001,0000,0000,0000,0000}, {547, 1143,1142,1021,1020,1019,1018,1016,1003,1000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {549, 1145,1144,1143,1142,1023,1020,1019,1018,1017,1012,1011,1007,1003,1001,0000,0000,0000,0000}, {550, 1145,1144,1143,1142,1023,1020,1019,1018,1006,1005,1004,1003,1001,0000,0000,0000,0000,0000},
    {551, 1023,1021,1020,1019,1018,1016,1006,1005,1003,1002,0000,0000,0000,0000,0000,0000,0000,0000}, {558, 1168,1167,1166,1165,1164,1163,1095,1094,1093,1092,1091,1090,1089,1088,0000,0000,0000,0000},
    {559, 1173,1162,1161,1160,1159,1158,1072,1071,1070,1069,1068,1067,1066,1065,0000,0000,0000,0000}, {560, 1170,1169,1141,1140,1139,1138,1033,1032,1031,1030,1029,1028,1027,1026,0000,0000,0000,0000},
    {561, 1157,1156,1155,1154,1064,1063,1062,1061,1060,1059,1058,1057,1056,1055,1031,1030,1027,1026}, {562, 1172,1171,1149,1148,1147,1146,1041,1040,1039,1038,1037,1036,1035,1034,0000,0000,0000,0000},
    {565, 1153,1152,1151,1150,1054,1053,1052,1051,1050,1049,1048,1047,1046,1045,0000,0000,0000,0000}, {567, 1189,1188,1187,1186,1133,1132,1131,1130,1129,1102,0000,0000,0000,0000,0000,0000,0000,0000},
    {575, 1177,1176,1175,1174,1099,1044,1043,1042,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {576, 1193,1192,1191,1190,1137,1136,1135,1134,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000},
    {580, 1023,1020,1018,1017,1007,1006,1001,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {589, 1145,1144,1024,1020,1018,1017,1016,1013,1007,1006,1005,1004,1000,0000,0000,0000,0000,0000},
    {600, 1022,1020,1018,1017,1013,1007,1006,1005,1004,0000,0000,0000,0000,0000,0000,0000,0000,0000}, {603, 1145,1144,1143,1142,1024,1023,1020,1019,1018,1017,1007,1006,1001,0000,0000,0000,0000,0000}
};
new spoiler[20][0] = {
    {1000},
    {1001},
    {1002},
    {1003},
    {1014},
    {1015},
    {1016},
    {1023},
    {1058},
    {1060},
    {1049},
    {1050},
    {1138},
    {1139},
    {1146},
    {1147},
    {1158},
    {1162},
    {1163},
    {1164}
};
 
new nitro[3][0] = {
    {1008},
    {1009},
    {1010}
};
 
new fbumper[23][0] = {
    {1117},
    {1152},
    {1153},
    {1155},
    {1157},
    {1160},
    {1165},
    {1166},
    {1169},
    {1170},
    {1171},
    {1172},
    {1173},
    {1174},
    {1175},
    {1179},
    {1181},
    {1182},
    {1185},
    {1188},
    {1189},
    {1192},
    {1193}
};
 
new rbumper[22][0] = {
    {1140},
    {1141},
    {1148},
    {1149},
    {1150},
    {1151},
    {1154},
    {1156},
    {1159},
    {1161},
    {1167},
    {1168},
    {1176},
    {1177},
    {1178},
    {1180},
    {1183},
    {1184},
    {1186},
    {1187},
    {1190},
    {1191}
};
 
new exhaust[28][0] = {
    {1018},
    {1019},
    {1020},
    {1021},
    {1022},
    {1028},
    {1029},
    {1037},
    {1043},
    {1044},
    {1045},
    {1046},
    {1059},
    {1064},
    {1065},
    {1066},
    {1089},
    {1092},
    {1104},
    {1105},
    {1113},
    {1114},
    {1126},
    {1127},
    {1129},
    {1132},
    {1135},
    {1136}
};
 
new bventr[2][0] = {
    {1142},
    {1144}
};
 
new bventl[2][0] = {
    {1143},
    {1145}
};
 
new bscoop[4][0] = {
    {1004},
    {1005},
    {1011},
    {1012}
};
 
new rscoop[17][0] = {
    {1006},
    {1032},
    {1033},
    {1035},
    {1038},
    {1053},
    {1054},
    {1055},
    {1061},
    {1067},
    {1068},
    {1088},
    {1091},
    {1103},
    {1128},
    {1130},
    {1131}
};
 
new lskirt[21][0] = {
    {1007},
    {1026},
    {1031},
    {1036},
    {1039},
    {1042},
    {1047},
    {1048},
    {1056},
    {1057},
    {1069},
    {1070},
    {1090},
    {1093},
    {1106},
    {1108},
    {1118},
    {1119},
    {1133},
    {1122},
    {1134}
};
 
new rskirt[21][0] = {
    {1017},
    {1027},
    {1030},
    {1040},
    {1041},
    {1051},
    {1052},
    {1062},
    {1063},
    {1071},
    {1072},
    {1094},
    {1095},
    {1099},
    {1101},
    {1102},
    {1107},
    {1120},
    {1121},
    {1124},
    {1137}
};
 
new hydraulics[1][0] = {
    {1087}
};
 
new modBase[1][0] = {
    {1086}
};
 
new rbbars[4][0] = {
    {1109},
    {1110},
    {1123},
    {1125}
};
 
new fbbars[2][0] = {
    {1115},
    {1116}
};
 
new wheels[17][0] = {
    {1025},
    {1073},
    {1074},
    {1075},
    {1076},
    {1077},
    {1078},
    {1079},
    {1080},
    {1081},
    {1082},
    {1083},
    {1084},
    {1085},
    {1096},
    {1097},
    {1098}
};
 
new modLights[2][0] = {
    {1013},
    {1024}
};
//Static
static const fallingAnimations[4] = {1195, 1197, 1133, 1130};
stock bool:isPlayerFalling(playerid) {
	for(new i = 0; i < sizeof fallingAnimations; i++) {
		if(GetPlayerAnimationIndex(playerid) == fallingAnimations[i]) {
			new Float:Velocity; GetPlayerVelocity(playerid, Velocity, Velocity, Velocity);
			if(Velocity != 0) return true;
		}
	}
	return false; }
stock IsAValidWheel(modelid) {
    new wheelmodels[17] = { 1025, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1096, 1097, 1098 };
    for(new i = 0; i < sizeof wheelmodels; i++) { if(modelid == wheelmodels[i]) { return true; } }
    return false; 
}

stock IsValidNitro(carmodel) {
    new illegalvehs[29] = { 581, 523, 462, 521, 463, 522, 461, 448, 468, 586, 509, 481, 510, 472, 473, 493, 595, 484, 430, 453, 452, 446, 454, 590, 569, 537, 538, 570, 449 };
    for(new i = 0; i < sizeof illegalvehs; i++) { if(carmodel == illegalvehs[i]) { return true; } }
    return false; 
}

stock IsValidCarMod(vehicleid, componentid) {
	new bool: modok = false, nosblocker = IsValidNitro(vehicleid);
	if((IsAValidWheel(componentid)) || (componentid == 1086) || (componentid == 1087) || ((componentid >= 1008) && (componentid <= 1010))) {
		if(!nosblocker) 
			modok = true;
	} else {
		for(new i = 0; i < sizeof legalmods; i++) { if(legalmods[i][0] == vehicleid) { for(new j = 1; j < 22; j++) { if(legalmods[i][j] == componentid) { modok = true; } } } }
	} return modok; 
}

stock IsValidNitroEx(playerid) return IsValidNitro(GetVehicleModel(GetPlayerVehicleID(playerid)));
IsNumeric(const string[]) {
	for (new i = 0, j = strlen(string); i < j; i++) { if (string[i] > '9' || string[i] < '0')  return 0; }
	return 1; }
//animations:
YCMD:cheer(playerid, params[], help) {
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	if(sscanf(params, "d", gPara[0])) return sendUsage(playerid, "/cheer [1-8]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"ON_LOOKERS","shout_01",4.1, 1, 0, 0, 0, 0, 0); 
        case 2: ApplyAnimation(playerid,"ON_LOOKERS","shout_02",4.1, 0, 0, 0, 0, 0, 0); 
        case 3: ApplyAnimation(playerid,"ON_LOOKERS","shout_in",4.1, 0, 0, 0, 0, 0, 0); 
        case 4: ApplyAnimation(playerid,"RIOT","RIOT_ANGRY_B",4.1, 0, 0, 0, 0, 0, 0); 
        case 5: ApplyAnimation(playerid,"RIOT","RIOT_CHANT",4.1, 0, 0, 0, 0, 0, 0); 
        case 6: ApplyAnimation(playerid,"RIOT","RIOT_shout",4.1, 0, 0, 0, 0, 0, 0); 
        case 7: ApplyAnimation(playerid,"STRIP","PUN_HOLLER",4.1, 0, 0, 0, 0, 0, 0); 
        case 8: ApplyAnimation(playerid,"OTB","wtchrace_win",4.1, 0, 0, 0, 0, 0, 0); 
        default: return sendUsage(playerid,"/cheer [1-8]");
    }
	return 1;
}

YCMD:sit(playerid, params[], help) {
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	if(sscanf(params, "d", gPara[0])) return sendUsage(playerid, "/sit [1-5]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"BEACH","bather",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"BEACH","Lay_Bac_Loop",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"BEACH","ParkSit_W_loop",4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"BEACH","SitnWait_loop_W",4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"BEACH","SitnWait_loop_W",4.1, 0, 0, 0, 0, 0, 0);
        case 6: ApplyAnimation(playerid,"BEACH", "ParkSit_M_loop", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/sit [1-6]");
    }
	return 1;
}

YCMD:urinate(playerid, params[], help) {
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	SetPlayerSpecialAction(playerid, 68);
	return 1;
}

YCMD:sleep(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/sleep [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"CRACK","crckdeth4",4.1, 0, 0, 0, 0, 0, 0); 
        case 2: ApplyAnimation(playerid,"CRACK","crckidle2",4.1, 0, 0, 0, 0, 0, 0); 
        default: return sendUsage(playerid,"/sleep [1-2]");
    }
    return 1;
}

YCMD:seat(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/seat [1-7]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"Attractors","Stepsit_in",4.1, 0, 0, 0, 0, 0, 0);// Not looping
        case 2: ApplyAnimation(playerid,"CRIB","PED_Console_Loop",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"INT_HOUSE","LOU_In",4.1, 0, 0, 0, 0, 0, 0); // Not looping
        case 4: ApplyAnimation(playerid,"MISC","SEAT_LR",4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"MISC","Seat_talk_01",4.1, 0, 0, 0, 0, 0, 0);
        case 6: ApplyAnimation(playerid,"MISC","Seat_talk_02",4.1, 0, 0, 0, 0, 0, 0);
        case 7: ApplyAnimation(playerid,"ped","SEAT_down",4.1, 0, 0, 0, 0, 0, 0); // Not looping
        default: return sendUsage(playerid,"/seat [1-7]");
    }
    return 1;
}

YCMD:dance(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/dance [1-4]");
    switch(gPara[0]) {
        case 1: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE1);
        case 2: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE2);
        case 3: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE3);
        case 4: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE4);
        default: return sendUsage(playerid,"/dance [1-4]");
    }
    return 1;
}

YCMD:cross(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/cross [1-5]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_loop", 4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid, "DEALER", "DEALER_IDLE", 4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid, "DEALER", "DEALER_IDLE_01", 4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"GRAVEYARD","mrnM_loop",4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"GRAVEYARD","prst_loopa",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/cross [1-5]");
    }
    return 1;
}

YCMD:jiggy(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/jiggy [1-10]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"DANCING","DAN_Down_A",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"DANCING","DAN_Left_A",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"DANCING","DAN_Loop_A",4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"DANCING","DAN_Right_A",4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"DANCING","DAN_Up_A",4.1, 0, 0, 0, 0, 0, 0);
        case 6: ApplyAnimation(playerid,"DANCING","dnce_M_a",4.1, 0, 0, 0, 0, 0, 0);
        case 7: ApplyAnimation(playerid,"DANCING","dnce_M_b",4.1, 0, 0, 0, 0, 0, 0);
        case 8: ApplyAnimation(playerid,"DANCING","dnce_M_c",4.1, 0, 0, 0, 0, 0, 0);
        case 9: ApplyAnimation(playerid,"DANCING","dnce_M_c",4.1, 0, 0, 0, 0, 0, 0);
        case 10: ApplyAnimation(playerid,"DANCING","dnce_M_d",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/jiggy [1-10]");
    }
    return 1;
}

YCMD:breathless(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/breathless [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"PED","IDLE_tired",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"FAT","IDLE_tired",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/breathless [1-2]");
    }
    return 1;
}

YCMD:ped(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/ped [1-26]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"PED","JOG_femaleA",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"PED","JOG_maleA",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"PED","WOMAN_walkfatold",4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"PED","run_fat",4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"PED","run_fatold",4.1, 0, 0, 0, 0, 0, 0);
        case 6: ApplyAnimation(playerid,"PED","run_old",4.1, 0, 0, 0, 0, 0, 0);
        case 7: ApplyAnimation(playerid,"PED","Run_Wuzi",4.1, 0, 0, 0, 0, 0, 0);
        case 8: ApplyAnimation(playerid,"PED","swat_run",4.1, 0, 0, 0, 0, 0, 0);
        case 9: ApplyAnimation(playerid,"PED","WALK_fat",4.1, 0, 0, 0, 0, 0, 0);
        case 10: ApplyAnimation(playerid,"PED","WALK_fatold",4.1, 0, 0, 0, 0, 0, 0);
        case 11: ApplyAnimation(playerid,"PED","WALK_gang1",4.1, 0, 0, 0, 0, 0, 0);
        case 12: ApplyAnimation(playerid,"PED","WALK_gang2",4.1, 0, 0, 0, 0, 0, 0);
        case 13: ApplyAnimation(playerid,"PED","WALK_old",4.1, 0, 0, 0, 0, 0, 0);
        case 14: ApplyAnimation(playerid,"PED","WALK_shuffle",4.1, 0, 0, 0, 0, 0, 0);
        case 15: ApplyAnimation(playerid,"PED","woman_run",4.1, 0, 0, 0, 0, 0, 0);
        case 16: ApplyAnimation(playerid,"PED","WOMAN_runbusy",4.1, 0, 0, 0, 0, 0, 0);
        case 17: ApplyAnimation(playerid,"PED","WOMAN_runfatold",4.1, 0, 0, 0, 0, 0, 0);
        case 18: ApplyAnimation(playerid,"PED","woman_runpanic",4.1, 0, 0, 0, 0, 0, 0);
        case 19: ApplyAnimation(playerid,"PED","WOMAN_runsexy",4.1, 0, 0, 0, 0, 0, 0);
        case 20: ApplyAnimation(playerid,"PED","WOMAN_walkbusy",4.1, 0, 0, 0, 0, 0, 0);
        case 21: ApplyAnimation(playerid,"PED","WOMAN_walkfatold",4.1, 0, 0, 0, 0, 0, 0);
        case 22: ApplyAnimation(playerid,"PED","WOMAN_walknorm",4.1, 0, 0, 0, 0, 0, 0);
        case 23: ApplyAnimation(playerid,"PED","WOMAN_walkold",4.1, 0, 0, 0, 0, 0, 0);
        case 24: ApplyAnimation(playerid,"PED","WOMAN_walkpro",4.1, 0, 0, 0, 0, 0, 0);
        case 25: ApplyAnimation(playerid,"PED","WOMAN_walksexy",4.1, 0, 0, 0, 0, 0, 0);
        case 26: ApplyAnimation(playerid,"PED","WOMAN_walkshop",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/ped [1-26]");
    }
    return 1;
}

YCMD:rap(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/rap [1-3]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"RAPPING","RAP_A_Loop",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"RAPPING","RAP_B_Loop",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"RAPPING","RAP_C_Loop",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/rap [1-3]");
    }
    return 1;
}

YCMD:gesture(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/gesture [1-15]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"GHANDS","gsign1",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"GHANDS","gsign1LH",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"GHANDS","gsign2",4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"GHANDS","gsign2LH",4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"GHANDS","gsign3",4.1, 0, 0, 0, 0, 0, 0);
        case 6: ApplyAnimation(playerid,"GHANDS","gsign3LH",4.1, 0, 0, 0, 0, 0, 0);
        case 7: ApplyAnimation(playerid,"GHANDS","gsign4",4.1, 0, 0, 0, 0, 0, 0);
        case 8: ApplyAnimation(playerid,"GHANDS","gsign4LH",4.1, 0, 0, 0, 0, 0, 0);
        case 9: ApplyAnimation(playerid,"GHANDS","gsign5",4.1, 0, 0, 0, 0, 0, 0);
        case 10: ApplyAnimation(playerid,"GHANDS","gsign5",4.1, 0, 0, 0, 0, 0, 0);
        case 11: ApplyAnimation(playerid,"GHANDS","gsign5LH",4.1, 0, 0, 0, 0, 0, 0);
        case 12: ApplyAnimation(playerid,"GANGS","Invite_No",4.1, 0, 0, 0, 0, 0, 0);
        case 13: ApplyAnimation(playerid,"GANGS","Invite_Yes",4.1, 0, 0, 0, 0, 0, 0);
        case 14: ApplyAnimation(playerid,"GANGS","prtial_gngtlkD",4.1, 0, 0, 0, 0, 0, 0);
        case 15: ApplyAnimation(playerid,"GANGS","smkcig_prtl",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/gesture [1-15]");
    }
    return 1;
}

YCMD:sup(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/sup [1-3]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"GANGS","hndshkba",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"GANGS","hndshkda",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"GANGS","hndshkfa_swt",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/sup [1-3]");
    }
    return 1;
}

YCMD:chora(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze."); 
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_watch",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}

YCMD:relax(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze."); 
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid, "CRACK", "crckidle1",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:crabs(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze."); 
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid,"MISC","Scratchballs_01",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:greeting(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze."); 
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid,"ON_LOOKERS","Pointup_loop",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:stop(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze."); 
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid,"PED","endchat_01",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:wash(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze."); 
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid,"BD_FIRE","wash_up",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:mourn(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"GRAVEYARD","mrnF_loop",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:followme(playerid, params[], help) {
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"WUZI","Wuzi_follow",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:still(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"WUZI","Wuzi_stand_loop", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1;
}
YCMD:hitch(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"MISC","Hiker_Pose", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:palmbitch(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"MISC","bitchslap",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:cpranim(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"MEDIC","CPR",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:giftgiving(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"KISSING","gift_give",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:slap2(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"SWEET","sweet_ass_slap",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:drunk(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "PED", "WALK_DRUNK", 4.0, 1, 1, 1, 1, 0);
	return 1; 
}
YCMD:pump(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "BOMBER", "BOM_Plant", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:tosteal(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"ped", "ARRESTgun", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:laugh(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "RAPPING", "Laugh_01", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:lookout(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "SHOP", "ROB_Shifty", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:robman(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "SHOP", "ROB_Loop_Threat", 4.1, 0, 0, 0, 1, 0, 0); 
	return 1; 
}
YCMD:hide(playerid, params[], help) {
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling."); 
	ApplyAnimation(playerid, "ped", "cower",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:vomit(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "FOOD", "EAT_Vomit_P", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:eat(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "FOOD", "EAT_Burger", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:crack(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "CRACK", "crckdeth2", 4.1, 1, 0, 0, 0, 0, 0); 
	return 1; 
}
YCMD:fuck(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","fucku",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}

YCMD:taichi(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PARK","Tai_Chi_Loop", 4.1, 1, 0, 0, 0, 0, 0); 
	return 1; 
}

YCMD:entrenar(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PARK","Tai_Chi_Loop", 4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}

YCMD:carjacked1(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"PED","CAR_jackedLHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:carjacked2(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"PED","CAR_jackedRHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:handsup(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    SetPlayerSpecialAction(playerid, SPECIAL_ACTION_HANDSUP);
	return 1; 
}

YCMD:cellin(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
   	SetPlayerSpecialAction(playerid,SPECIAL_ACTION_USECELLPHONE);
	return 1; 
}

YCMD:cellout(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    SetPlayerSpecialAction(playerid,SPECIAL_ACTION_STOPUSECELLPHONE);
	return 1; 
}

YCMD:crossarms(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_loop", 4.1, 0, 0, 0, 1, 0, 0); // Arms crossed
	return 1; 
}

YCMD:lay(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"BEACH", "bather",4.1, 0, 0, 0, 1, 0, 0); // Lay down
	return 1; 
}

YCMD:foodeat(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "FOOD", "EAT_Burger", 4.1, 0, 0, 0, 0, 0, 0); // Eat Burger
	return 1; 
}

YCMD:wave(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	if(sscanf(params,"d", gPara[0])) return sendUsage(playerid, "/wave [1-3]");
	switch(gPara[0]) {
 		case 1: ApplyAnimation(playerid, "ON_LOOKERS", "wave_loop", 4.0, 1, 0, 0, 0, 0);
 		case 2: ApplyAnimation(playerid, "KISSING", "gfwave2", 4.0, 0, 0, 0, 0, 0);
 		case 3: ApplyAnimation(playerid, "PED", "endchat_03", 4.0, 0, 0, 0, 0, 0);
 		default: sendUsage(playerid, "/wave [1-3]");
 	}
	return 1; 
}

YCMD:slapass(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "SWEET", "sweet_ass_slap", 4.1, 0, 0, 0, 0, 0, 0); // Ass Slapping
	return 1; 
}

YCMD:dealer(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "DEALER", "DEALER_DEAL", 4.1, 0, 0, 0, 0, 0, 0); // Deal Drugs
	return 1; 
}

YCMD:gro(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"BEACH", "ParkSit_M_loop", 4.1, 0, 0, 0, 0, 0, 0); // Sit
	return 1; 
}

YCMD:fucku(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","fucku",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:chairsit(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","SEAT_idle",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:injured(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "SWEET", "Sweet_injuredloop", 4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:fallback(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid, "PED","FLOOR_hit_f", 4.1, 0, 0, 0, 1, 0, 0);
	return 1; 
}

YCMD:fall(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","KO_skid_front",4.1, 0, 0, 0, 1, 0, 0);
	return 1; 
}

YCMD:push(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"GANGS","shake_cara",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:akick(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"POLICE","Door_Kick",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lowbodypush(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"GANGS","shake_carSH",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:spray(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"SPRAYCAN","spraycan_full",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:headbutt(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"WAYFARER","WF_Fwd",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:medic(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"MEDIC","CPR",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:koface(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","KO_shot_face",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:kostomach(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","KO_shot_stom",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lifejump(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","EV_dive",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:exhaust(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","IDLE_tired",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:leftslap(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","BIKE_elbowL",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:rollfall(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","BIKE_fallR",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:carlock(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","CAR_doorlocked_LHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:rcarjack1(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","CAR_pulloutL_LHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:rcarjack2(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","CAR_pulloutL_LHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lcarjack1(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","CAR_pulloutL_RHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lcarjack2(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"PED","CAR_pullout_RHS",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:hoodfrisked(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"POLICE","crm_drgbst_01",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lightcig(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"SMOKING","M_smk_in",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:tapcig(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"SMOKING","M_smk_tap",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:bat(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"BASEBALL","Bat_IDLE",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:box(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"GYMNASIUM","GYMshadowbox",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lay2(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"SUNBATHE","Lay_Bac_in",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:chant(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"RIOT","RIOT_CHANT",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:finger(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"RIOT","RIOT_FUKU",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:shouting(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"RIOT","RIOT_shout",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:cop(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"SWORD","sword_block",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:elbow(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"FIGHT_D","FightD_3",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:kneekick(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"FIGHT_D","FightD_2",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:fstance(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"FIGHT_D","FightD_IDLE",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:gpunch(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"FIGHT_B","FightB_G",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:airkick(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"FIGHT_C","FightC_M",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:gkick(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"FIGHT_D","FightD_G",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:lowthrow(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"GRENADE","WEAPON_throwu",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:highthrow(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"GRENADE","WEAPON_throw",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:dealstance(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"DEALER","DEALER_IDLE",4.1, 0, 0, 0, 0, 0, 0);
	return 1; 
}

YCMD:pee(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	SetPlayerSpecialAction(playerid, 68);
	return 1; 
}

YCMD:getarrested(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"ped", "ARRESTgun", 4.1, 0, 0, 0, 1, 0, 0); // Gun Arrest
	return 1; 
}

YCMD:bomb(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "BOMBER","BOM_Plant_Loop",4.1, 0, 0, 0, 0, 0, 0); // Place Bomb
	return 1; 
}

YCMD:kiss(playerid, params[], help) { 
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
	ApplyAnimation(playerid,"KISSING","Playa_Kiss_01",4.1, 0, 0, 0, 0, 0, 0); 
	return 1; 
}

YCMD:smoke(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/smoke [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"SMOKING","M_smk_in",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"SMOKING","M_smklean_loop",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/smoke [1-2]");
    }
    return 1;
}

YCMD:basket(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/basket [1-6]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"BSKTBALL","BBALL_idleloop",4.1, 1, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"BSKTBALL","BBALL_Jump_Shot",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"BSKTBALL","BBALL_pickup",4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"BSKTBALL","BBALL_run",4.1, 1, 1, 1, 0, 0, 0);
        case 5: ApplyAnimation(playerid,"BSKTBALL","BBALL_def_loop",4.1, 1, 0, 0, 0, 0, 0);
        case 6: ApplyAnimation(playerid,"BSKTBALL","BBALL_Dnk",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/basket [1-6]");
    }
    return 1;
}

YCMD:gwalk(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/gwalk [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"PED","WALK_gang1",4.1, 0, 0, 0, 0, 0, 0);
    	case 2: ApplyAnimation(playerid,"PED","WALK_gang2",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/gwalk [1-2]");
    }
    return 1;
}

YCMD:poli(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/poli [1-2]");
    switch(gPara[0]) {
        case 1:ApplyAnimation(playerid,"POLICE","CopTraf_Come",4.1, 0, 0, 0, 0, 0, 0);
        case 2:ApplyAnimation(playerid,"POLICE","CopTraf_Stop",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/poli [1-2]");
    }
    return 1;
}

YCMD:dj(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/dj [1-4]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"SCRATCHING","scdldlp",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"SCRATCHING","scdlulp",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"SCRATCHING","scdrdlp",4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"SCRATCHING","scdrulp",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/dj [1-4]");
    }
    return 1;
}

YCMD:aim(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/aim [1-3]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"PED","gang_gunstand",4.1, 0, 0, 0, 0, 0, 0);
	    case 2: ApplyAnimation(playerid,"PED","Driveby_L",4.1, 0, 0, 0, 0, 0, 0);
	    case 3: ApplyAnimation(playerid,"PED","Driveby_R",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/aim [1-3]");
    }
    return 1;
}

YCMD:lean(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/lean [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"GANGS","leanIDLE",4.1, 0, 0, 0, 0, 0, 0);
    	case 2: ApplyAnimation(playerid,"MISC","Plyrlean_loop",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/lean [1-2]");
    }
    return 1;
}
YCMD:wank(playerid, params[], help) {
   	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/wank [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"PAULNMAC","wank_in",4.1, 0, 0, 0, 0, 0, 0);
    	case 2: ApplyAnimation(playerid,"PAULNMAC","wank_loop",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/wank [1-2]");
    }
    return 1;
}
YCMD:inbedright(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_R",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:inbedleft(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_L",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:stand(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"WUZI","Wuzi_stand_loop", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:slapped(playerid, params[], help) {
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"SWEET","ho_ass_slapped",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:getup(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"PED","getup",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:follow(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"WUZI","Wuzi_follow",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:strip(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/strip [1-7]");
    switch(gPara[0]) {
       	case 1: ApplyAnimation(playerid,"STRIP", "strip_A", 4.1, 0, 0, 0, 0, 0, 0 );
	    case 2: ApplyAnimation(playerid,"STRIP", "strip_B", 4.1, 0, 0, 0, 0, 0, 0 );
	    case 3: ApplyAnimation(playerid,"STRIP", "strip_C", 4.1, 0, 0, 0, 0, 0, 0 );
	    case 4: ApplyAnimation(playerid,"STRIP", "strip_D", 4.1, 0, 0, 0, 0, 0, 0 );
	    case 5: ApplyAnimation(playerid,"STRIP", "strip_E", 4.1, 0, 0, 0, 0, 0, 0 );
	    case 6: ApplyAnimation(playerid,"STRIP", "strip_F", 4.1, 0, 0, 0, 0, 0, 0 );
	    case 7: ApplyAnimation(playerid,"STRIP", "strip_G", 4.1, 0, 0, 0, 0, 0, 0 );
        default: return sendUsage(playerid,"/strip [1-7]");
    }
    return 1;
}

YCMD:sexy(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/strip [1-8]");
    switch(gPara[0]) {
       	case 1: ApplyAnimation(playerid,"SNM","SPANKING_IDLEW",4.1, 0, 0, 0, 0, 0, 0);
	    case 2: ApplyAnimation(playerid,"SNM","SPANKING_IDLEP",4.1, 0, 0, 0, 0, 0, 0);
	    case 3: ApplyAnimation(playerid,"SNM","SPANKINGW",4.1, 0, 0, 0, 0, 0, 0);
	    case 4: ApplyAnimation(playerid,"SNM","SPANKINGP",4.1, 0, 0, 0, 0, 0, 0);
	    case 5: ApplyAnimation(playerid,"SNM","SPANKEDW",4.1, 0, 0, 0, 0, 0, 0);
	    case 6: ApplyAnimation(playerid,"SNM","SPANKEDP",4.1, 0, 0, 0, 0, 0, 0);
	    case 7: ApplyAnimation(playerid,"SNM","SPANKING_ENDW",4.1, 0, 0, 0, 0, 0, 0);
	    case 8: ApplyAnimation(playerid,"SNM","SPANKING_ENDP",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/strip [1-8]");
    }
    return 1;
}

YCMD:bj(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/bj [1-4]");
    switch(gPara[0]) {
       	case 1: ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_START_P",4.1, 0, 0, 0, 0, 0, 0);
	    case 2: ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_START_W",4.1, 0, 0, 0, 0, 0, 0);
	    case 3: ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_LOOP_P",4.1, 0, 0, 0, 0, 0, 0);
	    case 4: ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_LOOP_W",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/bj [1-4]");
    }
    return 1;
}
YCMD:chat(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/chat [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"PED","IDLE_CHAT",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"MISC","Idle_Chat_02",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/chat [1-2]");
    }
    return 1;
}
YCMD:thankyou(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"FOOD","SHP_Thank", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:deal(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/deal [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid, "DEALER", "DEALER_DEAL", 4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"DEALER","DRUGS_BUY", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/deal [1-2]");
    }
    return 1;
}
YCMD:invite1(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/invite1 [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"GANGS","Invite_Yes",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"GANGS","Invite_No",4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/invite1 [1-2]");
    }
    return 1;
}
YCMD:checkout(playerid, params[], help){
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "GRAFFITI", "graffiti_Chkout", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:nod(playerid, params[], help) {
   	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"COP_AMBIENT","Coplook_nod",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:carsmoke(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"PED","Smoke_in_car", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:angry(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"RIOT","RIOT_ANGRY",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:benddown(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "BAR", "Barserve_bottle", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:shakehead(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "MISC", "plyr_shkhead", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}
YCMD:cockgun(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "SILENCED", "Silence_reload", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:scratch(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"MISC","Scratchballs_01", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:liftup(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "CARRY", "liftup", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:putdown(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid, "CARRY", "putdwn", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:joint(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"GANGS","smkcig_prtl",4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:yes(playerid, params[], help)
{
	if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    ApplyAnimation(playerid,"CLOTHES","CLO_Buy", 4.1, 0, 0, 0, 0, 0, 0);
    return 1;
}

YCMD:win(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/win [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"CASINO","cards_win", 4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"CASINO","Roulette_win", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/win [1-2]");
    }
    return 1;
}

YCMD:cry(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/cry [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"GRAVEYARD","mrnF_loop", 4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"GRAVEYARD","mrnM_loop", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/cry [1-2]");
    }
    return 1;
}

YCMD:celebrate(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/celebrate [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"benchpress","gym_bp_celebrate", 4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"GYMNASIUM","gym_tread_celebrate", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/celebrate [1-2]");
    }
    return 1;
}

YCMD:bed(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/bed [1-4]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"INT_HOUSE","BED_In_L",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"INT_HOUSE","BED_In_R",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_L", 4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_R", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/bed [1-4]");
    }
    return 1;
}

YCMD:bar(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid, "/bar [1-5]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid, "BAR", "Barcustom_get", 4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid,"GHANDS","gsign2LH",4.1, 0, 0, 0, 0, 0, 0);
        case 3: ApplyAnimation(playerid, "BAR", "Barcustom_order", 4.1, 0, 0, 0, 0, 0, 0);
        case 4: ApplyAnimation(playerid, "BAR", "Barserve_give", 4.1, 0, 0, 0, 0, 0, 0);
        case 5: ApplyAnimation(playerid, "BAR", "Barserve_glass", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/bar [1-5]");
    }
    return 1;
}
IsInLowRider(playerid) {
    new pveh = GetPlayerVehicleID(playerid);
    switch(GetVehicleModel(pveh)) {
        case 536, 575, 567: return 1;
    }
    return 0;
}
YCMD:lranim(playerid, params[], help) {
	if(!IsInLowRider(playerid)) return SCM(playerid, COLOR_GREY, "You must be in a compatible lowrider vehicle to use this command!");
    if(sscanf(params, "i", gPara[0])) return sendUsage(playerid, "/lranim [0-36]");
    if(GetPlayerState(playerid) != PLAYER_STATE_DRIVER) return SCM(playerid, COLOR_GREY, "You need to be the driver of the vehicle!");
    switch(gPara[0]) {
    	case 0:ApplyAnimation(playerid, "LOWRIDER", "F_smklean_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 1: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_bdbnce", 4.0, 0, 0, 0, 1, 0, 1);
        case 2: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_hair", 4.0, 1, 0, 0, 0, 0, 1);
        case 3: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_hurry", 4.0, 1, 0, 0, 0, 0, 1);
        case 4: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_idleloop", 4.0, 1, 0, 0, 0, 0, 1);
        case 5: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_idle_to_l0", 4.0, 0, 0, 0, 1, 0, 1);
        case 6: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l0_bnce", 4.0, 1, 0, 0, 0, 0, 1);
        case 7: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l0_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 8: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l0_to_l1", 4.0, 0, 0, 0, 1, 0, 1);
        case 9: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l12_to_l0", 4.0, 0, 0, 0, 1, 0, 1);
        case 10: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l1_bnce", 4.0, 1, 0, 0, 0, 0, 1);
        case 11: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l1_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 12: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l1_to_l2", 4.0, 1, 0, 0, 0, 0, 1);
        case 13: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l2_bnce", 4.0, 1, 0, 0, 0, 0, 1);
        case 14: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l2_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 15: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l2_to_l3", 4.0, 0, 0, 0, 1, 0, 1);
        case 16: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l345_to_l1", 4.0, 0, 0, 0, 1, 0, 1);
        case 17: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l3_bnce", 4.0, 1, 0, 0, 0, 0, 1);
        case 18: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l3_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 19: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l3_to_l4", 4.0, 1, 0, 0, 0, 0, 1);
        case 20: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l4_bnce", 4.0, 1, 0, 0, 0, 0, 1);
        case 21: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l4_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 22: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l4_to_l5", 4.0, 0, 0, 0, 1, 0, 1);
        case 23: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l5_bnce", 4.0, 1, 0, 0, 0, 0, 1);
        case 24: ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l5_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 25: ApplyAnimation(playerid, "LOWRIDER", "M_smklean_loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 26: ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkB", 4.0, 1, 0, 0, 0, 0, 1);
        case 27: ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkC", 4.0, 1, 0, 0, 0, 0, 1);
        case 28: ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkD", 4.0, 1, 0, 0, 0, 0, 1);
        case 29: ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkF", 4.0, 1, 0, 0, 0, 0, 1);
        case 30: ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkG", 4.0, 1, 0, 0, 0, 0, 1);
        case 31: ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkH", 4.0, 1, 0, 0, 0, 0, 1);
        case 32: ApplyAnimation(playerid, "LOWRIDER", "RAP_A_Loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 33: ApplyAnimation(playerid, "LOWRIDER", "RAP_B_Loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 34: ApplyAnimation(playerid, "LOWRIDER", "RAP_C_Loop", 4.0, 1, 0, 0, 0, 0, 1);
        case 35: ApplyAnimation(playerid, "LOWRIDER", "Sit_relaxed", 4.0, 1, 0, 0, 0, 0, 1);
        case 36: ApplyAnimation(playerid, "LOWRIDER", "Tap_hand", 4.0, 1, 0, 0, 0, 0, 1);
    }
	return 1;
}

YCMD:die(playerid, params[], help) {
    if(playerFreeze[playerid] == true) return SCM(playerid, COLOR_GREY, "You can't use this command while you are freeze.");
	if(isPlayerFalling(playerid)) return SCM(playerid, COLOR_GREY, "You can't use this command while you are falling.");
    if(sscanf(params, "d", gPara[0])) return sendUsage(playerid,"/die [1-2]");
    switch(gPara[0]) {
        case 1: ApplyAnimation(playerid,"KNIFE","KILL_Knife_Ped_Die",4.1, 0, 0, 0, 0, 0, 0);
        case 2: ApplyAnimation(playerid, "PARACHUTE", "FALL_skyDive_DIE", 4.1, 0, 0, 0, 0, 0, 0);
        default: return sendUsage(playerid,"/die [1-2]");
    }
    return 1;
}