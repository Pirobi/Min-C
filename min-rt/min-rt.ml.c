#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x.11020, int size_y.11021, bool debug_p.11022, Value *env);
typedef int fun_int_int_double_Value(int nref.11007, double energy.11008, Value *env);
typedef int fun_int_array_array_double_Value(Value* v1.11003, Value* v2.11004, double w.11005, Value *env);
typedef double fun_double_array_array_Value(Value* v1.11000, Value* v2.11001, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint.10981, Value* vscan.10982, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs.10972, Value* and_group.10973, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs.10960, Value* and_group.10961, Value* p.10962, Value *env);
typedef bool fun_bool_int_array_Value(int ofs.10957, Value* iand.10958, Value *env);
typedef int fun_int_int_array_array_Value(int index.10945, Value* l.10946, Value* p.10947, Value *env);
typedef double fun_double_tuple_array_Value(int* m.10930, Value* v.10931, Value *env);
typedef int fun_int_tuple_array_Value(int* m.10924, Value* l.10925, Value *env);
typedef Value* fun_array_int_Value(int length.10918, Value *env);
typedef bool fun_bool_int_Value(int n.10910, Value *env);
typedef int fun_int_int_Value(int Tu8881.10908, Value *env);
typedef int fun_int_array_bool_Value(Value* v.10901, bool inv.10902, Value *env);
typedef double fun_double_tuple_Value(int* m.10873, Value *env);
typedef bool fun_bool_tuple_Value(int* m.10869, Value *env);
typedef int fun_int_tuple_Value(int* m.10863, Value *env);
typedef double fun_double_double_Value(double x.10859, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x.10856, bool y.10857, Value *env);

bool xor.10855_fun(bool x.10856, bool y.10857, Value *env){
bool result;
int Ti10853.13316;
Ti10853_13316 = 0;
if(x.10856 == Ti10853.13316){
result = y.10857;
}
else{
int Ti10854.13317;
Ti10854_13317 = 0;
if(y.10857 == Ti10854.13317){
result = 1;
}
else{
result = 0;
}
}
return result;
}

double fsqr.10858_fun(double x.10859, Value *env){
double result;
result =  x.10859 * x.10859;
return result;
}

double fhalf.10860_fun(double x.10861, Value *env){
double result;
double Td10852.13315;
Td10852_13315 = 2.000000;
result = x.10861 / Td10852.13315;
return result;
}

int o_texturetype.10862_fun(int* m.10863, Value *env){
int result;
int m_tex.13305 = m.10863[0];
int xm_shape.13306 = m.10863[1];
int xm_surface.13307 = m.10863[2];
int xm_isrot.13308 = m.10863[3];
Value* xm_abc.13309 = m.10863[4];
Value* xm_xyz.13310 = m.10863[5];
bool xm_invert.13311 = m.10863[6];
Value* xm_surfparams.13312 = m.10863[7];
Value* xm_color.13313 = m.10863[8];
Value* xm_rot123.13314 = m.10863[9];
result = m_tex.13305;
return result;
}

int o_form.10864_fun(int* m.10865, Value *env){
int result;
int xm_tex.13295 = m.10865[0];
int m_shape.13296 = m.10865[1];
int xm_surface.13297 = m.10865[2];
int xm_isrot.13298 = m.10865[3];
Value* xm_abc.13299 = m.10865[4];
Value* xm_xyz.13300 = m.10865[5];
bool xm_invert.13301 = m.10865[6];
Value* xm_surfparams.13302 = m.10865[7];
Value* xm_color.13303 = m.10865[8];
Value* xm_rot123.13304 = m.10865[9];
result = m_shape.13296;
return result;
}

int o_reflectiontype.10866_fun(int* m.10867, Value *env){
int result;
int xm_tex.13285 = m.10867[0];
int xm_shape.13286 = m.10867[1];
int m_surface.13287 = m.10867[2];
int xm_isrot.13288 = m.10867[3];
Value* xm_abc.13289 = m.10867[4];
Value* xm_xyz.13290 = m.10867[5];
bool xm_invert.13291 = m.10867[6];
Value* xm_surfparams.13292 = m.10867[7];
Value* xm_color.13293 = m.10867[8];
Value* xm_rot123.13294 = m.10867[9];
result = m_surface.13287;
return result;
}

bool o_isinvert.10868_fun(int* m.10869, Value *env){
bool result;
int m_tex.13275 = m.10869[0];
int m_shape.13276 = m.10869[1];
int m_surface.13277 = m.10869[2];
int m_isrot.13278 = m.10869[3];
Value* xm_abc.13279 = m.10869[4];
Value* xm_xyz.13280 = m.10869[5];
bool m_invert.13281 = m.10869[6];
Value* xm_surfparams.13282 = m.10869[7];
Value* xm_color.13283 = m.10869[8];
Value* xm_rot123.13284 = m.10869[9];
result = m_invert.13281;
return result;
}

int o_isrot.10870_fun(int* m.10871, Value *env){
int result;
int xm_tex.13265 = m.10871[0];
int xm_shape.13266 = m.10871[1];
int xm_surface.13267 = m.10871[2];
int m_isrot.13268 = m.10871[3];
Value* xm_abc.13269 = m.10871[4];
Value* xm_xyz.13270 = m.10871[5];
bool xm_invert.13271 = m.10871[6];
Value* xm_surfparams.13272 = m.10871[7];
Value* xm_color.13273 = m.10871[8];
Value* xm_rot123.13274 = m.10871[9];
result = m_isrot.13268;
return result;
}

double o_param_a.10872_fun(int* m.10873, Value *env){
double result;
int xm_tex.13254 = m.10873[0];
int xm_shape.13255 = m.10873[1];
int xm_surface.13256 = m.10873[2];
int xm_isrot.13257 = m.10873[3];
Value* m_abc.13258 = m.10873[4];
Value* xm_xyz.13259 = m.10873[5];
bool xm_invert.13260 = m.10873[6];
Value* xm_surfparams.13261 = m.10873[7];
Value* xm_color.13262 = m.10873[8];
Value* xm_rot123.13263 = m.10873[9];
int Ti10851.13264;
Ti10851_13264 = 0;
result = m_abc.13258[Ti10851.13264].d;
return result;
}

double o_param_b.10874_fun(int* m.10875, Value *env){
double result;
int xm_tex.13243 = m.10875[0];
int xm_shape.13244 = m.10875[1];
int xm_surface.13245 = m.10875[2];
int xm_isrot.13246 = m.10875[3];
Value* m_abc.13247 = m.10875[4];
Value* xm_xyz.13248 = m.10875[5];
bool xm_invert.13249 = m.10875[6];
Value* xm_surfparams.13250 = m.10875[7];
Value* xm_color.13251 = m.10875[8];
Value* xm_rot123.13252 = m.10875[9];
int Ti10850.13253;
Ti10850_13253 = 1;
result = m_abc.13247[Ti10850.13253].d;
return result;
}

double o_param_c.10876_fun(int* m.10877, Value *env){
double result;
int xm_tex.13232 = m.10877[0];
int xm_shape.13233 = m.10877[1];
int xm_surface.13234 = m.10877[2];
int xm_isrot.13235 = m.10877[3];
Value* m_abc.13236 = m.10877[4];
Value* xm_xyz.13237 = m.10877[5];
bool xm_invert.13238 = m.10877[6];
Value* xm_surfparams.13239 = m.10877[7];
Value* xm_color.13240 = m.10877[8];
Value* xm_rot123.13241 = m.10877[9];
int Ti10849.13242;
Ti10849_13242 = 2;
result = m_abc.13236[Ti10849.13242].d;
return result;
}

double o_param_x.10878_fun(int* m.10879, Value *env){
double result;
int xm_tex.13221 = m.10879[0];
int xm_shape.13222 = m.10879[1];
int xm_surface.13223 = m.10879[2];
int xm_isrot.13224 = m.10879[3];
Value* xm_abc.13225 = m.10879[4];
Value* m_xyz.13226 = m.10879[5];
bool xm_invert.13227 = m.10879[6];
Value* xm_surfparams.13228 = m.10879[7];
Value* xm_color.13229 = m.10879[8];
Value* xm_rot123.13230 = m.10879[9];
int Ti10848.13231;
Ti10848_13231 = 0;
result = m_xyz.13226[Ti10848.13231].d;
return result;
}

double o_param_y.10880_fun(int* m.10881, Value *env){
double result;
int xm_tex.13210 = m.10881[0];
int xm_shape.13211 = m.10881[1];
int xm_surface.13212 = m.10881[2];
int xm_isrot.13213 = m.10881[3];
Value* xm_abc.13214 = m.10881[4];
Value* m_xyz.13215 = m.10881[5];
bool xm_invert.13216 = m.10881[6];
Value* xm_surfparams.13217 = m.10881[7];
Value* xm_color.13218 = m.10881[8];
Value* xm_rot123.13219 = m.10881[9];
int Ti10847.13220;
Ti10847_13220 = 1;
result = m_xyz.13215[Ti10847.13220].d;
return result;
}

double o_param_z.10882_fun(int* m.10883, Value *env){
double result;
int xm_tex.13199 = m.10883[0];
int xm_shape.13200 = m.10883[1];
int xm_surface.13201 = m.10883[2];
int xm_isrot.13202 = m.10883[3];
Value* xm_abc.13203 = m.10883[4];
Value* m_xyz.13204 = m.10883[5];
bool xm_invert.13205 = m.10883[6];
Value* xm_surfparams.13206 = m.10883[7];
Value* xm_color.13207 = m.10883[8];
Value* xm_rot123.13208 = m.10883[9];
int Ti10846.13209;
Ti10846_13209 = 2;
result = m_xyz.13204[Ti10846.13209].d;
return result;
}

double o_diffuse.10884_fun(int* m.10885, Value *env){
double result;
int xm_tex.13188 = m.10885[0];
int xm_shape.13189 = m.10885[1];
int xm_surface.13190 = m.10885[2];
int xm_isrot.13191 = m.10885[3];
Value* xm_abc.13192 = m.10885[4];
Value* xm_xyz.13193 = m.10885[5];
bool xm_invert.13194 = m.10885[6];
Value* m_surfparams.13195 = m.10885[7];
Value* xm_color.13196 = m.10885[8];
Value* xm_rot123.13197 = m.10885[9];
int Ti10845.13198;
Ti10845_13198 = 0;
result = m_surfparams.13195[Ti10845.13198].d;
return result;
}

double o_hilight.10886_fun(int* m.10887, Value *env){
double result;
int xm_tex.13177 = m.10887[0];
int xm_shape.13178 = m.10887[1];
int xm_surface.13179 = m.10887[2];
int xm_isrot.13180 = m.10887[3];
Value* xm_abc.13181 = m.10887[4];
Value* xm_xyz.13182 = m.10887[5];
bool xm_invert.13183 = m.10887[6];
Value* m_surfparams.13184 = m.10887[7];
Value* xm_color.13185 = m.10887[8];
Value* xm_rot123.13186 = m.10887[9];
int Ti10844.13187;
Ti10844_13187 = 1;
result = m_surfparams.13184[Ti10844.13187].d;
return result;
}

double o_color_red.10888_fun(int* m.10889, Value *env){
double result;
int xm_tex.13166 = m.10889[0];
int xm_shape.13167 = m.10889[1];
int m_surface.13168 = m.10889[2];
int xm_isrot.13169 = m.10889[3];
Value* xm_abc.13170 = m.10889[4];
Value* xm_xyz.13171 = m.10889[5];
bool xm_invert.13172 = m.10889[6];
Value* xm_surfparams.13173 = m.10889[7];
Value* m_color.13174 = m.10889[8];
Value* xm_rot123.13175 = m.10889[9];
int Ti10843.13176;
Ti10843_13176 = 0;
result = m_color.13174[Ti10843.13176].d;
return result;
}

double o_color_green.10890_fun(int* m.10891, Value *env){
double result;
int xm_tex.13155 = m.10891[0];
int xm_shape.13156 = m.10891[1];
int m_surface.13157 = m.10891[2];
int xm_isrot.13158 = m.10891[3];
Value* xm_abc.13159 = m.10891[4];
Value* xm_xyz.13160 = m.10891[5];
bool xm_invert.13161 = m.10891[6];
Value* xm_surfparams.13162 = m.10891[7];
Value* m_color.13163 = m.10891[8];
Value* xm_rot123.13164 = m.10891[9];
int Ti10842.13165;
Ti10842_13165 = 1;
result = m_color.13163[Ti10842.13165].d;
return result;
}

double o_color_blue.10892_fun(int* m.10893, Value *env){
double result;
int xm_tex.13144 = m.10893[0];
int xm_shape.13145 = m.10893[1];
int m_surface.13146 = m.10893[2];
int xm_isrot.13147 = m.10893[3];
Value* xm_abc.13148 = m.10893[4];
Value* xm_xyz.13149 = m.10893[5];
bool xm_invert.13150 = m.10893[6];
Value* xm_surfparams.13151 = m.10893[7];
Value* m_color.13152 = m.10893[8];
Value* xm_rot123.13153 = m.10893[9];
int Ti10841.13154;
Ti10841_13154 = 2;
result = m_color.13152[Ti10841.13154].d;
return result;
}

double o_param_r1.10894_fun(int* m.10895, Value *env){
double result;
int xm_tex.13133 = m.10895[0];
int xm_shape.13134 = m.10895[1];
int xm_surface.13135 = m.10895[2];
int xm_isrot.13136 = m.10895[3];
Value* xm_abc.13137 = m.10895[4];
Value* xm_xyz.13138 = m.10895[5];
bool xm_invert.13139 = m.10895[6];
Value* xm_surfparams.13140 = m.10895[7];
Value* xm_color.13141 = m.10895[8];
Value* m_rot123.13142 = m.10895[9];
int Ti10840.13143;
Ti10840_13143 = 0;
result = m_rot123.13142[Ti10840.13143].d;
return result;
}

double o_param_r2.10896_fun(int* m.10897, Value *env){
double result;
int xm_tex.13122 = m.10897[0];
int xm_shape.13123 = m.10897[1];
int xm_surface.13124 = m.10897[2];
int xm_isrot.13125 = m.10897[3];
Value* xm_abc.13126 = m.10897[4];
Value* xm_xyz.13127 = m.10897[5];
bool xm_invert.13128 = m.10897[6];
Value* xm_surfparams.13129 = m.10897[7];
Value* xm_color.13130 = m.10897[8];
Value* m_rot123.13131 = m.10897[9];
int Ti10839.13132;
Ti10839_13132 = 1;
result = m_rot123.13131[Ti10839.13132].d;
return result;
}

double o_param_r3.10898_fun(int* m.10899, Value *env){
double result;
int xm_tex.13111 = m.10899[0];
int xm_shape.13112 = m.10899[1];
int xm_surface.13113 = m.10899[2];
int xm_isrot.13114 = m.10899[3];
Value* xm_abc.13115 = m.10899[4];
Value* xm_xyz.13116 = m.10899[5];
bool xm_invert.13117 = m.10899[6];
Value* xm_surfparams.13118 = m.10899[7];
Value* xm_color.13119 = m.10899[8];
Value* m_rot123.13120 = m.10899[9];
int Ti10838.13121;
Ti10838_13121 = 2;
result = m_rot123.13120[Ti10838.13121].d;
return result;
}

int normalize_vector.10900_fun(Value* v.10901, bool inv.10902, Value *env){
int result;
int Ti10814.13110;
Ti10814_13110 = 0;
double Td10815.13109;
Td10815_13109 = v.10901[Ti10814.13110].d;
double Td10816.13105;
Td10816_13105 = fsqr.10858_fun(Td10815.13109, NULL);
int Ti10817.13108;
Ti10817_13108 = 1;
double Td10818.13107;
Td10818_13107 = v.10901[Ti10817.13108].d;
double Td10819.13106;
Td10819_13106 = fsqr.10858_fun(Td10818.13107, NULL);
double Td10820.13101;
Td10820_13101 = Td10816.13105 + Td10819.13106;
int Ti10821.13104;
Ti10821_13104 = 2;
double Td10822.13103;
Td10822_13103 = v.10901[Ti10821.13104].d;
double Td10823.13102;
Td10823_13102 = fsqr.10858_fun(Td10822.13103, NULL);
double Td10824.13100;
Td10824_13100 = Td10820.13101 + Td10823.13102;
double n0.13083;
n0_13083 = sqrt(Td10824.13100);
int Ti10825.13099;
Ti10825_13099 = 0;
double n.13084;
if(inv.10902 == Ti10825.13099){
n_13084 = n0.13083;
}
else{
n_13084 = -n0.13083;
}
int Ti10826.13095;
Ti10826_13095 = 0;
int Ti10827.13098;
Ti10827_13098 = 0;
double Td10828.13097;
Td10828_13097 = v.10901[Ti10827.13098].d;
double Td10829.13096;
Td10829_13096 = Td10828.13097 / n.13084;
int Tu8880.13085;
v.10901[Ti10826.13095].d = Td10829.13096;
int Ti10830.13091;
Ti10830_13091 = 1;
int Ti10831.13094;
Ti10831_13094 = 1;
double Td10832.13093;
Td10832_13093 = v.10901[Ti10831.13094].d;
double Td10833.13092;
Td10833_13092 = Td10832.13093 / n.13084;
int Tu8879.13086;
v.10901[Ti10830.13091].d = Td10833.13092;
int Ti10834.13087;
Ti10834_13087 = 2;
int Ti10835.13090;
Ti10835_13090 = 2;
double Td10836.13089;
Td10836_13089 = v.10901[Ti10835.13090].d;
double Td10837.13088;
Td10837_13088 = Td10836.13089 / n.13084;
v.10901[Ti10834.13087].d = Td10837.13088;
return result;
}

double sgn.10903_fun(double x.10904, Value *env){
double result;
double Td10813.13082;
Td10813_13082 = 0.000000;
if(x.10904 <= Td10813.13082){
result = -1.000000;
}
else{
result = 1.000000;
}
return result;
}

double rad.10905_fun(double x.10906, Value *env){
double result;
double Td10812.13081;
Td10812_13081 = 0.017453;
result =  x.10906 * Td10812.13081;
return result;
}

int read_environ.10907_fun(int Tu8881.10908, Value *env){
int result;
Value* Ta10709.13077;
Ta10709_13077 = screen;
int Ti10710.13078;
Ti10710_13078 = 0;
int Tu10711.13080;
Tu10711_13080 = 1;
double Td10712.13079;
printf("Enter a float: ");
scanf("%d\n", &Td10712_13079);
int Tu8897.12953;
Ta10709.13077[Ti10710.13078].d = Td10712.13079;
Value* Ta10713.13073;
Ta10713_13073 = screen;
int Ti10714.13074;
Ti10714_13074 = 1;
int Tu10715.13076;
Tu10715_13076 = 1;
double Td10716.13075;
printf("Enter a float: ");
scanf("%d\n", &Td10716_13075);
int Tu8896.12954;
Ta10713.13073[Ti10714.13074].d = Td10716.13075;
Value* Ta10717.13069;
Ta10717_13069 = screen;
int Ti10718.13070;
Ti10718_13070 = 2;
int Tu10719.13072;
Tu10719_13072 = 1;
double Td10720.13071;
printf("Enter a float: ");
scanf("%d\n", &Td10720_13071);
int Tu8895.12955;
Ta10717.13069[Ti10718.13070].d = Td10720.13071;
int Tu10721.13068;
Tu10721_13068 = 1;
double Td10722.13067;
printf("Enter a float: ");
scanf("%d\n", &Td10722_13067);
double v1.12956;
v1_12956 = rad.10905_fun(Td10722.13067, NULL);
Value* Ta10723.13064;
Ta10723_13064 = cos_v;
int Ti10724.13065;
Ti10724_13065 = 0;
double Td10725.13066;
Td10725_13066 = cos(v1.12956);
int Tu8894.12957;
Ta10723.13064[Ti10724.13065].d = Td10725.13066;
Value* Ta10726.13061;
Ta10726_13061 = sin_v;
int Ti10727.13062;
Ti10727_13062 = 0;
double Td10728.13063;
Td10728_13063 = sin(v1.12956);
int Tu8893.12958;
Ta10726.13061[Ti10727.13062].d = Td10728.13063;
int Tu10729.13060;
Tu10729_13060 = 1;
double Td10730.13059;
printf("Enter a float: ");
scanf("%d\n", &Td10730_13059);
double v2.12959;
v2_12959 = rad.10905_fun(Td10730.13059, NULL);
Value* Ta10731.13056;
Ta10731_13056 = cos_v;
int Ti10732.13057;
Ti10732_13057 = 1;
double Td10733.13058;
Td10733_13058 = cos(v2.12959);
int Tu8892.12960;
Ta10731.13056[Ti10732.13057].d = Td10733.13058;
Value* Ta10734.13053;
Ta10734_13053 = sin_v;
int Ti10735.13054;
Ti10735_13054 = 1;
double Td10736.13055;
Td10736_13055 = sin(v2.12959);
int Tu8891.12961;
Ta10734.13053[Ti10735.13054].d = Td10736.13055;
int Tu10737.13052;
Tu10737_13052 = 1;
double nl.12962;
printf("Enter a float: ");
scanf("%d\n", &nl_12962);
int Tu10738.13051;
Tu10738_13051 = 1;
double Td10739.13050;
printf("Enter a float: ");
scanf("%d\n", &Td10739_13050);
double l1.12963;
l1_12963 = rad.10905_fun(Td10739.13050, NULL);
double sl1.12964;
sl1_12964 = sin(l1.12963);
Value* Ta10740.13047;
Ta10740_13047 = light;
int Ti10741.13048;
Ti10741_13048 = 1;
double Td10742.13049;
Td10742_13049 = -sl1.12964;
int Tu8890.12965;
Ta10740.13047[Ti10741.13048].d = Td10742.13049;
int Tu10743.13046;
Tu10743_13046 = 1;
double Td10744.13045;
printf("Enter a float: ");
scanf("%d\n", &Td10744_13045);
double l2.12966;
l2_12966 = rad.10905_fun(Td10744.13045, NULL);
double cl1.12967;
cl1_12967 = cos(l1.12963);
double sl2.12968;
sl2_12968 = sin(l2.12966);
Value* Ta10745.13042;
Ta10745_13042 = light;
int Ti10746.13043;
Ti10746_13043 = 0;
double Td10747.13044;
Td10747_13044 =  cl1.12967 * sl2.12968;
int Tu8889.12969;
Ta10745.13042[Ti10746.13043].d = Td10747.13044;
double cl2.12970;
cl2_12970 = cos(l2.12966);
Value* Ta10748.13039;
Ta10748_13039 = light;
int Ti10749.13040;
Ti10749_13040 = 2;
double Td10750.13041;
Td10750_13041 =  cl1.12967 * cl2.12970;
int Tu8888.12971;
Ta10748.13039[Ti10749.13040].d = Td10750.13041;
Value* Ta10751.13035;
Ta10751_13035 = beam;
int Ti10752.13036;
Ti10752_13036 = 0;
int Tu10753.13038;
Tu10753_13038 = 1;
double Td10754.13037;
printf("Enter a float: ");
scanf("%d\n", &Td10754_13037);
int Tu8887.12972;
Ta10751.13035[Ti10752.13036].d = Td10754.13037;
Value* Ta10755.13024;
Ta10755_13024 = vp;
int Ti10756.13025;
Ti10756_13025 = 0;
Value* Ta10757.13033;
Ta10757_13033 = cos_v;
int Ti10758.13034;
Ti10758_13034 = 0;
double Td10759.13029;
Td10759_13029 = Ta10757.13033[Ti10758.13034].d;
Value* Ta10760.13031;
Ta10760_13031 = sin_v;
int Ti10761.13032;
Ti10761_13032 = 1;
double Td10762.13030;
Td10762_13030 = Ta10760.13031[Ti10761.13032].d;
double Td10763.13027;
Td10763_13027 =  Td10759.13029 * Td10762.13030;
double Td10764.13028;
Td10764_13028 = -200.000000;
double Td10765.13026;
Td10765_13026 =  Td10763.13027 * Td10764.13028;
int Tu8886.12973;
Ta10755.13024[Ti10756.13025].d = Td10765.13026;
Value* Ta10766.13016;
Ta10766_13016 = vp;
int Ti10767.13017;
Ti10767_13017 = 1;
Value* Ta10768.13022;
Ta10768_13022 = sin_v;
int Ti10769.13023;
Ti10769_13023 = 0;
double Td10770.13021;
Td10770_13021 = Ta10768.13022[Ti10769.13023].d;
double Td10771.13019;
Td10771_13019 = -Td10770.13021;
double Td10772.13020;
Td10772_13020 = -200.000000;
double Td10773.13018;
Td10773_13018 =  Td10771.13019 * Td10772.13020;
int Tu8885.12974;
Ta10766.13016[Ti10767.13017].d = Td10773.13018;
Value* Ta10774.13005;
Ta10774_13005 = vp;
int Ti10775.13006;
Ti10775_13006 = 2;
Value* Ta10776.13014;
Ta10776_13014 = cos_v;
int Ti10777.13015;
Ti10777_13015 = 0;
double Td10778.13010;
Td10778_13010 = Ta10776.13014[Ti10777.13015].d;
Value* Ta10779.13012;
Ta10779_13012 = cos_v;
int Ti10780.13013;
Ti10780_13013 = 1;
double Td10781.13011;
Td10781_13011 = Ta10779.13012[Ti10780.13013].d;
double Td10782.13008;
Td10782_13008 =  Td10778.13010 * Td10781.13011;
double Td10783.13009;
Td10783_13009 = -200.000000;
double Td10784.13007;
Td10784_13007 =  Td10782.13008 * Td10783.13009;
int Tu8884.12975;
Ta10774.13005[Ti10775.13006].d = Td10784.13007;
Value* Ta10785.12996;
Ta10785_12996 = view;
int Ti10786.12997;
Ti10786_12997 = 0;
Value* Ta10787.13003;
Ta10787_13003 = vp;
int Ti10788.13004;
Ti10788_13004 = 0;
double Td10789.12999;
Td10789_12999 = Ta10787.13003[Ti10788.13004].d;
Value* Ta10790.13001;
Ta10790_13001 = screen;
int Ti10791.13002;
Ti10791_13002 = 0;
double Td10792.13000;
Td10792_13000 = Ta10790.13001[Ti10791.13002].d;
double Td10793.12998;
Td10793_12998 = Td10789.12999 + Td10792.13000;
int Tu8883.12976;
Ta10785.12996[Ti10786.12997].d = Td10793.12998;
Value* Ta10794.12987;
Ta10794_12987 = view;
int Ti10795.12988;
Ti10795_12988 = 1;
Value* Ta10796.12994;
Ta10796_12994 = vp;
int Ti10797.12995;
Ti10797_12995 = 1;
double Td10798.12990;
Td10798_12990 = Ta10796.12994[Ti10797.12995].d;
Value* Ta10799.12992;
Ta10799_12992 = screen;
int Ti10800.12993;
Ti10800_12993 = 1;
double Td10801.12991;
Td10801_12991 = Ta10799.12992[Ti10800.12993].d;
double Td10802.12989;
Td10802_12989 = Td10798.12990 + Td10801.12991;
int Tu8882.12977;
Ta10794.12987[Ti10795.12988].d = Td10802.12989;
Value* Ta10803.12978;
Ta10803_12978 = view;
int Ti10804.12979;
Ti10804_12979 = 2;
Value* Ta10805.12985;
Ta10805_12985 = vp;
int Ti10806.12986;
Ti10806_12986 = 2;
double Td10807.12981;
Td10807_12981 = Ta10805.12985[Ti10806.12986].d;
Value* Ta10808.12983;
Ta10808_12983 = screen;
int Ti10809.12984;
Ti10809_12984 = 2;
double Td10810.12982;
Td10810_12982 = Ta10808.12983[Ti10809.12984].d;
double Td10811.12980;
Td10811_12980 = Td10807.12981 + Td10810.12982;
Ta10803.12978[Ti10804.12979].d = Td10811.12980;
return result;
}

bool read_nth_object.10909_fun(int n.10910, Value *env){
bool result;
int Tu10319.12952;
Tu10319_12952 = 1;
int texture.12506;
printf("Enter an integer: ");
scanf("%i\n", &texture_12506);
int Ti10320.12951;
Ti10320_12951 = 1;
int Ti10321.12507;
Ti10321_12507 = -Ti10320.12951;
if(texture.12506 == Ti10321.12507){
result = 0;
}
else{
int Tu10322.12950;
Tu10322_12950 = 1;
int form.12508;
printf("Enter an integer: ");
scanf("%i\n", &form_12508);
int Tu10323.12949;
Tu10323_12949 = 1;
int refltype.12509;
printf("Enter an integer: ");
scanf("%i\n", &refltype_12509);
int Tu10324.12948;
Tu10324_12948 = 1;
int isrot_p.12510;
printf("Enter an integer: ");
scanf("%i\n", &isrot_p_12510);
int Ti10325.12946;
Ti10325_12946 = 3;
double Td10326.12947;
Td10326_12947 = 0.000000;
Value* abc.12511;
make_double_array(&abc_12511, Ti10325.12946, Td10326.12947);
int Ti10327.12943;
Ti10327_12943 = 0;
int Tu10328.12945;
Tu10328_12945 = 1;
double Td10329.12944;
printf("Enter a float: ");
scanf("%d\n", &Td10329_12944);
int Tu8936.12512;
abc.12511[Ti10327.12943].d = Td10329.12944;
int Ti10330.12940;
Ti10330_12940 = 1;
int Tu10331.12942;
Tu10331_12942 = 1;
double Td10332.12941;
printf("Enter a float: ");
scanf("%d\n", &Td10332_12941);
int Tu8935.12513;
abc.12511[Ti10330.12940].d = Td10332.12941;
int Ti10333.12937;
Ti10333_12937 = 2;
int Tu10334.12939;
Tu10334_12939 = 1;
double Td10335.12938;
printf("Enter a float: ");
scanf("%d\n", &Td10335_12938);
int Tu8934.12514;
abc.12511[Ti10333.12937].d = Td10335.12938;
int Ti10336.12935;
Ti10336_12935 = 3;
double Td10337.12936;
Td10337_12936 = 0.000000;
Value* xyz.12515;
make_double_array(&xyz_12515, Ti10336.12935, Td10337.12936);
int Ti10338.12932;
Ti10338_12932 = 0;
int Tu10339.12934;
Tu10339_12934 = 1;
double Td10340.12933;
printf("Enter a float: ");
scanf("%d\n", &Td10340_12933);
int Tu8933.12516;
xyz.12515[Ti10338.12932].d = Td10340.12933;
int Ti10341.12929;
Ti10341_12929 = 1;
int Tu10342.12931;
Tu10342_12931 = 1;
double Td10343.12930;
printf("Enter a float: ");
scanf("%d\n", &Td10343_12930);
int Tu8932.12517;
xyz.12515[Ti10341.12929].d = Td10343.12930;
int Ti10344.12926;
Ti10344_12926 = 2;
int Tu10345.12928;
Tu10345_12928 = 1;
double Td10346.12927;
printf("Enter a float: ");
scanf("%d\n", &Td10346_12927);
int Tu8931.12518;
xyz.12515[Ti10344.12926].d = Td10346.12927;
double Td10347.12923;
Td10347_12923 = 0.000000;
int Tu10348.12925;
Tu10348_12925 = 1;
double Td10349.12924;
printf("Enter a float: ");
scanf("%d\n", &Td10349_12924);
bool m_invert.12519;
if(Td10347.12923 <= Td10349.12924){
m_invert_12519 = 0;
}
else{
m_invert_12519 = 1;
}
int Ti10350.12921;
Ti10350_12921 = 2;
double Td10351.12922;
Td10351_12922 = 0.000000;
Value* reflparam.12520;
make_double_array(&reflparam_12520, Ti10350.12921, Td10351.12922);
int Ti10352.12918;
Ti10352_12918 = 0;
int Tu10353.12920;
Tu10353_12920 = 1;
double Td10354.12919;
printf("Enter a float: ");
scanf("%d\n", &Td10354_12919);
int Tu8930.12521;
reflparam.12520[Ti10352.12918].d = Td10354.12919;
int Ti10355.12915;
Ti10355_12915 = 1;
int Tu10356.12917;
Tu10356_12917 = 1;
double Td10357.12916;
printf("Enter a float: ");
scanf("%d\n", &Td10357_12916);
int Tu8929.12522;
reflparam.12520[Ti10355.12915].d = Td10357.12916;
int Ti10358.12913;
Ti10358_12913 = 3;
double Td10359.12914;
Td10359_12914 = 0.000000;
Value* color.12523;
make_double_array(&color_12523, Ti10358.12913, Td10359.12914);
int Ti10360.12910;
Ti10360_12910 = 0;
int Tu10361.12912;
Tu10361_12912 = 1;
double Td10362.12911;
printf("Enter a float: ");
scanf("%d\n", &Td10362_12911);
int Tu8928.12524;
color.12523[Ti10360.12910].d = Td10362.12911;
int Ti10363.12907;
Ti10363_12907 = 1;
int Tu10364.12909;
Tu10364_12909 = 1;
double Td10365.12908;
printf("Enter a float: ");
scanf("%d\n", &Td10365_12908);
int Tu8927.12525;
color.12523[Ti10363.12907].d = Td10365.12908;
int Ti10366.12904;
Ti10366_12904 = 2;
int Tu10367.12906;
Tu10367_12906 = 1;
double Td10368.12905;
printf("Enter a float: ");
scanf("%d\n", &Td10368_12905);
int Tu8926.12526;
color.12523[Ti10366.12904].d = Td10368.12905;
int Ti10369.12902;
Ti10369_12902 = 3;
double Td10370.12903;
Td10370_12903 = 0.000000;
Value* rotation.12527;
make_double_array(&rotation_12527, Ti10369.12902, Td10370.12903);
int Ti10371.12887;
Ti10371_12887 = 0;
int Tu8925.12528;
if(isrot_p.12510 == Ti10371.12887){
Tu8925_12528 = 1;
}
else{
int Ti10372.12898;
Ti10372_12898 = 0;
int Tu10373.12901;
Tu10373_12901 = 1;
double Td10374.12900;
printf("Enter a float: ");
scanf("%d\n", &Td10374_12900);
double Td10375.12899;
Td10375_12899 = rad.10905_fun(Td10374.12900, NULL);
int Tu8899.12888;
rotation.12527[Ti10372.12898].d = Td10375.12899;
int Ti10376.12894;
Ti10376_12894 = 1;
int Tu10377.12897;
Tu10377_12897 = 1;
double Td10378.12896;
printf("Enter a float: ");
scanf("%d\n", &Td10378_12896);
double Td10379.12895;
Td10379_12895 = rad.10905_fun(Td10378.12896, NULL);
int Tu8898.12889;
rotation.12527[Ti10376.12894].d = Td10379.12895;
int Ti10380.12890;
Ti10380_12890 = 2;
int Tu10381.12893;
Tu10381_12893 = 1;
double Td10382.12892;
printf("Enter a float: ");
scanf("%d\n", &Td10382_12892);
double Td10383.12891;
Td10383_12891 = rad.10905_fun(Td10382.12892, NULL);
rotation.12527[Ti10380.12890].d = Td10383.12891;
}
int Ti10384.12886;
Ti10384_12886 = 2;
bool m_invert2.12529;
if(form.12508 == Ti10384.12886){
m_invert2_12529 = 1;
}
else{
m_invert2_12529 = m_invert.12519;
}
int* obj.12530;
obj_12530 = malloc(10 * sizeof(int));
obj_12530[0] = texture.12506;
obj_12530[1] = form.12508;
obj_12530[2] = refltype.12509;
obj_12530[3] = isrot_p.12510;
obj_12530[4] = abc.12511;
obj_12530[5] = xyz.12515;
obj_12530[6] = m_invert2.12529;
obj_12530[7] = reflparam.12520;
obj_12530[8] = color.12523;
obj_12530[9] = rotation.12527;

Value* Ta10385.12885;
Ta10385_12885 = objects;
int Tu8924.12531;
Ta10385.12885[n.10910].a = obj.12530;
int Ti10386.12858;
Ti10386_12858 = 3;
int Tu8923.12532;
if(form.12508 == Ti10386.12858){
int Ti10387.12884;
Ti10387_12884 = 0;
double a.12862;
a_12862 = abc.12511[Ti10387.12884].d;
int Ti10388.12879;
Ti10388_12879 = 0;
double Td10389.12881;
Td10389_12881 = 0.000000;
double Td10392.12880;
if(Td10389.12881 == a.12862){
Td10392_12880 = 0.000000;
}
else{
double Td10390.12882;
Td10390_12882 = sgn.10903_fun(a.12862, NULL);
double Td10391.12883;
Td10391_12883 = fsqr.10858_fun(a.12862, NULL);
Td10392_12880 = Td10390.12882 / Td10391.12883;
}
int Tu8901.12863;
abc.12511[Ti10388.12879].d = Td10392.12880;
int Ti10393.12878;
Ti10393_12878 = 1;
double b.12864;
b_12864 = abc.12511[Ti10393.12878].d;
int Ti10394.12873;
Ti10394_12873 = 1;
double Td10395.12875;
Td10395_12875 = 0.000000;
double Td10398.12874;
if(Td10395.12875 == b.12864){
Td10398_12874 = 0.000000;
}
else{
double Td10396.12876;
Td10396_12876 = sgn.10903_fun(b.12864, NULL);
double Td10397.12877;
Td10397_12877 = fsqr.10858_fun(b.12864, NULL);
Td10398_12874 = Td10396.12876 / Td10397.12877;
}
int Tu8900.12865;
abc.12511[Ti10394.12873].d = Td10398.12874;
int Ti10399.12872;
Ti10399_12872 = 2;
double c.12866;
c_12866 = abc.12511[Ti10399.12872].d;
int Ti10400.12867;
Ti10400_12867 = 2;
double Td10401.12869;
Td10401_12869 = 0.000000;
double Td10404.12868;
if(Td10401.12869 == c.12866){
Td10404_12868 = 0.000000;
}
else{
double Td10402.12870;
Td10402_12870 = sgn.10903_fun(c.12866, NULL);
double Td10403.12871;
Td10403_12871 = fsqr.10858_fun(c.12866, NULL);
Td10404_12868 = Td10402.12870 / Td10403.12871;
}
abc.12511[Ti10400.12867].d = Td10404.12868;
}
else{
int Ti10405.12859;
Ti10405_12859 = 2;
if(form.12508 == Ti10405.12859){
int Ti10406.12861;
Ti10406_12861 = 0;
int Ti10407.12860;
if(m_invert.12519 == Ti10406.12861){
Ti10407_12860 = 1;
}
else{
Ti10407_12860 = 0;
}
Tu8923_12532 = normalize_vector.10900_fun(abc.12511, Ti10407.12860, NULL);
}
else{
Tu8923_12532 = 1;
}
}
int Ti10408.12534;
Ti10408_12534 = 0;
int Tu8922.12533;
if(isrot_p.12510 == Ti10408.12534){
Tu8922_12533 = 1;
}
else{
Value* Ta10409.12853;
Ta10409_12853 = cs_temp;
int Ti10410.12854;
Ti10410_12854 = 10;
int Ti10411.12857;
Ti10411_12857 = 0;
double Td10412.12856;
Td10412_12856 = rotation.12527[Ti10411.12857].d;
double Td10413.12855;
Td10413_12855 = cos(Td10412.12856);
int Tu8921.12535;
Ta10409.12853[Ti10410.12854].d = Td10413.12855;
Value* Ta10414.12848;
Ta10414_12848 = cs_temp;
int Ti10415.12849;
Ti10415_12849 = 11;
int Ti10416.12852;
Ti10416_12852 = 0;
double Td10417.12851;
Td10417_12851 = rotation.12527[Ti10416.12852].d;
double Td10418.12850;
Td10418_12850 = sin(Td10417.12851);
int Tu8920.12536;
Ta10414.12848[Ti10415.12849].d = Td10418.12850;
Value* Ta10419.12843;
Ta10419_12843 = cs_temp;
int Ti10420.12844;
Ti10420_12844 = 12;
int Ti10421.12847;
Ti10421_12847 = 1;
double Td10422.12846;
Td10422_12846 = rotation.12527[Ti10421.12847].d;
double Td10423.12845;
Td10423_12845 = cos(Td10422.12846);
int Tu8919.12537;
Ta10419.12843[Ti10420.12844].d = Td10423.12845;
Value* Ta10424.12838;
Ta10424_12838 = cs_temp;
int Ti10425.12839;
Ti10425_12839 = 13;
int Ti10426.12842;
Ti10426_12842 = 1;
double Td10427.12841;
Td10427_12841 = rotation.12527[Ti10426.12842].d;
double Td10428.12840;
Td10428_12840 = sin(Td10427.12841);
int Tu8918.12538;
Ta10424.12838[Ti10425.12839].d = Td10428.12840;
Value* Ta10429.12833;
Ta10429_12833 = cs_temp;
int Ti10430.12834;
Ti10430_12834 = 14;
int Ti10431.12837;
Ti10431_12837 = 2;
double Td10432.12836;
Td10432_12836 = rotation.12527[Ti10431.12837].d;
double Td10433.12835;
Td10433_12835 = cos(Td10432.12836);
int Tu8917.12539;
Ta10429.12833[Ti10430.12834].d = Td10433.12835;
Value* Ta10434.12828;
Ta10434_12828 = cs_temp;
int Ti10435.12829;
Ti10435_12829 = 15;
int Ti10436.12832;
Ti10436_12832 = 2;
double Td10437.12831;
Td10437_12831 = rotation.12527[Ti10436.12832].d;
double Td10438.12830;
Td10438_12830 = sin(Td10437.12831);
int Tu8916.12540;
Ta10434.12828[Ti10435.12829].d = Td10438.12830;
Value* Ta10439.12819;
Ta10439_12819 = cs_temp;
int Ti10440.12820;
Ti10440_12820 = 0;
Value* Ta10441.12826;
Ta10441_12826 = cs_temp;
int Ti10442.12827;
Ti10442_12827 = 12;
double Td10443.12822;
Td10443_12822 = Ta10441.12826[Ti10442.12827].d;
Value* Ta10444.12824;
Ta10444_12824 = cs_temp;
int Ti10445.12825;
Ti10445_12825 = 14;
double Td10446.12823;
Td10446_12823 = Ta10444.12824[Ti10445.12825].d;
double Td10447.12821;
Td10447_12821 =  Td10443.12822 * Td10446.12823;
int Tu8915.12541;
Ta10439.12819[Ti10440.12820].d = Td10447.12821;
Value* Ta10448.12798;
Ta10448_12798 = cs_temp;
int Ti10449.12799;
Ti10449_12799 = 1;
Value* Ta10450.12817;
Ta10450_12817 = cs_temp;
int Ti10451.12818;
Ti10451_12818 = 11;
double Td10452.12813;
Td10452_12813 = Ta10450.12817[Ti10451.12818].d;
Value* Ta10453.12815;
Ta10453_12815 = cs_temp;
int Ti10454.12816;
Ti10454_12816 = 13;
double Td10455.12814;
Td10455_12814 = Ta10453.12815[Ti10454.12816].d;
double Td10456.12809;
Td10456_12809 =  Td10452.12813 * Td10455.12814;
Value* Ta10457.12811;
Ta10457_12811 = cs_temp;
int Ti10458.12812;
Ti10458_12812 = 14;
double Td10459.12810;
Td10459_12810 = Ta10457.12811[Ti10458.12812].d;
double Td10460.12801;
Td10460_12801 =  Td10456.12809 * Td10459.12810;
Value* Ta10461.12807;
Ta10461_12807 = cs_temp;
int Ti10462.12808;
Ti10462_12808 = 10;
double Td10463.12803;
Td10463_12803 = Ta10461.12807[Ti10462.12808].d;
Value* Ta10464.12805;
Ta10464_12805 = cs_temp;
int Ti10465.12806;
Ti10465_12806 = 15;
double Td10466.12804;
Td10466_12804 = Ta10464.12805[Ti10465.12806].d;
double Td10467.12802;
Td10467_12802 =  Td10463.12803 * Td10466.12804;
double Td10468.12800;
Td10468_12800 = Td10460.12801 - Td10467.12802;
int Tu8914.12542;
Ta10448.12798[Ti10449.12799].d = Td10468.12800;
Value* Ta10469.12777;
Ta10469_12777 = cs_temp;
int Ti10470.12778;
Ti10470_12778 = 2;
Value* Ta10471.12796;
Ta10471_12796 = cs_temp;
int Ti10472.12797;
Ti10472_12797 = 10;
double Td10473.12792;
Td10473_12792 = Ta10471.12796[Ti10472.12797].d;
Value* Ta10474.12794;
Ta10474_12794 = cs_temp;
int Ti10475.12795;
Ti10475_12795 = 13;
double Td10476.12793;
Td10476_12793 = Ta10474.12794[Ti10475.12795].d;
double Td10477.12788;
Td10477_12788 =  Td10473.12792 * Td10476.12793;
Value* Ta10478.12790;
Ta10478_12790 = cs_temp;
int Ti10479.12791;
Ti10479_12791 = 14;
double Td10480.12789;
Td10480_12789 = Ta10478.12790[Ti10479.12791].d;
double Td10481.12780;
Td10481_12780 =  Td10477.12788 * Td10480.12789;
Value* Ta10482.12786;
Ta10482_12786 = cs_temp;
int Ti10483.12787;
Ti10483_12787 = 11;
double Td10484.12782;
Td10484_12782 = Ta10482.12786[Ti10483.12787].d;
Value* Ta10485.12784;
Ta10485_12784 = cs_temp;
int Ti10486.12785;
Ti10486_12785 = 15;
double Td10487.12783;
Td10487_12783 = Ta10485.12784[Ti10486.12785].d;
double Td10488.12781;
Td10488_12781 =  Td10484.12782 * Td10487.12783;
double Td10489.12779;
Td10489_12779 = Td10481.12780 + Td10488.12781;
int Tu8913.12543;
Ta10469.12777[Ti10470.12778].d = Td10489.12779;
Value* Ta10490.12768;
Ta10490_12768 = cs_temp;
int Ti10491.12769;
Ti10491_12769 = 3;
Value* Ta10492.12775;
Ta10492_12775 = cs_temp;
int Ti10493.12776;
Ti10493_12776 = 12;
double Td10494.12771;
Td10494_12771 = Ta10492.12775[Ti10493.12776].d;
Value* Ta10495.12773;
Ta10495_12773 = cs_temp;
int Ti10496.12774;
Ti10496_12774 = 15;
double Td10497.12772;
Td10497_12772 = Ta10495.12773[Ti10496.12774].d;
double Td10498.12770;
Td10498_12770 =  Td10494.12771 * Td10497.12772;
int Tu8912.12544;
Ta10490.12768[Ti10491.12769].d = Td10498.12770;
Value* Ta10499.12747;
Ta10499_12747 = cs_temp;
int Ti10500.12748;
Ti10500_12748 = 4;
Value* Ta10501.12766;
Ta10501_12766 = cs_temp;
int Ti10502.12767;
Ti10502_12767 = 11;
double Td10503.12762;
Td10503_12762 = Ta10501.12766[Ti10502.12767].d;
Value* Ta10504.12764;
Ta10504_12764 = cs_temp;
int Ti10505.12765;
Ti10505_12765 = 13;
double Td10506.12763;
Td10506_12763 = Ta10504.12764[Ti10505.12765].d;
double Td10507.12758;
Td10507_12758 =  Td10503.12762 * Td10506.12763;
Value* Ta10508.12760;
Ta10508_12760 = cs_temp;
int Ti10509.12761;
Ti10509_12761 = 15;
double Td10510.12759;
Td10510_12759 = Ta10508.12760[Ti10509.12761].d;
double Td10511.12750;
Td10511_12750 =  Td10507.12758 * Td10510.12759;
Value* Ta10512.12756;
Ta10512_12756 = cs_temp;
int Ti10513.12757;
Ti10513_12757 = 10;
double Td10514.12752;
Td10514_12752 = Ta10512.12756[Ti10513.12757].d;
Value* Ta10515.12754;
Ta10515_12754 = cs_temp;
int Ti10516.12755;
Ti10516_12755 = 14;
double Td10517.12753;
Td10517_12753 = Ta10515.12754[Ti10516.12755].d;
double Td10518.12751;
Td10518_12751 =  Td10514.12752 * Td10517.12753;
double Td10519.12749;
Td10519_12749 = Td10511.12750 + Td10518.12751;
int Tu8911.12545;
Ta10499.12747[Ti10500.12748].d = Td10519.12749;
Value* Ta10520.12726;
Ta10520_12726 = cs_temp;
int Ti10521.12727;
Ti10521_12727 = 5;
Value* Ta10522.12745;
Ta10522_12745 = cs_temp;
int Ti10523.12746;
Ti10523_12746 = 10;
double Td10524.12741;
Td10524_12741 = Ta10522.12745[Ti10523.12746].d;
Value* Ta10525.12743;
Ta10525_12743 = cs_temp;
int Ti10526.12744;
Ti10526_12744 = 13;
double Td10527.12742;
Td10527_12742 = Ta10525.12743[Ti10526.12744].d;
double Td10528.12737;
Td10528_12737 =  Td10524.12741 * Td10527.12742;
Value* Ta10529.12739;
Ta10529_12739 = cs_temp;
int Ti10530.12740;
Ti10530_12740 = 15;
double Td10531.12738;
Td10531_12738 = Ta10529.12739[Ti10530.12740].d;
double Td10532.12729;
Td10532_12729 =  Td10528.12737 * Td10531.12738;
Value* Ta10533.12735;
Ta10533_12735 = cs_temp;
int Ti10534.12736;
Ti10534_12736 = 11;
double Td10535.12731;
Td10535_12731 = Ta10533.12735[Ti10534.12736].d;
Value* Ta10536.12733;
Ta10536_12733 = cs_temp;
int Ti10537.12734;
Ti10537_12734 = 14;
double Td10538.12732;
Td10538_12732 = Ta10536.12733[Ti10537.12734].d;
double Td10539.12730;
Td10539_12730 =  Td10535.12731 * Td10538.12732;
double Td10540.12728;
Td10540_12728 = Td10532.12729 - Td10539.12730;
int Tu8910.12546;
Ta10520.12726[Ti10521.12727].d = Td10540.12728;
Value* Ta10541.12720;
Ta10541_12720 = cs_temp;
int Ti10542.12721;
Ti10542_12721 = 6;
Value* Ta10543.12724;
Ta10543_12724 = cs_temp;
int Ti10544.12725;
Ti10544_12725 = 13;
double Td10545.12723;
Td10545_12723 = Ta10543.12724[Ti10544.12725].d;
double Td10546.12722;
Td10546_12722 = -Td10545.12723;
int Tu8909.12547;
Ta10541.12720[Ti10542.12721].d = Td10546.12722;
Value* Ta10547.12711;
Ta10547_12711 = cs_temp;
int Ti10548.12712;
Ti10548_12712 = 7;
Value* Ta10549.12718;
Ta10549_12718 = cs_temp;
int Ti10550.12719;
Ti10550_12719 = 11;
double Td10551.12714;
Td10551_12714 = Ta10549.12718[Ti10550.12719].d;
Value* Ta10552.12716;
Ta10552_12716 = cs_temp;
int Ti10553.12717;
Ti10553_12717 = 12;
double Td10554.12715;
Td10554_12715 = Ta10552.12716[Ti10553.12717].d;
double Td10555.12713;
Td10555_12713 =  Td10551.12714 * Td10554.12715;
int Tu8908.12548;
Ta10547.12711[Ti10548.12712].d = Td10555.12713;
Value* Ta10556.12702;
Ta10556_12702 = cs_temp;
int Ti10557.12703;
Ti10557_12703 = 8;
Value* Ta10558.12709;
Ta10558_12709 = cs_temp;
int Ti10559.12710;
Ti10559_12710 = 10;
double Td10560.12705;
Td10560_12705 = Ta10558.12709[Ti10559.12710].d;
Value* Ta10561.12707;
Ta10561_12707 = cs_temp;
int Ti10562.12708;
Ti10562_12708 = 12;
double Td10563.12706;
Td10563_12706 = Ta10561.12707[Ti10562.12708].d;
double Td10564.12704;
Td10564_12704 =  Td10560.12705 * Td10563.12706;
int Tu8907.12549;
Ta10556.12702[Ti10557.12703].d = Td10564.12704;
int Ti10565.12701;
Ti10565_12701 = 0;
double ao.12550;
ao_12550 = abc.12511[Ti10565.12701].d;
int Ti10566.12700;
Ti10566_12700 = 1;
double bo.12551;
bo_12551 = abc.12511[Ti10566.12700].d;
int Ti10567.12699;
Ti10567_12699 = 2;
double co.12552;
co_12552 = abc.12511[Ti10567.12699].d;
int Ti10568.12681;
Ti10568_12681 = 0;
Value* Ta10569.12697;
Ta10569_12697 = cs_temp;
int Ti10570.12698;
Ti10570_12698 = 0;
double Td10571.12696;
Td10571_12696 = Ta10569.12697[Ti10570.12698].d;
double Td10572.12695;
Td10572_12695 = fsqr.10858_fun(Td10571.12696, NULL);
double Td10573.12689;
Td10573_12689 =  ao.12550 * Td10572.12695;
Value* Ta10574.12693;
Ta10574_12693 = cs_temp;
int Ti10575.12694;
Ti10575_12694 = 3;
double Td10576.12692;
Td10576_12692 = Ta10574.12693[Ti10575.12694].d;
double Td10577.12691;
Td10577_12691 = fsqr.10858_fun(Td10576.12692, NULL);
double Td10578.12690;
Td10578_12690 =  bo.12551 * Td10577.12691;
double Td10579.12683;
Td10579_12683 = Td10573.12689 + Td10578.12690;
Value* Ta10580.12687;
Ta10580_12687 = cs_temp;
int Ti10581.12688;
Ti10581_12688 = 6;
double Td10582.12686;
Td10582_12686 = Ta10580.12687[Ti10581.12688].d;
double Td10583.12685;
Td10583_12685 = fsqr.10858_fun(Td10582.12686, NULL);
double Td10584.12684;
Td10584_12684 =  co.12552 * Td10583.12685;
double Td10585.12682;
Td10585_12682 = Td10579.12683 + Td10584.12684;
int Tu8906.12553;
abc.12511[Ti10568.12681].d = Td10585.12682;
int Ti10586.12663;
Ti10586_12663 = 1;
Value* Ta10587.12679;
Ta10587_12679 = cs_temp;
int Ti10588.12680;
Ti10588_12680 = 1;
double Td10589.12678;
Td10589_12678 = Ta10587.12679[Ti10588.12680].d;
double Td10590.12677;
Td10590_12677 = fsqr.10858_fun(Td10589.12678, NULL);
double Td10591.12671;
Td10591_12671 =  ao.12550 * Td10590.12677;
Value* Ta10592.12675;
Ta10592_12675 = cs_temp;
int Ti10593.12676;
Ti10593_12676 = 4;
double Td10594.12674;
Td10594_12674 = Ta10592.12675[Ti10593.12676].d;
double Td10595.12673;
Td10595_12673 = fsqr.10858_fun(Td10594.12674, NULL);
double Td10596.12672;
Td10596_12672 =  bo.12551 * Td10595.12673;
double Td10597.12665;
Td10597_12665 = Td10591.12671 + Td10596.12672;
Value* Ta10598.12669;
Ta10598_12669 = cs_temp;
int Ti10599.12670;
Ti10599_12670 = 7;
double Td10600.12668;
Td10600_12668 = Ta10598.12669[Ti10599.12670].d;
double Td10601.12667;
Td10601_12667 = fsqr.10858_fun(Td10600.12668, NULL);
double Td10602.12666;
Td10602_12666 =  co.12552 * Td10601.12667;
double Td10603.12664;
Td10603_12664 = Td10597.12665 + Td10602.12666;
int Tu8905.12554;
abc.12511[Ti10586.12663].d = Td10603.12664;
int Ti10604.12645;
Ti10604_12645 = 2;
Value* Ta10605.12661;
Ta10605_12661 = cs_temp;
int Ti10606.12662;
Ti10606_12662 = 2;
double Td10607.12660;
Td10607_12660 = Ta10605.12661[Ti10606.12662].d;
double Td10608.12659;
Td10608_12659 = fsqr.10858_fun(Td10607.12660, NULL);
double Td10609.12653;
Td10609_12653 =  ao.12550 * Td10608.12659;
Value* Ta10610.12657;
Ta10610_12657 = cs_temp;
int Ti10611.12658;
Ti10611_12658 = 5;
double Td10612.12656;
Td10612_12656 = Ta10610.12657[Ti10611.12658].d;
double Td10613.12655;
Td10613_12655 = fsqr.10858_fun(Td10612.12656, NULL);
double Td10614.12654;
Td10614_12654 =  bo.12551 * Td10613.12655;
double Td10615.12647;
Td10615_12647 = Td10609.12653 + Td10614.12654;
Value* Ta10616.12651;
Ta10616_12651 = cs_temp;
int Ti10617.12652;
Ti10617_12652 = 8;
double Td10618.12650;
Td10618_12650 = Ta10616.12651[Ti10617.12652].d;
double Td10619.12649;
Td10619_12649 = fsqr.10858_fun(Td10618.12650, NULL);
double Td10620.12648;
Td10620_12648 =  co.12552 * Td10619.12649;
double Td10621.12646;
Td10621_12646 = Td10615.12647 + Td10620.12648;
int Tu8904.12555;
abc.12511[Ti10604.12645].d = Td10621.12646;
int Ti10622.12616;
Ti10622_12616 = 0;
double Td10623.12618;
Td10623_12618 = 2.000000;
Value* Ta10624.12643;
Ta10624_12643 = cs_temp;
int Ti10625.12644;
Ti10625_12644 = 1;
double Td10626.12642;
Td10626_12642 = Ta10624.12643[Ti10625.12644].d;
double Td10627.12638;
Td10627_12638 =  ao.12550 * Td10626.12642;
Value* Ta10628.12640;
Ta10628_12640 = cs_temp;
int Ti10629.12641;
Ti10629_12641 = 2;
double Td10630.12639;
Td10630_12639 = Ta10628.12640[Ti10629.12641].d;
double Td10631.12629;
Td10631_12629 =  Td10627.12638 * Td10630.12639;
Value* Ta10632.12636;
Ta10632_12636 = cs_temp;
int Ti10633.12637;
Ti10633_12637 = 4;
double Td10634.12635;
Td10634_12635 = Ta10632.12636[Ti10633.12637].d;
double Td10635.12631;
Td10635_12631 =  bo.12551 * Td10634.12635;
Value* Ta10636.12633;
Ta10636_12633 = cs_temp;
int Ti10637.12634;
Ti10637_12634 = 5;
double Td10638.12632;
Td10638_12632 = Ta10636.12633[Ti10637.12634].d;
double Td10639.12630;
Td10639_12630 =  Td10635.12631 * Td10638.12632;
double Td10640.12620;
Td10640_12620 = Td10631.12629 + Td10639.12630;
Value* Ta10641.12627;
Ta10641_12627 = cs_temp;
int Ti10642.12628;
Ti10642_12628 = 7;
double Td10643.12626;
Td10643_12626 = Ta10641.12627[Ti10642.12628].d;
double Td10644.12622;
Td10644_12622 =  co.12552 * Td10643.12626;
Value* Ta10645.12624;
Ta10645_12624 = cs_temp;
int Ti10646.12625;
Ti10646_12625 = 8;
double Td10647.12623;
Td10647_12623 = Ta10645.12624[Ti10646.12625].d;
double Td10648.12621;
Td10648_12621 =  Td10644.12622 * Td10647.12623;
double Td10649.12619;
Td10649_12619 = Td10640.12620 + Td10648.12621;
double Td10650.12617;
Td10650_12617 =  Td10623.12618 * Td10649.12619;
int Tu8903.12556;
rotation.12527[Ti10622.12616].d = Td10650.12617;
int Ti10651.12587;
Ti10651_12587 = 1;
double Td10652.12589;
Td10652_12589 = 2.000000;
Value* Ta10653.12614;
Ta10653_12614 = cs_temp;
int Ti10654.12615;
Ti10654_12615 = 0;
double Td10655.12613;
Td10655_12613 = Ta10653.12614[Ti10654.12615].d;
double Td10656.12609;
Td10656_12609 =  ao.12550 * Td10655.12613;
Value* Ta10657.12611;
Ta10657_12611 = cs_temp;
int Ti10658.12612;
Ti10658_12612 = 2;
double Td10659.12610;
Td10659_12610 = Ta10657.12611[Ti10658.12612].d;
double Td10660.12600;
Td10660_12600 =  Td10656.12609 * Td10659.12610;
Value* Ta10661.12607;
Ta10661_12607 = cs_temp;
int Ti10662.12608;
Ti10662_12608 = 3;
double Td10663.12606;
Td10663_12606 = Ta10661.12607[Ti10662.12608].d;
double Td10664.12602;
Td10664_12602 =  bo.12551 * Td10663.12606;
Value* Ta10665.12604;
Ta10665_12604 = cs_temp;
int Ti10666.12605;
Ti10666_12605 = 5;
double Td10667.12603;
Td10667_12603 = Ta10665.12604[Ti10666.12605].d;
double Td10668.12601;
Td10668_12601 =  Td10664.12602 * Td10667.12603;
double Td10669.12591;
Td10669_12591 = Td10660.12600 + Td10668.12601;
Value* Ta10670.12598;
Ta10670_12598 = cs_temp;
int Ti10671.12599;
Ti10671_12599 = 6;
double Td10672.12597;
Td10672_12597 = Ta10670.12598[Ti10671.12599].d;
double Td10673.12593;
Td10673_12593 =  co.12552 * Td10672.12597;
Value* Ta10674.12595;
Ta10674_12595 = cs_temp;
int Ti10675.12596;
Ti10675_12596 = 8;
double Td10676.12594;
Td10676_12594 = Ta10674.12595[Ti10675.12596].d;
double Td10677.12592;
Td10677_12592 =  Td10673.12593 * Td10676.12594;
double Td10678.12590;
Td10678_12590 = Td10669.12591 + Td10677.12592;
double Td10679.12588;
Td10679_12588 =  Td10652.12589 * Td10678.12590;
int Tu8902.12557;
rotation.12527[Ti10651.12587].d = Td10679.12588;
int Ti10680.12558;
Ti10680_12558 = 2;
double Td10681.12560;
Td10681_12560 = 2.000000;
Value* Ta10682.12585;
Ta10682_12585 = cs_temp;
int Ti10683.12586;
Ti10683_12586 = 0;
double Td10684.12584;
Td10684_12584 = Ta10682.12585[Ti10683.12586].d;
double Td10685.12580;
Td10685_12580 =  ao.12550 * Td10684.12584;
Value* Ta10686.12582;
Ta10686_12582 = cs_temp;
int Ti10687.12583;
Ti10687_12583 = 1;
double Td10688.12581;
Td10688_12581 = Ta10686.12582[Ti10687.12583].d;
double Td10689.12571;
Td10689_12571 =  Td10685.12580 * Td10688.12581;
Value* Ta10690.12578;
Ta10690_12578 = cs_temp;
int Ti10691.12579;
Ti10691_12579 = 3;
double Td10692.12577;
Td10692_12577 = Ta10690.12578[Ti10691.12579].d;
double Td10693.12573;
Td10693_12573 =  bo.12551 * Td10692.12577;
Value* Ta10694.12575;
Ta10694_12575 = cs_temp;
int Ti10695.12576;
Ti10695_12576 = 4;
double Td10696.12574;
Td10696_12574 = Ta10694.12575[Ti10695.12576].d;
double Td10697.12572;
Td10697_12572 =  Td10693.12573 * Td10696.12574;
double Td10698.12562;
Td10698_12562 = Td10689.12571 + Td10697.12572;
Value* Ta10699.12569;
Ta10699_12569 = cs_temp;
int Ti10700.12570;
Ti10700_12570 = 6;
double Td10701.12568;
Td10701_12568 = Ta10699.12569[Ti10700.12570].d;
double Td10702.12564;
Td10702_12564 =  co.12552 * Td10701.12568;
Value* Ta10703.12566;
Ta10703_12566 = cs_temp;
int Ti10704.12567;
Ti10704_12567 = 7;
double Td10705.12565;
Td10705_12565 = Ta10703.12566[Ti10704.12567].d;
double Td10706.12563;
Td10706_12563 =  Td10702.12564 * Td10705.12565;
double Td10707.12561;
Td10707_12561 = Td10698.12562 + Td10706.12563;
double Td10708.12559;
Td10708_12559 =  Td10681.12560 * Td10707.12561;
rotation.12527[Ti10680.12558].d = Td10708.12559;
}
result = 1;
}
return result;
}

int read_object.10911_fun(int n.10912, Value *env){
int result;
int Ti10314.12501;
Ti10314_12501 = 61;
if(Ti10314.12501 <= n.10912){
result = 1;
}
else{
bool Tb10315.12502;
Tb10315_12502 = read_nth_object.10909_fun(n.10912, NULL);
int Ti10316.12503;
Ti10316_12503 = 0;
if(Tb10315.12502 == Ti10316.12503){
result = 1;
}
else{
int Ti10317.12505;
Ti10317_12505 = 1;
int Ti10318.12504;
Ti10318_12504 = n.10912 + Ti10317.12505;
result = read_object.10911_fun(Ti10318.12504, NULL);
}
}
return result;
}

int read_all_object.10913_fun(int Tu8937.10914, Value *env){
int result;
int Ti10313.12500;
Ti10313_12500 = 0;
result = read_object.10911_fun(Ti10313.12500, NULL);
return result;
}

Value* read_net_item.10915_fun(int length.10916, Value *env){
Value* result;
int Tu10304.12499;
Tu10304_12499 = 1;
int item.12488;
printf("Enter an integer: ");
scanf("%i\n", &item_12488);
int Ti10305.12498;
Ti10305_12498 = 1;
int Ti10306.12489;
Ti10306_12489 = -Ti10305.12498;
if(item.12488 == Ti10306.12489){
int Ti10307.12497;
Ti10307_12497 = 1;
int Ti10308.12494;
Ti10308_12494 = length.10916 + Ti10307.12497;
int Ti10309.12496;
Ti10309_12496 = 1;
int Ti10310.12495;
Ti10310_12495 = -Ti10309.12496;
make_int_array(&result, Ti10308.12494, Ti10310.12495);
}
else{
int Ti10311.12493;
Ti10311_12493 = 1;
int Ti10312.12492;
Ti10312_12492 = length.10916 + Ti10311.12493;
Value* v.12490;
v_12490 = read_net_item.10915_fun(Ti10312.12492, NULL);
int Tu8938.12491;
v.12490[length.10916].i = item.12488;
result = v.12490;
}
return result;
}

Value* read_or_network.10917_fun(int length.10918, Value *env){
Value* result;
int Ti10295.12487;
Ti10295_12487 = 0;
Value* net.12476;
net_12476 = read_net_item.10915_fun(Ti10295.12487, NULL);
int Ti10296.12486;
Ti10296_12486 = 0;
int Ti10297.12477;
Ti10297_12477 = net.12476[Ti10296.12486].i;
int Ti10298.12485;
Ti10298_12485 = 1;
int Ti10299.12478;
Ti10299_12478 = -Ti10298.12485;
if(Ti10297.12477 == Ti10299.12478){
int Ti10300.12484;
Ti10300_12484 = 1;
int Ti10301.12483;
Ti10301_12483 = length.10918 + Ti10300.12484;
make_multi_array(&result, Ti10301.12483, net.12476);
}
else{
int Ti10302.12482;
Ti10302_12482 = 1;
int Ti10303.12481;
Ti10303_12481 = length.10918 + Ti10302.12482;
Value* v.12479;
v_12479 = read_or_network.10917_fun(Ti10303.12481, NULL);
int Tu8939.12480;
v.12479[length.10918].a = net.12476;
result = v.12479;
}
return result;
}

int read_and_network.10919_fun(int n.10920, Value *env){
int result;
int Ti10287.12475;
Ti10287_12475 = 0;
Value* net.12466;
net_12466 = read_net_item.10915_fun(Ti10287.12475, NULL);
int Ti10288.12474;
Ti10288_12474 = 0;
int Ti10289.12467;
Ti10289_12467 = net.12466[Ti10288.12474].i;
int Ti10290.12473;
Ti10290_12473 = 1;
int Ti10291.12468;
Ti10291_12468 = -Ti10290.12473;
if(Ti10289.12467 == Ti10291.12468){
result = 1;
}
else{
Value* Ta10292.12472;
Ta10292_12472 = and_net;
int Tu8940.12469;
Ta10292.12472[n.10920].a = net.12466;
int Ti10293.12471;
Ti10293_12471 = 1;
int Ti10294.12470;
Ti10294_12470 = n.10920 + Ti10293.12471;
result = read_and_network.10919_fun(Ti10294.12470, NULL);
}
return result;
}

int read_parameter.10921_fun(int Tu8941.10922, Value *env){
int result;
int Tu10280.12465;
Tu10280_12465 = 1;
int Tu8944.12456;
Tu8944_12456 = read_environ.10907_fun(Tu10280.12465, NULL);
int Tu10281.12464;
Tu10281_12464 = 1;
int Tu8943.12457;
Tu8943_12457 = read_all_object.10913_fun(Tu10281.12464, NULL);
int Ti10282.12463;
Ti10282_12463 = 0;
int Tu8942.12458;
Tu8942_12458 = read_and_network.10919_fun(Ti10282.12463, NULL);
Value* Ta10283.12459;
Ta10283_12459 = or_net;
int Ti10284.12460;
Ti10284_12460 = 0;
int Ti10285.12462;
Ti10285_12462 = 0;
Value* Ta10286.12461;
Ta10286_12461 = read_or_network.10917_fun(Ti10285.12462, NULL);
Ta10283.12459[Ti10284.12460].a = Ta10286.12461;
return result;
}

int solver_rect.10923_fun(int* m.10924, Value* l.10925, Value *env){
int result;
double Td10166.12416;
Td10166_12416 = 0.000000;
int Ti10167.12455;
Ti10167_12455 = 0;
double Td10168.12417;
Td10168_12417 = l.10925[Ti10167.12455].d;
bool answera.12330;
if(Td10166.12416 == Td10168.12417){
answera_12330 = 0;
}
else{
bool Tb10169.12450;
Tb10169_12450 = o_isinvert.10868_fun(m.10924, NULL);
double Td10170.12452;
Td10170_12452 = 0.000000;
int Ti10171.12454;
Ti10171_12454 = 0;
double Td10172.12453;
Td10172_12453 = l.10925[Ti10171.12454].d;
int Ti10173.12451;
if(Td10170.12452 <= Td10172.12453){
Ti10173_12451 = 0;
}
else{
Ti10173_12451 = 1;
}
bool Tb10174.12447;
Tb10174_12447 = xor.10855_fun(Tb10169.12450, Ti10173.12451, NULL);
int Ti10175.12448;
Ti10175_12448 = 0;
double d.12418;
if(Tb10174.12447 == Ti10175.12448){
double Td10176.12449;
Td10176_12449 = o_param_a.10872_fun(m.10924, NULL);
d_12418 = -Td10176.12449;
}
else{
d_12418 = o_param_a.10872_fun(m.10924, NULL);
}
Value* Ta10177.12445;
Ta10177_12445 = solver_w_vec;
int Ti10178.12446;
Ti10178_12446 = 0;
double Td10179.12444;
Td10179_12444 = Ta10177.12445[Ti10178.12446].d;
double Td10180.12441;
Td10180_12441 = d.12418 - Td10179.12444;
int Ti10181.12443;
Ti10181_12443 = 0;
double Td10182.12442;
Td10182_12442 = l.10925[Ti10181.12443].d;
double d2.12419;
d2_12419 = Td10180.12441 / Td10182.12442;
double Td10183.12420;
Td10183_12420 = o_param_b.10874_fun(m.10924, NULL);
int Ti10184.12440;
Ti10184_12440 = 1;
double Td10185.12439;
Td10185_12439 = l.10925[Ti10184.12440].d;
double Td10186.12435;
Td10186_12435 =  d2.12419 * Td10185.12439;
Value* Ta10187.12437;
Ta10187_12437 = solver_w_vec;
int Ti10188.12438;
Ti10188_12438 = 1;
double Td10189.12436;
Td10189_12436 = Ta10187.12437[Ti10188.12438].d;
double Td10190.12434;
Td10190_12434 = Td10186.12435 + Td10189.12436;
double Td10191.12421;
Td10191_12421 = fabs(Td10190.12434);
if(Td10183.12420 <= Td10191.12421){
answera_12330 = 0;
}
else{
double Td10192.12422;
Td10192_12422 = o_param_c.10876_fun(m.10924, NULL);
int Ti10193.12433;
Ti10193_12433 = 2;
double Td10194.12432;
Td10194_12432 = l.10925[Ti10193.12433].d;
double Td10195.12428;
Td10195_12428 =  d2.12419 * Td10194.12432;
Value* Ta10196.12430;
Ta10196_12430 = solver_w_vec;
int Ti10197.12431;
Ti10197_12431 = 2;
double Td10198.12429;
Td10198_12429 = Ta10196.12430[Ti10197.12431].d;
double Td10199.12427;
Td10199_12427 = Td10195.12428 + Td10198.12429;
double Td10200.12423;
Td10200_12423 = fabs(Td10199.12427);
if(Td10192.12422 <= Td10200.12423){
answera_12330 = 0;
}
else{
Value* Ta10201.12425;
Ta10201_12425 = solver_dist;
int Ti10202.12426;
Ti10202_12426 = 0;
int Tu8945.12424;
Ta10201.12425[Ti10202.12426].d = d2.12419;
answera_12330 = 1;
}
}
}
int Ti10203.12331;
Ti10203_12331 = 0;
if(answera.12330 == Ti10203.12331){
double Td10204.12376;
Td10204_12376 = 0.000000;
int Ti10205.12415;
Ti10205_12415 = 1;
double Td10206.12377;
Td10206_12377 = l.10925[Ti10205.12415].d;
bool answerb.12332;
if(Td10204.12376 == Td10206.12377){
answerb_12332 = 0;
}
else{
bool Tb10207.12410;
Tb10207_12410 = o_isinvert.10868_fun(m.10924, NULL);
double Td10208.12412;
Td10208_12412 = 0.000000;
int Ti10209.12414;
Ti10209_12414 = 1;
double Td10210.12413;
Td10210_12413 = l.10925[Ti10209.12414].d;
int Ti10211.12411;
if(Td10208.12412 <= Td10210.12413){
Ti10211_12411 = 0;
}
else{
Ti10211_12411 = 1;
}
bool Tb10212.12407;
Tb10212_12407 = xor.10855_fun(Tb10207.12410, Ti10211.12411, NULL);
int Ti10213.12408;
Ti10213_12408 = 0;
double d.12378;
if(Tb10212.12407 == Ti10213.12408){
double Td10214.12409;
Td10214_12409 = o_param_b.10874_fun(m.10924, NULL);
d_12378 = -Td10214.12409;
}
else{
d_12378 = o_param_b.10874_fun(m.10924, NULL);
}
Value* Ta10215.12405;
Ta10215_12405 = solver_w_vec;
int Ti10216.12406;
Ti10216_12406 = 1;
double Td10217.12404;
Td10217_12404 = Ta10215.12405[Ti10216.12406].d;
double Td10218.12401;
Td10218_12401 = d.12378 - Td10217.12404;
int Ti10219.12403;
Ti10219_12403 = 1;
double Td10220.12402;
Td10220_12402 = l.10925[Ti10219.12403].d;
double d2.12379;
d2_12379 = Td10218.12401 / Td10220.12402;
double Td10221.12380;
Td10221_12380 = o_param_c.10876_fun(m.10924, NULL);
int Ti10222.12400;
Ti10222_12400 = 2;
double Td10223.12399;
Td10223_12399 = l.10925[Ti10222.12400].d;
double Td10224.12395;
Td10224_12395 =  d2.12379 * Td10223.12399;
Value* Ta10225.12397;
Ta10225_12397 = solver_w_vec;
int Ti10226.12398;
Ti10226_12398 = 2;
double Td10227.12396;
Td10227_12396 = Ta10225.12397[Ti10226.12398].d;
double Td10228.12394;
Td10228_12394 = Td10224.12395 + Td10227.12396;
double Td10229.12381;
Td10229_12381 = fabs(Td10228.12394);
if(Td10221.12380 <= Td10229.12381){
answerb_12332 = 0;
}
else{
double Td10230.12382;
Td10230_12382 = o_param_a.10872_fun(m.10924, NULL);
int Ti10231.12393;
Ti10231_12393 = 0;
double Td10232.12392;
Td10232_12392 = l.10925[Ti10231.12393].d;
double Td10233.12388;
Td10233_12388 =  d2.12379 * Td10232.12392;
Value* Ta10234.12390;
Ta10234_12390 = solver_w_vec;
int Ti10235.12391;
Ti10235_12391 = 0;
double Td10236.12389;
Td10236_12389 = Ta10234.12390[Ti10235.12391].d;
double Td10237.12387;
Td10237_12387 = Td10233.12388 + Td10236.12389;
double Td10238.12383;
Td10238_12383 = fabs(Td10237.12387);
if(Td10230.12382 <= Td10238.12383){
answerb_12332 = 0;
}
else{
Value* Ta10239.12385;
Ta10239_12385 = solver_dist;
int Ti10240.12386;
Ti10240_12386 = 0;
int Tu8946.12384;
Ta10239.12385[Ti10240.12386].d = d2.12379;
answerb_12332 = 1;
}
}
}
int Ti10241.12333;
Ti10241_12333 = 0;
if(answerb.12332 == Ti10241.12333){
double Td10242.12336;
Td10242_12336 = 0.000000;
int Ti10243.12375;
Ti10243_12375 = 2;
double Td10244.12337;
Td10244_12337 = l.10925[Ti10243.12375].d;
bool answerc.12334;
if(Td10242.12336 == Td10244.12337){
answerc_12334 = 0;
}
else{
bool Tb10245.12370;
Tb10245_12370 = o_isinvert.10868_fun(m.10924, NULL);
double Td10246.12372;
Td10246_12372 = 0.000000;
int Ti10247.12374;
Ti10247_12374 = 2;
double Td10248.12373;
Td10248_12373 = l.10925[Ti10247.12374].d;
int Ti10249.12371;
if(Td10246.12372 <= Td10248.12373){
Ti10249_12371 = 0;
}
else{
Ti10249_12371 = 1;
}
bool Tb10250.12367;
Tb10250_12367 = xor.10855_fun(Tb10245.12370, Ti10249.12371, NULL);
int Ti10251.12368;
Ti10251_12368 = 0;
double d.12338;
if(Tb10250.12367 == Ti10251.12368){
double Td10252.12369;
Td10252_12369 = o_param_c.10876_fun(m.10924, NULL);
d_12338 = -Td10252.12369;
}
else{
d_12338 = o_param_c.10876_fun(m.10924, NULL);
}
Value* Ta10253.12365;
Ta10253_12365 = solver_w_vec;
int Ti10254.12366;
Ti10254_12366 = 2;
double Td10255.12364;
Td10255_12364 = Ta10253.12365[Ti10254.12366].d;
double Td10256.12361;
Td10256_12361 = d.12338 - Td10255.12364;
int Ti10257.12363;
Ti10257_12363 = 2;
double Td10258.12362;
Td10258_12362 = l.10925[Ti10257.12363].d;
double d2.12339;
d2_12339 = Td10256.12361 / Td10258.12362;
double Td10259.12340;
Td10259_12340 = o_param_a.10872_fun(m.10924, NULL);
int Ti10260.12360;
Ti10260_12360 = 0;
double Td10261.12359;
Td10261_12359 = l.10925[Ti10260.12360].d;
double Td10262.12355;
Td10262_12355 =  d2.12339 * Td10261.12359;
Value* Ta10263.12357;
Ta10263_12357 = solver_w_vec;
int Ti10264.12358;
Ti10264_12358 = 0;
double Td10265.12356;
Td10265_12356 = Ta10263.12357[Ti10264.12358].d;
double Td10266.12354;
Td10266_12354 = Td10262.12355 + Td10265.12356;
double Td10267.12341;
Td10267_12341 = fabs(Td10266.12354);
if(Td10259.12340 <= Td10267.12341){
answerc_12334 = 0;
}
else{
double Td10268.12342;
Td10268_12342 = o_param_b.10874_fun(m.10924, NULL);
int Ti10269.12353;
Ti10269_12353 = 1;
double Td10270.12352;
Td10270_12352 = l.10925[Ti10269.12353].d;
double Td10271.12348;
Td10271_12348 =  d2.12339 * Td10270.12352;
Value* Ta10272.12350;
Ta10272_12350 = solver_w_vec;
int Ti10273.12351;
Ti10273_12351 = 1;
double Td10274.12349;
Td10274_12349 = Ta10272.12350[Ti10273.12351].d;
double Td10275.12347;
Td10275_12347 = Td10271.12348 + Td10274.12349;
double Td10276.12343;
Td10276_12343 = fabs(Td10275.12347);
if(Td10268.12342 <= Td10276.12343){
answerc_12334 = 0;
}
else{
Value* Ta10277.12345;
Ta10277_12345 = solver_dist;
int Ti10278.12346;
Ti10278_12346 = 0;
int Tu8947.12344;
Ta10277.12345[Ti10278.12346].d = d2.12339;
answerc_12334 = 1;
}
}
}
int Ti10279.12335;
Ti10279_12335 = 0;
if(answerc.12334 == Ti10279.12335){
result = 0;
}
else{
result = 3;
}
}
else{
result = 2;
}
}
else{
result = 1;
}
return result;
}

int solver_surface.10926_fun(int* m.10927, Value* l.10928, Value *env){
int result;
int Ti10132.12329;
Ti10132_12329 = 0;
double Td10133.12327;
Td10133_12327 = l.10928[Ti10132.12329].d;
double Td10134.12328;
Td10134_12328 = o_param_a.10872_fun(m.10927, NULL);
double Td10135.12322;
Td10135_12322 =  Td10133.12327 * Td10134.12328;
int Ti10136.12326;
Ti10136_12326 = 1;
double Td10137.12324;
Td10137_12324 = l.10928[Ti10136.12326].d;
double Td10138.12325;
Td10138_12325 = o_param_b.10874_fun(m.10927, NULL);
double Td10139.12323;
Td10139_12323 =  Td10137.12324 * Td10138.12325;
double Td10140.12317;
Td10140_12317 = Td10135.12322 + Td10139.12323;
int Ti10141.12321;
Ti10141_12321 = 2;
double Td10142.12319;
Td10142_12319 = l.10928[Ti10141.12321].d;
double Td10143.12320;
Td10143_12320 = o_param_c.10876_fun(m.10927, NULL);
double Td10144.12318;
Td10144_12318 =  Td10142.12319 * Td10143.12320;
double q.12293;
q_12293 = Td10140.12317 + Td10144.12318;
double Td10145.12294;
Td10145_12294 = 0.000000;
if(q.12293 <= Td10145.12294){
result = 0;
}
else{
Value* Ta10146.12315;
Ta10146_12315 = solver_w_vec;
int Ti10147.12316;
Ti10147_12316 = 0;
double Td10148.12313;
Td10148_12313 = Ta10146.12315[Ti10147.12316].d;
double Td10149.12314;
Td10149_12314 = o_param_a.10872_fun(m.10927, NULL);
double Td10150.12307;
Td10150_12307 =  Td10148.12313 * Td10149.12314;
Value* Ta10151.12311;
Ta10151_12311 = solver_w_vec;
int Ti10152.12312;
Ti10152_12312 = 1;
double Td10153.12309;
Td10153_12309 = Ta10151.12311[Ti10152.12312].d;
double Td10154.12310;
Td10154_12310 = o_param_b.10874_fun(m.10927, NULL);
double Td10155.12308;
Td10155_12308 =  Td10153.12309 * Td10154.12310;
double Td10156.12301;
Td10156_12301 = Td10150.12307 + Td10155.12308;
Value* Ta10157.12305;
Ta10157_12305 = solver_w_vec;
int Ti10158.12306;
Ti10158_12306 = 2;
double Td10159.12303;
Td10159_12303 = Ta10157.12305[Ti10158.12306].d;
double Td10160.12304;
Td10160_12304 = o_param_c.10876_fun(m.10927, NULL);
double Td10161.12302;
Td10161_12302 =  Td10159.12303 * Td10160.12304;
double Td10162.12300;
Td10162_12300 = Td10156.12301 + Td10161.12302;
double t.12295;
t_12295 = Td10162.12300 / q.12293;
Value* Ta10163.12297;
Ta10163_12297 = solver_dist;
int Ti10164.12298;
Ti10164_12298 = 0;
double Td10165.12299;
Td10165_12299 = -t.12295;
int Tu8948.12296;
Ta10163.12297[Ti10164.12298].d = Td10165.12299;
result = 1;
}
return result;
}

double in_prod_sqr_obj.10929_fun(int* m.10930, Value* v.10931, Value *env){
double result;
int Ti10116.12292;
Ti10116_12292 = 0;
double Td10117.12291;
Td10117_12291 = v.10931[Ti10116.12292].d;
double Td10118.12289;
Td10118_12289 = fsqr.10858_fun(Td10117.12291, NULL);
double Td10119.12290;
Td10119_12290 = o_param_a.10872_fun(m.10930, NULL);
double Td10120.12283;
Td10120_12283 =  Td10118.12289 * Td10119.12290;
int Ti10121.12288;
Ti10121_12288 = 1;
double Td10122.12287;
Td10122_12287 = v.10931[Ti10121.12288].d;
double Td10123.12285;
Td10123_12285 = fsqr.10858_fun(Td10122.12287, NULL);
double Td10124.12286;
Td10124_12286 = o_param_b.10874_fun(m.10930, NULL);
double Td10125.12284;
Td10125_12284 =  Td10123.12285 * Td10124.12286;
double Td10126.12277;
Td10126_12277 = Td10120.12283 + Td10125.12284;
int Ti10127.12282;
Ti10127_12282 = 2;
double Td10128.12281;
Td10128_12281 = v.10931[Ti10127.12282].d;
double Td10129.12279;
Td10129_12279 = fsqr.10858_fun(Td10128.12281, NULL);
double Td10130.12280;
Td10130_12280 = o_param_c.10876_fun(m.10930, NULL);
double Td10131.12278;
Td10131_12278 =  Td10129.12279 * Td10130.12280;
result = Td10126.12277 + Td10131.12278;
return result;
}

double in_prod_co_objrot.10932_fun(int* m.10933, Value* v.10934, Value *env){
double result;
int Ti10094.12276;
Ti10094_12276 = 1;
double Td10095.12273;
Td10095_12273 = v.10934[Ti10094.12276].d;
int Ti10096.12275;
Ti10096_12275 = 2;
double Td10097.12274;
Td10097_12274 = v.10934[Ti10096.12275].d;
double Td10098.12271;
Td10098_12271 =  Td10095.12273 * Td10097.12274;
double Td10099.12272;
Td10099_12272 = o_param_r1.10894_fun(m.10933, NULL);
double Td10100.12263;
Td10100_12263 =  Td10098.12271 * Td10099.12272;
int Ti10101.12270;
Ti10101_12270 = 0;
double Td10102.12267;
Td10102_12267 = v.10934[Ti10101.12270].d;
int Ti10103.12269;
Ti10103_12269 = 2;
double Td10104.12268;
Td10104_12268 = v.10934[Ti10103.12269].d;
double Td10105.12265;
Td10105_12265 =  Td10102.12267 * Td10104.12268;
double Td10106.12266;
Td10106_12266 = o_param_r2.10896_fun(m.10933, NULL);
double Td10107.12264;
Td10107_12264 =  Td10105.12265 * Td10106.12266;
double Td10108.12255;
Td10108_12255 = Td10100.12263 + Td10107.12264;
int Ti10109.12262;
Ti10109_12262 = 0;
double Td10110.12259;
Td10110_12259 = v.10934[Ti10109.12262].d;
int Ti10111.12261;
Ti10111_12261 = 1;
double Td10112.12260;
Td10112_12260 = v.10934[Ti10111.12261].d;
double Td10113.12257;
Td10113_12257 =  Td10110.12259 * Td10112.12260;
double Td10114.12258;
Td10114_12258 = o_param_r3.10898_fun(m.10933, NULL);
double Td10115.12256;
Td10115_12256 =  Td10113.12257 * Td10114.12258;
result = Td10108.12255 + Td10115.12256;
return result;
}

double solver2nd_mul_b.10935_fun(int* m.10936, Value* l.10937, Value *env){
double result;
Value* Ta10069.12253;
Ta10069_12253 = solver_w_vec;
int Ti10070.12254;
Ti10070_12254 = 0;
double Td10071.12250;
Td10071_12250 = Ta10069.12253[Ti10070.12254].d;
int Ti10072.12252;
Ti10072_12252 = 0;
double Td10073.12251;
Td10073_12251 = l.10937[Ti10072.12252].d;
double Td10074.12248;
Td10074_12248 =  Td10071.12250 * Td10073.12251;
double Td10075.12249;
Td10075_12249 = o_param_a.10872_fun(m.10936, NULL);
double Td10076.12239;
Td10076_12239 =  Td10074.12248 * Td10075.12249;
Value* Ta10077.12246;
Ta10077_12246 = solver_w_vec;
int Ti10078.12247;
Ti10078_12247 = 1;
double Td10079.12243;
Td10079_12243 = Ta10077.12246[Ti10078.12247].d;
int Ti10080.12245;
Ti10080_12245 = 1;
double Td10081.12244;
Td10081_12244 = l.10937[Ti10080.12245].d;
double Td10082.12241;
Td10082_12241 =  Td10079.12243 * Td10081.12244;
double Td10083.12242;
Td10083_12242 = o_param_b.10874_fun(m.10936, NULL);
double Td10084.12240;
Td10084_12240 =  Td10082.12241 * Td10083.12242;
double Td10085.12230;
Td10085_12230 = Td10076.12239 + Td10084.12240;
Value* Ta10086.12237;
Ta10086_12237 = solver_w_vec;
int Ti10087.12238;
Ti10087_12238 = 2;
double Td10088.12234;
Td10088_12234 = Ta10086.12237[Ti10087.12238].d;
int Ti10089.12236;
Ti10089_12236 = 2;
double Td10090.12235;
Td10090_12235 = l.10937[Ti10089.12236].d;
double Td10091.12232;
Td10091_12232 =  Td10088.12234 * Td10090.12235;
double Td10092.12233;
Td10092_12233 = o_param_c.10876_fun(m.10936, NULL);
double Td10093.12231;
Td10093_12231 =  Td10091.12232 * Td10092.12233;
result = Td10085.12230 + Td10093.12231;
return result;
}

double solver2nd_rot_b.10938_fun(int* m.10939, Value* l.10940, Value *env){
double result;
Value* Ta10023.12228;
Ta10023_12228 = solver_w_vec;
int Ti10024.12229;
Ti10024_12229 = 2;
double Td10025.12225;
Td10025_12225 = Ta10023.12228[Ti10024.12229].d;
int Ti10026.12227;
Ti10026_12227 = 1;
double Td10027.12226;
Td10027_12226 = l.10940[Ti10026.12227].d;
double Td10028.12218;
Td10028_12218 =  Td10025.12225 * Td10027.12226;
Value* Ta10029.12223;
Ta10029_12223 = solver_w_vec;
int Ti10030.12224;
Ti10030_12224 = 1;
double Td10031.12220;
Td10031_12220 = Ta10029.12223[Ti10030.12224].d;
int Ti10032.12222;
Ti10032_12222 = 2;
double Td10033.12221;
Td10033_12221 = l.10940[Ti10032.12222].d;
double Td10034.12219;
Td10034_12219 =  Td10031.12220 * Td10033.12221;
double Td10035.12216;
Td10035_12216 = Td10028.12218 + Td10034.12219;
double Td10036.12217;
Td10036_12217 = o_param_r1.10894_fun(m.10939, NULL);
double Td10037.12200;
Td10037_12200 =  Td10035.12216 * Td10036.12217;
Value* Ta10038.12214;
Ta10038_12214 = solver_w_vec;
int Ti10039.12215;
Ti10039_12215 = 0;
double Td10040.12211;
Td10040_12211 = Ta10038.12214[Ti10039.12215].d;
int Ti10041.12213;
Ti10041_12213 = 2;
double Td10042.12212;
Td10042_12212 = l.10940[Ti10041.12213].d;
double Td10043.12204;
Td10043_12204 =  Td10040.12211 * Td10042.12212;
Value* Ta10044.12209;
Ta10044_12209 = solver_w_vec;
int Ti10045.12210;
Ti10045_12210 = 2;
double Td10046.12206;
Td10046_12206 = Ta10044.12209[Ti10045.12210].d;
int Ti10047.12208;
Ti10047_12208 = 0;
double Td10048.12207;
Td10048_12207 = l.10940[Ti10047.12208].d;
double Td10049.12205;
Td10049_12205 =  Td10046.12206 * Td10048.12207;
double Td10050.12202;
Td10050_12202 = Td10043.12204 + Td10049.12205;
double Td10051.12203;
Td10051_12203 = o_param_r2.10896_fun(m.10939, NULL);
double Td10052.12201;
Td10052_12201 =  Td10050.12202 * Td10051.12203;
double Td10053.12184;
Td10053_12184 = Td10037.12200 + Td10052.12201;
Value* Ta10054.12198;
Ta10054_12198 = solver_w_vec;
int Ti10055.12199;
Ti10055_12199 = 0;
double Td10056.12195;
Td10056_12195 = Ta10054.12198[Ti10055.12199].d;
int Ti10057.12197;
Ti10057_12197 = 1;
double Td10058.12196;
Td10058_12196 = l.10940[Ti10057.12197].d;
double Td10059.12188;
Td10059_12188 =  Td10056.12195 * Td10058.12196;
Value* Ta10060.12193;
Ta10060_12193 = solver_w_vec;
int Ti10061.12194;
Ti10061_12194 = 1;
double Td10062.12190;
Td10062_12190 = Ta10060.12193[Ti10061.12194].d;
int Ti10063.12192;
Ti10063_12192 = 0;
double Td10064.12191;
Td10064_12191 = l.10940[Ti10063.12192].d;
double Td10065.12189;
Td10065_12189 =  Td10062.12190 * Td10064.12191;
double Td10066.12186;
Td10066_12186 = Td10059.12188 + Td10065.12189;
double Td10067.12187;
Td10067_12187 = o_param_r3.10898_fun(m.10939, NULL);
double Td10068.12185;
Td10068_12185 =  Td10066.12186 * Td10067.12187;
result = Td10053.12184 + Td10068.12185;
return result;
}

int solver_second.10941_fun(int* m.10942, Value* l.10943, Value *env){
int result;
double aa0.12143;
aa0_12143 = in_prod_sqr_obj.10929_fun(m.10942, l.10943, NULL);
int Ti9994.12181;
Ti9994_12181 = o_isrot.10870_fun(m.10942, NULL);
int Ti9995.12182;
Ti9995_12182 = 0;
double aa.12144;
if(Ti9994.12181 == Ti9995.12182){
aa_12144 = aa0.12143;
}
else{
double Td9996.12183;
Td9996_12183 = in_prod_co_objrot.10932_fun(m.10942, l.10943, NULL);
aa_12144 = aa0.12143 + Td9996.12183;
}
double Td9997.12145;
Td9997_12145 = 0.000000;
if(Td9997.12145 == aa.12144){
result = 0;
}
else{
double Td9998.12179;
Td9998_12179 = 2.000000;
double Td9999.12180;
Td9999_12180 = solver2nd_mul_b.10935_fun(m.10942, l.10943, NULL);
double bb0.12146;
bb0_12146 =  Td9998.12179 * Td9999.12180;
int Ti10000.12176;
Ti10000_12176 = o_isrot.10870_fun(m.10942, NULL);
int Ti10001.12177;
Ti10001_12177 = 0;
double bb.12147;
if(Ti10000.12176 == Ti10001.12177){
bb_12147 = bb0.12146;
}
else{
double Td10002.12178;
Td10002_12178 = solver2nd_rot_b.10938_fun(m.10942, l.10943, NULL);
bb_12147 = bb0.12146 + Td10002.12178;
}
Value* Ta10003.12175;
Ta10003_12175 = solver_w_vec;
double cc0.12148;
cc0_12148 = in_prod_sqr_obj.10929_fun(m.10942, Ta10003.12175, NULL);
int Ti10004.12171;
Ti10004_12171 = o_isrot.10870_fun(m.10942, NULL);
int Ti10005.12172;
Ti10005_12172 = 0;
double cc1.12149;
if(Ti10004.12171 == Ti10005.12172){
cc1_12149 = cc0.12148;
}
else{
Value* Ta10006.12174;
Ta10006_12174 = solver_w_vec;
double Td10007.12173;
Td10007_12173 = in_prod_co_objrot.10932_fun(m.10942, Ta10006.12174, NULL);
cc1_12149 = cc0.12148 + Td10007.12173;
}
int Ti10008.12168;
Ti10008_12168 = o_form.10864_fun(m.10942, NULL);
int Ti10009.12169;
Ti10009_12169 = 3;
double cc.12150;
if(Ti10008.12168 == Ti10009.12169){
double Td10010.12170;
Td10010_12170 = 1.000000;
cc_12150 = cc1.12149 - Td10010.12170;
}
else{
cc_12150 = cc1.12149;
}
double Td10011.12167;
Td10011_12167 = 4.000000;
double Td10012.12166;
Td10012_12166 =  Td10011.12167 * aa.12144;
double d2.12164;
d2_12164 =  Td10012.12166 * cc.12150;
double Td10013.12165;
Td10013_12165 = fsqr.10858_fun(bb.12147, NULL);
double d.12151;
d_12151 = Td10013.12165 - d2.12164;
double Td10014.12152;
Td10014_12152 = 0.000000;
if(d.12151 <= Td10014.12152){
result = 0;
}
else{
double sd.12153;
sd_12153 = sqrt(d.12151);
bool Tb10015.12162;
Tb10015_12162 = o_isinvert.10868_fun(m.10942, NULL);
int Ti10016.12163;
Ti10016_12163 = 0;
double t1.12154;
if(Tb10015.12162 == Ti10016.12163){
t1_12154 = -sd.12153;
}
else{
t1_12154 = sd.12153;
}
Value* Ta10017.12156;
Ta10017_12156 = solver_dist;
int Ti10018.12157;
Ti10018_12157 = 0;
double Td10019.12160;
Td10019_12160 = t1.12154 - bb.12147;
double Td10020.12161;
Td10020_12161 = 2.000000;
double Td10021.12159;
Td10021_12159 = Td10019.12160 / Td10020.12161;
double Td10022.12158;
Td10022_12158 = Td10021.12159 / aa.12144;
int Tu8949.12155;
Ta10017.12156[Ti10018.12157].d = Td10022.12158;
result = 1;
}
}
return result;
}

int solver.10944_fun(int index.10945, Value* l.10946, Value* p.10947, Value *env){
int result;
Value* Ta9973.12142;
Ta9973_12142 = objects;
int* m.12117;
m_12117 = Ta9973.12142[index.10945].a;
Value* Ta9974.12136;
Ta9974_12136 = solver_w_vec;
int Ti9975.12137;
Ti9975_12137 = 0;
int Ti9976.12141;
Ti9976_12141 = 0;
double Td9977.12139;
Td9977_12139 = p.10947[Ti9976.12141].d;
double Td9978.12140;
Td9978_12140 = o_param_x.10878_fun(m.12117, NULL);
double Td9979.12138;
Td9979_12138 = Td9977.12139 - Td9978.12140;
int Tu8952.12118;
Ta9974.12136[Ti9975.12137].d = Td9979.12138;
Value* Ta9980.12130;
Ta9980_12130 = solver_w_vec;
int Ti9981.12131;
Ti9981_12131 = 1;
int Ti9982.12135;
Ti9982_12135 = 1;
double Td9983.12133;
Td9983_12133 = p.10947[Ti9982.12135].d;
double Td9984.12134;
Td9984_12134 = o_param_y.10880_fun(m.12117, NULL);
double Td9985.12132;
Td9985_12132 = Td9983.12133 - Td9984.12134;
int Tu8951.12119;
Ta9980.12130[Ti9981.12131].d = Td9985.12132;
Value* Ta9986.12124;
Ta9986_12124 = solver_w_vec;
int Ti9987.12125;
Ti9987_12125 = 2;
int Ti9988.12129;
Ti9988_12129 = 2;
double Td9989.12127;
Td9989_12127 = p.10947[Ti9988.12129].d;
double Td9990.12128;
Td9990_12128 = o_param_z.10882_fun(m.12117, NULL);
double Td9991.12126;
Td9991_12126 = Td9989.12127 - Td9990.12128;
int Tu8950.12120;
Ta9986.12124[Ti9987.12125].d = Td9991.12126;
int m_shape.12121;
m_shape_12121 = o_form.10864_fun(m.12117, NULL);
int Ti9992.12122;
Ti9992_12122 = 1;
if(m_shape.12121 == Ti9992.12122){
result = solver_rect.10923_fun(m.12117, l.10946, NULL);
}
else{
int Ti9993.12123;
Ti9993_12123 = 2;
if(m_shape.12121 == Ti9993.12123){
result = solver_surface.10926_fun(m.12117, l.10946, NULL);
}
else{
result = solver_second.10941_fun(m.12117, l.10946, NULL);
}
}
return result;
}

bool is_rect_outside.10948_fun(int* m.10949, Value *env){
bool result;
double Td9954.12102;
Td9954_12102 = o_param_a.10872_fun(m.10949, NULL);
Value* Ta9955.12115;
Ta9955_12115 = isoutside_q;
int Ti9956.12116;
Ti9956_12116 = 0;
double Td9957.12114;
Td9957_12114 = Ta9955.12115[Ti9956.12116].d;
double Td9958.12103;
Td9958_12103 = fabs(Td9957.12114);
int Ti9969.12098;
if(Td9954.12102 <= Td9958.12103){
Ti9969_12098 = 0;
}
else{
double Td9959.12104;
Td9959_12104 = o_param_b.10874_fun(m.10949, NULL);
Value* Ta9960.12112;
Ta9960_12112 = isoutside_q;
int Ti9961.12113;
Ti9961_12113 = 1;
double Td9962.12111;
Td9962_12111 = Ta9960.12112[Ti9961.12113].d;
double Td9963.12105;
Td9963_12105 = fabs(Td9962.12111);
if(Td9959.12104 <= Td9963.12105){
Ti9969_12098 = 0;
}
else{
double Td9964.12106;
Td9964_12106 = o_param_c.10876_fun(m.10949, NULL);
Value* Ta9965.12109;
Ta9965_12109 = isoutside_q;
int Ti9966.12110;
Ti9966_12110 = 2;
double Td9967.12108;
Td9967_12108 = Ta9965.12109[Ti9966.12110].d;
double Td9968.12107;
Td9968_12107 = fabs(Td9967.12108);
if(Td9964.12106 <= Td9968.12107){
Ti9969_12098 = 0;
}
else{
Ti9969_12098 = 1;
}
}
}
int Ti9970.12099;
Ti9970_12099 = 0;
if(Ti9969.12098 == Ti9970.12099){
bool Tb9971.12100;
Tb9971_12100 = o_isinvert.10868_fun(m.10949, NULL);
int Ti9972.12101;
Ti9972_12101 = 0;
if(Tb9971.12100 == Ti9972.12101){
result = 1;
}
else{
result = 0;
}
}
else{
result = o_isinvert.10868_fun(m.10949, NULL);
}
return result;
}

bool is_plane_outside.10950_fun(int* m.10951, Value *env){
bool result;
double Td9934.12094;
Td9934_12094 = o_param_a.10872_fun(m.10951, NULL);
Value* Ta9935.12096;
Ta9935_12096 = isoutside_q;
int Ti9936.12097;
Ti9936_12097 = 0;
double Td9937.12095;
Td9937_12095 = Ta9935.12096[Ti9936.12097].d;
double Td9938.12088;
Td9938_12088 =  Td9934.12094 * Td9937.12095;
double Td9939.12090;
Td9939_12090 = o_param_b.10874_fun(m.10951, NULL);
Value* Ta9940.12092;
Ta9940_12092 = isoutside_q;
int Ti9941.12093;
Ti9941_12093 = 1;
double Td9942.12091;
Td9942_12091 = Ta9940.12092[Ti9941.12093].d;
double Td9943.12089;
Td9943_12089 =  Td9939.12090 * Td9942.12091;
double Td9944.12082;
Td9944_12082 = Td9938.12088 + Td9943.12089;
double Td9945.12084;
Td9945_12084 = o_param_c.10876_fun(m.10951, NULL);
Value* Ta9946.12086;
Ta9946_12086 = isoutside_q;
int Ti9947.12087;
Ti9947_12087 = 2;
double Td9948.12085;
Td9948_12085 = Ta9946.12086[Ti9947.12087].d;
double Td9949.12083;
Td9949_12083 =  Td9945.12084 * Td9948.12085;
double w.12076;
w_12076 = Td9944.12082 + Td9949.12083;
double Td9950.12081;
Td9950_12081 = 0.000000;
bool s.12077;
if(Td9950.12081 <= w.12076){
s_12077 = 0;
}
else{
s_12077 = 1;
}
bool Tb9951.12080;
Tb9951_12080 = o_isinvert.10868_fun(m.10951, NULL);
bool Tb9952.12078;
Tb9952_12078 = xor.10855_fun(Tb9951.12080, s.12077, NULL);
int Ti9953.12079;
Ti9953_12079 = 0;
if(Tb9952.12078 == Ti9953.12079){
result = 1;
}
else{
result = 0;
}
return result;
}

bool is_second_outside.10952_fun(int* m.10953, Value *env){
bool result;
Value* Ta9922.12075;
Ta9922_12075 = isoutside_q;
double w.12060;
w_12060 = in_prod_sqr_obj.10929_fun(m.10953, Ta9922.12075, NULL);
int Ti9923.12072;
Ti9923_12072 = o_form.10864_fun(m.10953, NULL);
int Ti9924.12073;
Ti9924_12073 = 3;
double w2.12061;
if(Ti9923.12072 == Ti9924.12073){
double Td9925.12074;
Td9925_12074 = 1.000000;
w2_12061 = w.12060 - Td9925.12074;
}
else{
w2_12061 = w.12060;
}
int Ti9926.12068;
Ti9926_12068 = o_isrot.10870_fun(m.10953, NULL);
int Ti9927.12069;
Ti9927_12069 = 0;
double w3.12062;
if(Ti9926.12068 == Ti9927.12069){
w3_12062 = w2.12061;
}
else{
Value* Ta9928.12071;
Ta9928_12071 = isoutside_q;
double Td9929.12070;
Td9929_12070 = in_prod_co_objrot.10932_fun(m.10953, Ta9928.12071, NULL);
w3_12062 = w2.12061 + Td9929.12070;
}
double Td9930.12067;
Td9930_12067 = 0.000000;
bool s.12063;
if(Td9930.12067 <= w3.12062){
s_12063 = 0;
}
else{
s_12063 = 1;
}
bool Tb9931.12066;
Tb9931_12066 = o_isinvert.10868_fun(m.10953, NULL);
bool Tb9932.12064;
Tb9932_12064 = xor.10855_fun(Tb9931.12066, s.12063, NULL);
int Ti9933.12065;
Ti9933_12065 = 0;
if(Tb9932.12064 == Ti9933.12065){
result = 1;
}
else{
result = 0;
}
return result;
}

bool is_outside.10954_fun(int* m.10955, Value *env){
bool result;
Value* Ta9899.12053;
Ta9899_12053 = isoutside_q;
int Ti9900.12054;
Ti9900_12054 = 0;
Value* Ta9901.12058;
Ta9901_12058 = chkinside_p;
int Ti9902.12059;
Ti9902_12059 = 0;
double Td9903.12056;
Td9903_12056 = Ta9901.12058[Ti9902.12059].d;
double Td9904.12057;
Td9904_12057 = o_param_x.10878_fun(m.10955, NULL);
double Td9905.12055;
Td9905_12055 = Td9903.12056 - Td9904.12057;
int Tu8955.12033;
Ta9899.12053[Ti9900.12054].d = Td9905.12055;
Value* Ta9906.12046;
Ta9906_12046 = isoutside_q;
int Ti9907.12047;
Ti9907_12047 = 1;
Value* Ta9908.12051;
Ta9908_12051 = chkinside_p;
int Ti9909.12052;
Ti9909_12052 = 1;
double Td9910.12049;
Td9910_12049 = Ta9908.12051[Ti9909.12052].d;
double Td9911.12050;
Td9911_12050 = o_param_y.10880_fun(m.10955, NULL);
double Td9912.12048;
Td9912_12048 = Td9910.12049 - Td9911.12050;
int Tu8954.12034;
Ta9906.12046[Ti9907.12047].d = Td9912.12048;
Value* Ta9913.12039;
Ta9913_12039 = isoutside_q;
int Ti9914.12040;
Ti9914_12040 = 2;
Value* Ta9915.12044;
Ta9915_12044 = chkinside_p;
int Ti9916.12045;
Ti9916_12045 = 2;
double Td9917.12042;
Td9917_12042 = Ta9915.12044[Ti9916.12045].d;
double Td9918.12043;
Td9918_12043 = o_param_z.10882_fun(m.10955, NULL);
double Td9919.12041;
Td9919_12041 = Td9917.12042 - Td9918.12043;
int Tu8953.12035;
Ta9913.12039[Ti9914.12040].d = Td9919.12041;
int m_shape.12036;
m_shape_12036 = o_form.10864_fun(m.10955, NULL);
int Ti9920.12037;
Ti9920_12037 = 1;
if(m_shape.12036 == Ti9920.12037){
result = is_rect_outside.10948_fun(m.10955, NULL);
}
else{
int Ti9921.12038;
Ti9921_12038 = 2;
if(m_shape.12036 == Ti9921.12038){
result = is_plane_outside.10950_fun(m.10955, NULL);
}
else{
result = is_second_outside.10952_fun(m.10955, NULL);
}
}
return result;
}

bool check_all_inside.10956_fun(int ofs.10957, Value* iand.10958, Value *env){
bool result;
int head.12024;
head_12024 = iand.10958[ofs.10957].i;
int Ti9891.12032;
Ti9891_12032 = 1;
int Ti9892.12025;
Ti9892_12025 = -Ti9891.12032;
if(head.12024 == Ti9892.12025){
result = 1;
}
else{
Value* Ta9893.12031;
Ta9893_12031 = objects;
int* Tt9894.12030;
Tt9894_12030 = Ta9893.12031[head.12024].a;
bool Tb9895.12026;
Tb9895_12026 = is_outside.10954_fun(Tt9894.12030, NULL);
int Ti9896.12027;
Ti9896_12027 = 0;
if(Tb9895.12026 == Ti9896.12027){
int Ti9897.12029;
Ti9897_12029 = 1;
int Ti9898.12028;
Ti9898_12028 = ofs.10957 + Ti9897.12029;
result = check_all_inside.10956_fun(Ti9898.12028, iand.10958, NULL);
}
else{
result = 0;
}
}
return result;
}

bool shadow_check_and_group.10959_fun(int iand_ofs.10960, Value* and_group.10961, Value* p.10962, Value *env){
bool result;
int Ti9842.11968;
Ti9842_11968 = and_group.10961[iand_ofs.10960].i;
int Ti9843.12023;
Ti9843_12023 = 1;
int Ti9844.11969;
Ti9844_11969 = -Ti9843.12023;
if(Ti9842.11968 == Ti9844.11969){
result = 0;
}
else{
int obj.11970;
obj_11970 = and_group.10961[iand_ofs.10960].i;
Value* Ta9845.12022;
Ta9845_12022 = light;
int t0.11971;
t0_11971 = solver.10944_fun(obj.11970, Ta9845.12022, p.10962, NULL);
Value* Ta9846.12020;
Ta9846_12020 = solver_dist;
int Ti9847.12021;
Ti9847_12021 = 0;
double t0p.11972;
t0p_11972 = Ta9846.12020[Ti9847.12021].d;
int Ti9848.12018;
Ti9848_12018 = 0;
int Ti9850.11973;
if(t0.11971 == Ti9848.12018){
Ti9850_11973 = 0;
}
else{
double Td9849.12019;
Td9849_12019 = -0.200000;
if(Td9849.12019 <= t0p.11972){
Ti9850_11973 = 0;
}
else{
Ti9850_11973 = 1;
}
}
int Ti9851.11974;
Ti9851_11974 = 0;
if(Ti9850.11973 == Ti9851.11974){
Value* Ta9852.12017;
Ta9852_12017 = objects;
int* Tt9853.12016;
Tt9853_12016 = Ta9852.12017[obj.11970].a;
bool Tb9854.12012;
Tb9854_12012 = o_isinvert.10868_fun(Tt9853.12016, NULL);
int Ti9855.12013;
Ti9855_12013 = 0;
if(Tb9854.12012 == Ti9855.12013){
result = 0;
}
else{
int Ti9856.12015;
Ti9856_12015 = 1;
int Ti9857.12014;
Ti9857_12014 = iand_ofs.10960 + Ti9856.12015;
result = shadow_check_and_group.10959_fun(Ti9857.12014, and_group.10961, p.10962, NULL);
}
}
else{
double Td9858.12011;
Td9858_12011 = 0.010000;
double t.11975;
t_11975 = t0p.11972 + Td9858.12011;
Value* Ta9859.12002;
Ta9859_12002 = chkinside_p;
int Ti9860.12003;
Ti9860_12003 = 0;
Value* Ta9861.12009;
Ta9861_12009 = light;
int Ti9862.12010;
Ti9862_12010 = 0;
double Td9863.12008;
Td9863_12008 = Ta9861.12009[Ti9862.12010].d;
double Td9864.12005;
Td9864_12005 =  Td9863.12008 * t.11975;
int Ti9865.12007;
Ti9865_12007 = 0;
double Td9866.12006;
Td9866_12006 = p.10962[Ti9865.12007].d;
double Td9867.12004;
Td9867_12004 = Td9864.12005 + Td9866.12006;
int Tu8958.11976;
Ta9859.12002[Ti9860.12003].d = Td9867.12004;
Value* Ta9868.11993;
Ta9868_11993 = chkinside_p;
int Ti9869.11994;
Ti9869_11994 = 1;
Value* Ta9870.12000;
Ta9870_12000 = light;
int Ti9871.12001;
Ti9871_12001 = 1;
double Td9872.11999;
Td9872_11999 = Ta9870.12000[Ti9871.12001].d;
double Td9873.11996;
Td9873_11996 =  Td9872.11999 * t.11975;
int Ti9874.11998;
Ti9874_11998 = 1;
double Td9875.11997;
Td9875_11997 = p.10962[Ti9874.11998].d;
double Td9876.11995;
Td9876_11995 = Td9873.11996 + Td9875.11997;
int Tu8957.11977;
Ta9868.11993[Ti9869.11994].d = Td9876.11995;
Value* Ta9877.11984;
Ta9877_11984 = chkinside_p;
int Ti9878.11985;
Ti9878_11985 = 2;
Value* Ta9879.11991;
Ta9879_11991 = light;
int Ti9880.11992;
Ti9880_11992 = 2;
double Td9881.11990;
Td9881_11990 = Ta9879.11991[Ti9880.11992].d;
double Td9882.11987;
Td9882_11987 =  Td9881.11990 * t.11975;
int Ti9883.11989;
Ti9883_11989 = 2;
double Td9884.11988;
Td9884_11988 = p.10962[Ti9883.11989].d;
double Td9885.11986;
Td9885_11986 = Td9882.11987 + Td9884.11988;
int Tu8956.11978;
Ta9877.11984[Ti9878.11985].d = Td9885.11986;
int Ti9886.11983;
Ti9886_11983 = 0;
bool Tb9887.11979;
Tb9887_11979 = check_all_inside.10956_fun(Ti9886.11983, and_group.10961, NULL);
int Ti9888.11980;
Ti9888_11980 = 0;
if(Tb9887.11979 == Ti9888.11980){
int Ti9889.11982;
Ti9889_11982 = 1;
int Ti9890.11981;
Ti9890_11981 = iand_ofs.10960 + Ti9889.11982;
result = shadow_check_and_group.10959_fun(Ti9890.11981, and_group.10961, p.10962, NULL);
}
else{
result = 1;
}
}
}
return result;
}

bool shadow_check_one_or_group.10963_fun(int ofs.10964, Value* or_group.10965, Value* p.10966, Value *env){
bool result;
int head.11958;
head_11958 = or_group.10965[ofs.10964].i;
int Ti9835.11967;
Ti9835_11967 = 1;
int Ti9836.11959;
Ti9836_11959 = -Ti9835.11967;
if(head.11958 == Ti9836.11959){
result = 0;
}
else{
Value* Ta9837.11966;
Ta9837_11966 = and_net;
Value* and_group.11960;
and_group_11960 = Ta9837.11966[head.11958].a;
int Ti9838.11965;
Ti9838_11965 = 0;
bool shadow_p.11961;
shadow_p_11961 = shadow_check_and_group.10959_fun(Ti9838.11965, and_group.11960, p.10966, NULL);
int Ti9839.11962;
Ti9839_11962 = 0;
if(shadow_p.11961 == Ti9839.11962){
int Ti9840.11964;
Ti9840_11964 = 1;
int Ti9841.11963;
Ti9841_11963 = ofs.10964 + Ti9840.11964;
result = shadow_check_one_or_group.10963_fun(Ti9841.11963, or_group.10965, p.10966, NULL);
}
else{
result = 1;
}
}
return result;
}

bool shadow_check_one_or_matrix.10967_fun(int ofs.10968, Value* or_matrix.10969, Value* p.10970, Value *env){
bool result;
Value* head.11931;
head_11931 = or_matrix.10969[ofs.10968].a;
int Ti9811.11957;
Ti9811_11957 = 0;
int range_primitive.11932;
range_primitive_11932 = head.11931[Ti9811.11957].i;
int Ti9812.11956;
Ti9812_11956 = 1;
int Ti9813.11933;
Ti9813_11933 = -Ti9812.11956;
if(range_primitive.11932 == Ti9813.11933){
result = 0;
}
else{
int Ti9814.11934;
Ti9814_11934 = 99;
if(range_primitive.11932 == Ti9814.11934){
int Ti9815.11955;
Ti9815_11955 = 1;
bool Tb9816.11951;
Tb9816_11951 = shadow_check_one_or_group.10963_fun(Ti9815.11955, head.11931, p.10970, NULL);
int Ti9817.11952;
Ti9817_11952 = 0;
if(Tb9816.11951 == Ti9817.11952){
int Ti9818.11954;
Ti9818_11954 = 1;
int Ti9819.11953;
Ti9819_11953 = ofs.10968 + Ti9818.11954;
result = shadow_check_one_or_matrix.10967_fun(Ti9819.11953, or_matrix.10969, p.10970, NULL);
}
else{
result = 1;
}
}
else{
Value* Ta9820.11950;
Ta9820_11950 = light;
int t.11935;
t_11935 = solver.10944_fun(range_primitive.11932, Ta9820.11950, p.10970, NULL);
int Ti9821.11936;
Ti9821_11936 = 0;
if(t.11935 == Ti9821.11936){
int Ti9822.11949;
Ti9822_11949 = 1;
int Ti9823.11948;
Ti9823_11948 = ofs.10968 + Ti9822.11949;
result = shadow_check_one_or_matrix.10967_fun(Ti9823.11948, or_matrix.10969, p.10970, NULL);
}
else{
double Td9824.11937;
Td9824_11937 = -0.100000;
Value* Ta9825.11946;
Ta9825_11946 = solver_dist;
int Ti9826.11947;
Ti9826_11947 = 0;
double Td9827.11938;
Td9827_11938 = Ta9825.11946[Ti9826.11947].d;
if(Td9824.11937 <= Td9827.11938){
int Ti9828.11945;
Ti9828_11945 = 1;
int Ti9829.11944;
Ti9829_11944 = ofs.10968 + Ti9828.11945;
result = shadow_check_one_or_matrix.10967_fun(Ti9829.11944, or_matrix.10969, p.10970, NULL);
}
else{
int Ti9830.11943;
Ti9830_11943 = 1;
bool Tb9831.11939;
Tb9831_11939 = shadow_check_one_or_group.10963_fun(Ti9830.11943, head.11931, p.10970, NULL);
int Ti9832.11940;
Ti9832_11940 = 0;
if(Tb9831.11939 == Ti9832.11940){
int Ti9833.11942;
Ti9833_11942 = 1;
int Ti9834.11941;
Ti9834_11941 = ofs.10968 + Ti9833.11942;
result = shadow_check_one_or_matrix.10967_fun(Ti9834.11941, or_matrix.10969, p.10970, NULL);
}
else{
result = 1;
}
}
}
}
}
return result;
}

int solve_each_element.10971_fun(int iand_ofs.10972, Value* and_group.10973, Value *env){
int result;
int iobj.11839;
iobj_11839 = and_group.10973[iand_ofs.10972].i;
int Ti9732.11930;
Ti9732_11930 = 1;
int Ti9733.11840;
Ti9733_11840 = -Ti9732.11930;
if(iobj.11839 == Ti9733.11840){
result = 1;
}
else{
Value* Ta9734.11928;
Ta9734_11928 = vscan;
Value* Ta9735.11929;
Ta9735_11929 = viewpoint;
int t0.11841;
t0_11841 = solver.10944_fun(iobj.11839, Ta9734.11928, Ta9735.11929, NULL);
int Ti9736.11849;
Ti9736_11849 = 0;
int Tu8967.11842;
if(t0.11841 == Ti9736.11849){
Value* Ta9737.11927;
Ta9737_11927 = objects;
int* Tt9738.11926;
Tt9738_11926 = Ta9737.11927[iobj.11839].a;
bool Tb9739.11921;
Tb9739_11921 = o_isinvert.10868_fun(Tt9738.11926, NULL);
int Ti9740.11922;
Ti9740_11922 = 0;
if(Tb9739.11921 == Ti9740.11922){
Value* Ta9741.11923;
Ta9741_11923 = end_flag;
int Ti9742.11924;
Ti9742_11924 = 0;
int Ti9743.11925;
Ti9743_11925 = 1;
Ta9741.11923[Ti9742.11924].i = Ti9743.11925;
}
else{
Tu8967_11842 = 1;
}
}
else{
Value* Ta9744.11919;
Ta9744_11919 = solver_dist;
int Ti9745.11920;
Ti9745_11920 = 0;
double t0p.11850;
t0p_11850 = Ta9744.11919[Ti9745.11920].d;
double Td9746.11851;
Td9746_11851 = -0.100000;
if(t0p.11850 <= Td9746.11851){
Tu8967_11842 = 1;
}
else{
Value* Ta9747.11917;
Ta9747_11917 = tmin;
int Ti9748.11918;
Ti9748_11918 = 0;
double Td9749.11852;
Td9749_11852 = Ta9747.11917[Ti9748.11918].d;
if(Td9749.11852 <= t0p.11850){
Tu8967_11842 = 1;
}
else{
double Td9750.11916;
Td9750_11916 = 0.010000;
double t.11853;
t_11853 = t0p.11850 + Td9750.11916;
Value* Ta9751.11906;
Ta9751_11906 = chkinside_p;
int Ti9752.11907;
Ti9752_11907 = 0;
Value* Ta9753.11914;
Ta9753_11914 = vscan;
int Ti9754.11915;
Ti9754_11915 = 0;
double Td9755.11913;
Td9755_11913 = Ta9753.11914[Ti9754.11915].d;
double Td9756.11909;
Td9756_11909 =  Td9755.11913 * t.11853;
Value* Ta9757.11911;
Ta9757_11911 = viewpoint;
int Ti9758.11912;
Ti9758_11912 = 0;
double Td9759.11910;
Td9759_11910 = Ta9757.11911[Ti9758.11912].d;
double Td9760.11908;
Td9760_11908 = Td9756.11909 + Td9759.11910;
int Tu8966.11854;
Ta9751.11906[Ti9752.11907].d = Td9760.11908;
Value* Ta9761.11896;
Ta9761_11896 = chkinside_p;
int Ti9762.11897;
Ti9762_11897 = 1;
Value* Ta9763.11904;
Ta9763_11904 = vscan;
int Ti9764.11905;
Ti9764_11905 = 1;
double Td9765.11903;
Td9765_11903 = Ta9763.11904[Ti9764.11905].d;
double Td9766.11899;
Td9766_11899 =  Td9765.11903 * t.11853;
Value* Ta9767.11901;
Ta9767_11901 = viewpoint;
int Ti9768.11902;
Ti9768_11902 = 1;
double Td9769.11900;
Td9769_11900 = Ta9767.11901[Ti9768.11902].d;
double Td9770.11898;
Td9770_11898 = Td9766.11899 + Td9769.11900;
int Tu8965.11855;
Ta9761.11896[Ti9762.11897].d = Td9770.11898;
Value* Ta9771.11886;
Ta9771_11886 = chkinside_p;
int Ti9772.11887;
Ti9772_11887 = 2;
Value* Ta9773.11894;
Ta9773_11894 = vscan;
int Ti9774.11895;
Ti9774_11895 = 2;
double Td9775.11893;
Td9775_11893 = Ta9773.11894[Ti9774.11895].d;
double Td9776.11889;
Td9776_11889 =  Td9775.11893 * t.11853;
Value* Ta9777.11891;
Ta9777_11891 = viewpoint;
int Ti9778.11892;
Ti9778_11892 = 2;
double Td9779.11890;
Td9779_11890 = Ta9777.11891[Ti9778.11892].d;
double Td9780.11888;
Td9780_11888 = Td9776.11889 + Td9779.11890;
int Tu8964.11856;
Ta9771.11886[Ti9772.11887].d = Td9780.11888;
int Ti9781.11885;
Ti9781_11885 = 0;
bool Tb9782.11857;
Tb9782_11857 = check_all_inside.10956_fun(Ti9781.11885, and_group.10973, NULL);
int Ti9783.11858;
Ti9783_11858 = 0;
if(Tb9782.11857 == Ti9783.11858){
Tu8967_11842 = 1;
}
else{
Value* Ta9784.11883;
Ta9784_11883 = tmin;
int Ti9785.11884;
Ti9785_11884 = 0;
int Tu8963.11859;
Ta9784.11883[Ti9785.11884].d = t.11853;
Value* Ta9786.11878;
Ta9786_11878 = crashed_point;
int Ti9787.11879;
Ti9787_11879 = 0;
Value* Ta9788.11881;
Ta9788_11881 = chkinside_p;
int Ti9789.11882;
Ti9789_11882 = 0;
double Td9790.11880;
Td9790_11880 = Ta9788.11881[Ti9789.11882].d;
int Tu8962.11860;
Ta9786.11878[Ti9787.11879].d = Td9790.11880;
Value* Ta9791.11873;
Ta9791_11873 = crashed_point;
int Ti9792.11874;
Ti9792_11874 = 1;
Value* Ta9793.11876;
Ta9793_11876 = chkinside_p;
int Ti9794.11877;
Ti9794_11877 = 1;
double Td9795.11875;
Td9795_11875 = Ta9793.11876[Ti9794.11877].d;
int Tu8961.11861;
Ta9791.11873[Ti9792.11874].d = Td9795.11875;
Value* Ta9796.11868;
Ta9796_11868 = crashed_point;
int Ti9797.11869;
Ti9797_11869 = 2;
Value* Ta9798.11871;
Ta9798_11871 = chkinside_p;
int Ti9799.11872;
Ti9799_11872 = 2;
double Td9800.11870;
Td9800_11870 = Ta9798.11871[Ti9799.11872].d;
int Tu8960.11862;
Ta9796.11868[Ti9797.11869].d = Td9800.11870;
Value* Ta9801.11866;
Ta9801_11866 = intsec_rectside;
int Ti9802.11867;
Ti9802_11867 = 0;
int Tu8959.11863;
Ta9801.11866[Ti9802.11867].i = t0.11841;
Value* Ta9803.11864;
Ta9803_11864 = crashed_object;
int Ti9804.11865;
Ti9804_11865 = 0;
Ta9803.11864[Ti9804.11865].i = iobj.11839;
}
}
}
}
Value* Ta9805.11847;
Ta9805_11847 = end_flag;
int Ti9806.11848;
Ti9806_11848 = 0;
bool Tb9807.11843;
Tb9807_11843 = Ta9805.11847[Ti9806.11848].b;
int Ti9808.11844;
Ti9808_11844 = 0;
if(Tb9807.11843 == Ti9808.11844){
int Ti9809.11846;
Ti9809_11846 = 1;
int Ti9810.11845;
Ti9810_11845 = iand_ofs.10972 + Ti9809.11846;
result = solve_each_element.10971_fun(Ti9810.11845, and_group.10973, NULL);
}
else{
result = 1;
}
}
return result;
}

int solve_one_or_network.10974_fun(int ofs.10975, Value* or_group.10976, Value *env){
int result;
int head.11826;
head_11826 = or_group.10976[ofs.10975].i;
int Ti9723.11838;
Ti9723_11838 = 1;
int Ti9724.11827;
Ti9724_11827 = -Ti9723.11838;
if(head.11826 == Ti9724.11827){
result = 1;
}
else{
Value* Ta9725.11837;
Ta9725_11837 = and_net;
Value* and_group.11828;
and_group_11828 = Ta9725.11837[head.11826].a;
Value* Ta9726.11834;
Ta9726_11834 = end_flag;
int Ti9727.11835;
Ti9727_11835 = 0;
int Ti9728.11836;
Ti9728_11836 = 0;
int Tu8969.11829;
Ta9726.11834[Ti9727.11835].i = Ti9728.11836;
int Ti9729.11833;
Ti9729_11833 = 0;
int Tu8968.11830;
Tu8968_11830 = solve_each_element.10971_fun(Ti9729.11833, and_group.11828, NULL);
int Ti9730.11832;
Ti9730_11832 = 1;
int Ti9731.11831;
Ti9731_11831 = ofs.10975 + Ti9730.11832;
result = solve_one_or_network.10974_fun(Ti9731.11831, or_group.10976, NULL);
}
return result;
}

int trace_or_matrix.10977_fun(int ofs.10978, Value* or_network.10979, Value *env){
int result;
Value* head.11805;
head_11805 = or_network.10979[ofs.10978].a;
int Ti9707.11825;
Ti9707_11825 = 0;
int range_primitive.11806;
range_primitive_11806 = head.11805[Ti9707.11825].i;
int Ti9708.11824;
Ti9708_11824 = 1;
int Ti9709.11807;
Ti9709_11807 = -Ti9708.11824;
if(range_primitive.11806 == Ti9709.11807){
result = 1;
}
else{
int Ti9710.11811;
Ti9710_11811 = 99;
int Tu8970.11808;
if(range_primitive.11806 == Ti9710.11811){
int Ti9711.11823;
Ti9711_11823 = 1;
Tu8970_11808 = solve_one_or_network.10974_fun(Ti9711.11823, head.11805, NULL);
}
else{
Value* Ta9712.11821;
Ta9712_11821 = vscan;
Value* Ta9713.11822;
Ta9713_11822 = viewpoint;
int t.11812;
t_11812 = solver.10944_fun(range_primitive.11806, Ta9712.11821, Ta9713.11822, NULL);
int Ti9714.11813;
Ti9714_11813 = 0;
if(t.11812 == Ti9714.11813){
Tu8970_11808 = 1;
}
else{
Value* Ta9715.11819;
Ta9715_11819 = solver_dist;
int Ti9716.11820;
Ti9716_11820 = 0;
double tp.11814;
tp_11814 = Ta9715.11819[Ti9716.11820].d;
Value* Ta9717.11817;
Ta9717_11817 = tmin;
int Ti9718.11818;
Ti9718_11818 = 0;
double Td9719.11815;
Td9719_11815 = Ta9717.11817[Ti9718.11818].d;
if(Td9719.11815 <= tp.11814){
Tu8970_11808 = 1;
}
else{
int Ti9720.11816;
Ti9720_11816 = 1;
Tu8970_11808 = solve_one_or_network.10974_fun(Ti9720.11816, head.11805, NULL);
}
}
}
int Ti9721.11810;
Ti9721_11810 = 1;
int Ti9722.11809;
Ti9722_11809 = ofs.10978 + Ti9721.11810;
result = trace_or_matrix.10977_fun(Ti9722.11809, or_network.10979, NULL);
}
return result;
}

bool tracer.10980_fun(Value* viewpoint.10981, Value* vscan.10982, Value *env){
bool result;
Value* Ta9696.11802;
Ta9696_11802 = tmin;
int Ti9697.11803;
Ti9697_11803 = 0;
double Td9698.11804;
Td9698_11804 = 1000000000.000000;
int Tu8972.11791;
Ta9696.11802[Ti9697.11803].d = Td9698.11804;
int Ti9699.11798;
Ti9699_11798 = 0;
Value* Ta9700.11800;
Ta9700_11800 = or_net;
int Ti9701.11801;
Ti9701_11801 = 0;
Value* Ta9702.11799;
Ta9702_11799 = Ta9700.11800[Ti9701.11801].a;
int Tu8971.11792;
Tu8971_11792 = trace_or_matrix.10977_fun(Ti9699.11798, Ta9702.11799, NULL);
Value* Ta9703.11796;
Ta9703_11796 = tmin;
int Ti9704.11797;
Ti9704_11797 = 0;
double t.11793;
t_11793 = Ta9703.11796[Ti9704.11797].d;
double Td9705.11794;
Td9705_11794 = -0.100000;
if(t.11793 <= Td9705.11794){
result = 0;
}
else{
double Td9706.11795;
Td9706_11795 = 100000000.000000;
if(Td9706.11795 <= t.11793){
result = 0;
}
else{
result = 1;
}
}
return result;
}

int get_nvector_rect.10983_fun(int Tu8973.10984, Value *env){
int result;
Value* Ta9652.11789;
Ta9652_11789 = intsec_rectside;
int Ti9653.11790;
Ti9653_11790 = 0;
int rectside.11740;
rectside_11740 = Ta9652.11789[Ti9653.11790].i;
int Ti9654.11741;
Ti9654_11741 = 1;
if(rectside.11740 == Ti9654.11741){
Value* Ta9655.11782;
Ta9655_11782 = nvector;
int Ti9656.11783;
Ti9656_11783 = 0;
Value* Ta9657.11787;
Ta9657_11787 = vscan;
int Ti9658.11788;
Ti9658_11788 = 0;
double Td9659.11786;
Td9659_11786 = Ta9657.11787[Ti9658.11788].d;
double Td9660.11785;
Td9660_11785 = sgn.10903_fun(Td9659.11786, NULL);
double Td9661.11784;
Td9661_11784 = -Td9660.11785;
int Tu8975.11774;
Ta9655.11782[Ti9656.11783].d = Td9661.11784;
Value* Ta9662.11779;
Ta9662_11779 = nvector;
int Ti9663.11780;
Ti9663_11780 = 1;
double Td9664.11781;
Td9664_11781 = 0.000000;
int Tu8974.11775;
Ta9662.11779[Ti9663.11780].d = Td9664.11781;
Value* Ta9665.11776;
Ta9665_11776 = nvector;
int Ti9666.11777;
Ti9666_11777 = 2;
double Td9667.11778;
Td9667_11778 = 0.000000;
Ta9665.11776[Ti9666.11777].d = Td9667.11778;
}
else{
int Ti9668.11742;
Ti9668_11742 = 2;
if(rectside.11740 == Ti9668.11742){
Value* Ta9669.11771;
Ta9669_11771 = nvector;
int Ti9670.11772;
Ti9670_11772 = 0;
double Td9671.11773;
Td9671_11773 = 0.000000;
int Tu8977.11759;
Ta9669.11771[Ti9670.11772].d = Td9671.11773;
Value* Ta9672.11764;
Ta9672_11764 = nvector;
int Ti9673.11765;
Ti9673_11765 = 1;
Value* Ta9674.11769;
Ta9674_11769 = vscan;
int Ti9675.11770;
Ti9675_11770 = 1;
double Td9676.11768;
Td9676_11768 = Ta9674.11769[Ti9675.11770].d;
double Td9677.11767;
Td9677_11767 = sgn.10903_fun(Td9676.11768, NULL);
double Td9678.11766;
Td9678_11766 = -Td9677.11767;
int Tu8976.11760;
Ta9672.11764[Ti9673.11765].d = Td9678.11766;
Value* Ta9679.11761;
Ta9679_11761 = nvector;
int Ti9680.11762;
Ti9680_11762 = 2;
double Td9681.11763;
Td9681_11763 = 0.000000;
Ta9679.11761[Ti9680.11762].d = Td9681.11763;
}
else{
int Ti9682.11743;
Ti9682_11743 = 3;
if(rectside.11740 == Ti9682.11743){
Value* Ta9683.11756;
Ta9683_11756 = nvector;
int Ti9684.11757;
Ti9684_11757 = 0;
double Td9685.11758;
Td9685_11758 = 0.000000;
int Tu8979.11744;
Ta9683.11756[Ti9684.11757].d = Td9685.11758;
Value* Ta9686.11753;
Ta9686_11753 = nvector;
int Ti9687.11754;
Ti9687_11754 = 1;
double Td9688.11755;
Td9688_11755 = 0.000000;
int Tu8978.11745;
Ta9686.11753[Ti9687.11754].d = Td9688.11755;
Value* Ta9689.11746;
Ta9689_11746 = nvector;
int Ti9690.11747;
Ti9690_11747 = 2;
Value* Ta9691.11751;
Ta9691_11751 = vscan;
int Ti9692.11752;
Ti9692_11752 = 2;
double Td9693.11750;
Td9693_11750 = Ta9691.11751[Ti9692.11752].d;
double Td9694.11749;
Td9694_11749 = sgn.10903_fun(Td9693.11750, NULL);
double Td9695.11748;
Td9695_11748 = -Td9694.11749;
Ta9689.11746[Ti9690.11747].d = Td9695.11748;
}
else{
result = 1;
}
}
}
return result;
}

int get_nvector_plane.10985_fun(int* m.10986, Value *env){
int result;
Value* Ta9640.11736;
Ta9640_11736 = nvector;
int Ti9641.11737;
Ti9641_11737 = 0;
double Td9642.11739;
Td9642_11739 = o_param_a.10872_fun(m.10986, NULL);
double Td9643.11738;
Td9643_11738 = -Td9642.11739;
int Tu8981.11726;
Ta9640.11736[Ti9641.11737].d = Td9643.11738;
Value* Ta9644.11732;
Ta9644_11732 = nvector;
int Ti9645.11733;
Ti9645_11733 = 1;
double Td9646.11735;
Td9646_11735 = o_param_b.10874_fun(m.10986, NULL);
double Td9647.11734;
Td9647_11734 = -Td9646.11735;
int Tu8980.11727;
Ta9644.11732[Ti9645.11733].d = Td9647.11734;
Value* Ta9648.11728;
Ta9648_11728 = nvector;
int Ti9649.11729;
Ti9649_11729 = 2;
double Td9650.11731;
Td9650_11731 = o_param_c.10876_fun(m.10986, NULL);
double Td9651.11730;
Td9651_11730 = -Td9650.11731;
Ta9648.11728[Ti9649.11729].d = Td9651.11730;
return result;
}

int get_nvector_second_norot.10987_fun(int* m.10988, Value* p.10989, Value *env){
int result;
Value* Ta9614.11718;
Ta9614_11718 = nvector;
int Ti9615.11719;
Ti9615_11719 = 0;
int Ti9616.11725;
Ti9616_11725 = 0;
double Td9617.11723;
Td9617_11723 = p.10989[Ti9616.11725].d;
double Td9618.11724;
Td9618_11724 = o_param_x.10878_fun(m.10988, NULL);
double Td9619.11721;
Td9619_11721 = Td9617.11723 - Td9618.11724;
double Td9620.11722;
Td9620_11722 = o_param_a.10872_fun(m.10988, NULL);
double Td9621.11720;
Td9621_11720 =  Td9619.11721 * Td9620.11722;
int Tu8984.11697;
Ta9614.11718[Ti9615.11719].d = Td9621.11720;
Value* Ta9622.11710;
Ta9622_11710 = nvector;
int Ti9623.11711;
Ti9623_11711 = 1;
int Ti9624.11717;
Ti9624_11717 = 1;
double Td9625.11715;
Td9625_11715 = p.10989[Ti9624.11717].d;
double Td9626.11716;
Td9626_11716 = o_param_y.10880_fun(m.10988, NULL);
double Td9627.11713;
Td9627_11713 = Td9625.11715 - Td9626.11716;
double Td9628.11714;
Td9628_11714 = o_param_b.10874_fun(m.10988, NULL);
double Td9629.11712;
Td9629_11712 =  Td9627.11713 * Td9628.11714;
int Tu8983.11698;
Ta9622.11710[Ti9623.11711].d = Td9629.11712;
Value* Ta9630.11702;
Ta9630_11702 = nvector;
int Ti9631.11703;
Ti9631_11703 = 2;
int Ti9632.11709;
Ti9632_11709 = 2;
double Td9633.11707;
Td9633_11707 = p.10989[Ti9632.11709].d;
double Td9634.11708;
Td9634_11708 = o_param_z.10882_fun(m.10988, NULL);
double Td9635.11705;
Td9635_11705 = Td9633.11707 - Td9634.11708;
double Td9636.11706;
Td9636_11706 = o_param_c.10876_fun(m.10988, NULL);
double Td9637.11704;
Td9637_11704 =  Td9635.11705 * Td9636.11706;
int Tu8982.11699;
Ta9630.11702[Ti9631.11703].d = Td9637.11704;
Value* Ta9638.11700;
Ta9638_11700 = nvector;
bool Tb9639.11701;
Tb9639_11701 = o_isinvert.10868_fun(m.10988, NULL);
result = normalize_vector.10900_fun(Ta9638.11700, Tb9639.11701, NULL);
return result;
}

int get_nvector_second_rot.10990_fun(int* m.10991, Value* p.10992, Value *env){
int result;
Value* Ta9534.11691;
Ta9534_11691 = nvector_w;
int Ti9535.11692;
Ti9535_11692 = 0;
int Ti9536.11696;
Ti9536_11696 = 0;
double Td9537.11694;
Td9537_11694 = p.10992[Ti9536.11696].d;
double Td9538.11695;
Td9538_11695 = o_param_x.10878_fun(m.10991, NULL);
double Td9539.11693;
Td9539_11693 = Td9537.11694 - Td9538.11695;
int Tu8990.11611;
Ta9534.11691[Ti9535.11692].d = Td9539.11693;
Value* Ta9540.11685;
Ta9540_11685 = nvector_w;
int Ti9541.11686;
Ti9541_11686 = 1;
int Ti9542.11690;
Ti9542_11690 = 1;
double Td9543.11688;
Td9543_11688 = p.10992[Ti9542.11690].d;
double Td9544.11689;
Td9544_11689 = o_param_y.10880_fun(m.10991, NULL);
double Td9545.11687;
Td9545_11687 = Td9543.11688 - Td9544.11689;
int Tu8989.11612;
Ta9540.11685[Ti9541.11686].d = Td9545.11687;
Value* Ta9546.11679;
Ta9546_11679 = nvector_w;
int Ti9547.11680;
Ti9547_11680 = 2;
int Ti9548.11684;
Ti9548_11684 = 2;
double Td9549.11682;
Td9549_11682 = p.10992[Ti9548.11684].d;
double Td9550.11683;
Td9550_11683 = o_param_z.10882_fun(m.10991, NULL);
double Td9551.11681;
Td9551_11681 = Td9549.11682 - Td9550.11683;
int Tu8988.11613;
Ta9546.11679[Ti9547.11680].d = Td9551.11681;
Value* Ta9552.11659;
Ta9552_11659 = nvector;
int Ti9553.11660;
Ti9553_11660 = 0;
Value* Ta9554.11677;
Ta9554_11677 = nvector_w;
int Ti9555.11678;
Ti9555_11678 = 0;
double Td9556.11675;
Td9556_11675 = Ta9554.11677[Ti9555.11678].d;
double Td9557.11676;
Td9557_11676 = o_param_a.10872_fun(m.10991, NULL);
double Td9558.11662;
Td9558_11662 =  Td9556.11675 * Td9557.11676;
Value* Ta9559.11673;
Ta9559_11673 = nvector_w;
int Ti9560.11674;
Ti9560_11674 = 1;
double Td9561.11671;
Td9561_11671 = Ta9559.11673[Ti9560.11674].d;
double Td9562.11672;
Td9562_11672 = o_param_r3.10898_fun(m.10991, NULL);
double Td9563.11665;
Td9563_11665 =  Td9561.11671 * Td9562.11672;
Value* Ta9564.11669;
Ta9564_11669 = nvector_w;
int Ti9565.11670;
Ti9565_11670 = 2;
double Td9566.11667;
Td9566_11667 = Ta9564.11669[Ti9565.11670].d;
double Td9567.11668;
Td9567_11668 = o_param_r2.10896_fun(m.10991, NULL);
double Td9568.11666;
Td9568_11666 =  Td9566.11667 * Td9567.11668;
double Td9569.11664;
Td9569_11664 = Td9563.11665 + Td9568.11666;
double Td9570.11663;
Td9570_11663 = fhalf.10860_fun(Td9569.11664, NULL);
double Td9571.11661;
Td9571_11661 = Td9558.11662 + Td9570.11663;
int Tu8987.11614;
Ta9552.11659[Ti9553.11660].d = Td9571.11661;
Value* Ta9572.11639;
Ta9572_11639 = nvector;
int Ti9573.11640;
Ti9573_11640 = 1;
Value* Ta9574.11657;
Ta9574_11657 = nvector_w;
int Ti9575.11658;
Ti9575_11658 = 1;
double Td9576.11655;
Td9576_11655 = Ta9574.11657[Ti9575.11658].d;
double Td9577.11656;
Td9577_11656 = o_param_b.10874_fun(m.10991, NULL);
double Td9578.11642;
Td9578_11642 =  Td9576.11655 * Td9577.11656;
Value* Ta9579.11653;
Ta9579_11653 = nvector_w;
int Ti9580.11654;
Ti9580_11654 = 0;
double Td9581.11651;
Td9581_11651 = Ta9579.11653[Ti9580.11654].d;
double Td9582.11652;
Td9582_11652 = o_param_r3.10898_fun(m.10991, NULL);
double Td9583.11645;
Td9583_11645 =  Td9581.11651 * Td9582.11652;
Value* Ta9584.11649;
Ta9584_11649 = nvector_w;
int Ti9585.11650;
Ti9585_11650 = 2;
double Td9586.11647;
Td9586_11647 = Ta9584.11649[Ti9585.11650].d;
double Td9587.11648;
Td9587_11648 = o_param_r1.10894_fun(m.10991, NULL);
double Td9588.11646;
Td9588_11646 =  Td9586.11647 * Td9587.11648;
double Td9589.11644;
Td9589_11644 = Td9583.11645 + Td9588.11646;
double Td9590.11643;
Td9590_11643 = fhalf.10860_fun(Td9589.11644, NULL);
double Td9591.11641;
Td9591_11641 = Td9578.11642 + Td9590.11643;
int Tu8986.11615;
Ta9572.11639[Ti9573.11640].d = Td9591.11641;
Value* Ta9592.11619;
Ta9592_11619 = nvector;
int Ti9593.11620;
Ti9593_11620 = 2;
Value* Ta9594.11637;
Ta9594_11637 = nvector_w;
int Ti9595.11638;
Ti9595_11638 = 2;
double Td9596.11635;
Td9596_11635 = Ta9594.11637[Ti9595.11638].d;
double Td9597.11636;
Td9597_11636 = o_param_c.10876_fun(m.10991, NULL);
double Td9598.11622;
Td9598_11622 =  Td9596.11635 * Td9597.11636;
Value* Ta9599.11633;
Ta9599_11633 = nvector_w;
int Ti9600.11634;
Ti9600_11634 = 0;
double Td9601.11631;
Td9601_11631 = Ta9599.11633[Ti9600.11634].d;
double Td9602.11632;
Td9602_11632 = o_param_r2.10896_fun(m.10991, NULL);
double Td9603.11625;
Td9603_11625 =  Td9601.11631 * Td9602.11632;
Value* Ta9604.11629;
Ta9604_11629 = nvector_w;
int Ti9605.11630;
Ti9605_11630 = 1;
double Td9606.11627;
Td9606_11627 = Ta9604.11629[Ti9605.11630].d;
double Td9607.11628;
Td9607_11628 = o_param_r1.10894_fun(m.10991, NULL);
double Td9608.11626;
Td9608_11626 =  Td9606.11627 * Td9607.11628;
double Td9609.11624;
Td9609_11624 = Td9603.11625 + Td9608.11626;
double Td9610.11623;
Td9610_11623 = fhalf.10860_fun(Td9609.11624, NULL);
double Td9611.11621;
Td9611_11621 = Td9598.11622 + Td9610.11623;
int Tu8985.11616;
Ta9592.11619[Ti9593.11620].d = Td9611.11621;
Value* Ta9612.11617;
Ta9612_11617 = nvector;
bool Tb9613.11618;
Tb9613_11618 = o_isinvert.10868_fun(m.10991, NULL);
result = normalize_vector.10900_fun(Ta9612.11617, Tb9613.11618, NULL);
return result;
}

int get_nvector.10993_fun(int* m.10994, Value* p.10995, Value *env){
int result;
int m_shape.11605;
m_shape_11605 = o_form.10864_fun(m.10994, NULL);
int Ti9529.11606;
Ti9529_11606 = 1;
if(m_shape.11605 == Ti9529.11606){
int Tu9530.11610;
Tu9530_11610 = 1;
result = get_nvector_rect.10983_fun(Tu9530.11610, NULL);
}
else{
int Ti9531.11607;
Ti9531_11607 = 2;
if(m_shape.11605 == Ti9531.11607){
result = get_nvector_plane.10985_fun(m.10994, NULL);
}
else{
int Ti9532.11608;
Ti9532_11608 = o_isrot.10870_fun(m.10994, NULL);
int Ti9533.11609;
Ti9533_11609 = 0;
if(Ti9532.11608 == Ti9533.11609){
result = get_nvector_second_norot.10987_fun(m.10994, p.10995, NULL);
}
else{
result = get_nvector_second_rot.10990_fun(m.10994, p.10995, NULL);
}
}
}
return result;
}

int utexture.10996_fun(int* m.10997, Value* p.10998, Value *env){
int result;
int m_tex.11447;
m_tex_11447 = o_texturetype.10862_fun(m.10997, NULL);
Value* Ta9400.11602;
Ta9400_11602 = texture_color;
int Ti9401.11603;
Ti9401_11603 = 0;
double Td9402.11604;
Td9402_11604 = o_color_red.10888_fun(m.10997, NULL);
int Tu8995.11448;
Ta9400.11602[Ti9401.11603].d = Td9402.11604;
Value* Ta9403.11599;
Ta9403_11599 = texture_color;
int Ti9404.11600;
Ti9404_11600 = 1;
double Td9405.11601;
Td9405_11601 = o_color_green.10890_fun(m.10997, NULL);
int Tu8994.11449;
Ta9403.11599[Ti9404.11600].d = Td9405.11601;
Value* Ta9406.11596;
Ta9406_11596 = texture_color;
int Ti9407.11597;
Ti9407_11597 = 2;
double Td9408.11598;
Td9408_11598 = o_color_blue.10892_fun(m.10997, NULL);
int Tu8993.11450;
Ta9406.11596[Ti9407.11597].d = Td9408.11598;
int Ti9409.11451;
Ti9409_11451 = 1;
if(m_tex.11447 == Ti9409.11451){
int Ti9410.11595;
Ti9410_11595 = 0;
double Td9411.11593;
Td9411_11593 = p.10998[Ti9410.11595].d;
double Td9412.11594;
Td9412_11594 = o_param_x.10878_fun(m.10997, NULL);
double w1.11566;
w1_11566 = Td9411.11593 - Td9412.11594;
double Td9413.11592;
Td9413_11592 = 0.050000;
double Td9414.11591;
Td9414_11591 =  w1.11566 * Td9413.11592;
double Td9415.11589;
Td9415_11589 = floor(Td9414.11591);
double Td9416.11590;
Td9416_11590 = 20.000000;
double d1.11586;
d1_11586 =  Td9415.11589 * Td9416.11590;
double Td9417.11587;
Td9417_11587 = 10.000000;
double Td9418.11588;
Td9418_11588 = w1.11566 - d1.11586;
bool flag1.11567;
if(Td9417.11587 <= Td9418.11588){
flag1_11567 = 0;
}
else{
flag1_11567 = 1;
}
int Ti9419.11585;
Ti9419_11585 = 2;
double Td9420.11583;
Td9420_11583 = p.10998[Ti9419.11585].d;
double Td9421.11584;
Td9421_11584 = o_param_z.10882_fun(m.10997, NULL);
double w3.11568;
w3_11568 = Td9420.11583 - Td9421.11584;
double Td9422.11582;
Td9422_11582 = 0.050000;
double Td9423.11581;
Td9423_11581 =  w3.11568 * Td9422.11582;
double Td9424.11579;
Td9424_11579 = floor(Td9423.11581);
double Td9425.11580;
Td9425_11580 = 20.000000;
double d2.11576;
d2_11576 =  Td9424.11579 * Td9425.11580;
double Td9426.11577;
Td9426_11577 = 10.000000;
double Td9427.11578;
Td9427_11578 = w3.11568 - d2.11576;
bool flag2.11569;
if(Td9426.11577 <= Td9427.11578){
flag2_11569 = 0;
}
else{
flag2_11569 = 1;
}
Value* Ta9428.11570;
Ta9428_11570 = texture_color;
int Ti9429.11571;
Ti9429_11571 = 1;
int Ti9430.11573;
Ti9430_11573 = 0;
double Td9433.11572;
if(flag1.11567 == Ti9430.11573){
int Ti9431.11575;
Ti9431_11575 = 0;
if(flag2.11569 == Ti9431.11575){
Td9433_11572 = 255.000000;
}
else{
Td9433_11572 = 0.000000;
}
}
else{
int Ti9432.11574;
Ti9432_11574 = 0;
if(flag2.11569 == Ti9432.11574){
Td9433_11572 = 0.000000;
}
else{
Td9433_11572 = 255.000000;
}
}
Ta9428.11570[Ti9429.11571].d = Td9433.11572;
}
else{
int Ti9434.11452;
Ti9434_11452 = 2;
if(m_tex.11447 == Ti9434.11452){
int Ti9435.11565;
Ti9435_11565 = 1;
double Td9436.11563;
Td9436_11563 = p.10998[Ti9435.11565].d;
double Td9437.11564;
Td9437_11564 = 0.250000;
double Td9438.11562;
Td9438_11562 =  Td9436.11563 * Td9437.11564;
double Td9439.11561;
Td9439_11561 = sin(Td9438.11562);
double w2.11549;
w2_11549 = fsqr.10858_fun(Td9439.11561, NULL);
Value* Ta9440.11557;
Ta9440_11557 = texture_color;
int Ti9441.11558;
Ti9441_11558 = 0;
double Td9442.11560;
Td9442_11560 = 255.000000;
double Td9443.11559;
Td9443_11559 =  Td9442.11560 * w2.11549;
int Tu8991.11550;
Ta9440.11557[Ti9441.11558].d = Td9443.11559;
Value* Ta9444.11551;
Ta9444_11551 = texture_color;
int Ti9445.11552;
Ti9445_11552 = 1;
double Td9446.11554;
Td9446_11554 = 255.000000;
double Td9447.11556;
Td9447_11556 = 1.000000;
double Td9448.11555;
Td9448_11555 = Td9447.11556 - w2.11549;
double Td9449.11553;
Td9449_11553 =  Td9446.11554 * Td9448.11555;
Ta9444.11551[Ti9445.11552].d = Td9449.11553;
}
else{
int Ti9450.11453;
Ti9450_11453 = 3;
if(m_tex.11447 == Ti9450.11453){
int Ti9451.11548;
Ti9451_11548 = 0;
double Td9452.11546;
Td9452_11546 = p.10998[Ti9451.11548].d;
double Td9453.11547;
Td9453_11547 = o_param_x.10878_fun(m.10997, NULL);
double w1.11518;
w1_11518 = Td9452.11546 - Td9453.11547;
int Ti9454.11545;
Ti9454_11545 = 2;
double Td9455.11543;
Td9455_11543 = p.10998[Ti9454.11545].d;
double Td9456.11544;
Td9456_11544 = o_param_z.10882_fun(m.10997, NULL);
double w3.11519;
w3_11519 = Td9455.11543 - Td9456.11544;
double Td9457.11541;
Td9457_11541 = fsqr.10858_fun(w1.11518, NULL);
double Td9458.11542;
Td9458_11542 = fsqr.10858_fun(w3.11519, NULL);
double Td9459.11540;
Td9459_11540 = Td9457.11541 + Td9458.11542;
double Td9460.11538;
Td9460_11538 = sqrt(Td9459.11540);
double Td9461.11539;
Td9461_11539 = 10.000000;
double w2.11520;
w2_11520 = Td9460.11538 / Td9461.11539;
double Td9462.11537;
Td9462_11537 = floor(w2.11520);
double Td9463.11535;
Td9463_11535 = w2.11520 - Td9462.11537;
double Td9464.11536;
Td9464_11536 = 3.141593;
double w4.11521;
w4_11521 =  Td9463.11535 * Td9464.11536;
double Td9465.11534;
Td9465_11534 = cos(w4.11521);
double cws.11522;
cws_11522 = fsqr.10858_fun(Td9465.11534, NULL);
Value* Ta9466.11530;
Ta9466_11530 = texture_color;
int Ti9467.11531;
Ti9467_11531 = 1;
double Td9468.11533;
Td9468_11533 = 255.000000;
double Td9469.11532;
Td9469_11532 =  cws.11522 * Td9468.11533;
int Tu8992.11523;
Ta9466.11530[Ti9467.11531].d = Td9469.11532;
Value* Ta9470.11524;
Ta9470_11524 = texture_color;
int Ti9471.11525;
Ti9471_11525 = 2;
double Td9472.11529;
Td9472_11529 = 1.000000;
double Td9473.11527;
Td9473_11527 = Td9472.11529 - cws.11522;
double Td9474.11528;
Td9474_11528 = 255.000000;
double Td9475.11526;
Td9475_11526 =  Td9473.11527 * Td9474.11528;
Ta9470.11524[Ti9471.11525].d = Td9475.11526;
}
else{
int Ti9476.11454;
Ti9476_11454 = 4;
if(m_tex.11447 == Ti9476.11454){
int Ti9477.11517;
Ti9477_11517 = 0;
double Td9478.11515;
Td9478_11515 = p.10998[Ti9477.11517].d;
double Td9479.11516;
Td9479_11516 = o_param_x.10878_fun(m.10997, NULL);
double Td9480.11512;
Td9480_11512 = Td9478.11515 - Td9479.11516;
double Td9481.11514;
Td9481_11514 = o_param_a.10872_fun(m.10997, NULL);
double Td9482.11513;
Td9482_11513 = sqrt(Td9481.11514);
double w1.11455;
w1_11455 =  Td9480.11512 * Td9482.11513;
int Ti9483.11511;
Ti9483_11511 = 2;
double Td9484.11509;
Td9484_11509 = p.10998[Ti9483.11511].d;
double Td9485.11510;
Td9485_11510 = o_param_z.10882_fun(m.10997, NULL);
double Td9486.11506;
Td9486_11506 = Td9484.11509 - Td9485.11510;
double Td9487.11508;
Td9487_11508 = o_param_c.10876_fun(m.10997, NULL);
double Td9488.11507;
Td9488_11507 = sqrt(Td9487.11508);
double w3.11456;
w3_11456 =  Td9486.11506 * Td9488.11507;
double Td9489.11504;
Td9489_11504 = fsqr.10858_fun(w1.11455, NULL);
double Td9490.11505;
Td9490_11505 = fsqr.10858_fun(w3.11456, NULL);
double Td9491.11503;
Td9491_11503 = Td9489.11504 + Td9490.11505;
double w4.11457;
w4_11457 = sqrt(Td9491.11503);
double Td9492.11495;
Td9492_11495 = 0.000100;
double Td9493.11496;
Td9493_11496 = fabs(w1.11455);
double w7.11458;
if(Td9492.11495 <= Td9493.11496){
double Td9494.11502;
Td9494_11502 = w3.11456 / w1.11455;
double w5.11497;
w5_11497 = fabs(Td9494.11502);
double Td9495.11498;
Td9495_11498 = atan(w5.11497);
double Td9496.11500;
Td9496_11500 = 30.000000;
double Td9497.11501;
Td9497_11501 = 3.141593;
double Td9498.11499;
Td9498_11499 = Td9496.11500 / Td9497.11501;
w7_11458 =  Td9495.11498 * Td9498.11499;
}
else{
w7_11458 = 15.000000;
}
double Td9499.11494;
Td9499_11494 = floor(w7.11458);
double w9.11459;
w9_11459 = w7.11458 - Td9499.11494;
int Ti9500.11493;
Ti9500_11493 = 1;
double Td9501.11491;
Td9501_11491 = p.10998[Ti9500.11493].d;
double Td9502.11492;
Td9502_11492 = o_param_y.10880_fun(m.10997, NULL);
double Td9503.11488;
Td9503_11488 = Td9501.11491 - Td9502.11492;
double Td9504.11490;
Td9504_11490 = o_param_b.10874_fun(m.10997, NULL);
double Td9505.11489;
Td9505_11489 = sqrt(Td9504.11490);
double w2.11460;
w2_11460 =  Td9503.11488 * Td9505.11489;
double Td9506.11480;
Td9506_11480 = 0.000100;
double Td9507.11481;
Td9507_11481 = fabs(w7.11458);
double w8.11461;
if(Td9506.11480 <= Td9507.11481){
double Td9508.11487;
Td9508_11487 = w2.11460 / w4.11457;
double w6.11482;
w6_11482 = fabs(Td9508.11487);
double Td9509.11483;
Td9509_11483 = atan(w6.11482);
double Td9510.11485;
Td9510_11485 = 30.000000;
double Td9511.11486;
Td9511_11486 = 3.141593;
double Td9512.11484;
Td9512_11484 = Td9510.11485 / Td9511.11486;
w8_11461 =  Td9509.11483 * Td9512.11484;
}
else{
w8_11461 = 15.000000;
}
double Td9513.11479;
Td9513_11479 = floor(w8.11461);
double w10.11462;
w10_11462 = w8.11461 - Td9513.11479;
double Td9514.11475;
Td9514_11475 = 0.150000;
double Td9515.11478;
Td9515_11478 = 0.500000;
double Td9516.11477;
Td9516_11477 = Td9515.11478 - w9.11459;
double Td9517.11476;
Td9517_11476 = fsqr.10858_fun(Td9516.11477, NULL);
double Td9518.11471;
Td9518_11471 = Td9514.11475 - Td9517.11476;
double Td9519.11474;
Td9519_11474 = 0.500000;
double Td9520.11473;
Td9520_11473 = Td9519.11474 - w10.11462;
double Td9521.11472;
Td9521_11472 = fsqr.10858_fun(Td9520.11473, NULL);
double w11.11463;
w11_11463 = Td9518.11471 - Td9521.11472;
Value* Ta9522.11464;
Ta9522_11464 = texture_color;
int Ti9523.11465;
Ti9523_11465 = 2;
double Td9524.11467;
Td9524_11467 = 0.000000;
double Td9528.11466;
if(w11.11463 <= Td9524.11467){
Td9528_11466 = 0.000000;
}
else{
double Td9525.11469;
Td9525_11469 = 255.000000;
double Td9526.11470;
Td9526_11470 = 0.300000;
double Td9527.11468;
Td9527_11468 = Td9525.11469 / Td9526.11470;
Td9528_11466 =  w11.11463 * Td9527.11468;
}
Ta9522.11464[Ti9523.11465].d = Td9528.11466;
}
else{
result = 1;
}
}
}
}
return result;
}

double in_prod.10999_fun(Value* v1.11000, Value* v2.11001, Value *env){
double result;
int Ti9384.11446;
Ti9384_11446 = 0;
double Td9385.11443;
Td9385_11443 = v1.11000[Ti9384.11446].d;
int Ti9386.11445;
Ti9386_11445 = 0;
double Td9387.11444;
Td9387_11444 = v2.11001[Ti9386.11445].d;
double Td9388.11437;
Td9388_11437 =  Td9385.11443 * Td9387.11444;
int Ti9389.11442;
Ti9389_11442 = 1;
double Td9390.11439;
Td9390_11439 = v1.11000[Ti9389.11442].d;
int Ti9391.11441;
Ti9391_11441 = 1;
double Td9392.11440;
Td9392_11440 = v2.11001[Ti9391.11441].d;
double Td9393.11438;
Td9393_11438 =  Td9390.11439 * Td9392.11440;
double Td9394.11431;
Td9394_11431 = Td9388.11437 + Td9393.11438;
int Ti9395.11436;
Ti9395_11436 = 2;
double Td9396.11433;
Td9396_11433 = v1.11000[Ti9395.11436].d;
int Ti9397.11435;
Ti9397_11435 = 2;
double Td9398.11434;
Td9398_11434 = v2.11001[Ti9397.11435].d;
double Td9399.11432;
Td9399_11432 =  Td9396.11433 * Td9398.11434;
result = Td9394.11431 + Td9399.11432;
return result;
}

int accumulate_vec_mul.11002_fun(Value* v1.11003, Value* v2.11004, double w.11005, Value *env){
int result;
int Ti9363.11424;
Ti9363_11424 = 0;
int Ti9364.11430;
Ti9364_11430 = 0;
double Td9365.11426;
Td9365_11426 = v1.11003[Ti9364.11430].d;
int Ti9366.11429;
Ti9366_11429 = 0;
double Td9367.11428;
Td9367_11428 = v2.11004[Ti9366.11429].d;
double Td9368.11427;
Td9368_11427 =  w.11005 * Td9367.11428;
double Td9369.11425;
Td9369_11425 = Td9365.11426 + Td9368.11427;
int Tu8997.11408;
v1.11003[Ti9363.11424].d = Td9369.11425;
int Ti9370.11417;
Ti9370_11417 = 1;
int Ti9371.11423;
Ti9371_11423 = 1;
double Td9372.11419;
Td9372_11419 = v1.11003[Ti9371.11423].d;
int Ti9373.11422;
Ti9373_11422 = 1;
double Td9374.11421;
Td9374_11421 = v2.11004[Ti9373.11422].d;
double Td9375.11420;
Td9375_11420 =  w.11005 * Td9374.11421;
double Td9376.11418;
Td9376_11418 = Td9372.11419 + Td9375.11420;
int Tu8996.11409;
v1.11003[Ti9370.11417].d = Td9376.11418;
int Ti9377.11410;
Ti9377_11410 = 2;
int Ti9378.11416;
Ti9378_11416 = 2;
double Td9379.11412;
Td9379_11412 = v1.11003[Ti9378.11416].d;
int Ti9380.11415;
Ti9380_11415 = 2;
double Td9381.11414;
Td9381_11414 = v2.11004[Ti9380.11415].d;
double Td9382.11413;
Td9382_11413 =  w.11005 * Td9381.11414;
double Td9383.11411;
Td9383_11411 = Td9379.11412 + Td9382.11413;
v1.11003[Ti9377.11410].d = Td9383.11411;
return result;
}

int raytracing.11006_fun(int nref.11007, double energy.11008, Value *env){
int result;
Value* Ta9249.11406;
Ta9249_11406 = viewpoint;
Value* Ta9250.11407;
Ta9250_11407 = vscan;
bool crashed_p.11270;
crashed_p_11270 = tracer.10980_fun(Ta9249.11406, Ta9250.11407, NULL);
int Ti9251.11372;
Ti9251_11372 = 0;
int Tu9009.11271;
if(crashed_p.11270 == Ti9251.11372){
int Ti9252.11373;
Ti9252_11373 = 0;
if(nref.11007 == Ti9252.11373){
Tu9009_11271 = 1;
}
else{
Value* Ta9253.11404;
Ta9253_11404 = vscan;
Value* Ta9254.11405;
Ta9254_11405 = light;
double Td9255.11403;
Td9255_11403 = in_prod.10999_fun(Ta9253.11404, Ta9254.11405, NULL);
double hl.11374;
hl_11374 = -Td9255.11403;
double Td9256.11375;
Td9256_11375 = 0.000000;
if(hl.11374 <= Td9256.11375){
Tu9009_11271 = 1;
}
else{
double Td9257.11402;
Td9257_11402 = fsqr.10858_fun(hl.11374, NULL);
double Td9258.11401;
Td9258_11401 =  Td9257.11402 * hl.11374;
double Td9259.11397;
Td9259_11397 =  Td9258.11401 * energy.11008;
Value* Ta9260.11399;
Ta9260_11399 = beam;
int Ti9261.11400;
Ti9261_11400 = 0;
double Td9262.11398;
Td9262_11398 = Ta9260.11399[Ti9261.11400].d;
double ihl.11376;
ihl_11376 =  Td9259.11397 * Td9262.11398;
Value* Ta9263.11391;
Ta9263_11391 = rgb;
int Ti9264.11392;
Ti9264_11392 = 0;
Value* Ta9265.11395;
Ta9265_11395 = rgb;
int Ti9266.11396;
Ti9266_11396 = 0;
double Td9267.11394;
Td9267_11394 = Ta9265.11395[Ti9266.11396].d;
double Td9268.11393;
Td9268_11393 = Td9267.11394 + ihl.11376;
int Tu8999.11377;
Ta9263.11391[Ti9264.11392].d = Td9268.11393;
Value* Ta9269.11385;
Ta9269_11385 = rgb;
int Ti9270.11386;
Ti9270_11386 = 1;
Value* Ta9271.11389;
Ta9271_11389 = rgb;
int Ti9272.11390;
Ti9272_11390 = 1;
double Td9273.11388;
Td9273_11388 = Ta9271.11389[Ti9272.11390].d;
double Td9274.11387;
Td9274_11387 = Td9273.11388 + ihl.11376;
int Tu8998.11378;
Ta9269.11385[Ti9270.11386].d = Td9274.11387;
Value* Ta9275.11379;
Ta9275_11379 = rgb;
int Ti9276.11380;
Ti9276_11380 = 2;
Value* Ta9277.11383;
Ta9277_11383 = rgb;
int Ti9278.11384;
Ti9278_11384 = 2;
double Td9279.11382;
Td9279_11382 = Ta9277.11383[Ti9278.11384].d;
double Td9280.11381;
Td9280_11381 = Td9279.11382 + ihl.11376;
Ta9275.11379[Ti9276.11380].d = Td9280.11381;
}
}
}
else{
Tu9009_11271 = 1;
}
int Ti9281.11272;
Ti9281_11272 = 0;
if(crashed_p.11270 == Ti9281.11272){
result = 1;
}
else{
Value* Ta9282.11368;
Ta9282_11368 = objects;
Value* Ta9283.11370;
Ta9283_11370 = crashed_object;
int Ti9284.11371;
Ti9284_11371 = 0;
int Ti9285.11369;
Ti9285_11369 = Ta9283.11370[Ti9284.11371].i;
int* cobj.11273;
cobj_11273 = Ta9282.11368[Ti9285.11369].a;
Value* Ta9286.11367;
Ta9286_11367 = crashed_point;
int Tu9008.11274;
Tu9008_11274 = get_nvector.10993_fun(cobj.11273, Ta9286.11367, NULL);
int Ti9287.11362;
Ti9287_11362 = 0;
Value* Ta9288.11365;
Ta9288_11365 = or_net;
int Ti9289.11366;
Ti9289_11366 = 0;
Value* Ta9290.11363;
Ta9290_11363 = Ta9288.11365[Ti9289.11366].a;
Value* Ta9291.11364;
Ta9291_11364 = crashed_point;
bool Tb9292.11351;
Tb9292_11351 = shadow_check_one_or_matrix.10967_fun(Ti9287.11362, Ta9290.11363, Ta9291.11364, NULL);
int Ti9293.11352;
Ti9293_11352 = 0;
double bright.11275;
if(Tb9292.11351 == Ti9293.11352){
Value* Ta9294.11360;
Ta9294_11360 = nvector;
Value* Ta9295.11361;
Ta9295_11361 = light;
double Td9296.11359;
Td9296_11359 = in_prod.10999_fun(Ta9294.11360, Ta9295.11361, NULL);
double br.11353;
br_11353 = -Td9296.11359;
double Td9297.11357;
Td9297_11357 = 0.000000;
double br1.11354;
if(Td9297.11357 <= br.11353){
double Td9298.11358;
Td9298_11358 = 0.200000;
br1_11354 = br.11353 + Td9298.11358;
}
else{
br1_11354 = 0.200000;
}
double Td9299.11355;
Td9299_11355 =  br1.11354 * energy.11008;
double Td9300.11356;
Td9300_11356 = o_diffuse.10884_fun(cobj.11273, NULL);
bright_11275 =  Td9299.11355 * Td9300.11356;
}
else{
bright_11275 = 0.000000;
}
Value* Ta9301.11350;
Ta9301_11350 = crashed_point;
int Tu9007.11276;
Tu9007_11276 = utexture.10996_fun(cobj.11273, Ta9301.11350, NULL);
Value* Ta9302.11348;
Ta9302_11348 = rgb;
Value* Ta9303.11349;
Ta9303_11349 = texture_color;
int Tu9006.11277;
Tu9006_11277 = accumulate_vec_mul.11002_fun(Ta9302.11348, Ta9303.11349, bright.11275, NULL);
int Ti9304.11278;
Ti9304_11278 = 4;
if(nref.11007 <= Ti9304.11278){
double Td9305.11279;
Td9305_11279 = 0.100000;
if(energy.11008 <= Td9305.11279){
result = 1;
}
else{
double Td9306.11344;
Td9306_11344 = -2.000000;
Value* Ta9307.11346;
Ta9307_11346 = vscan;
Value* Ta9308.11347;
Ta9308_11347 = nvector;
double Td9309.11345;
Td9309_11345 = in_prod.10999_fun(Ta9307.11346, Ta9308.11347, NULL);
double w.11280;
w_11280 =  Td9306.11344 * Td9309.11345;
Value* Ta9310.11342;
Ta9310_11342 = vscan;
Value* Ta9311.11343;
Ta9311_11343 = nvector;
int Tu9005.11281;
Tu9005_11281 = accumulate_vec_mul.11002_fun(Ta9310.11342, Ta9311.11343, w.11280, NULL);
int m_surface.11282;
m_surface_11282 = o_reflectiontype.10866_fun(cobj.11273, NULL);
int Ti9312.11283;
Ti9312_11283 = 1;
if(m_surface.11282 == Ti9312.11283){
double Td9313.11309;
Td9313_11309 = 0.000000;
double Td9314.11310;
Td9314_11310 = o_hilight.10886_fun(cobj.11273, NULL);
if(Td9313.11309 == Td9314.11310){
result = 1;
}
else{
Value* Ta9315.11340;
Ta9315_11340 = vscan;
Value* Ta9316.11341;
Ta9316_11341 = light;
double Td9317.11339;
Td9317_11339 = in_prod.10999_fun(Ta9315.11340, Ta9316.11341, NULL);
double hl.11311;
hl_11311 = -Td9317.11339;
double Td9318.11312;
Td9318_11312 = 0.000000;
if(hl.11311 <= Td9318.11312){
result = 1;
}
else{
double Td9319.11338;
Td9319_11338 = fsqr.10858_fun(hl.11311, NULL);
double Td9320.11337;
Td9320_11337 = fsqr.10858_fun(Td9319.11338, NULL);
double Td9321.11336;
Td9321_11336 =  Td9320.11337 * energy.11008;
double Td9322.11334;
Td9322_11334 =  Td9321.11336 * bright.11275;
double Td9323.11335;
Td9323_11335 = o_hilight.10886_fun(cobj.11273, NULL);
double ihl.11313;
ihl_11313 =  Td9322.11334 * Td9323.11335;
Value* Ta9324.11328;
Ta9324_11328 = rgb;
int Ti9325.11329;
Ti9325_11329 = 0;
Value* Ta9326.11332;
Ta9326_11332 = rgb;
int Ti9327.11333;
Ti9327_11333 = 0;
double Td9328.11331;
Td9328_11331 = Ta9326.11332[Ti9327.11333].d;
double Td9329.11330;
Td9329_11330 = Td9328.11331 + ihl.11313;
int Tu9001.11314;
Ta9324.11328[Ti9325.11329].d = Td9329.11330;
Value* Ta9330.11322;
Ta9330_11322 = rgb;
int Ti9331.11323;
Ti9331_11323 = 1;
Value* Ta9332.11326;
Ta9332_11326 = rgb;
int Ti9333.11327;
Ti9333_11327 = 1;
double Td9334.11325;
Td9334_11325 = Ta9332.11326[Ti9333.11327].d;
double Td9335.11324;
Td9335_11324 = Td9334.11325 + ihl.11313;
int Tu9000.11315;
Ta9330.11322[Ti9331.11323].d = Td9335.11324;
Value* Ta9336.11316;
Ta9336_11316 = rgb;
int Ti9337.11317;
Ti9337_11317 = 2;
Value* Ta9338.11320;
Ta9338_11320 = rgb;
int Ti9339.11321;
Ti9339_11321 = 2;
double Td9340.11319;
Td9340_11319 = Ta9338.11320[Ti9339.11321].d;
double Td9341.11318;
Td9341_11318 = Td9340.11319 + ihl.11313;
Ta9336.11316[Ti9337.11317].d = Td9341.11318;
}
}
}
else{
int Ti9342.11284;
Ti9342_11284 = 2;
if(m_surface.11282 == Ti9342.11284){
Value* Ta9343.11304;
Ta9343_11304 = viewpoint;
int Ti9344.11305;
Ti9344_11305 = 0;
Value* Ta9345.11307;
Ta9345_11307 = crashed_point;
int Ti9346.11308;
Ti9346_11308 = 0;
double Td9347.11306;
Td9347_11306 = Ta9345.11307[Ti9346.11308].d;
int Tu9004.11285;
Ta9343.11304[Ti9344.11305].d = Td9347.11306;
Value* Ta9348.11299;
Ta9348_11299 = viewpoint;
int Ti9349.11300;
Ti9349_11300 = 1;
Value* Ta9350.11302;
Ta9350_11302 = crashed_point;
int Ti9351.11303;
Ti9351_11303 = 1;
double Td9352.11301;
Td9352_11301 = Ta9350.11302[Ti9351.11303].d;
int Tu9003.11286;
Ta9348.11299[Ti9349.11300].d = Td9352.11301;
Value* Ta9353.11294;
Ta9353_11294 = viewpoint;
int Ti9354.11295;
Ti9354_11295 = 2;
Value* Ta9355.11297;
Ta9355_11297 = crashed_point;
int Ti9356.11298;
Ti9356_11298 = 2;
double Td9357.11296;
Td9357_11296 = Ta9355.11297[Ti9356.11298].d;
int Tu9002.11287;
Ta9353.11294[Ti9354.11295].d = Td9357.11296;
double Td9358.11292;
Td9358_11292 = 1.000000;
double Td9359.11293;
Td9359_11293 = o_diffuse.10884_fun(cobj.11273, NULL);
double Td9360.11291;
Td9360_11291 = Td9358.11292 - Td9359.11293;
double energy2.11288;
energy2_11288 =  energy.11008 * Td9360.11291;
int Ti9361.11290;
Ti9361_11290 = 1;
int Ti9362.11289;
Ti9362_11289 = nref.11007 + Ti9361.11290;
result = raytracing.11006_fun(Ti9362.11289, energy2.11288, NULL);
}
else{
result = 1;
}
}
}
}
else{
result = 1;
}
}
return result;
}

int write_rgb.11009_fun(int Tu9010.11010, Value *env){
int result;
Value* Ta9237.11268;
Ta9237_11268 = rgb;
int Ti9238.11269;
Ti9238_11269 = 0;
double Td9239.11267;
Td9239_11267 = Ta9237.11268[Ti9238.11269].d;
int red.11250;
red_11250 = (int) Td9239.11267;
int Ti9240.11266;
Ti9240_11266 = 255;
int red.11251;
if(red.11250 <= Ti9240.11266){
red_11251 = red.11250;
}
else{
red_11251 = 255;
}
int Tu9012.11252;
printf("%d", red.11251);
Value* Ta9241.11264;
Ta9241_11264 = rgb;
int Ti9242.11265;
Ti9242_11265 = 1;
double Td9243.11263;
Td9243_11263 = Ta9241.11264[Ti9242.11265].d;
int green.11253;
green_11253 = (int) Td9243.11263;
int Ti9244.11262;
Ti9244_11262 = 255;
int green.11254;
if(green.11253 <= Ti9244.11262){
green_11254 = green.11253;
}
else{
green_11254 = 255;
}
int Tu9011.11255;
printf("%d", green.11254);
Value* Ta9245.11260;
Ta9245_11260 = rgb;
int Ti9246.11261;
Ti9246_11261 = 2;
double Td9247.11259;
Td9247_11259 = Ta9245.11260[Ti9246.11261].d;
int blue.11256;
blue_11256 = (int) Td9247.11259;
int Ti9248.11258;
Ti9248_11258 = 255;
int blue.11257;
if(blue.11256 <= Ti9248.11258){
blue_11257 = blue.11256;
}
else{
blue_11257 = 255;
}
printf("%d", blue.11257);
return result;
}

int write_ppm_header.11011_fun(int Tu9013.11012, Value *env){
int result;
int Ti9222.11249;
Ti9222_11249 = 80;
int Tu9021.11227;
printf("%d", Ti9222.11249);
int Ti9223.11247;
Ti9223_11247 = 48;
int Ti9224.11248;
Ti9224_11248 = 6;
int Ti9225.11246;
Ti9225_11246 = Ti9223.11247 + Ti9224.11248;
int Tu9020.11228;
printf("%d", Ti9225.11246);
int Ti9226.11245;
Ti9226_11245 = 10;
int Tu9019.11229;
printf("%d", Ti9226.11245);
Value* Ta9227.11243;
Ta9227_11243 = size;
int Ti9228.11244;
Ti9228_11244 = 0;
int Ti9229.11242;
Ti9229_11242 = Ta9227.11243[Ti9228.11244].i;
int Tu9018.11230;
printf("%d", Ti9229.11242);
int Ti9230.11241;
Ti9230_11241 = 32;
int Tu9017.11231;
printf("%d", Ti9230.11241);
Value* Ta9231.11239;
Ta9231_11239 = size;
int Ti9232.11240;
Ti9232_11240 = 1;
int Ti9233.11238;
Ti9233_11238 = Ta9231.11239[Ti9232.11240].i;
int Tu9016.11232;
printf("%d", Ti9233.11238);
int Ti9234.11237;
Ti9234_11237 = 10;
int Tu9015.11233;
printf("%d", Ti9234.11237);
int Ti9235.11236;
Ti9235_11236 = 255;
int Tu9014.11234;
printf("%d", Ti9235.11236);
int Ti9236.11235;
Ti9236_11235 = 10;
printf("%d", Ti9236.11235);
return result;
}

int scan_point.11013_fun(int scanx.11014, Value *env){
int result;
Value* Ta9125.11225;
Ta9125_11225 = size;
int Ti9126.11226;
Ti9126_11226 = 0;
int Ti9127.11114;
Ti9127_11114 = Ta9125.11225[Ti9126.11226].i;
if(Ti9127.11114 <= scanx.11014){
result = 1;
}
else{
double Td9128.11221;
Td9128_11221 = (double) scanx.11014;
Value* Ta9129.11223;
Ta9129_11223 = scan_offset;
int Ti9130.11224;
Ti9130_11224 = 0;
double Td9131.11222;
Td9131_11222 = Ta9129.11223[Ti9130.11224].d;
double Td9132.11217;
Td9132_11217 = Td9128.11221 - Td9131.11222;
Value* Ta9133.11219;
Ta9133_11219 = scan_d;
int Ti9134.11220;
Ti9134_11220 = 0;
double Td9135.11218;
Td9135_11218 = Ta9133.11219[Ti9134.11220].d;
double sscanx.11115;
sscanx_11115 =  Td9132.11217 * Td9135.11218;
Value* Ta9136.11207;
Ta9136_11207 = vscan;
int Ti9137.11208;
Ti9137_11208 = 0;
Value* Ta9138.11215;
Ta9138_11215 = cos_v;
int Ti9139.11216;
Ti9139_11216 = 1;
double Td9140.11214;
Td9140_11214 = Ta9138.11215[Ti9139.11216].d;
double Td9141.11210;
Td9141_11210 =  sscanx.11115 * Td9140.11214;
Value* Ta9142.11212;
Ta9142_11212 = wscan;
int Ti9143.11213;
Ti9143_11213 = 0;
double Td9144.11211;
Td9144_11211 = Ta9142.11212[Ti9143.11213].d;
double Td9145.11209;
Td9145_11209 = Td9141.11210 + Td9144.11211;
int Tu9035.11116;
Ta9136.11207[Ti9137.11208].d = Td9145.11209;
Value* Ta9146.11194;
Ta9146_11194 = vscan;
int Ti9147.11195;
Ti9147_11195 = 1;
Value* Ta9148.11205;
Ta9148_11205 = scan_sscany;
int Ti9149.11206;
Ti9149_11206 = 0;
double Td9150.11201;
Td9150_11201 = Ta9148.11205[Ti9149.11206].d;
Value* Ta9151.11203;
Ta9151_11203 = cos_v;
int Ti9152.11204;
Ti9152_11204 = 0;
double Td9153.11202;
Td9153_11202 = Ta9151.11203[Ti9152.11204].d;
double Td9154.11197;
Td9154_11197 =  Td9150.11201 * Td9153.11202;
Value* Ta9155.11199;
Ta9155_11199 = vp;
int Ti9156.11200;
Ti9156_11200 = 1;
double Td9157.11198;
Td9157_11198 = Ta9155.11199[Ti9156.11200].d;
double Td9158.11196;
Td9158_11196 = Td9154.11197 - Td9157.11198;
int Tu9034.11117;
Ta9146.11194[Ti9147.11195].d = Td9158.11196;
Value* Ta9159.11183;
Ta9159_11183 = vscan;
int Ti9160.11184;
Ti9160_11184 = 2;
double Td9161.11190;
Td9161_11190 = -sscanx.11115;
Value* Ta9162.11192;
Ta9162_11192 = sin_v;
int Ti9163.11193;
Ti9163_11193 = 1;
double Td9164.11191;
Td9164_11191 = Ta9162.11192[Ti9163.11193].d;
double Td9165.11186;
Td9165_11186 =  Td9161.11190 * Td9164.11191;
Value* Ta9166.11188;
Ta9166_11188 = wscan;
int Ti9167.11189;
Ti9167_11189 = 2;
double Td9168.11187;
Td9168_11187 = Ta9166.11188[Ti9167.11189].d;
double Td9169.11185;
Td9169_11185 = Td9165.11186 + Td9168.11187;
int Tu9033.11118;
Ta9159.11183[Ti9160.11184].d = Td9169.11185;
double Td9170.11179;
Td9170_11179 = fsqr.10858_fun(sscanx.11115, NULL);
Value* Ta9171.11181;
Ta9171_11181 = scan_met1;
int Ti9172.11182;
Ti9172_11182 = 0;
double Td9173.11180;
Td9173_11180 = Ta9171.11181[Ti9172.11182].d;
double Td9174.11178;
Td9174_11178 = Td9170.11179 + Td9173.11180;
double metric.11119;
metric_11119 = sqrt(Td9174.11178);
Value* Ta9175.11172;
Ta9175_11172 = vscan;
int Ti9176.11173;
Ti9176_11173 = 0;
Value* Ta9177.11176;
Ta9177_11176 = vscan;
int Ti9178.11177;
Ti9178_11177 = 0;
double Td9179.11175;
Td9179_11175 = Ta9177.11176[Ti9178.11177].d;
double Td9180.11174;
Td9180_11174 = Td9179.11175 / metric.11119;
int Tu9032.11120;
Ta9175.11172[Ti9176.11173].d = Td9180.11174;
Value* Ta9181.11166;
Ta9181_11166 = vscan;
int Ti9182.11167;
Ti9182_11167 = 1;
Value* Ta9183.11170;
Ta9183_11170 = vscan;
int Ti9184.11171;
Ti9184_11171 = 1;
double Td9185.11169;
Td9185_11169 = Ta9183.11170[Ti9184.11171].d;
double Td9186.11168;
Td9186_11168 = Td9185.11169 / metric.11119;
int Tu9031.11121;
Ta9181.11166[Ti9182.11167].d = Td9186.11168;
Value* Ta9187.11160;
Ta9187_11160 = vscan;
int Ti9188.11161;
Ti9188_11161 = 2;
Value* Ta9189.11164;
Ta9189_11164 = vscan;
int Ti9190.11165;
Ti9190_11165 = 2;
double Td9191.11163;
Td9191_11163 = Ta9189.11164[Ti9190.11165].d;
double Td9192.11162;
Td9192_11162 = Td9191.11163 / metric.11119;
int Tu9030.11122;
Ta9187.11160[Ti9188.11161].d = Td9192.11162;
Value* Ta9193.11155;
Ta9193_11155 = viewpoint;
int Ti9194.11156;
Ti9194_11156 = 0;
Value* Ta9195.11158;
Ta9195_11158 = view;
int Ti9196.11159;
Ti9196_11159 = 0;
double Td9197.11157;
Td9197_11157 = Ta9195.11158[Ti9196.11159].d;
int Tu9029.11123;
Ta9193.11155[Ti9194.11156].d = Td9197.11157;
Value* Ta9198.11150;
Ta9198_11150 = viewpoint;
int Ti9199.11151;
Ti9199_11151 = 1;
Value* Ta9200.11153;
Ta9200_11153 = view;
int Ti9201.11154;
Ti9201_11154 = 1;
double Td9202.11152;
Td9202_11152 = Ta9200.11153[Ti9201.11154].d;
int Tu9028.11124;
Ta9198.11150[Ti9199.11151].d = Td9202.11152;
Value* Ta9203.11145;
Ta9203_11145 = viewpoint;
int Ti9204.11146;
Ti9204_11146 = 2;
Value* Ta9205.11148;
Ta9205_11148 = view;
int Ti9206.11149;
Ti9206_11149 = 2;
double Td9207.11147;
Td9207_11147 = Ta9205.11148[Ti9206.11149].d;
int Tu9027.11125;
Ta9203.11145[Ti9204.11146].d = Td9207.11147;
Value* Ta9208.11142;
Ta9208_11142 = rgb;
int Ti9209.11143;
Ti9209_11143 = 0;
double Td9210.11144;
Td9210_11144 = 0.000000;
int Tu9026.11126;
Ta9208.11142[Ti9209.11143].d = Td9210.11144;
Value* Ta9211.11139;
Ta9211_11139 = rgb;
int Ti9212.11140;
Ti9212_11140 = 1;
double Td9213.11141;
Td9213_11141 = 0.000000;
int Tu9025.11127;
Ta9211.11139[Ti9212.11140].d = Td9213.11141;
Value* Ta9214.11136;
Ta9214_11136 = rgb;
int Ti9215.11137;
Ti9215_11137 = 2;
double Td9216.11138;
Td9216_11138 = 0.000000;
int Tu9024.11128;
Ta9214.11136[Ti9215.11137].d = Td9216.11138;
int Ti9217.11134;
Ti9217_11134 = 0;
double Td9218.11135;
Td9218_11135 = 1.000000;
int Tu9023.11129;
Tu9023_11129 = raytracing.11006_fun(Ti9217.11134, Td9218.11135, NULL);
int Tu9219.11133;
Tu9219_11133 = 1;
int Tu9022.11130;
Tu9022_11130 = write_rgb.11009_fun(Tu9219.11133, NULL);
int Ti9220.11132;
Ti9220_11132 = 1;
int Ti9221.11131;
Ti9221_11131 = scanx.11014 + Ti9220.11132;
result = scan_point.11013_fun(Ti9221.11131, NULL);
}
return result;
}

int scan_line.11015_fun(int scany.11016, Value *env){
int result;
Value* Ta9073.11112;
Ta9073_11112 = size;
int Ti9074.11113;
Ti9074_11113 = 0;
int Ti9075.11055;
Ti9075_11055 = Ta9073.11112[Ti9074.11113].i;
if(Ti9075.11055 <= scany.11016){
result = 1;
}
else{
Value* Ta9076.11099;
Ta9076_11099 = scan_sscany;
int Ti9077.11100;
Ti9077_11100 = 0;
Value* Ta9078.11110;
Ta9078_11110 = scan_offset;
int Ti9079.11111;
Ti9079_11111 = 0;
double Td9080.11108;
Td9080_11108 = Ta9078.11110[Ti9079.11111].d;
double Td9081.11109;
Td9081_11109 = 1.000000;
double Td9082.11106;
Td9082_11106 = Td9080.11108 - Td9081.11109;
double Td9083.11107;
Td9083_11107 = (double) scany.11016;
double t.11102;
t_11102 = Td9082.11106 - Td9083.11107;
Value* Ta9084.11104;
Ta9084_11104 = scan_d;
int Ti9085.11105;
Ti9085_11105 = 0;
double Td9086.11103;
Td9086_11103 = Ta9084.11104[Ti9085.11105].d;
double Td9087.11101;
Td9087_11101 =  Td9086.11103 * t.11102;
int Tu9040.11056;
Ta9076.11099[Ti9077.11100].d = Td9087.11101;
Value* Ta9088.11091;
Ta9088_11091 = scan_met1;
int Ti9089.11092;
Ti9089_11092 = 0;
Value* Ta9090.11097;
Ta9090_11097 = scan_sscany;
int Ti9091.11098;
Ti9091_11098 = 0;
double Td9092.11096;
Td9092_11096 = Ta9090.11097[Ti9091.11098].d;
double Td9093.11094;
Td9093_11094 = fsqr.10858_fun(Td9092.11096, NULL);
double Td9094.11095;
Td9094_11095 = 40000.000000;
double Td9095.11093;
Td9095_11093 = Td9093.11094 + Td9094.11095;
int Tu9039.11057;
Ta9088.11091[Ti9089.11092].d = Td9095.11093;
Value* Ta9096.11089;
Ta9096_11089 = scan_sscany;
int Ti9097.11090;
Ti9097_11090 = 0;
double Td9098.11085;
Td9098_11085 = Ta9096.11089[Ti9097.11090].d;
Value* Ta9099.11087;
Ta9099_11087 = sin_v;
int Ti9100.11088;
Ti9100_11088 = 0;
double Td9101.11086;
Td9101_11086 = Ta9099.11087[Ti9100.11088].d;
double t1.11058;
t1_11058 =  Td9098.11085 * Td9101.11086;
Value* Ta9102.11075;
Ta9102_11075 = wscan;
int Ti9103.11076;
Ti9103_11076 = 0;
Value* Ta9104.11083;
Ta9104_11083 = sin_v;
int Ti9105.11084;
Ti9105_11084 = 1;
double Td9106.11082;
Td9106_11082 = Ta9104.11083[Ti9105.11084].d;
double Td9107.11078;
Td9107_11078 =  t1.11058 * Td9106.11082;
Value* Ta9108.11080;
Ta9108_11080 = vp;
int Ti9109.11081;
Ti9109_11081 = 0;
double Td9110.11079;
Td9110_11079 = Ta9108.11080[Ti9109.11081].d;
double Td9111.11077;
Td9111_11077 = Td9107.11078 - Td9110.11079;
int Tu9038.11059;
Ta9102.11075[Ti9103.11076].d = Td9111.11077;
Value* Ta9112.11065;
Ta9112_11065 = wscan;
int Ti9113.11066;
Ti9113_11066 = 2;
Value* Ta9114.11073;
Ta9114_11073 = cos_v;
int Ti9115.11074;
Ti9115_11074 = 1;
double Td9116.11072;
Td9116_11072 = Ta9114.11073[Ti9115.11074].d;
double Td9117.11068;
Td9117_11068 =  t1.11058 * Td9116.11072;
Value* Ta9118.11070;
Ta9118_11070 = vp;
int Ti9119.11071;
Ti9119_11071 = 2;
double Td9120.11069;
Td9120_11069 = Ta9118.11070[Ti9119.11071].d;
double Td9121.11067;
Td9121_11067 = Td9117.11068 - Td9120.11069;
int Tu9037.11060;
Ta9112.11065[Ti9113.11066].d = Td9121.11067;
int Ti9122.11064;
Ti9122_11064 = 0;
int Tu9036.11061;
Tu9036_11061 = scan_point.11013_fun(Ti9122.11064, NULL);
int Ti9123.11063;
Ti9123_11063 = 1;
int Ti9124.11062;
Ti9124_11062 = scany.11016 + Ti9123.11063;
result = scan_line.11015_fun(Ti9124.11062, NULL);
}
return result;
}

int scan_start.11017_fun(int Tu9041.11018, Value *env){
int result;
int Tu9060.11054;
Tu9060_11054 = 1;
int Tu9044.11038;
Tu9044_11038 = write_ppm_header.11011_fun(Tu9060.11054, NULL);
Value* Ta9061.11052;
Ta9061_11052 = size;
int Ti9062.11053;
Ti9062_11053 = 0;
int Ti9063.11051;
Ti9063_11051 = Ta9061.11052[Ti9062.11053].i;
double sizex.11039;
sizex_11039 = (int) Ti9063.11051;
Value* Ta9064.11047;
Ta9064_11047 = scan_d;
int Ti9065.11048;
Ti9065_11048 = 0;
double Td9066.11050;
Td9066_11050 = 128.000000;
double Td9067.11049;
Td9067_11049 = Td9066.11050 / sizex.11039;
int Tu9043.11040;
Ta9064.11047[Ti9065.11048].d = Td9067.11049;
Value* Ta9068.11043;
Ta9068_11043 = scan_offset;
int Ti9069.11044;
Ti9069_11044 = 0;
double Td9070.11046;
Td9070_11046 = 2.000000;
double Td9071.11045;
Td9071_11045 = sizex.11039 / Td9070.11046;
int Tu9042.11041;
Ta9068.11043[Ti9069.11044].d = Td9071.11045;
int Ti9072.11042;
Ti9072_11042 = 0;
result = scan_line.11015_fun(Ti9072.11042, NULL);
return result;
}

int rt.11019_fun(int size_x.11020, int size_y.11021, bool debug_p.11022, Value *env){
int result;
Value* Ta9052.11036;
Ta9052_11036 = size;
int Ti9053.11037;
Ti9053_11037 = 0;
int Tu9048.11026;
Ta9052.11036[Ti9053.11037].i = size_x.11020;
Value* Ta9054.11034;
Ta9054_11034 = size;
int Ti9055.11035;
Ti9055_11035 = 1;
int Tu9047.11027;
Ta9054.11034[Ti9055.11035].i = size_y.11021;
Value* Ta9056.11032;
Ta9056_11032 = dbg;
int Ti9057.11033;
Ti9057_11033 = 0;
int Tu9046.11028;
Ta9056.11032[Ti9057.11033].b = debug_p.11022;
int Tu9058.11031;
Tu9058_11031 = 1;
int Tu9045.11029;
Tu9045_11029 = read_parameter.10921_fun(Tu9058.11031, NULL);
int Tu9059.11030;
Tu9059_11030 = 1;
result = scan_start.11017_fun(Tu9059.11030, NULL);
return result;
}

int main(){
int ans = 1;
int Ti9049.11023;
Ti9049_11023 = 768;
int Ti9050.11024;
Ti9050_11024 = 768;
int Ti9051.11025;
Ti9051_11025 = 0;
ans = rt.11019_fun(Ti9049.11023, Ti9050.11024, Ti9051.11025, NULL);
return ans;
}
