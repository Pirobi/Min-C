#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x11020, int size_y11021, bool debug_p11022, Value *env);
typedef int fun_int_int_double_Value(int nref11007, double energy11008, Value *env);
typedef int fun_int_array_array_double_Value(Value* v111003, Value* v211004, double w11005, Value *env);
typedef double fun_double_array_array_Value(Value* v111000, Value* v211001, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint10981, Value* vscan10982, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs10972, Value* and_group10973, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs10960, Value* and_group10961, Value* p10962, Value *env);
typedef bool fun_bool_int_array_Value(int ofs10957, Value* iand10958, Value *env);
typedef int fun_int_int_array_array_Value(int index10945, Value* l10946, Value* p10947, Value *env);
typedef double fun_double_tuple_array_Value(int* m10930, Value* v10931, Value *env);
typedef int fun_int_tuple_array_Value(int* m10924, Value* l10925, Value *env);
typedef Value* fun_array_int_Value(int length10918, Value *env);
typedef bool fun_bool_int_Value(int n10910, Value *env);
typedef int fun_int_int_Value(int Tu888110908, Value *env);
typedef int fun_int_array_bool_Value(Value* v10901, bool inv10902, Value *env);
typedef double fun_double_tuple_Value(int* m10873, Value *env);
typedef bool fun_bool_tuple_Value(int* m10869, Value *env);
typedef int fun_int_tuple_Value(int* m10863, Value *env);
typedef double fun_double_double_Value(double x10859, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x10856, bool y10857, Value *env);

Value* and_net;
Value* beam;
Value* chkinside_p;
Value* cos_v;
Value* crashed_object;
Value* crashed_point;
Value* cs_temp;
Value* dbg;
Value* end_flag;
Value* intsec_rectside;
Value* isoutside_q;
Value* light;
Value* nvector;
Value* nvector_w;
Value* objects;
Value* or_net;
Value* rgb;
Value* scan_d;
Value* scan_met1;
Value* scan_offset;
Value* scan_sscany;
Value* screen;
Value* sin_v;
Value* size;
Value* solver_dist;
Value* solver_w_vec;
Value* texture_color;
Value* tmin;
Value* view;
Value* viewpoint;
Value* vp;
Value* vscan;
Value* wscan;

bool xor10855_fun(bool x10856, bool y10857, Value *env){
    bool result;
    int Ti1085313316;
    Ti1085313316 = 0;
    if(x10856 == Ti1085313316){
	result = y10857;
    }
    else{
	int Ti1085413317;
	Ti1085413317 = 0;
	if(y10857 == Ti1085413317){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    return result;
}

double fsqr10858_fun(double x10859, Value *env){
    double result;
    result =  x10859 * x10859;
    return result;
}

double fhalf10860_fun(double x10861, Value *env){
    double result;
    double Td1085213315;
    Td1085213315 = 2.000000;
    result = x10861 / Td1085213315;
    return result;
}

int o_texturetype10862_fun(int* m10863, Value *env){
    int result;
    int m_tex13305 = m10863[0];
    int xm_shape13306 = m10863[1];
    int xm_surface13307 = m10863[2];
    int xm_isrot13308 = m10863[3];
    Value* xm_abc13309 = m10863[4];
    Value* xm_xyz13310 = m10863[5];
    bool xm_invert13311 = m10863[6];
    Value* xm_surfparams13312 = m10863[7];
    Value* xm_color13313 = m10863[8];
    Value* xm_rot12313314 = m10863[9];
    result = m_tex13305;
    return result;
}

int o_form10864_fun(int* m10865, Value *env){
    int result;
    int xm_tex13295 = m10865[0];
    int m_shape13296 = m10865[1];
    int xm_surface13297 = m10865[2];
    int xm_isrot13298 = m10865[3];
    Value* xm_abc13299 = m10865[4];
    Value* xm_xyz13300 = m10865[5];
    bool xm_invert13301 = m10865[6];
    Value* xm_surfparams13302 = m10865[7];
    Value* xm_color13303 = m10865[8];
    Value* xm_rot12313304 = m10865[9];
    result = m_shape13296;
    return result;
}

int o_reflectiontype10866_fun(int* m10867, Value *env){
    int result;
    int xm_tex13285 = m10867[0];
    int xm_shape13286 = m10867[1];
    int m_surface13287 = m10867[2];
    int xm_isrot13288 = m10867[3];
    Value* xm_abc13289 = m10867[4];
    Value* xm_xyz13290 = m10867[5];
    bool xm_invert13291 = m10867[6];
    Value* xm_surfparams13292 = m10867[7];
    Value* xm_color13293 = m10867[8];
    Value* xm_rot12313294 = m10867[9];
    result = m_surface13287;
    return result;
}

bool o_isinvert10868_fun(int* m10869, Value *env){
    bool result;
    int m_tex13275 = m10869[0];
    int m_shape13276 = m10869[1];
    int m_surface13277 = m10869[2];
    int m_isrot13278 = m10869[3];
    Value* xm_abc13279 = m10869[4];
    Value* xm_xyz13280 = m10869[5];
    bool m_invert13281 = m10869[6];
    Value* xm_surfparams13282 = m10869[7];
    Value* xm_color13283 = m10869[8];
    Value* xm_rot12313284 = m10869[9];
    result = m_invert13281;
    return result;
}

int o_isrot10870_fun(int* m10871, Value *env){
    int result;
    int xm_tex13265 = m10871[0];
    int xm_shape13266 = m10871[1];
    int xm_surface13267 = m10871[2];
    int m_isrot13268 = m10871[3];
    Value* xm_abc13269 = m10871[4];
    Value* xm_xyz13270 = m10871[5];
    bool xm_invert13271 = m10871[6];
    Value* xm_surfparams13272 = m10871[7];
    Value* xm_color13273 = m10871[8];
    Value* xm_rot12313274 = m10871[9];
    result = m_isrot13268;
    return result;
}

double o_param_a10872_fun(int* m10873, Value *env){
    double result;
    int xm_tex13254 = m10873[0];
    int xm_shape13255 = m10873[1];
    int xm_surface13256 = m10873[2];
    int xm_isrot13257 = m10873[3];
    Value* m_abc13258 = m10873[4];
    Value* xm_xyz13259 = m10873[5];
    bool xm_invert13260 = m10873[6];
    Value* xm_surfparams13261 = m10873[7];
    Value* xm_color13262 = m10873[8];
    Value* xm_rot12313263 = m10873[9];
    int Ti1085113264;
    Ti1085113264 = 0;
    result = m_abc13258[Ti1085113264].d;
    return result;
}

double o_param_b10874_fun(int* m10875, Value *env){
    double result;
    int xm_tex13243 = m10875[0];
    int xm_shape13244 = m10875[1];
    int xm_surface13245 = m10875[2];
    int xm_isrot13246 = m10875[3];
    Value* m_abc13247 = m10875[4];
    Value* xm_xyz13248 = m10875[5];
    bool xm_invert13249 = m10875[6];
    Value* xm_surfparams13250 = m10875[7];
    Value* xm_color13251 = m10875[8];
    Value* xm_rot12313252 = m10875[9];
    int Ti1085013253;
    Ti1085013253 = 1;
    result = m_abc13247[Ti1085013253].d;
    return result;
}

double o_param_c10876_fun(int* m10877, Value *env){
    double result;
    int xm_tex13232 = m10877[0];
    int xm_shape13233 = m10877[1];
    int xm_surface13234 = m10877[2];
    int xm_isrot13235 = m10877[3];
    Value* m_abc13236 = m10877[4];
    Value* xm_xyz13237 = m10877[5];
    bool xm_invert13238 = m10877[6];
    Value* xm_surfparams13239 = m10877[7];
    Value* xm_color13240 = m10877[8];
    Value* xm_rot12313241 = m10877[9];
    int Ti1084913242;
    Ti1084913242 = 2;
    result = m_abc13236[Ti1084913242].d;
    return result;
}

double o_param_x10878_fun(int* m10879, Value *env){
    double result;
    int xm_tex13221 = m10879[0];
    int xm_shape13222 = m10879[1];
    int xm_surface13223 = m10879[2];
    int xm_isrot13224 = m10879[3];
    Value* xm_abc13225 = m10879[4];
    Value* m_xyz13226 = m10879[5];
    bool xm_invert13227 = m10879[6];
    Value* xm_surfparams13228 = m10879[7];
    Value* xm_color13229 = m10879[8];
    Value* xm_rot12313230 = m10879[9];
    int Ti1084813231;
    Ti1084813231 = 0;
    result = m_xyz13226[Ti1084813231].d;
    return result;
}

double o_param_y10880_fun(int* m10881, Value *env){
    double result;
    int xm_tex13210 = m10881[0];
    int xm_shape13211 = m10881[1];
    int xm_surface13212 = m10881[2];
    int xm_isrot13213 = m10881[3];
    Value* xm_abc13214 = m10881[4];
    Value* m_xyz13215 = m10881[5];
    bool xm_invert13216 = m10881[6];
    Value* xm_surfparams13217 = m10881[7];
    Value* xm_color13218 = m10881[8];
    Value* xm_rot12313219 = m10881[9];
    int Ti1084713220;
    Ti1084713220 = 1;
    result = m_xyz13215[Ti1084713220].d;
    return result;
}

double o_param_z10882_fun(int* m10883, Value *env){
    double result;
    int xm_tex13199 = m10883[0];
    int xm_shape13200 = m10883[1];
    int xm_surface13201 = m10883[2];
    int xm_isrot13202 = m10883[3];
    Value* xm_abc13203 = m10883[4];
    Value* m_xyz13204 = m10883[5];
    bool xm_invert13205 = m10883[6];
    Value* xm_surfparams13206 = m10883[7];
    Value* xm_color13207 = m10883[8];
    Value* xm_rot12313208 = m10883[9];
    int Ti1084613209;
    Ti1084613209 = 2;
    result = m_xyz13204[Ti1084613209].d;
    return result;
}

double o_diffuse10884_fun(int* m10885, Value *env){
    double result;
    int xm_tex13188 = m10885[0];
    int xm_shape13189 = m10885[1];
    int xm_surface13190 = m10885[2];
    int xm_isrot13191 = m10885[3];
    Value* xm_abc13192 = m10885[4];
    Value* xm_xyz13193 = m10885[5];
    bool xm_invert13194 = m10885[6];
    Value* m_surfparams13195 = m10885[7];
    Value* xm_color13196 = m10885[8];
    Value* xm_rot12313197 = m10885[9];
    int Ti1084513198;
    Ti1084513198 = 0;
    result = m_surfparams13195[Ti1084513198].d;
    return result;
}

double o_hilight10886_fun(int* m10887, Value *env){
    double result;
    int xm_tex13177 = m10887[0];
    int xm_shape13178 = m10887[1];
    int xm_surface13179 = m10887[2];
    int xm_isrot13180 = m10887[3];
    Value* xm_abc13181 = m10887[4];
    Value* xm_xyz13182 = m10887[5];
    bool xm_invert13183 = m10887[6];
    Value* m_surfparams13184 = m10887[7];
    Value* xm_color13185 = m10887[8];
    Value* xm_rot12313186 = m10887[9];
    int Ti1084413187;
    Ti1084413187 = 1;
    result = m_surfparams13184[Ti1084413187].d;
    return result;
}

double o_color_red10888_fun(int* m10889, Value *env){
    double result;
    int xm_tex13166 = m10889[0];
    int xm_shape13167 = m10889[1];
    int m_surface13168 = m10889[2];
    int xm_isrot13169 = m10889[3];
    Value* xm_abc13170 = m10889[4];
    Value* xm_xyz13171 = m10889[5];
    bool xm_invert13172 = m10889[6];
    Value* xm_surfparams13173 = m10889[7];
    Value* m_color13174 = m10889[8];
    Value* xm_rot12313175 = m10889[9];
    int Ti1084313176;
    Ti1084313176 = 0;
    result = m_color13174[Ti1084313176].d;
    return result;
}

double o_color_green10890_fun(int* m10891, Value *env){
    double result;
    int xm_tex13155 = m10891[0];
    int xm_shape13156 = m10891[1];
    int m_surface13157 = m10891[2];
    int xm_isrot13158 = m10891[3];
    Value* xm_abc13159 = m10891[4];
    Value* xm_xyz13160 = m10891[5];
    bool xm_invert13161 = m10891[6];
    Value* xm_surfparams13162 = m10891[7];
    Value* m_color13163 = m10891[8];
    Value* xm_rot12313164 = m10891[9];
    int Ti1084213165;
    Ti1084213165 = 1;
    result = m_color13163[Ti1084213165].d;
    return result;
}

double o_color_blue10892_fun(int* m10893, Value *env){
    double result;
    int xm_tex13144 = m10893[0];
    int xm_shape13145 = m10893[1];
    int m_surface13146 = m10893[2];
    int xm_isrot13147 = m10893[3];
    Value* xm_abc13148 = m10893[4];
    Value* xm_xyz13149 = m10893[5];
    bool xm_invert13150 = m10893[6];
    Value* xm_surfparams13151 = m10893[7];
    Value* m_color13152 = m10893[8];
    Value* xm_rot12313153 = m10893[9];
    int Ti1084113154;
    Ti1084113154 = 2;
    result = m_color13152[Ti1084113154].d;
    return result;
}

double o_param_r110894_fun(int* m10895, Value *env){
    double result;
    int xm_tex13133 = m10895[0];
    int xm_shape13134 = m10895[1];
    int xm_surface13135 = m10895[2];
    int xm_isrot13136 = m10895[3];
    Value* xm_abc13137 = m10895[4];
    Value* xm_xyz13138 = m10895[5];
    bool xm_invert13139 = m10895[6];
    Value* xm_surfparams13140 = m10895[7];
    Value* xm_color13141 = m10895[8];
    Value* m_rot12313142 = m10895[9];
    int Ti1084013143;
    Ti1084013143 = 0;
    result = m_rot12313142[Ti1084013143].d;
    return result;
}

double o_param_r210896_fun(int* m10897, Value *env){
    double result;
    int xm_tex13122 = m10897[0];
    int xm_shape13123 = m10897[1];
    int xm_surface13124 = m10897[2];
    int xm_isrot13125 = m10897[3];
    Value* xm_abc13126 = m10897[4];
    Value* xm_xyz13127 = m10897[5];
    bool xm_invert13128 = m10897[6];
    Value* xm_surfparams13129 = m10897[7];
    Value* xm_color13130 = m10897[8];
    Value* m_rot12313131 = m10897[9];
    int Ti1083913132;
    Ti1083913132 = 1;
    result = m_rot12313131[Ti1083913132].d;
    return result;
}

double o_param_r310898_fun(int* m10899, Value *env){
    double result;
    int xm_tex13111 = m10899[0];
    int xm_shape13112 = m10899[1];
    int xm_surface13113 = m10899[2];
    int xm_isrot13114 = m10899[3];
    Value* xm_abc13115 = m10899[4];
    Value* xm_xyz13116 = m10899[5];
    bool xm_invert13117 = m10899[6];
    Value* xm_surfparams13118 = m10899[7];
    Value* xm_color13119 = m10899[8];
    Value* m_rot12313120 = m10899[9];
    int Ti1083813121;
    Ti1083813121 = 2;
    result = m_rot12313120[Ti1083813121].d;
    return result;
}

int normalize_vector10900_fun(Value* v10901, bool inv10902, Value *env){
    int result;
    int Ti1081413110;
    Ti1081413110 = 0;
    double Td1081513109;
    Td1081513109 = v10901[Ti1081413110].d;
    double Td1081613105;
    Td1081613105 = fsqr10858_fun(Td1081513109, NULL);
    int Ti1081713108;
    Ti1081713108 = 1;
    double Td1081813107;
    Td1081813107 = v10901[Ti1081713108].d;
    double Td1081913106;
    Td1081913106 = fsqr10858_fun(Td1081813107, NULL);
    double Td1082013101;
    Td1082013101 = Td1081613105 + Td1081913106;
    int Ti1082113104;
    Ti1082113104 = 2;
    double Td1082213103;
    Td1082213103 = v10901[Ti1082113104].d;
    double Td1082313102;
    Td1082313102 = fsqr10858_fun(Td1082213103, NULL);
    double Td1082413100;
    Td1082413100 = Td1082013101 + Td1082313102;
    double n013083;
    n013083 = sqrt(Td1082413100);
    int Ti1082513099;
    Ti1082513099 = 0;
    double n13084;
    if(inv10902 == Ti1082513099){
	n13084 = n013083;
    }
    else{
	n13084 = -n013083;
    }
    int Ti1082613095;
    Ti1082613095 = 0;
    int Ti1082713098;
    Ti1082713098 = 0;
    double Td1082813097;
    Td1082813097 = v10901[Ti1082713098].d;
    double Td1082913096;
    Td1082913096 = Td1082813097 / n13084;
    int Tu888013085;
    v10901[Ti1082613095].d = Td1082913096;
    int Ti1083013091;
    Ti1083013091 = 1;
    int Ti1083113094;
    Ti1083113094 = 1;
    double Td1083213093;
    Td1083213093 = v10901[Ti1083113094].d;
    double Td1083313092;
    Td1083313092 = Td1083213093 / n13084;
    int Tu887913086;
    v10901[Ti1083013091].d = Td1083313092;
    int Ti1083413087;
    Ti1083413087 = 2;
    int Ti1083513090;
    Ti1083513090 = 2;
    double Td1083613089;
    Td1083613089 = v10901[Ti1083513090].d;
    double Td1083713088;
    Td1083713088 = Td1083613089 / n13084;
    v10901[Ti1083413087].d = Td1083713088;
    return result;
}

double sgn10903_fun(double x10904, Value *env){
    double result;
    double Td1081313082;
    Td1081313082 = 0.000000;
    if(x10904 <= Td1081313082){
	result = -1.000000;
    }
    else{
	result = 1.000000;
    }
    return result;
}

double rad10905_fun(double x10906, Value *env){
    double result;
    double Td1081213081;
    Td1081213081 = 0.017453;
    result =  x10906 * Td1081213081;
    return result;
}

int read_environ10907_fun(int Tu888110908, Value *env){
    int result;
    Value* Ta1070913077;
    Ta1070913077 = screen;
    int Ti1071013078;
    Ti1071013078 = 0;
    int Tu1071113080;
    Tu1071113080 = 1;
    double Td1071213079;
    printf("Enter a float: ");
    scanf("%d\n", &Td1071213079);
    int Tu889712953;
    Ta1070913077[Ti1071013078].d = Td1071213079;
    Value* Ta1071313073;
    Ta1071313073 = screen;
    int Ti1071413074;
    Ti1071413074 = 1;
    int Tu1071513076;
    Tu1071513076 = 1;
    double Td1071613075;
    printf("Enter a float: ");
    scanf("%d\n", &Td1071613075);
    int Tu889612954;
    Ta1071313073[Ti1071413074].d = Td1071613075;
    Value* Ta1071713069;
    Ta1071713069 = screen;
    int Ti1071813070;
    Ti1071813070 = 2;
    int Tu1071913072;
    Tu1071913072 = 1;
    double Td1072013071;
    printf("Enter a float: ");
    scanf("%d\n", &Td1072013071);
    int Tu889512955;
    Ta1071713069[Ti1071813070].d = Td1072013071;
    int Tu1072113068;
    Tu1072113068 = 1;
    double Td1072213067;
    printf("Enter a float: ");
    scanf("%d\n", &Td1072213067);
    double v112956;
    v112956 = rad10905_fun(Td1072213067, NULL);
    Value* Ta1072313064;
    Ta1072313064 = cos_v;
    int Ti1072413065;
    Ti1072413065 = 0;
    double Td1072513066;
    Td1072513066 = cos(v112956);
    int Tu889412957;
    Ta1072313064[Ti1072413065].d = Td1072513066;
    Value* Ta1072613061;
    Ta1072613061 = sin_v;
    int Ti1072713062;
    Ti1072713062 = 0;
    double Td1072813063;
    Td1072813063 = sin(v112956);
    int Tu889312958;
    Ta1072613061[Ti1072713062].d = Td1072813063;
    int Tu1072913060;
    Tu1072913060 = 1;
    double Td1073013059;
    printf("Enter a float: ");
    scanf("%d\n", &Td1073013059);
    double v212959;
    v212959 = rad10905_fun(Td1073013059, NULL);
    Value* Ta1073113056;
    Ta1073113056 = cos_v;
    int Ti1073213057;
    Ti1073213057 = 1;
    double Td1073313058;
    Td1073313058 = cos(v212959);
    int Tu889212960;
    Ta1073113056[Ti1073213057].d = Td1073313058;
    Value* Ta1073413053;
    Ta1073413053 = sin_v;
    int Ti1073513054;
    Ti1073513054 = 1;
    double Td1073613055;
    Td1073613055 = sin(v212959);
    int Tu889112961;
    Ta1073413053[Ti1073513054].d = Td1073613055;
    int Tu1073713052;
    Tu1073713052 = 1;
    double nl12962;
    printf("Enter a float: ");
    scanf("%d\n", &nl12962);
    int Tu1073813051;
    Tu1073813051 = 1;
    double Td1073913050;
    printf("Enter a float: ");
    scanf("%d\n", &Td1073913050);
    double l112963;
    l112963 = rad10905_fun(Td1073913050, NULL);
    double sl112964;
    sl112964 = sin(l112963);
    Value* Ta1074013047;
    Ta1074013047 = light;
    int Ti1074113048;
    Ti1074113048 = 1;
    double Td1074213049;
    Td1074213049 = -sl112964;
    int Tu889012965;
    Ta1074013047[Ti1074113048].d = Td1074213049;
    int Tu1074313046;
    Tu1074313046 = 1;
    double Td1074413045;
    printf("Enter a float: ");
    scanf("%d\n", &Td1074413045);
    double l212966;
    l212966 = rad10905_fun(Td1074413045, NULL);
    double cl112967;
    cl112967 = cos(l112963);
    double sl212968;
    sl212968 = sin(l212966);
    Value* Ta1074513042;
    Ta1074513042 = light;
    int Ti1074613043;
    Ti1074613043 = 0;
    double Td1074713044;
    Td1074713044 =  cl112967 * sl212968;
    int Tu888912969;
    Ta1074513042[Ti1074613043].d = Td1074713044;
    double cl212970;
    cl212970 = cos(l212966);
    Value* Ta1074813039;
    Ta1074813039 = light;
    int Ti1074913040;
    Ti1074913040 = 2;
    double Td1075013041;
    Td1075013041 =  cl112967 * cl212970;
    int Tu888812971;
    Ta1074813039[Ti1074913040].d = Td1075013041;
    Value* Ta1075113035;
    Ta1075113035 = beam;
    int Ti1075213036;
    Ti1075213036 = 0;
    int Tu1075313038;
    Tu1075313038 = 1;
    double Td1075413037;
    printf("Enter a float: ");
    scanf("%d\n", &Td1075413037);
    int Tu888712972;
    Ta1075113035[Ti1075213036].d = Td1075413037;
    Value* Ta1075513024;
    Ta1075513024 = vp;
    int Ti1075613025;
    Ti1075613025 = 0;
    Value* Ta1075713033;
    Ta1075713033 = cos_v;
    int Ti1075813034;
    Ti1075813034 = 0;
    double Td1075913029;
    Td1075913029 = Ta1075713033[Ti1075813034].d;
    Value* Ta1076013031;
    Ta1076013031 = sin_v;
    int Ti1076113032;
    Ti1076113032 = 1;
    double Td1076213030;
    Td1076213030 = Ta1076013031[Ti1076113032].d;
    double Td1076313027;
    Td1076313027 =  Td1075913029 * Td1076213030;
    double Td1076413028;
    Td1076413028 = -200.000000;
    double Td1076513026;
    Td1076513026 =  Td1076313027 * Td1076413028;
    int Tu888612973;
    Ta1075513024[Ti1075613025].d = Td1076513026;
    Value* Ta1076613016;
    Ta1076613016 = vp;
    int Ti1076713017;
    Ti1076713017 = 1;
    Value* Ta1076813022;
    Ta1076813022 = sin_v;
    int Ti1076913023;
    Ti1076913023 = 0;
    double Td1077013021;
    Td1077013021 = Ta1076813022[Ti1076913023].d;
    double Td1077113019;
    Td1077113019 = -Td1077013021;
    double Td1077213020;
    Td1077213020 = -200.000000;
    double Td1077313018;
    Td1077313018 =  Td1077113019 * Td1077213020;
    int Tu888512974;
    Ta1076613016[Ti1076713017].d = Td1077313018;
    Value* Ta1077413005;
    Ta1077413005 = vp;
    int Ti1077513006;
    Ti1077513006 = 2;
    Value* Ta1077613014;
    Ta1077613014 = cos_v;
    int Ti1077713015;
    Ti1077713015 = 0;
    double Td1077813010;
    Td1077813010 = Ta1077613014[Ti1077713015].d;
    Value* Ta1077913012;
    Ta1077913012 = cos_v;
    int Ti1078013013;
    Ti1078013013 = 1;
    double Td1078113011;
    Td1078113011 = Ta1077913012[Ti1078013013].d;
    double Td1078213008;
    Td1078213008 =  Td1077813010 * Td1078113011;
    double Td1078313009;
    Td1078313009 = -200.000000;
    double Td1078413007;
    Td1078413007 =  Td1078213008 * Td1078313009;
    int Tu888412975;
    Ta1077413005[Ti1077513006].d = Td1078413007;
    Value* Ta1078512996;
    Ta1078512996 = view;
    int Ti1078612997;
    Ti1078612997 = 0;
    Value* Ta1078713003;
    Ta1078713003 = vp;
    int Ti1078813004;
    Ti1078813004 = 0;
    double Td1078912999;
    Td1078912999 = Ta1078713003[Ti1078813004].d;
    Value* Ta1079013001;
    Ta1079013001 = screen;
    int Ti1079113002;
    Ti1079113002 = 0;
    double Td1079213000;
    Td1079213000 = Ta1079013001[Ti1079113002].d;
    double Td1079312998;
    Td1079312998 = Td1078912999 + Td1079213000;
    int Tu888312976;
    Ta1078512996[Ti1078612997].d = Td1079312998;
    Value* Ta1079412987;
    Ta1079412987 = view;
    int Ti1079512988;
    Ti1079512988 = 1;
    Value* Ta1079612994;
    Ta1079612994 = vp;
    int Ti1079712995;
    Ti1079712995 = 1;
    double Td1079812990;
    Td1079812990 = Ta1079612994[Ti1079712995].d;
    Value* Ta1079912992;
    Ta1079912992 = screen;
    int Ti1080012993;
    Ti1080012993 = 1;
    double Td1080112991;
    Td1080112991 = Ta1079912992[Ti1080012993].d;
    double Td1080212989;
    Td1080212989 = Td1079812990 + Td1080112991;
    int Tu888212977;
    Ta1079412987[Ti1079512988].d = Td1080212989;
    Value* Ta1080312978;
    Ta1080312978 = view;
    int Ti1080412979;
    Ti1080412979 = 2;
    Value* Ta1080512985;
    Ta1080512985 = vp;
    int Ti1080612986;
    Ti1080612986 = 2;
    double Td1080712981;
    Td1080712981 = Ta1080512985[Ti1080612986].d;
    Value* Ta1080812983;
    Ta1080812983 = screen;
    int Ti1080912984;
    Ti1080912984 = 2;
    double Td1081012982;
    Td1081012982 = Ta1080812983[Ti1080912984].d;
    double Td1081112980;
    Td1081112980 = Td1080712981 + Td1081012982;
    Ta1080312978[Ti1080412979].d = Td1081112980;
    return result;
}

bool read_nth_object10909_fun(int n10910, Value *env){
    bool result;
    int Tu1031912952;
    Tu1031912952 = 1;
    int texture12506;
    printf("Enter an int: ");
    scanf("%d\n", &texture12506);
    int Ti1032012951;
    Ti1032012951 = 1;
    int Ti1032112507;
    Ti1032112507 = -Ti1032012951;
    if(texture12506 == Ti1032112507){
	result = 0;
    }
    else{
	int Tu1032212950;
	Tu1032212950 = 1;
	int form12508;
	printf("Enter an int: ");
	scanf("%d\n", &form12508);
	int Tu1032312949;
	Tu1032312949 = 1;
	int refltype12509;
	printf("Enter an int: ");
	scanf("%d\n", &refltype12509);
	int Tu1032412948;
	Tu1032412948 = 1;
	int isrot_p12510;
	printf("Enter an int: ");
	scanf("%d\n", &isrot_p12510);
	int Ti1032512946;
	Ti1032512946 = 3;
	double Td1032612947;
	Td1032612947 = 0.000000;
	Value* abc12511;
	make_double_array(&abc12511, Ti1032512946, Td1032612947);
	int Ti1032712943;
	Ti1032712943 = 0;
	int Tu1032812945;
	Tu1032812945 = 1;
	double Td1032912944;
	printf("Enter a float: ");
	scanf("%d\n", &Td1032912944);
	int Tu893612512;
	abc12511[Ti1032712943].d = Td1032912944;
	int Ti1033012940;
	Ti1033012940 = 1;
	int Tu1033112942;
	Tu1033112942 = 1;
	double Td1033212941;
	printf("Enter a float: ");
	scanf("%d\n", &Td1033212941);
	int Tu893512513;
	abc12511[Ti1033012940].d = Td1033212941;
	int Ti1033312937;
	Ti1033312937 = 2;
	int Tu1033412939;
	Tu1033412939 = 1;
	double Td1033512938;
	printf("Enter a float: ");
	scanf("%d\n", &Td1033512938);
	int Tu893412514;
	abc12511[Ti1033312937].d = Td1033512938;
	int Ti1033612935;
	Ti1033612935 = 3;
	double Td1033712936;
	Td1033712936 = 0.000000;
	Value* xyz12515;
	make_double_array(&xyz12515, Ti1033612935, Td1033712936);
	int Ti1033812932;
	Ti1033812932 = 0;
	int Tu1033912934;
	Tu1033912934 = 1;
	double Td1034012933;
	printf("Enter a float: ");
	scanf("%d\n", &Td1034012933);
	int Tu893312516;
	xyz12515[Ti1033812932].d = Td1034012933;
	int Ti1034112929;
	Ti1034112929 = 1;
	int Tu1034212931;
	Tu1034212931 = 1;
	double Td1034312930;
	printf("Enter a float: ");
	scanf("%d\n", &Td1034312930);
	int Tu893212517;
	xyz12515[Ti1034112929].d = Td1034312930;
	int Ti1034412926;
	Ti1034412926 = 2;
	int Tu1034512928;
	Tu1034512928 = 1;
	double Td1034612927;
	printf("Enter a float: ");
	scanf("%d\n", &Td1034612927);
	int Tu893112518;
	xyz12515[Ti1034412926].d = Td1034612927;
	double Td1034712923;
	Td1034712923 = 0.000000;
	int Tu1034812925;
	Tu1034812925 = 1;
	double Td1034912924;
	printf("Enter a float: ");
	scanf("%d\n", &Td1034912924);
	bool m_invert12519;
	if(Td1034712923 <= Td1034912924){
	    m_invert12519 = 0;
	}
	else{
	    m_invert12519 = 1;
	}
	int Ti1035012921;
	Ti1035012921 = 2;
	double Td1035112922;
	Td1035112922 = 0.000000;
	Value* reflparam12520;
	make_double_array(&reflparam12520, Ti1035012921, Td1035112922);
	int Ti1035212918;
	Ti1035212918 = 0;
	int Tu1035312920;
	Tu1035312920 = 1;
	double Td1035412919;
	printf("Enter a float: ");
	scanf("%d\n", &Td1035412919);
	int Tu893012521;
	reflparam12520[Ti1035212918].d = Td1035412919;
	int Ti1035512915;
	Ti1035512915 = 1;
	int Tu1035612917;
	Tu1035612917 = 1;
	double Td1035712916;
	printf("Enter a float: ");
	scanf("%d\n", &Td1035712916);
	int Tu892912522;
	reflparam12520[Ti1035512915].d = Td1035712916;
	int Ti1035812913;
	Ti1035812913 = 3;
	double Td1035912914;
	Td1035912914 = 0.000000;
	Value* color12523;
	make_double_array(&color12523, Ti1035812913, Td1035912914);
	int Ti1036012910;
	Ti1036012910 = 0;
	int Tu1036112912;
	Tu1036112912 = 1;
	double Td1036212911;
	printf("Enter a float: ");
	scanf("%d\n", &Td1036212911);
	int Tu892812524;
	color12523[Ti1036012910].d = Td1036212911;
	int Ti1036312907;
	Ti1036312907 = 1;
	int Tu1036412909;
	Tu1036412909 = 1;
	double Td1036512908;
	printf("Enter a float: ");
	scanf("%d\n", &Td1036512908);
	int Tu892712525;
	color12523[Ti1036312907].d = Td1036512908;
	int Ti1036612904;
	Ti1036612904 = 2;
	int Tu1036712906;
	Tu1036712906 = 1;
	double Td1036812905;
	printf("Enter a float: ");
	scanf("%d\n", &Td1036812905);
	int Tu892612526;
	color12523[Ti1036612904].d = Td1036812905;
	int Ti1036912902;
	Ti1036912902 = 3;
	double Td1037012903;
	Td1037012903 = 0.000000;
	Value* rotation12527;
	make_double_array(&rotation12527, Ti1036912902, Td1037012903);
	int Ti1037112887;
	Ti1037112887 = 0;
	int Tu892512528;
	if(isrot_p12510 == Ti1037112887){
	    Tu892512528 = 1;
	}
	else{
	    int Ti1037212898;
	    Ti1037212898 = 0;
	    int Tu1037312901;
	    Tu1037312901 = 1;
	    double Td1037412900;
	    printf("Enter a float: ");
	    scanf("%d\n", &Td1037412900);
	    double Td1037512899;
	    Td1037512899 = rad10905_fun(Td1037412900, NULL);
	    int Tu889912888;
	    rotation12527[Ti1037212898].d = Td1037512899;
	    int Ti1037612894;
	    Ti1037612894 = 1;
	    int Tu1037712897;
	    Tu1037712897 = 1;
	    double Td1037812896;
	    printf("Enter a float: ");
	    scanf("%d\n", &Td1037812896);
	    double Td1037912895;
	    Td1037912895 = rad10905_fun(Td1037812896, NULL);
	    int Tu889812889;
	    rotation12527[Ti1037612894].d = Td1037912895;
	    int Ti1038012890;
	    Ti1038012890 = 2;
	    int Tu1038112893;
	    Tu1038112893 = 1;
	    double Td1038212892;
	    printf("Enter a float: ");
	    scanf("%d\n", &Td1038212892);
	    double Td1038312891;
	    Td1038312891 = rad10905_fun(Td1038212892, NULL);
	    rotation12527[Ti1038012890].d = Td1038312891;
	}
	int Ti1038412886;
	Ti1038412886 = 2;
	bool m_invert212529;
	if(form12508 == Ti1038412886){
	    m_invert212529 = 1;
	}
	else{
	    m_invert212529 = m_invert12519;
	}
	int* obj12530;
	obj12530 = malloc(10 * sizeof(int));
	obj12530[0] = texture12506;
	obj12530[1] = form12508;
	obj12530[2] = refltype12509;
	obj12530[3] = isrot_p12510;
	obj12530[4] = abc12511;
	obj12530[5] = xyz12515;
	obj12530[6] = m_invert212529;
	obj12530[7] = reflparam12520;
	obj12530[8] = color12523;
	obj12530[9] = rotation12527;

	Value* Ta1038512885;
	Ta1038512885 = objects;
	int Tu892412531;
	Ta1038512885[n10910].a = obj12530;
	int Ti1038612858;
	Ti1038612858 = 3;
	int Tu892312532;
	if(form12508 == Ti1038612858){
	    int Ti1038712884;
	    Ti1038712884 = 0;
	    double a12862;
	    a12862 = abc12511[Ti1038712884].d;
	    int Ti1038812879;
	    Ti1038812879 = 0;
	    double Td1038912881;
	    Td1038912881 = 0.000000;
	    double Td1039212880;
	    if(Td1038912881 == a12862){
		Td1039212880 = 0.000000;
	    }
	    else{
		double Td1039012882;
		Td1039012882 = sgn10903_fun(a12862, NULL);
		double Td1039112883;
		Td1039112883 = fsqr10858_fun(a12862, NULL);
		Td1039212880 = Td1039012882 / Td1039112883;
	    }
	    int Tu890112863;
	    abc12511[Ti1038812879].d = Td1039212880;
	    int Ti1039312878;
	    Ti1039312878 = 1;
	    double b12864;
	    b12864 = abc12511[Ti1039312878].d;
	    int Ti1039412873;
	    Ti1039412873 = 1;
	    double Td1039512875;
	    Td1039512875 = 0.000000;
	    double Td1039812874;
	    if(Td1039512875 == b12864){
		Td1039812874 = 0.000000;
	    }
	    else{
		double Td1039612876;
		Td1039612876 = sgn10903_fun(b12864, NULL);
		double Td1039712877;
		Td1039712877 = fsqr10858_fun(b12864, NULL);
		Td1039812874 = Td1039612876 / Td1039712877;
	    }
	    int Tu890012865;
	    abc12511[Ti1039412873].d = Td1039812874;
	    int Ti1039912872;
	    Ti1039912872 = 2;
	    double c12866;
	    c12866 = abc12511[Ti1039912872].d;
	    int Ti1040012867;
	    Ti1040012867 = 2;
	    double Td1040112869;
	    Td1040112869 = 0.000000;
	    double Td1040412868;
	    if(Td1040112869 == c12866){
		Td1040412868 = 0.000000;
	    }
	    else{
		double Td1040212870;
		Td1040212870 = sgn10903_fun(c12866, NULL);
		double Td1040312871;
		Td1040312871 = fsqr10858_fun(c12866, NULL);
		Td1040412868 = Td1040212870 / Td1040312871;
	    }
	    abc12511[Ti1040012867].d = Td1040412868;
	}
	else{
	    int Ti1040512859;
	    Ti1040512859 = 2;
	    if(form12508 == Ti1040512859){
		int Ti1040612861;
		Ti1040612861 = 0;
		int Ti1040712860;
		if(m_invert12519 == Ti1040612861){
		    Ti1040712860 = 1;
		}
		else{
		    Ti1040712860 = 0;
		}
		Tu892312532 = normalize_vector10900_fun(abc12511, Ti1040712860, NULL);
	    }
	    else{
		Tu892312532 = 1;
	    }
	}
	int Ti1040812534;
	Ti1040812534 = 0;
	int Tu892212533;
	if(isrot_p12510 == Ti1040812534){
	    Tu892212533 = 1;
	}
	else{
	    Value* Ta1040912853;
	    Ta1040912853 = cs_temp;
	    int Ti1041012854;
	    Ti1041012854 = 10;
	    int Ti1041112857;
	    Ti1041112857 = 0;
	    double Td1041212856;
	    Td1041212856 = rotation12527[Ti1041112857].d;
	    double Td1041312855;
	    Td1041312855 = cos(Td1041212856);
	    int Tu892112535;
	    Ta1040912853[Ti1041012854].d = Td1041312855;
	    Value* Ta1041412848;
	    Ta1041412848 = cs_temp;
	    int Ti1041512849;
	    Ti1041512849 = 11;
	    int Ti1041612852;
	    Ti1041612852 = 0;
	    double Td1041712851;
	    Td1041712851 = rotation12527[Ti1041612852].d;
	    double Td1041812850;
	    Td1041812850 = sin(Td1041712851);
	    int Tu892012536;
	    Ta1041412848[Ti1041512849].d = Td1041812850;
	    Value* Ta1041912843;
	    Ta1041912843 = cs_temp;
	    int Ti1042012844;
	    Ti1042012844 = 12;
	    int Ti1042112847;
	    Ti1042112847 = 1;
	    double Td1042212846;
	    Td1042212846 = rotation12527[Ti1042112847].d;
	    double Td1042312845;
	    Td1042312845 = cos(Td1042212846);
	    int Tu891912537;
	    Ta1041912843[Ti1042012844].d = Td1042312845;
	    Value* Ta1042412838;
	    Ta1042412838 = cs_temp;
	    int Ti1042512839;
	    Ti1042512839 = 13;
	    int Ti1042612842;
	    Ti1042612842 = 1;
	    double Td1042712841;
	    Td1042712841 = rotation12527[Ti1042612842].d;
	    double Td1042812840;
	    Td1042812840 = sin(Td1042712841);
	    int Tu891812538;
	    Ta1042412838[Ti1042512839].d = Td1042812840;
	    Value* Ta1042912833;
	    Ta1042912833 = cs_temp;
	    int Ti1043012834;
	    Ti1043012834 = 14;
	    int Ti1043112837;
	    Ti1043112837 = 2;
	    double Td1043212836;
	    Td1043212836 = rotation12527[Ti1043112837].d;
	    double Td1043312835;
	    Td1043312835 = cos(Td1043212836);
	    int Tu891712539;
	    Ta1042912833[Ti1043012834].d = Td1043312835;
	    Value* Ta1043412828;
	    Ta1043412828 = cs_temp;
	    int Ti1043512829;
	    Ti1043512829 = 15;
	    int Ti1043612832;
	    Ti1043612832 = 2;
	    double Td1043712831;
	    Td1043712831 = rotation12527[Ti1043612832].d;
	    double Td1043812830;
	    Td1043812830 = sin(Td1043712831);
	    int Tu891612540;
	    Ta1043412828[Ti1043512829].d = Td1043812830;
	    Value* Ta1043912819;
	    Ta1043912819 = cs_temp;
	    int Ti1044012820;
	    Ti1044012820 = 0;
	    Value* Ta1044112826;
	    Ta1044112826 = cs_temp;
	    int Ti1044212827;
	    Ti1044212827 = 12;
	    double Td1044312822;
	    Td1044312822 = Ta1044112826[Ti1044212827].d;
	    Value* Ta1044412824;
	    Ta1044412824 = cs_temp;
	    int Ti1044512825;
	    Ti1044512825 = 14;
	    double Td1044612823;
	    Td1044612823 = Ta1044412824[Ti1044512825].d;
	    double Td1044712821;
	    Td1044712821 =  Td1044312822 * Td1044612823;
	    int Tu891512541;
	    Ta1043912819[Ti1044012820].d = Td1044712821;
	    Value* Ta1044812798;
	    Ta1044812798 = cs_temp;
	    int Ti1044912799;
	    Ti1044912799 = 1;
	    Value* Ta1045012817;
	    Ta1045012817 = cs_temp;
	    int Ti1045112818;
	    Ti1045112818 = 11;
	    double Td1045212813;
	    Td1045212813 = Ta1045012817[Ti1045112818].d;
	    Value* Ta1045312815;
	    Ta1045312815 = cs_temp;
	    int Ti1045412816;
	    Ti1045412816 = 13;
	    double Td1045512814;
	    Td1045512814 = Ta1045312815[Ti1045412816].d;
	    double Td1045612809;
	    Td1045612809 =  Td1045212813 * Td1045512814;
	    Value* Ta1045712811;
	    Ta1045712811 = cs_temp;
	    int Ti1045812812;
	    Ti1045812812 = 14;
	    double Td1045912810;
	    Td1045912810 = Ta1045712811[Ti1045812812].d;
	    double Td1046012801;
	    Td1046012801 =  Td1045612809 * Td1045912810;
	    Value* Ta1046112807;
	    Ta1046112807 = cs_temp;
	    int Ti1046212808;
	    Ti1046212808 = 10;
	    double Td1046312803;
	    Td1046312803 = Ta1046112807[Ti1046212808].d;
	    Value* Ta1046412805;
	    Ta1046412805 = cs_temp;
	    int Ti1046512806;
	    Ti1046512806 = 15;
	    double Td1046612804;
	    Td1046612804 = Ta1046412805[Ti1046512806].d;
	    double Td1046712802;
	    Td1046712802 =  Td1046312803 * Td1046612804;
	    double Td1046812800;
	    Td1046812800 = Td1046012801 - Td1046712802;
	    int Tu891412542;
	    Ta1044812798[Ti1044912799].d = Td1046812800;
	    Value* Ta1046912777;
	    Ta1046912777 = cs_temp;
	    int Ti1047012778;
	    Ti1047012778 = 2;
	    Value* Ta1047112796;
	    Ta1047112796 = cs_temp;
	    int Ti1047212797;
	    Ti1047212797 = 10;
	    double Td1047312792;
	    Td1047312792 = Ta1047112796[Ti1047212797].d;
	    Value* Ta1047412794;
	    Ta1047412794 = cs_temp;
	    int Ti1047512795;
	    Ti1047512795 = 13;
	    double Td1047612793;
	    Td1047612793 = Ta1047412794[Ti1047512795].d;
	    double Td1047712788;
	    Td1047712788 =  Td1047312792 * Td1047612793;
	    Value* Ta1047812790;
	    Ta1047812790 = cs_temp;
	    int Ti1047912791;
	    Ti1047912791 = 14;
	    double Td1048012789;
	    Td1048012789 = Ta1047812790[Ti1047912791].d;
	    double Td1048112780;
	    Td1048112780 =  Td1047712788 * Td1048012789;
	    Value* Ta1048212786;
	    Ta1048212786 = cs_temp;
	    int Ti1048312787;
	    Ti1048312787 = 11;
	    double Td1048412782;
	    Td1048412782 = Ta1048212786[Ti1048312787].d;
	    Value* Ta1048512784;
	    Ta1048512784 = cs_temp;
	    int Ti1048612785;
	    Ti1048612785 = 15;
	    double Td1048712783;
	    Td1048712783 = Ta1048512784[Ti1048612785].d;
	    double Td1048812781;
	    Td1048812781 =  Td1048412782 * Td1048712783;
	    double Td1048912779;
	    Td1048912779 = Td1048112780 + Td1048812781;
	    int Tu891312543;
	    Ta1046912777[Ti1047012778].d = Td1048912779;
	    Value* Ta1049012768;
	    Ta1049012768 = cs_temp;
	    int Ti1049112769;
	    Ti1049112769 = 3;
	    Value* Ta1049212775;
	    Ta1049212775 = cs_temp;
	    int Ti1049312776;
	    Ti1049312776 = 12;
	    double Td1049412771;
	    Td1049412771 = Ta1049212775[Ti1049312776].d;
	    Value* Ta1049512773;
	    Ta1049512773 = cs_temp;
	    int Ti1049612774;
	    Ti1049612774 = 15;
	    double Td1049712772;
	    Td1049712772 = Ta1049512773[Ti1049612774].d;
	    double Td1049812770;
	    Td1049812770 =  Td1049412771 * Td1049712772;
	    int Tu891212544;
	    Ta1049012768[Ti1049112769].d = Td1049812770;
	    Value* Ta1049912747;
	    Ta1049912747 = cs_temp;
	    int Ti1050012748;
	    Ti1050012748 = 4;
	    Value* Ta1050112766;
	    Ta1050112766 = cs_temp;
	    int Ti1050212767;
	    Ti1050212767 = 11;
	    double Td1050312762;
	    Td1050312762 = Ta1050112766[Ti1050212767].d;
	    Value* Ta1050412764;
	    Ta1050412764 = cs_temp;
	    int Ti1050512765;
	    Ti1050512765 = 13;
	    double Td1050612763;
	    Td1050612763 = Ta1050412764[Ti1050512765].d;
	    double Td1050712758;
	    Td1050712758 =  Td1050312762 * Td1050612763;
	    Value* Ta1050812760;
	    Ta1050812760 = cs_temp;
	    int Ti1050912761;
	    Ti1050912761 = 15;
	    double Td1051012759;
	    Td1051012759 = Ta1050812760[Ti1050912761].d;
	    double Td1051112750;
	    Td1051112750 =  Td1050712758 * Td1051012759;
	    Value* Ta1051212756;
	    Ta1051212756 = cs_temp;
	    int Ti1051312757;
	    Ti1051312757 = 10;
	    double Td1051412752;
	    Td1051412752 = Ta1051212756[Ti1051312757].d;
	    Value* Ta1051512754;
	    Ta1051512754 = cs_temp;
	    int Ti1051612755;
	    Ti1051612755 = 14;
	    double Td1051712753;
	    Td1051712753 = Ta1051512754[Ti1051612755].d;
	    double Td1051812751;
	    Td1051812751 =  Td1051412752 * Td1051712753;
	    double Td1051912749;
	    Td1051912749 = Td1051112750 + Td1051812751;
	    int Tu891112545;
	    Ta1049912747[Ti1050012748].d = Td1051912749;
	    Value* Ta1052012726;
	    Ta1052012726 = cs_temp;
	    int Ti1052112727;
	    Ti1052112727 = 5;
	    Value* Ta1052212745;
	    Ta1052212745 = cs_temp;
	    int Ti1052312746;
	    Ti1052312746 = 10;
	    double Td1052412741;
	    Td1052412741 = Ta1052212745[Ti1052312746].d;
	    Value* Ta1052512743;
	    Ta1052512743 = cs_temp;
	    int Ti1052612744;
	    Ti1052612744 = 13;
	    double Td1052712742;
	    Td1052712742 = Ta1052512743[Ti1052612744].d;
	    double Td1052812737;
	    Td1052812737 =  Td1052412741 * Td1052712742;
	    Value* Ta1052912739;
	    Ta1052912739 = cs_temp;
	    int Ti1053012740;
	    Ti1053012740 = 15;
	    double Td1053112738;
	    Td1053112738 = Ta1052912739[Ti1053012740].d;
	    double Td1053212729;
	    Td1053212729 =  Td1052812737 * Td1053112738;
	    Value* Ta1053312735;
	    Ta1053312735 = cs_temp;
	    int Ti1053412736;
	    Ti1053412736 = 11;
	    double Td1053512731;
	    Td1053512731 = Ta1053312735[Ti1053412736].d;
	    Value* Ta1053612733;
	    Ta1053612733 = cs_temp;
	    int Ti1053712734;
	    Ti1053712734 = 14;
	    double Td1053812732;
	    Td1053812732 = Ta1053612733[Ti1053712734].d;
	    double Td1053912730;
	    Td1053912730 =  Td1053512731 * Td1053812732;
	    double Td1054012728;
	    Td1054012728 = Td1053212729 - Td1053912730;
	    int Tu891012546;
	    Ta1052012726[Ti1052112727].d = Td1054012728;
	    Value* Ta1054112720;
	    Ta1054112720 = cs_temp;
	    int Ti1054212721;
	    Ti1054212721 = 6;
	    Value* Ta1054312724;
	    Ta1054312724 = cs_temp;
	    int Ti1054412725;
	    Ti1054412725 = 13;
	    double Td1054512723;
	    Td1054512723 = Ta1054312724[Ti1054412725].d;
	    double Td1054612722;
	    Td1054612722 = -Td1054512723;
	    int Tu890912547;
	    Ta1054112720[Ti1054212721].d = Td1054612722;
	    Value* Ta1054712711;
	    Ta1054712711 = cs_temp;
	    int Ti1054812712;
	    Ti1054812712 = 7;
	    Value* Ta1054912718;
	    Ta1054912718 = cs_temp;
	    int Ti1055012719;
	    Ti1055012719 = 11;
	    double Td1055112714;
	    Td1055112714 = Ta1054912718[Ti1055012719].d;
	    Value* Ta1055212716;
	    Ta1055212716 = cs_temp;
	    int Ti1055312717;
	    Ti1055312717 = 12;
	    double Td1055412715;
	    Td1055412715 = Ta1055212716[Ti1055312717].d;
	    double Td1055512713;
	    Td1055512713 =  Td1055112714 * Td1055412715;
	    int Tu890812548;
	    Ta1054712711[Ti1054812712].d = Td1055512713;
	    Value* Ta1055612702;
	    Ta1055612702 = cs_temp;
	    int Ti1055712703;
	    Ti1055712703 = 8;
	    Value* Ta1055812709;
	    Ta1055812709 = cs_temp;
	    int Ti1055912710;
	    Ti1055912710 = 10;
	    double Td1056012705;
	    Td1056012705 = Ta1055812709[Ti1055912710].d;
	    Value* Ta1056112707;
	    Ta1056112707 = cs_temp;
	    int Ti1056212708;
	    Ti1056212708 = 12;
	    double Td1056312706;
	    Td1056312706 = Ta1056112707[Ti1056212708].d;
	    double Td1056412704;
	    Td1056412704 =  Td1056012705 * Td1056312706;
	    int Tu890712549;
	    Ta1055612702[Ti1055712703].d = Td1056412704;
	    int Ti1056512701;
	    Ti1056512701 = 0;
	    double ao12550;
	    ao12550 = abc12511[Ti1056512701].d;
	    int Ti1056612700;
	    Ti1056612700 = 1;
	    double bo12551;
	    bo12551 = abc12511[Ti1056612700].d;
	    int Ti1056712699;
	    Ti1056712699 = 2;
	    double co12552;
	    co12552 = abc12511[Ti1056712699].d;
	    int Ti1056812681;
	    Ti1056812681 = 0;
	    Value* Ta1056912697;
	    Ta1056912697 = cs_temp;
	    int Ti1057012698;
	    Ti1057012698 = 0;
	    double Td1057112696;
	    Td1057112696 = Ta1056912697[Ti1057012698].d;
	    double Td1057212695;
	    Td1057212695 = fsqr10858_fun(Td1057112696, NULL);
	    double Td1057312689;
	    Td1057312689 =  ao12550 * Td1057212695;
	    Value* Ta1057412693;
	    Ta1057412693 = cs_temp;
	    int Ti1057512694;
	    Ti1057512694 = 3;
	    double Td1057612692;
	    Td1057612692 = Ta1057412693[Ti1057512694].d;
	    double Td1057712691;
	    Td1057712691 = fsqr10858_fun(Td1057612692, NULL);
	    double Td1057812690;
	    Td1057812690 =  bo12551 * Td1057712691;
	    double Td1057912683;
	    Td1057912683 = Td1057312689 + Td1057812690;
	    Value* Ta1058012687;
	    Ta1058012687 = cs_temp;
	    int Ti1058112688;
	    Ti1058112688 = 6;
	    double Td1058212686;
	    Td1058212686 = Ta1058012687[Ti1058112688].d;
	    double Td1058312685;
	    Td1058312685 = fsqr10858_fun(Td1058212686, NULL);
	    double Td1058412684;
	    Td1058412684 =  co12552 * Td1058312685;
	    double Td1058512682;
	    Td1058512682 = Td1057912683 + Td1058412684;
	    int Tu890612553;
	    abc12511[Ti1056812681].d = Td1058512682;
	    int Ti1058612663;
	    Ti1058612663 = 1;
	    Value* Ta1058712679;
	    Ta1058712679 = cs_temp;
	    int Ti1058812680;
	    Ti1058812680 = 1;
	    double Td1058912678;
	    Td1058912678 = Ta1058712679[Ti1058812680].d;
	    double Td1059012677;
	    Td1059012677 = fsqr10858_fun(Td1058912678, NULL);
	    double Td1059112671;
	    Td1059112671 =  ao12550 * Td1059012677;
	    Value* Ta1059212675;
	    Ta1059212675 = cs_temp;
	    int Ti1059312676;
	    Ti1059312676 = 4;
	    double Td1059412674;
	    Td1059412674 = Ta1059212675[Ti1059312676].d;
	    double Td1059512673;
	    Td1059512673 = fsqr10858_fun(Td1059412674, NULL);
	    double Td1059612672;
	    Td1059612672 =  bo12551 * Td1059512673;
	    double Td1059712665;
	    Td1059712665 = Td1059112671 + Td1059612672;
	    Value* Ta1059812669;
	    Ta1059812669 = cs_temp;
	    int Ti1059912670;
	    Ti1059912670 = 7;
	    double Td1060012668;
	    Td1060012668 = Ta1059812669[Ti1059912670].d;
	    double Td1060112667;
	    Td1060112667 = fsqr10858_fun(Td1060012668, NULL);
	    double Td1060212666;
	    Td1060212666 =  co12552 * Td1060112667;
	    double Td1060312664;
	    Td1060312664 = Td1059712665 + Td1060212666;
	    int Tu890512554;
	    abc12511[Ti1058612663].d = Td1060312664;
	    int Ti1060412645;
	    Ti1060412645 = 2;
	    Value* Ta1060512661;
	    Ta1060512661 = cs_temp;
	    int Ti1060612662;
	    Ti1060612662 = 2;
	    double Td1060712660;
	    Td1060712660 = Ta1060512661[Ti1060612662].d;
	    double Td1060812659;
	    Td1060812659 = fsqr10858_fun(Td1060712660, NULL);
	    double Td1060912653;
	    Td1060912653 =  ao12550 * Td1060812659;
	    Value* Ta1061012657;
	    Ta1061012657 = cs_temp;
	    int Ti1061112658;
	    Ti1061112658 = 5;
	    double Td1061212656;
	    Td1061212656 = Ta1061012657[Ti1061112658].d;
	    double Td1061312655;
	    Td1061312655 = fsqr10858_fun(Td1061212656, NULL);
	    double Td1061412654;
	    Td1061412654 =  bo12551 * Td1061312655;
	    double Td1061512647;
	    Td1061512647 = Td1060912653 + Td1061412654;
	    Value* Ta1061612651;
	    Ta1061612651 = cs_temp;
	    int Ti1061712652;
	    Ti1061712652 = 8;
	    double Td1061812650;
	    Td1061812650 = Ta1061612651[Ti1061712652].d;
	    double Td1061912649;
	    Td1061912649 = fsqr10858_fun(Td1061812650, NULL);
	    double Td1062012648;
	    Td1062012648 =  co12552 * Td1061912649;
	    double Td1062112646;
	    Td1062112646 = Td1061512647 + Td1062012648;
	    int Tu890412555;
	    abc12511[Ti1060412645].d = Td1062112646;
	    int Ti1062212616;
	    Ti1062212616 = 0;
	    double Td1062312618;
	    Td1062312618 = 2.000000;
	    Value* Ta1062412643;
	    Ta1062412643 = cs_temp;
	    int Ti1062512644;
	    Ti1062512644 = 1;
	    double Td1062612642;
	    Td1062612642 = Ta1062412643[Ti1062512644].d;
	    double Td1062712638;
	    Td1062712638 =  ao12550 * Td1062612642;
	    Value* Ta1062812640;
	    Ta1062812640 = cs_temp;
	    int Ti1062912641;
	    Ti1062912641 = 2;
	    double Td1063012639;
	    Td1063012639 = Ta1062812640[Ti1062912641].d;
	    double Td1063112629;
	    Td1063112629 =  Td1062712638 * Td1063012639;
	    Value* Ta1063212636;
	    Ta1063212636 = cs_temp;
	    int Ti1063312637;
	    Ti1063312637 = 4;
	    double Td1063412635;
	    Td1063412635 = Ta1063212636[Ti1063312637].d;
	    double Td1063512631;
	    Td1063512631 =  bo12551 * Td1063412635;
	    Value* Ta1063612633;
	    Ta1063612633 = cs_temp;
	    int Ti1063712634;
	    Ti1063712634 = 5;
	    double Td1063812632;
	    Td1063812632 = Ta1063612633[Ti1063712634].d;
	    double Td1063912630;
	    Td1063912630 =  Td1063512631 * Td1063812632;
	    double Td1064012620;
	    Td1064012620 = Td1063112629 + Td1063912630;
	    Value* Ta1064112627;
	    Ta1064112627 = cs_temp;
	    int Ti1064212628;
	    Ti1064212628 = 7;
	    double Td1064312626;
	    Td1064312626 = Ta1064112627[Ti1064212628].d;
	    double Td1064412622;
	    Td1064412622 =  co12552 * Td1064312626;
	    Value* Ta1064512624;
	    Ta1064512624 = cs_temp;
	    int Ti1064612625;
	    Ti1064612625 = 8;
	    double Td1064712623;
	    Td1064712623 = Ta1064512624[Ti1064612625].d;
	    double Td1064812621;
	    Td1064812621 =  Td1064412622 * Td1064712623;
	    double Td1064912619;
	    Td1064912619 = Td1064012620 + Td1064812621;
	    double Td1065012617;
	    Td1065012617 =  Td1062312618 * Td1064912619;
	    int Tu890312556;
	    rotation12527[Ti1062212616].d = Td1065012617;
	    int Ti1065112587;
	    Ti1065112587 = 1;
	    double Td1065212589;
	    Td1065212589 = 2.000000;
	    Value* Ta1065312614;
	    Ta1065312614 = cs_temp;
	    int Ti1065412615;
	    Ti1065412615 = 0;
	    double Td1065512613;
	    Td1065512613 = Ta1065312614[Ti1065412615].d;
	    double Td1065612609;
	    Td1065612609 =  ao12550 * Td1065512613;
	    Value* Ta1065712611;
	    Ta1065712611 = cs_temp;
	    int Ti1065812612;
	    Ti1065812612 = 2;
	    double Td1065912610;
	    Td1065912610 = Ta1065712611[Ti1065812612].d;
	    double Td1066012600;
	    Td1066012600 =  Td1065612609 * Td1065912610;
	    Value* Ta1066112607;
	    Ta1066112607 = cs_temp;
	    int Ti1066212608;
	    Ti1066212608 = 3;
	    double Td1066312606;
	    Td1066312606 = Ta1066112607[Ti1066212608].d;
	    double Td1066412602;
	    Td1066412602 =  bo12551 * Td1066312606;
	    Value* Ta1066512604;
	    Ta1066512604 = cs_temp;
	    int Ti1066612605;
	    Ti1066612605 = 5;
	    double Td1066712603;
	    Td1066712603 = Ta1066512604[Ti1066612605].d;
	    double Td1066812601;
	    Td1066812601 =  Td1066412602 * Td1066712603;
	    double Td1066912591;
	    Td1066912591 = Td1066012600 + Td1066812601;
	    Value* Ta1067012598;
	    Ta1067012598 = cs_temp;
	    int Ti1067112599;
	    Ti1067112599 = 6;
	    double Td1067212597;
	    Td1067212597 = Ta1067012598[Ti1067112599].d;
	    double Td1067312593;
	    Td1067312593 =  co12552 * Td1067212597;
	    Value* Ta1067412595;
	    Ta1067412595 = cs_temp;
	    int Ti1067512596;
	    Ti1067512596 = 8;
	    double Td1067612594;
	    Td1067612594 = Ta1067412595[Ti1067512596].d;
	    double Td1067712592;
	    Td1067712592 =  Td1067312593 * Td1067612594;
	    double Td1067812590;
	    Td1067812590 = Td1066912591 + Td1067712592;
	    double Td1067912588;
	    Td1067912588 =  Td1065212589 * Td1067812590;
	    int Tu890212557;
	    rotation12527[Ti1065112587].d = Td1067912588;
	    int Ti1068012558;
	    Ti1068012558 = 2;
	    double Td1068112560;
	    Td1068112560 = 2.000000;
	    Value* Ta1068212585;
	    Ta1068212585 = cs_temp;
	    int Ti1068312586;
	    Ti1068312586 = 0;
	    double Td1068412584;
	    Td1068412584 = Ta1068212585[Ti1068312586].d;
	    double Td1068512580;
	    Td1068512580 =  ao12550 * Td1068412584;
	    Value* Ta1068612582;
	    Ta1068612582 = cs_temp;
	    int Ti1068712583;
	    Ti1068712583 = 1;
	    double Td1068812581;
	    Td1068812581 = Ta1068612582[Ti1068712583].d;
	    double Td1068912571;
	    Td1068912571 =  Td1068512580 * Td1068812581;
	    Value* Ta1069012578;
	    Ta1069012578 = cs_temp;
	    int Ti1069112579;
	    Ti1069112579 = 3;
	    double Td1069212577;
	    Td1069212577 = Ta1069012578[Ti1069112579].d;
	    double Td1069312573;
	    Td1069312573 =  bo12551 * Td1069212577;
	    Value* Ta1069412575;
	    Ta1069412575 = cs_temp;
	    int Ti1069512576;
	    Ti1069512576 = 4;
	    double Td1069612574;
	    Td1069612574 = Ta1069412575[Ti1069512576].d;
	    double Td1069712572;
	    Td1069712572 =  Td1069312573 * Td1069612574;
	    double Td1069812562;
	    Td1069812562 = Td1068912571 + Td1069712572;
	    Value* Ta1069912569;
	    Ta1069912569 = cs_temp;
	    int Ti1070012570;
	    Ti1070012570 = 6;
	    double Td1070112568;
	    Td1070112568 = Ta1069912569[Ti1070012570].d;
	    double Td1070212564;
	    Td1070212564 =  co12552 * Td1070112568;
	    Value* Ta1070312566;
	    Ta1070312566 = cs_temp;
	    int Ti1070412567;
	    Ti1070412567 = 7;
	    double Td1070512565;
	    Td1070512565 = Ta1070312566[Ti1070412567].d;
	    double Td1070612563;
	    Td1070612563 =  Td1070212564 * Td1070512565;
	    double Td1070712561;
	    Td1070712561 = Td1069812562 + Td1070612563;
	    double Td1070812559;
	    Td1070812559 =  Td1068112560 * Td1070712561;
	    rotation12527[Ti1068012558].d = Td1070812559;
	}
	result = 1;
    }
    return result;
}

int read_object10911_fun(int n10912, Value *env){
    int result;
    int Ti1031412501;
    Ti1031412501 = 61;
    if(Ti1031412501 <= n10912){
	result = 1;
    }
    else{
	bool Tb1031512502;
	Tb1031512502 = read_nth_object10909_fun(n10912, NULL);
	int Ti1031612503;
	Ti1031612503 = 0;
	if(Tb1031512502 == Ti1031612503){
	    result = 1;
	}
	else{
	    int Ti1031712505;
	    Ti1031712505 = 1;
	    int Ti1031812504;
	    Ti1031812504 = n10912 + Ti1031712505;
	    result = read_object10911_fun(Ti1031812504, NULL);
	}
    }
    return result;
}

int read_all_object10913_fun(int Tu893710914, Value *env){
    int result;
    int Ti1031312500;
    Ti1031312500 = 0;
    result = read_object10911_fun(Ti1031312500, NULL);
    return result;
}

Value* read_net_item10915_fun(int length10916, Value *env){
    Value* result;
    int Tu1030412499;
    Tu1030412499 = 1;
    int item12488;
    printf("Enter an int: ");
    scanf("%d\n", &item12488);
    int Ti1030512498;
    Ti1030512498 = 1;
    int Ti1030612489;
    Ti1030612489 = -Ti1030512498;
    if(item12488 == Ti1030612489){
	int Ti1030712497;
	Ti1030712497 = 1;
	int Ti1030812494;
	Ti1030812494 = length10916 + Ti1030712497;
	int Ti1030912496;
	Ti1030912496 = 1;
	int Ti1031012495;
	Ti1031012495 = -Ti1030912496;
	make_int_array(&result, Ti1030812494, Ti1031012495);
    }
    else{
	int Ti1031112493;
	Ti1031112493 = 1;
	int Ti1031212492;
	Ti1031212492 = length10916 + Ti1031112493;
	Value* v12490;
	v12490 = read_net_item10915_fun(Ti1031212492, NULL);
	int Tu893812491;
	v12490[length10916].i = item12488;
	result = v12490;
    }
    return result;
}

Value* read_or_network10917_fun(int length10918, Value *env){
    Value* result;
    int Ti1029512487;
    Ti1029512487 = 0;
    Value* net12476;
    net12476 = read_net_item10915_fun(Ti1029512487, NULL);
    int Ti1029612486;
    Ti1029612486 = 0;
    int Ti1029712477;
    Ti1029712477 = net12476[Ti1029612486].i;
    int Ti1029812485;
    Ti1029812485 = 1;
    int Ti1029912478;
    Ti1029912478 = -Ti1029812485;
    if(Ti1029712477 == Ti1029912478){
	int Ti1030012484;
	Ti1030012484 = 1;
	int Ti1030112483;
	Ti1030112483 = length10918 + Ti1030012484;
	make_multi_array(&result, Ti1030112483, net12476);
    }
    else{
	int Ti1030212482;
	Ti1030212482 = 1;
	int Ti1030312481;
	Ti1030312481 = length10918 + Ti1030212482;
	Value* v12479;
	v12479 = read_or_network10917_fun(Ti1030312481, NULL);
	int Tu893912480;
	v12479[length10918].a = net12476;
	result = v12479;
    }
    return result;
}

int read_and_network10919_fun(int n10920, Value *env){
    int result;
    int Ti1028712475;
    Ti1028712475 = 0;
    Value* net12466;
    net12466 = read_net_item10915_fun(Ti1028712475, NULL);
    int Ti1028812474;
    Ti1028812474 = 0;
    int Ti1028912467;
    Ti1028912467 = net12466[Ti1028812474].i;
    int Ti1029012473;
    Ti1029012473 = 1;
    int Ti1029112468;
    Ti1029112468 = -Ti1029012473;
    if(Ti1028912467 == Ti1029112468){
	result = 1;
    }
    else{
	Value* Ta1029212472;
	Ta1029212472 = and_net;
	int Tu894012469;
	Ta1029212472[n10920].a = net12466;
	int Ti1029312471;
	Ti1029312471 = 1;
	int Ti1029412470;
	Ti1029412470 = n10920 + Ti1029312471;
	result = read_and_network10919_fun(Ti1029412470, NULL);
    }
    return result;
}

int read_parameter10921_fun(int Tu894110922, Value *env){
    int result;
    int Tu1028012465;
    Tu1028012465 = 1;
    int Tu894412456;
    Tu894412456 = read_environ10907_fun(Tu1028012465, NULL);
    int Tu1028112464;
    Tu1028112464 = 1;
    int Tu894312457;
    Tu894312457 = read_all_object10913_fun(Tu1028112464, NULL);
    int Ti1028212463;
    Ti1028212463 = 0;
    int Tu894212458;
    Tu894212458 = read_and_network10919_fun(Ti1028212463, NULL);
    Value* Ta1028312459;
    Ta1028312459 = or_net;
    int Ti1028412460;
    Ti1028412460 = 0;
    int Ti1028512462;
    Ti1028512462 = 0;
    Value* Ta1028612461;
    Ta1028612461 = read_or_network10917_fun(Ti1028512462, NULL);
    Ta1028312459[Ti1028412460].a = Ta1028612461;
    return result;
}

int solver_rect10923_fun(int* m10924, Value* l10925, Value *env){
    int result;
    double Td1016612416;
    Td1016612416 = 0.000000;
    int Ti1016712455;
    Ti1016712455 = 0;
    double Td1016812417;
    Td1016812417 = l10925[Ti1016712455].d;
    bool answera12330;
    if(Td1016612416 == Td1016812417){
	answera12330 = 0;
    }
    else{
	bool Tb1016912450;
	Tb1016912450 = o_isinvert10868_fun(m10924, NULL);
	double Td1017012452;
	Td1017012452 = 0.000000;
	int Ti1017112454;
	Ti1017112454 = 0;
	double Td1017212453;
	Td1017212453 = l10925[Ti1017112454].d;
	int Ti1017312451;
	if(Td1017012452 <= Td1017212453){
	    Ti1017312451 = 0;
	}
	else{
	    Ti1017312451 = 1;
	}
	bool Tb1017412447;
	Tb1017412447 = xor10855_fun(Tb1016912450, Ti1017312451, NULL);
	int Ti1017512448;
	Ti1017512448 = 0;
	double d12418;
	if(Tb1017412447 == Ti1017512448){
	    double Td1017612449;
	    Td1017612449 = o_param_a10872_fun(m10924, NULL);
	    d12418 = -Td1017612449;
	}
	else{
	    d12418 = o_param_a10872_fun(m10924, NULL);
	}
	Value* Ta1017712445;
	Ta1017712445 = solver_w_vec;
	int Ti1017812446;
	Ti1017812446 = 0;
	double Td1017912444;
	Td1017912444 = Ta1017712445[Ti1017812446].d;
	double Td1018012441;
	Td1018012441 = d12418 - Td1017912444;
	int Ti1018112443;
	Ti1018112443 = 0;
	double Td1018212442;
	Td1018212442 = l10925[Ti1018112443].d;
	double d212419;
	d212419 = Td1018012441 / Td1018212442;
	double Td1018312420;
	Td1018312420 = o_param_b10874_fun(m10924, NULL);
	int Ti1018412440;
	Ti1018412440 = 1;
	double Td1018512439;
	Td1018512439 = l10925[Ti1018412440].d;
	double Td1018612435;
	Td1018612435 =  d212419 * Td1018512439;
	Value* Ta1018712437;
	Ta1018712437 = solver_w_vec;
	int Ti1018812438;
	Ti1018812438 = 1;
	double Td1018912436;
	Td1018912436 = Ta1018712437[Ti1018812438].d;
	double Td1019012434;
	Td1019012434 = Td1018612435 + Td1018912436;
	double Td1019112421;
	Td1019112421 = fabs(Td1019012434);
	if(Td1018312420 <= Td1019112421){
	    answera12330 = 0;
	}
	else{
	    double Td1019212422;
	    Td1019212422 = o_param_c10876_fun(m10924, NULL);
	    int Ti1019312433;
	    Ti1019312433 = 2;
	    double Td1019412432;
	    Td1019412432 = l10925[Ti1019312433].d;
	    double Td1019512428;
	    Td1019512428 =  d212419 * Td1019412432;
	    Value* Ta1019612430;
	    Ta1019612430 = solver_w_vec;
	    int Ti1019712431;
	    Ti1019712431 = 2;
	    double Td1019812429;
	    Td1019812429 = Ta1019612430[Ti1019712431].d;
	    double Td1019912427;
	    Td1019912427 = Td1019512428 + Td1019812429;
	    double Td1020012423;
	    Td1020012423 = fabs(Td1019912427);
	    if(Td1019212422 <= Td1020012423){
		answera12330 = 0;
	    }
	    else{
		Value* Ta1020112425;
		Ta1020112425 = solver_dist;
		int Ti1020212426;
		Ti1020212426 = 0;
		int Tu894512424;
		Ta1020112425[Ti1020212426].d = d212419;
		answera12330 = 1;
	    }
	}
    }
    int Ti1020312331;
    Ti1020312331 = 0;
    if(answera12330 == Ti1020312331){
	double Td1020412376;
	Td1020412376 = 0.000000;
	int Ti1020512415;
	Ti1020512415 = 1;
	double Td1020612377;
	Td1020612377 = l10925[Ti1020512415].d;
	bool answerb12332;
	if(Td1020412376 == Td1020612377){
	    answerb12332 = 0;
	}
	else{
	    bool Tb1020712410;
	    Tb1020712410 = o_isinvert10868_fun(m10924, NULL);
	    double Td1020812412;
	    Td1020812412 = 0.000000;
	    int Ti1020912414;
	    Ti1020912414 = 1;
	    double Td1021012413;
	    Td1021012413 = l10925[Ti1020912414].d;
	    int Ti1021112411;
	    if(Td1020812412 <= Td1021012413){
		Ti1021112411 = 0;
	    }
	    else{
		Ti1021112411 = 1;
	    }
	    bool Tb1021212407;
	    Tb1021212407 = xor10855_fun(Tb1020712410, Ti1021112411, NULL);
	    int Ti1021312408;
	    Ti1021312408 = 0;
	    double d12378;
	    if(Tb1021212407 == Ti1021312408){
		double Td1021412409;
		Td1021412409 = o_param_b10874_fun(m10924, NULL);
		d12378 = -Td1021412409;
	    }
	    else{
		d12378 = o_param_b10874_fun(m10924, NULL);
	    }
	    Value* Ta1021512405;
	    Ta1021512405 = solver_w_vec;
	    int Ti1021612406;
	    Ti1021612406 = 1;
	    double Td1021712404;
	    Td1021712404 = Ta1021512405[Ti1021612406].d;
	    double Td1021812401;
	    Td1021812401 = d12378 - Td1021712404;
	    int Ti1021912403;
	    Ti1021912403 = 1;
	    double Td1022012402;
	    Td1022012402 = l10925[Ti1021912403].d;
	    double d212379;
	    d212379 = Td1021812401 / Td1022012402;
	    double Td1022112380;
	    Td1022112380 = o_param_c10876_fun(m10924, NULL);
	    int Ti1022212400;
	    Ti1022212400 = 2;
	    double Td1022312399;
	    Td1022312399 = l10925[Ti1022212400].d;
	    double Td1022412395;
	    Td1022412395 =  d212379 * Td1022312399;
	    Value* Ta1022512397;
	    Ta1022512397 = solver_w_vec;
	    int Ti1022612398;
	    Ti1022612398 = 2;
	    double Td1022712396;
	    Td1022712396 = Ta1022512397[Ti1022612398].d;
	    double Td1022812394;
	    Td1022812394 = Td1022412395 + Td1022712396;
	    double Td1022912381;
	    Td1022912381 = fabs(Td1022812394);
	    if(Td1022112380 <= Td1022912381){
		answerb12332 = 0;
	    }
	    else{
		double Td1023012382;
		Td1023012382 = o_param_a10872_fun(m10924, NULL);
		int Ti1023112393;
		Ti1023112393 = 0;
		double Td1023212392;
		Td1023212392 = l10925[Ti1023112393].d;
		double Td1023312388;
		Td1023312388 =  d212379 * Td1023212392;
		Value* Ta1023412390;
		Ta1023412390 = solver_w_vec;
		int Ti1023512391;
		Ti1023512391 = 0;
		double Td1023612389;
		Td1023612389 = Ta1023412390[Ti1023512391].d;
		double Td1023712387;
		Td1023712387 = Td1023312388 + Td1023612389;
		double Td1023812383;
		Td1023812383 = fabs(Td1023712387);
		if(Td1023012382 <= Td1023812383){
		    answerb12332 = 0;
		}
		else{
		    Value* Ta1023912385;
		    Ta1023912385 = solver_dist;
		    int Ti1024012386;
		    Ti1024012386 = 0;
		    int Tu894612384;
		    Ta1023912385[Ti1024012386].d = d212379;
		    answerb12332 = 1;
		}
	    }
	}
	int Ti1024112333;
	Ti1024112333 = 0;
	if(answerb12332 == Ti1024112333){
	    double Td1024212336;
	    Td1024212336 = 0.000000;
	    int Ti1024312375;
	    Ti1024312375 = 2;
	    double Td1024412337;
	    Td1024412337 = l10925[Ti1024312375].d;
	    bool answerc12334;
	    if(Td1024212336 == Td1024412337){
		answerc12334 = 0;
	    }
	    else{
		bool Tb1024512370;
		Tb1024512370 = o_isinvert10868_fun(m10924, NULL);
		double Td1024612372;
		Td1024612372 = 0.000000;
		int Ti1024712374;
		Ti1024712374 = 2;
		double Td1024812373;
		Td1024812373 = l10925[Ti1024712374].d;
		int Ti1024912371;
		if(Td1024612372 <= Td1024812373){
		    Ti1024912371 = 0;
		}
		else{
		    Ti1024912371 = 1;
		}
		bool Tb1025012367;
		Tb1025012367 = xor10855_fun(Tb1024512370, Ti1024912371, NULL);
		int Ti1025112368;
		Ti1025112368 = 0;
		double d12338;
		if(Tb1025012367 == Ti1025112368){
		    double Td1025212369;
		    Td1025212369 = o_param_c10876_fun(m10924, NULL);
		    d12338 = -Td1025212369;
		}
		else{
		    d12338 = o_param_c10876_fun(m10924, NULL);
		}
		Value* Ta1025312365;
		Ta1025312365 = solver_w_vec;
		int Ti1025412366;
		Ti1025412366 = 2;
		double Td1025512364;
		Td1025512364 = Ta1025312365[Ti1025412366].d;
		double Td1025612361;
		Td1025612361 = d12338 - Td1025512364;
		int Ti1025712363;
		Ti1025712363 = 2;
		double Td1025812362;
		Td1025812362 = l10925[Ti1025712363].d;
		double d212339;
		d212339 = Td1025612361 / Td1025812362;
		double Td1025912340;
		Td1025912340 = o_param_a10872_fun(m10924, NULL);
		int Ti1026012360;
		Ti1026012360 = 0;
		double Td1026112359;
		Td1026112359 = l10925[Ti1026012360].d;
		double Td1026212355;
		Td1026212355 =  d212339 * Td1026112359;
		Value* Ta1026312357;
		Ta1026312357 = solver_w_vec;
		int Ti1026412358;
		Ti1026412358 = 0;
		double Td1026512356;
		Td1026512356 = Ta1026312357[Ti1026412358].d;
		double Td1026612354;
		Td1026612354 = Td1026212355 + Td1026512356;
		double Td1026712341;
		Td1026712341 = fabs(Td1026612354);
		if(Td1025912340 <= Td1026712341){
		    answerc12334 = 0;
		}
		else{
		    double Td1026812342;
		    Td1026812342 = o_param_b10874_fun(m10924, NULL);
		    int Ti1026912353;
		    Ti1026912353 = 1;
		    double Td1027012352;
		    Td1027012352 = l10925[Ti1026912353].d;
		    double Td1027112348;
		    Td1027112348 =  d212339 * Td1027012352;
		    Value* Ta1027212350;
		    Ta1027212350 = solver_w_vec;
		    int Ti1027312351;
		    Ti1027312351 = 1;
		    double Td1027412349;
		    Td1027412349 = Ta1027212350[Ti1027312351].d;
		    double Td1027512347;
		    Td1027512347 = Td1027112348 + Td1027412349;
		    double Td1027612343;
		    Td1027612343 = fabs(Td1027512347);
		    if(Td1026812342 <= Td1027612343){
			answerc12334 = 0;
		    }
		    else{
			Value* Ta1027712345;
			Ta1027712345 = solver_dist;
			int Ti1027812346;
			Ti1027812346 = 0;
			int Tu894712344;
			Ta1027712345[Ti1027812346].d = d212339;
			answerc12334 = 1;
		    }
		}
	    }
	    int Ti1027912335;
	    Ti1027912335 = 0;
	    if(answerc12334 == Ti1027912335){
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

int solver_surface10926_fun(int* m10927, Value* l10928, Value *env){
    int result;
    int Ti1013212329;
    Ti1013212329 = 0;
    double Td1013312327;
    Td1013312327 = l10928[Ti1013212329].d;
    double Td1013412328;
    Td1013412328 = o_param_a10872_fun(m10927, NULL);
    double Td1013512322;
    Td1013512322 =  Td1013312327 * Td1013412328;
    int Ti1013612326;
    Ti1013612326 = 1;
    double Td1013712324;
    Td1013712324 = l10928[Ti1013612326].d;
    double Td1013812325;
    Td1013812325 = o_param_b10874_fun(m10927, NULL);
    double Td1013912323;
    Td1013912323 =  Td1013712324 * Td1013812325;
    double Td1014012317;
    Td1014012317 = Td1013512322 + Td1013912323;
    int Ti1014112321;
    Ti1014112321 = 2;
    double Td1014212319;
    Td1014212319 = l10928[Ti1014112321].d;
    double Td1014312320;
    Td1014312320 = o_param_c10876_fun(m10927, NULL);
    double Td1014412318;
    Td1014412318 =  Td1014212319 * Td1014312320;
    double q12293;
    q12293 = Td1014012317 + Td1014412318;
    double Td1014512294;
    Td1014512294 = 0.000000;
    if(q12293 <= Td1014512294){
	result = 0;
    }
    else{
	Value* Ta1014612315;
	Ta1014612315 = solver_w_vec;
	int Ti1014712316;
	Ti1014712316 = 0;
	double Td1014812313;
	Td1014812313 = Ta1014612315[Ti1014712316].d;
	double Td1014912314;
	Td1014912314 = o_param_a10872_fun(m10927, NULL);
	double Td1015012307;
	Td1015012307 =  Td1014812313 * Td1014912314;
	Value* Ta1015112311;
	Ta1015112311 = solver_w_vec;
	int Ti1015212312;
	Ti1015212312 = 1;
	double Td1015312309;
	Td1015312309 = Ta1015112311[Ti1015212312].d;
	double Td1015412310;
	Td1015412310 = o_param_b10874_fun(m10927, NULL);
	double Td1015512308;
	Td1015512308 =  Td1015312309 * Td1015412310;
	double Td1015612301;
	Td1015612301 = Td1015012307 + Td1015512308;
	Value* Ta1015712305;
	Ta1015712305 = solver_w_vec;
	int Ti1015812306;
	Ti1015812306 = 2;
	double Td1015912303;
	Td1015912303 = Ta1015712305[Ti1015812306].d;
	double Td1016012304;
	Td1016012304 = o_param_c10876_fun(m10927, NULL);
	double Td1016112302;
	Td1016112302 =  Td1015912303 * Td1016012304;
	double Td1016212300;
	Td1016212300 = Td1015612301 + Td1016112302;
	double t12295;
	t12295 = Td1016212300 / q12293;
	Value* Ta1016312297;
	Ta1016312297 = solver_dist;
	int Ti1016412298;
	Ti1016412298 = 0;
	double Td1016512299;
	Td1016512299 = -t12295;
	int Tu894812296;
	Ta1016312297[Ti1016412298].d = Td1016512299;
	result = 1;
    }
    return result;
}

double in_prod_sqr_obj10929_fun(int* m10930, Value* v10931, Value *env){
    double result;
    int Ti1011612292;
    Ti1011612292 = 0;
    double Td1011712291;
    Td1011712291 = v10931[Ti1011612292].d;
    double Td1011812289;
    Td1011812289 = fsqr10858_fun(Td1011712291, NULL);
    double Td1011912290;
    Td1011912290 = o_param_a10872_fun(m10930, NULL);
    double Td1012012283;
    Td1012012283 =  Td1011812289 * Td1011912290;
    int Ti1012112288;
    Ti1012112288 = 1;
    double Td1012212287;
    Td1012212287 = v10931[Ti1012112288].d;
    double Td1012312285;
    Td1012312285 = fsqr10858_fun(Td1012212287, NULL);
    double Td1012412286;
    Td1012412286 = o_param_b10874_fun(m10930, NULL);
    double Td1012512284;
    Td1012512284 =  Td1012312285 * Td1012412286;
    double Td1012612277;
    Td1012612277 = Td1012012283 + Td1012512284;
    int Ti1012712282;
    Ti1012712282 = 2;
    double Td1012812281;
    Td1012812281 = v10931[Ti1012712282].d;
    double Td1012912279;
    Td1012912279 = fsqr10858_fun(Td1012812281, NULL);
    double Td1013012280;
    Td1013012280 = o_param_c10876_fun(m10930, NULL);
    double Td1013112278;
    Td1013112278 =  Td1012912279 * Td1013012280;
    result = Td1012612277 + Td1013112278;
    return result;
}

double in_prod_co_objrot10932_fun(int* m10933, Value* v10934, Value *env){
    double result;
    int Ti1009412276;
    Ti1009412276 = 1;
    double Td1009512273;
    Td1009512273 = v10934[Ti1009412276].d;
    int Ti1009612275;
    Ti1009612275 = 2;
    double Td1009712274;
    Td1009712274 = v10934[Ti1009612275].d;
    double Td1009812271;
    Td1009812271 =  Td1009512273 * Td1009712274;
    double Td1009912272;
    Td1009912272 = o_param_r110894_fun(m10933, NULL);
    double Td1010012263;
    Td1010012263 =  Td1009812271 * Td1009912272;
    int Ti1010112270;
    Ti1010112270 = 0;
    double Td1010212267;
    Td1010212267 = v10934[Ti1010112270].d;
    int Ti1010312269;
    Ti1010312269 = 2;
    double Td1010412268;
    Td1010412268 = v10934[Ti1010312269].d;
    double Td1010512265;
    Td1010512265 =  Td1010212267 * Td1010412268;
    double Td1010612266;
    Td1010612266 = o_param_r210896_fun(m10933, NULL);
    double Td1010712264;
    Td1010712264 =  Td1010512265 * Td1010612266;
    double Td1010812255;
    Td1010812255 = Td1010012263 + Td1010712264;
    int Ti1010912262;
    Ti1010912262 = 0;
    double Td1011012259;
    Td1011012259 = v10934[Ti1010912262].d;
    int Ti1011112261;
    Ti1011112261 = 1;
    double Td1011212260;
    Td1011212260 = v10934[Ti1011112261].d;
    double Td1011312257;
    Td1011312257 =  Td1011012259 * Td1011212260;
    double Td1011412258;
    Td1011412258 = o_param_r310898_fun(m10933, NULL);
    double Td1011512256;
    Td1011512256 =  Td1011312257 * Td1011412258;
    result = Td1010812255 + Td1011512256;
    return result;
}

double solver2nd_mul_b10935_fun(int* m10936, Value* l10937, Value *env){
    double result;
    Value* Ta1006912253;
    Ta1006912253 = solver_w_vec;
    int Ti1007012254;
    Ti1007012254 = 0;
    double Td1007112250;
    Td1007112250 = Ta1006912253[Ti1007012254].d;
    int Ti1007212252;
    Ti1007212252 = 0;
    double Td1007312251;
    Td1007312251 = l10937[Ti1007212252].d;
    double Td1007412248;
    Td1007412248 =  Td1007112250 * Td1007312251;
    double Td1007512249;
    Td1007512249 = o_param_a10872_fun(m10936, NULL);
    double Td1007612239;
    Td1007612239 =  Td1007412248 * Td1007512249;
    Value* Ta1007712246;
    Ta1007712246 = solver_w_vec;
    int Ti1007812247;
    Ti1007812247 = 1;
    double Td1007912243;
    Td1007912243 = Ta1007712246[Ti1007812247].d;
    int Ti1008012245;
    Ti1008012245 = 1;
    double Td1008112244;
    Td1008112244 = l10937[Ti1008012245].d;
    double Td1008212241;
    Td1008212241 =  Td1007912243 * Td1008112244;
    double Td1008312242;
    Td1008312242 = o_param_b10874_fun(m10936, NULL);
    double Td1008412240;
    Td1008412240 =  Td1008212241 * Td1008312242;
    double Td1008512230;
    Td1008512230 = Td1007612239 + Td1008412240;
    Value* Ta1008612237;
    Ta1008612237 = solver_w_vec;
    int Ti1008712238;
    Ti1008712238 = 2;
    double Td1008812234;
    Td1008812234 = Ta1008612237[Ti1008712238].d;
    int Ti1008912236;
    Ti1008912236 = 2;
    double Td1009012235;
    Td1009012235 = l10937[Ti1008912236].d;
    double Td1009112232;
    Td1009112232 =  Td1008812234 * Td1009012235;
    double Td1009212233;
    Td1009212233 = o_param_c10876_fun(m10936, NULL);
    double Td1009312231;
    Td1009312231 =  Td1009112232 * Td1009212233;
    result = Td1008512230 + Td1009312231;
    return result;
}

double solver2nd_rot_b10938_fun(int* m10939, Value* l10940, Value *env){
    double result;
    Value* Ta1002312228;
    Ta1002312228 = solver_w_vec;
    int Ti1002412229;
    Ti1002412229 = 2;
    double Td1002512225;
    Td1002512225 = Ta1002312228[Ti1002412229].d;
    int Ti1002612227;
    Ti1002612227 = 1;
    double Td1002712226;
    Td1002712226 = l10940[Ti1002612227].d;
    double Td1002812218;
    Td1002812218 =  Td1002512225 * Td1002712226;
    Value* Ta1002912223;
    Ta1002912223 = solver_w_vec;
    int Ti1003012224;
    Ti1003012224 = 1;
    double Td1003112220;
    Td1003112220 = Ta1002912223[Ti1003012224].d;
    int Ti1003212222;
    Ti1003212222 = 2;
    double Td1003312221;
    Td1003312221 = l10940[Ti1003212222].d;
    double Td1003412219;
    Td1003412219 =  Td1003112220 * Td1003312221;
    double Td1003512216;
    Td1003512216 = Td1002812218 + Td1003412219;
    double Td1003612217;
    Td1003612217 = o_param_r110894_fun(m10939, NULL);
    double Td1003712200;
    Td1003712200 =  Td1003512216 * Td1003612217;
    Value* Ta1003812214;
    Ta1003812214 = solver_w_vec;
    int Ti1003912215;
    Ti1003912215 = 0;
    double Td1004012211;
    Td1004012211 = Ta1003812214[Ti1003912215].d;
    int Ti1004112213;
    Ti1004112213 = 2;
    double Td1004212212;
    Td1004212212 = l10940[Ti1004112213].d;
    double Td1004312204;
    Td1004312204 =  Td1004012211 * Td1004212212;
    Value* Ta1004412209;
    Ta1004412209 = solver_w_vec;
    int Ti1004512210;
    Ti1004512210 = 2;
    double Td1004612206;
    Td1004612206 = Ta1004412209[Ti1004512210].d;
    int Ti1004712208;
    Ti1004712208 = 0;
    double Td1004812207;
    Td1004812207 = l10940[Ti1004712208].d;
    double Td1004912205;
    Td1004912205 =  Td1004612206 * Td1004812207;
    double Td1005012202;
    Td1005012202 = Td1004312204 + Td1004912205;
    double Td1005112203;
    Td1005112203 = o_param_r210896_fun(m10939, NULL);
    double Td1005212201;
    Td1005212201 =  Td1005012202 * Td1005112203;
    double Td1005312184;
    Td1005312184 = Td1003712200 + Td1005212201;
    Value* Ta1005412198;
    Ta1005412198 = solver_w_vec;
    int Ti1005512199;
    Ti1005512199 = 0;
    double Td1005612195;
    Td1005612195 = Ta1005412198[Ti1005512199].d;
    int Ti1005712197;
    Ti1005712197 = 1;
    double Td1005812196;
    Td1005812196 = l10940[Ti1005712197].d;
    double Td1005912188;
    Td1005912188 =  Td1005612195 * Td1005812196;
    Value* Ta1006012193;
    Ta1006012193 = solver_w_vec;
    int Ti1006112194;
    Ti1006112194 = 1;
    double Td1006212190;
    Td1006212190 = Ta1006012193[Ti1006112194].d;
    int Ti1006312192;
    Ti1006312192 = 0;
    double Td1006412191;
    Td1006412191 = l10940[Ti1006312192].d;
    double Td1006512189;
    Td1006512189 =  Td1006212190 * Td1006412191;
    double Td1006612186;
    Td1006612186 = Td1005912188 + Td1006512189;
    double Td1006712187;
    Td1006712187 = o_param_r310898_fun(m10939, NULL);
    double Td1006812185;
    Td1006812185 =  Td1006612186 * Td1006712187;
    result = Td1005312184 + Td1006812185;
    return result;
}

int solver_second10941_fun(int* m10942, Value* l10943, Value *env){
    int result;
    double aa012143;
    aa012143 = in_prod_sqr_obj10929_fun(m10942, l10943, NULL);
    int Ti999412181;
    Ti999412181 = o_isrot10870_fun(m10942, NULL);
    int Ti999512182;
    Ti999512182 = 0;
    double aa12144;
    if(Ti999412181 == Ti999512182){
	aa12144 = aa012143;
    }
    else{
	double Td999612183;
	Td999612183 = in_prod_co_objrot10932_fun(m10942, l10943, NULL);
	aa12144 = aa012143 + Td999612183;
    }
    double Td999712145;
    Td999712145 = 0.000000;
    if(Td999712145 == aa12144){
	result = 0;
    }
    else{
	double Td999812179;
	Td999812179 = 2.000000;
	double Td999912180;
	Td999912180 = solver2nd_mul_b10935_fun(m10942, l10943, NULL);
	double bb012146;
	bb012146 =  Td999812179 * Td999912180;
	int Ti1000012176;
	Ti1000012176 = o_isrot10870_fun(m10942, NULL);
	int Ti1000112177;
	Ti1000112177 = 0;
	double bb12147;
	if(Ti1000012176 == Ti1000112177){
	    bb12147 = bb012146;
	}
	else{
	    double Td1000212178;
	    Td1000212178 = solver2nd_rot_b10938_fun(m10942, l10943, NULL);
	    bb12147 = bb012146 + Td1000212178;
	}
	Value* Ta1000312175;
	Ta1000312175 = solver_w_vec;
	double cc012148;
	cc012148 = in_prod_sqr_obj10929_fun(m10942, Ta1000312175, NULL);
	int Ti1000412171;
	Ti1000412171 = o_isrot10870_fun(m10942, NULL);
	int Ti1000512172;
	Ti1000512172 = 0;
	double cc112149;
	if(Ti1000412171 == Ti1000512172){
	    cc112149 = cc012148;
	}
	else{
	    Value* Ta1000612174;
	    Ta1000612174 = solver_w_vec;
	    double Td1000712173;
	    Td1000712173 = in_prod_co_objrot10932_fun(m10942, Ta1000612174, NULL);
	    cc112149 = cc012148 + Td1000712173;
	}
	int Ti1000812168;
	Ti1000812168 = o_form10864_fun(m10942, NULL);
	int Ti1000912169;
	Ti1000912169 = 3;
	double cc12150;
	if(Ti1000812168 == Ti1000912169){
	    double Td1001012170;
	    Td1001012170 = 1.000000;
	    cc12150 = cc112149 - Td1001012170;
	}
	else{
	    cc12150 = cc112149;
	}
	double Td1001112167;
	Td1001112167 = 4.000000;
	double Td1001212166;
	Td1001212166 =  Td1001112167 * aa12144;
	double d212164;
	d212164 =  Td1001212166 * cc12150;
	double Td1001312165;
	Td1001312165 = fsqr10858_fun(bb12147, NULL);
	double d12151;
	d12151 = Td1001312165 - d212164;
	double Td1001412152;
	Td1001412152 = 0.000000;
	if(d12151 <= Td1001412152){
	    result = 0;
	}
	else{
	    double sd12153;
	    sd12153 = sqrt(d12151);
	    bool Tb1001512162;
	    Tb1001512162 = o_isinvert10868_fun(m10942, NULL);
	    int Ti1001612163;
	    Ti1001612163 = 0;
	    double t112154;
	    if(Tb1001512162 == Ti1001612163){
		t112154 = -sd12153;
	    }
	    else{
		t112154 = sd12153;
	    }
	    Value* Ta1001712156;
	    Ta1001712156 = solver_dist;
	    int Ti1001812157;
	    Ti1001812157 = 0;
	    double Td1001912160;
	    Td1001912160 = t112154 - bb12147;
	    double Td1002012161;
	    Td1002012161 = 2.000000;
	    double Td1002112159;
	    Td1002112159 = Td1001912160 / Td1002012161;
	    double Td1002212158;
	    Td1002212158 = Td1002112159 / aa12144;
	    int Tu894912155;
	    Ta1001712156[Ti1001812157].d = Td1002212158;
	    result = 1;
	}
    }
    return result;
}

int solver10944_fun(int index10945, Value* l10946, Value* p10947, Value *env){
    int result;
    Value* Ta997312142;
    Ta997312142 = objects;
    int* m12117;
    m12117 = Ta997312142[index10945].a;
    Value* Ta997412136;
    Ta997412136 = solver_w_vec;
    int Ti997512137;
    Ti997512137 = 0;
    int Ti997612141;
    Ti997612141 = 0;
    double Td997712139;
    Td997712139 = p10947[Ti997612141].d;
    double Td997812140;
    Td997812140 = o_param_x10878_fun(m12117, NULL);
    double Td997912138;
    Td997912138 = Td997712139 - Td997812140;
    int Tu895212118;
    Ta997412136[Ti997512137].d = Td997912138;
    Value* Ta998012130;
    Ta998012130 = solver_w_vec;
    int Ti998112131;
    Ti998112131 = 1;
    int Ti998212135;
    Ti998212135 = 1;
    double Td998312133;
    Td998312133 = p10947[Ti998212135].d;
    double Td998412134;
    Td998412134 = o_param_y10880_fun(m12117, NULL);
    double Td998512132;
    Td998512132 = Td998312133 - Td998412134;
    int Tu895112119;
    Ta998012130[Ti998112131].d = Td998512132;
    Value* Ta998612124;
    Ta998612124 = solver_w_vec;
    int Ti998712125;
    Ti998712125 = 2;
    int Ti998812129;
    Ti998812129 = 2;
    double Td998912127;
    Td998912127 = p10947[Ti998812129].d;
    double Td999012128;
    Td999012128 = o_param_z10882_fun(m12117, NULL);
    double Td999112126;
    Td999112126 = Td998912127 - Td999012128;
    int Tu895012120;
    Ta998612124[Ti998712125].d = Td999112126;
    int m_shape12121;
    m_shape12121 = o_form10864_fun(m12117, NULL);
    int Ti999212122;
    Ti999212122 = 1;
    if(m_shape12121 == Ti999212122){
	result = solver_rect10923_fun(m12117, l10946, NULL);
    }
    else{
	int Ti999312123;
	Ti999312123 = 2;
	if(m_shape12121 == Ti999312123){
	    result = solver_surface10926_fun(m12117, l10946, NULL);
	}
	else{
	    result = solver_second10941_fun(m12117, l10946, NULL);
	}
    }
    return result;
}

bool is_rect_outside10948_fun(int* m10949, Value *env){
    bool result;
    double Td995412102;
    Td995412102 = o_param_a10872_fun(m10949, NULL);
    Value* Ta995512115;
    Ta995512115 = isoutside_q;
    int Ti995612116;
    Ti995612116 = 0;
    double Td995712114;
    Td995712114 = Ta995512115[Ti995612116].d;
    double Td995812103;
    Td995812103 = fabs(Td995712114);
    int Ti996912098;
    if(Td995412102 <= Td995812103){
	Ti996912098 = 0;
    }
    else{
	double Td995912104;
	Td995912104 = o_param_b10874_fun(m10949, NULL);
	Value* Ta996012112;
	Ta996012112 = isoutside_q;
	int Ti996112113;
	Ti996112113 = 1;
	double Td996212111;
	Td996212111 = Ta996012112[Ti996112113].d;
	double Td996312105;
	Td996312105 = fabs(Td996212111);
	if(Td995912104 <= Td996312105){
	    Ti996912098 = 0;
	}
	else{
	    double Td996412106;
	    Td996412106 = o_param_c10876_fun(m10949, NULL);
	    Value* Ta996512109;
	    Ta996512109 = isoutside_q;
	    int Ti996612110;
	    Ti996612110 = 2;
	    double Td996712108;
	    Td996712108 = Ta996512109[Ti996612110].d;
	    double Td996812107;
	    Td996812107 = fabs(Td996712108);
	    if(Td996412106 <= Td996812107){
		Ti996912098 = 0;
	    }
	    else{
		Ti996912098 = 1;
	    }
	}
    }
    int Ti997012099;
    Ti997012099 = 0;
    if(Ti996912098 == Ti997012099){
	bool Tb997112100;
	Tb997112100 = o_isinvert10868_fun(m10949, NULL);
	int Ti997212101;
	Ti997212101 = 0;
	if(Tb997112100 == Ti997212101){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    else{
	result = o_isinvert10868_fun(m10949, NULL);
    }
    return result;
}

bool is_plane_outside10950_fun(int* m10951, Value *env){
    bool result;
    double Td993412094;
    Td993412094 = o_param_a10872_fun(m10951, NULL);
    Value* Ta993512096;
    Ta993512096 = isoutside_q;
    int Ti993612097;
    Ti993612097 = 0;
    double Td993712095;
    Td993712095 = Ta993512096[Ti993612097].d;
    double Td993812088;
    Td993812088 =  Td993412094 * Td993712095;
    double Td993912090;
    Td993912090 = o_param_b10874_fun(m10951, NULL);
    Value* Ta994012092;
    Ta994012092 = isoutside_q;
    int Ti994112093;
    Ti994112093 = 1;
    double Td994212091;
    Td994212091 = Ta994012092[Ti994112093].d;
    double Td994312089;
    Td994312089 =  Td993912090 * Td994212091;
    double Td994412082;
    Td994412082 = Td993812088 + Td994312089;
    double Td994512084;
    Td994512084 = o_param_c10876_fun(m10951, NULL);
    Value* Ta994612086;
    Ta994612086 = isoutside_q;
    int Ti994712087;
    Ti994712087 = 2;
    double Td994812085;
    Td994812085 = Ta994612086[Ti994712087].d;
    double Td994912083;
    Td994912083 =  Td994512084 * Td994812085;
    double w12076;
    w12076 = Td994412082 + Td994912083;
    double Td995012081;
    Td995012081 = 0.000000;
    bool s12077;
    if(Td995012081 <= w12076){
	s12077 = 0;
    }
    else{
	s12077 = 1;
    }
    bool Tb995112080;
    Tb995112080 = o_isinvert10868_fun(m10951, NULL);
    bool Tb995212078;
    Tb995212078 = xor10855_fun(Tb995112080, s12077, NULL);
    int Ti995312079;
    Ti995312079 = 0;
    if(Tb995212078 == Ti995312079){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_second_outside10952_fun(int* m10953, Value *env){
    bool result;
    Value* Ta992212075;
    Ta992212075 = isoutside_q;
    double w12060;
    w12060 = in_prod_sqr_obj10929_fun(m10953, Ta992212075, NULL);
    int Ti992312072;
    Ti992312072 = o_form10864_fun(m10953, NULL);
    int Ti992412073;
    Ti992412073 = 3;
    double w212061;
    if(Ti992312072 == Ti992412073){
	double Td992512074;
	Td992512074 = 1.000000;
	w212061 = w12060 - Td992512074;
    }
    else{
	w212061 = w12060;
    }
    int Ti992612068;
    Ti992612068 = o_isrot10870_fun(m10953, NULL);
    int Ti992712069;
    Ti992712069 = 0;
    double w312062;
    if(Ti992612068 == Ti992712069){
	w312062 = w212061;
    }
    else{
	Value* Ta992812071;
	Ta992812071 = isoutside_q;
	double Td992912070;
	Td992912070 = in_prod_co_objrot10932_fun(m10953, Ta992812071, NULL);
	w312062 = w212061 + Td992912070;
    }
    double Td993012067;
    Td993012067 = 0.000000;
    bool s12063;
    if(Td993012067 <= w312062){
	s12063 = 0;
    }
    else{
	s12063 = 1;
    }
    bool Tb993112066;
    Tb993112066 = o_isinvert10868_fun(m10953, NULL);
    bool Tb993212064;
    Tb993212064 = xor10855_fun(Tb993112066, s12063, NULL);
    int Ti993312065;
    Ti993312065 = 0;
    if(Tb993212064 == Ti993312065){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_outside10954_fun(int* m10955, Value *env){
    bool result;
    Value* Ta989912053;
    Ta989912053 = isoutside_q;
    int Ti990012054;
    Ti990012054 = 0;
    Value* Ta990112058;
    Ta990112058 = chkinside_p;
    int Ti990212059;
    Ti990212059 = 0;
    double Td990312056;
    Td990312056 = Ta990112058[Ti990212059].d;
    double Td990412057;
    Td990412057 = o_param_x10878_fun(m10955, NULL);
    double Td990512055;
    Td990512055 = Td990312056 - Td990412057;
    int Tu895512033;
    Ta989912053[Ti990012054].d = Td990512055;
    Value* Ta990612046;
    Ta990612046 = isoutside_q;
    int Ti990712047;
    Ti990712047 = 1;
    Value* Ta990812051;
    Ta990812051 = chkinside_p;
    int Ti990912052;
    Ti990912052 = 1;
    double Td991012049;
    Td991012049 = Ta990812051[Ti990912052].d;
    double Td991112050;
    Td991112050 = o_param_y10880_fun(m10955, NULL);
    double Td991212048;
    Td991212048 = Td991012049 - Td991112050;
    int Tu895412034;
    Ta990612046[Ti990712047].d = Td991212048;
    Value* Ta991312039;
    Ta991312039 = isoutside_q;
    int Ti991412040;
    Ti991412040 = 2;
    Value* Ta991512044;
    Ta991512044 = chkinside_p;
    int Ti991612045;
    Ti991612045 = 2;
    double Td991712042;
    Td991712042 = Ta991512044[Ti991612045].d;
    double Td991812043;
    Td991812043 = o_param_z10882_fun(m10955, NULL);
    double Td991912041;
    Td991912041 = Td991712042 - Td991812043;
    int Tu895312035;
    Ta991312039[Ti991412040].d = Td991912041;
    int m_shape12036;
    m_shape12036 = o_form10864_fun(m10955, NULL);
    int Ti992012037;
    Ti992012037 = 1;
    if(m_shape12036 == Ti992012037){
	result = is_rect_outside10948_fun(m10955, NULL);
    }
    else{
	int Ti992112038;
	Ti992112038 = 2;
	if(m_shape12036 == Ti992112038){
	    result = is_plane_outside10950_fun(m10955, NULL);
	}
	else{
	    result = is_second_outside10952_fun(m10955, NULL);
	}
    }
    return result;
}

bool check_all_inside10956_fun(int ofs10957, Value* iand10958, Value *env){
    bool result;
    int head12024;
    head12024 = iand10958[ofs10957].i;
    int Ti989112032;
    Ti989112032 = 1;
    int Ti989212025;
    Ti989212025 = -Ti989112032;
    if(head12024 == Ti989212025){
	result = 1;
    }
    else{
	Value* Ta989312031;
	Ta989312031 = objects;
	int* Tt989412030;
	Tt989412030 = Ta989312031[head12024].a;
	bool Tb989512026;
	Tb989512026 = is_outside10954_fun(Tt989412030, NULL);
	int Ti989612027;
	Ti989612027 = 0;
	if(Tb989512026 == Ti989612027){
	    int Ti989712029;
	    Ti989712029 = 1;
	    int Ti989812028;
	    Ti989812028 = ofs10957 + Ti989712029;
	    result = check_all_inside10956_fun(Ti989812028, iand10958, NULL);
	}
	else{
	    result = 0;
	}
    }
    return result;
}

bool shadow_check_and_group10959_fun(int iand_ofs10960, Value* and_group10961, Value* p10962, Value *env){
    bool result;
    int Ti984211968;
    Ti984211968 = and_group10961[iand_ofs10960].i;
    int Ti984312023;
    Ti984312023 = 1;
    int Ti984411969;
    Ti984411969 = -Ti984312023;
    if(Ti984211968 == Ti984411969){
	result = 0;
    }
    else{
	int obj11970;
	obj11970 = and_group10961[iand_ofs10960].i;
	Value* Ta984512022;
	Ta984512022 = light;
	int t011971;
	t011971 = solver10944_fun(obj11970, Ta984512022, p10962, NULL);
	Value* Ta984612020;
	Ta984612020 = solver_dist;
	int Ti984712021;
	Ti984712021 = 0;
	double t0p11972;
	t0p11972 = Ta984612020[Ti984712021].d;
	int Ti984812018;
	Ti984812018 = 0;
	int Ti985011973;
	if(t011971 == Ti984812018){
	    Ti985011973 = 0;
	}
	else{
	    double Td984912019;
	    Td984912019 = -0.200000;
	    if(Td984912019 <= t0p11972){
		Ti985011973 = 0;
	    }
	    else{
		Ti985011973 = 1;
	    }
	}
	int Ti985111974;
	Ti985111974 = 0;
	if(Ti985011973 == Ti985111974){
	    Value* Ta985212017;
	    Ta985212017 = objects;
	    int* Tt985312016;
	    Tt985312016 = Ta985212017[obj11970].a;
	    bool Tb985412012;
	    Tb985412012 = o_isinvert10868_fun(Tt985312016, NULL);
	    int Ti985512013;
	    Ti985512013 = 0;
	    if(Tb985412012 == Ti985512013){
		result = 0;
	    }
	    else{
		int Ti985612015;
		Ti985612015 = 1;
		int Ti985712014;
		Ti985712014 = iand_ofs10960 + Ti985612015;
		result = shadow_check_and_group10959_fun(Ti985712014, and_group10961, p10962, NULL);
	    }
	}
	else{
	    double Td985812011;
	    Td985812011 = 0.010000;
	    double t11975;
	    t11975 = t0p11972 + Td985812011;
	    Value* Ta985912002;
	    Ta985912002 = chkinside_p;
	    int Ti986012003;
	    Ti986012003 = 0;
	    Value* Ta986112009;
	    Ta986112009 = light;
	    int Ti986212010;
	    Ti986212010 = 0;
	    double Td986312008;
	    Td986312008 = Ta986112009[Ti986212010].d;
	    double Td986412005;
	    Td986412005 =  Td986312008 * t11975;
	    int Ti986512007;
	    Ti986512007 = 0;
	    double Td986612006;
	    Td986612006 = p10962[Ti986512007].d;
	    double Td986712004;
	    Td986712004 = Td986412005 + Td986612006;
	    int Tu895811976;
	    Ta985912002[Ti986012003].d = Td986712004;
	    Value* Ta986811993;
	    Ta986811993 = chkinside_p;
	    int Ti986911994;
	    Ti986911994 = 1;
	    Value* Ta987012000;
	    Ta987012000 = light;
	    int Ti987112001;
	    Ti987112001 = 1;
	    double Td987211999;
	    Td987211999 = Ta987012000[Ti987112001].d;
	    double Td987311996;
	    Td987311996 =  Td987211999 * t11975;
	    int Ti987411998;
	    Ti987411998 = 1;
	    double Td987511997;
	    Td987511997 = p10962[Ti987411998].d;
	    double Td987611995;
	    Td987611995 = Td987311996 + Td987511997;
	    int Tu895711977;
	    Ta986811993[Ti986911994].d = Td987611995;
	    Value* Ta987711984;
	    Ta987711984 = chkinside_p;
	    int Ti987811985;
	    Ti987811985 = 2;
	    Value* Ta987911991;
	    Ta987911991 = light;
	    int Ti988011992;
	    Ti988011992 = 2;
	    double Td988111990;
	    Td988111990 = Ta987911991[Ti988011992].d;
	    double Td988211987;
	    Td988211987 =  Td988111990 * t11975;
	    int Ti988311989;
	    Ti988311989 = 2;
	    double Td988411988;
	    Td988411988 = p10962[Ti988311989].d;
	    double Td988511986;
	    Td988511986 = Td988211987 + Td988411988;
	    int Tu895611978;
	    Ta987711984[Ti987811985].d = Td988511986;
	    int Ti988611983;
	    Ti988611983 = 0;
	    bool Tb988711979;
	    Tb988711979 = check_all_inside10956_fun(Ti988611983, and_group10961, NULL);
	    int Ti988811980;
	    Ti988811980 = 0;
	    if(Tb988711979 == Ti988811980){
		int Ti988911982;
		Ti988911982 = 1;
		int Ti989011981;
		Ti989011981 = iand_ofs10960 + Ti988911982;
		result = shadow_check_and_group10959_fun(Ti989011981, and_group10961, p10962, NULL);
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

bool shadow_check_one_or_group10963_fun(int ofs10964, Value* or_group10965, Value* p10966, Value *env){
    bool result;
    int head11958;
    head11958 = or_group10965[ofs10964].i;
    int Ti983511967;
    Ti983511967 = 1;
    int Ti983611959;
    Ti983611959 = -Ti983511967;
    if(head11958 == Ti983611959){
	result = 0;
    }
    else{
	Value* Ta983711966;
	Ta983711966 = and_net;
	Value* and_group11960;
	and_group11960 = Ta983711966[head11958].a;
	int Ti983811965;
	Ti983811965 = 0;
	bool shadow_p11961;
	shadow_p11961 = shadow_check_and_group10959_fun(Ti983811965, and_group11960, p10966, NULL);
	int Ti983911962;
	Ti983911962 = 0;
	if(shadow_p11961 == Ti983911962){
	    int Ti984011964;
	    Ti984011964 = 1;
	    int Ti984111963;
	    Ti984111963 = ofs10964 + Ti984011964;
	    result = shadow_check_one_or_group10963_fun(Ti984111963, or_group10965, p10966, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

bool shadow_check_one_or_matrix10967_fun(int ofs10968, Value* or_matrix10969, Value* p10970, Value *env){
    bool result;
    Value* head11931;
    head11931 = or_matrix10969[ofs10968].a;
    int Ti981111957;
    Ti981111957 = 0;
    int range_primitive11932;
    range_primitive11932 = head11931[Ti981111957].i;
    int Ti981211956;
    Ti981211956 = 1;
    int Ti981311933;
    Ti981311933 = -Ti981211956;
    if(range_primitive11932 == Ti981311933){
	result = 0;
    }
    else{
	int Ti981411934;
	Ti981411934 = 99;
	if(range_primitive11932 == Ti981411934){
	    int Ti981511955;
	    Ti981511955 = 1;
	    bool Tb981611951;
	    Tb981611951 = shadow_check_one_or_group10963_fun(Ti981511955, head11931, p10970, NULL);
	    int Ti981711952;
	    Ti981711952 = 0;
	    if(Tb981611951 == Ti981711952){
		int Ti981811954;
		Ti981811954 = 1;
		int Ti981911953;
		Ti981911953 = ofs10968 + Ti981811954;
		result = shadow_check_one_or_matrix10967_fun(Ti981911953, or_matrix10969, p10970, NULL);
	    }
	    else{
		result = 1;
	    }
	}
	else{
	    Value* Ta982011950;
	    Ta982011950 = light;
	    int t11935;
	    t11935 = solver10944_fun(range_primitive11932, Ta982011950, p10970, NULL);
	    int Ti982111936;
	    Ti982111936 = 0;
	    if(t11935 == Ti982111936){
		int Ti982211949;
		Ti982211949 = 1;
		int Ti982311948;
		Ti982311948 = ofs10968 + Ti982211949;
		result = shadow_check_one_or_matrix10967_fun(Ti982311948, or_matrix10969, p10970, NULL);
	    }
	    else{
		double Td982411937;
		Td982411937 = -0.100000;
		Value* Ta982511946;
		Ta982511946 = solver_dist;
		int Ti982611947;
		Ti982611947 = 0;
		double Td982711938;
		Td982711938 = Ta982511946[Ti982611947].d;
		if(Td982411937 <= Td982711938){
		    int Ti982811945;
		    Ti982811945 = 1;
		    int Ti982911944;
		    Ti982911944 = ofs10968 + Ti982811945;
		    result = shadow_check_one_or_matrix10967_fun(Ti982911944, or_matrix10969, p10970, NULL);
		}
		else{
		    int Ti983011943;
		    Ti983011943 = 1;
		    bool Tb983111939;
		    Tb983111939 = shadow_check_one_or_group10963_fun(Ti983011943, head11931, p10970, NULL);
		    int Ti983211940;
		    Ti983211940 = 0;
		    if(Tb983111939 == Ti983211940){
			int Ti983311942;
			Ti983311942 = 1;
			int Ti983411941;
			Ti983411941 = ofs10968 + Ti983311942;
			result = shadow_check_one_or_matrix10967_fun(Ti983411941, or_matrix10969, p10970, NULL);
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

int solve_each_element10971_fun(int iand_ofs10972, Value* and_group10973, Value *env){
    int result;
    int iobj11839;
    iobj11839 = and_group10973[iand_ofs10972].i;
    int Ti973211930;
    Ti973211930 = 1;
    int Ti973311840;
    Ti973311840 = -Ti973211930;
    if(iobj11839 == Ti973311840){
	result = 1;
    }
    else{
	Value* Ta973411928;
	Ta973411928 = vscan;
	Value* Ta973511929;
	Ta973511929 = viewpoint;
	int t011841;
	t011841 = solver10944_fun(iobj11839, Ta973411928, Ta973511929, NULL);
	int Ti973611849;
	Ti973611849 = 0;
	int Tu896711842;
	if(t011841 == Ti973611849){
	    Value* Ta973711927;
	    Ta973711927 = objects;
	    int* Tt973811926;
	    Tt973811926 = Ta973711927[iobj11839].a;
	    bool Tb973911921;
	    Tb973911921 = o_isinvert10868_fun(Tt973811926, NULL);
	    int Ti974011922;
	    Ti974011922 = 0;
	    if(Tb973911921 == Ti974011922){
		Value* Ta974111923;
		Ta974111923 = end_flag;
		int Ti974211924;
		Ti974211924 = 0;
		int Ti974311925;
		Ti974311925 = 1;
		Ta974111923[Ti974211924].i = Ti974311925;
	    }
	    else{
		Tu896711842 = 1;
	    }
	}
	else{
	    Value* Ta974411919;
	    Ta974411919 = solver_dist;
	    int Ti974511920;
	    Ti974511920 = 0;
	    double t0p11850;
	    t0p11850 = Ta974411919[Ti974511920].d;
	    double Td974611851;
	    Td974611851 = -0.100000;
	    if(t0p11850 <= Td974611851){
		Tu896711842 = 1;
	    }
	    else{
		Value* Ta974711917;
		Ta974711917 = tmin;
		int Ti974811918;
		Ti974811918 = 0;
		double Td974911852;
		Td974911852 = Ta974711917[Ti974811918].d;
		if(Td974911852 <= t0p11850){
		    Tu896711842 = 1;
		}
		else{
		    double Td975011916;
		    Td975011916 = 0.010000;
		    double t11853;
		    t11853 = t0p11850 + Td975011916;
		    Value* Ta975111906;
		    Ta975111906 = chkinside_p;
		    int Ti975211907;
		    Ti975211907 = 0;
		    Value* Ta975311914;
		    Ta975311914 = vscan;
		    int Ti975411915;
		    Ti975411915 = 0;
		    double Td975511913;
		    Td975511913 = Ta975311914[Ti975411915].d;
		    double Td975611909;
		    Td975611909 =  Td975511913 * t11853;
		    Value* Ta975711911;
		    Ta975711911 = viewpoint;
		    int Ti975811912;
		    Ti975811912 = 0;
		    double Td975911910;
		    Td975911910 = Ta975711911[Ti975811912].d;
		    double Td976011908;
		    Td976011908 = Td975611909 + Td975911910;
		    int Tu896611854;
		    Ta975111906[Ti975211907].d = Td976011908;
		    Value* Ta976111896;
		    Ta976111896 = chkinside_p;
		    int Ti976211897;
		    Ti976211897 = 1;
		    Value* Ta976311904;
		    Ta976311904 = vscan;
		    int Ti976411905;
		    Ti976411905 = 1;
		    double Td976511903;
		    Td976511903 = Ta976311904[Ti976411905].d;
		    double Td976611899;
		    Td976611899 =  Td976511903 * t11853;
		    Value* Ta976711901;
		    Ta976711901 = viewpoint;
		    int Ti976811902;
		    Ti976811902 = 1;
		    double Td976911900;
		    Td976911900 = Ta976711901[Ti976811902].d;
		    double Td977011898;
		    Td977011898 = Td976611899 + Td976911900;
		    int Tu896511855;
		    Ta976111896[Ti976211897].d = Td977011898;
		    Value* Ta977111886;
		    Ta977111886 = chkinside_p;
		    int Ti977211887;
		    Ti977211887 = 2;
		    Value* Ta977311894;
		    Ta977311894 = vscan;
		    int Ti977411895;
		    Ti977411895 = 2;
		    double Td977511893;
		    Td977511893 = Ta977311894[Ti977411895].d;
		    double Td977611889;
		    Td977611889 =  Td977511893 * t11853;
		    Value* Ta977711891;
		    Ta977711891 = viewpoint;
		    int Ti977811892;
		    Ti977811892 = 2;
		    double Td977911890;
		    Td977911890 = Ta977711891[Ti977811892].d;
		    double Td978011888;
		    Td978011888 = Td977611889 + Td977911890;
		    int Tu896411856;
		    Ta977111886[Ti977211887].d = Td978011888;
		    int Ti978111885;
		    Ti978111885 = 0;
		    bool Tb978211857;
		    Tb978211857 = check_all_inside10956_fun(Ti978111885, and_group10973, NULL);
		    int Ti978311858;
		    Ti978311858 = 0;
		    if(Tb978211857 == Ti978311858){
			Tu896711842 = 1;
		    }
		    else{
			Value* Ta978411883;
			Ta978411883 = tmin;
			int Ti978511884;
			Ti978511884 = 0;
			int Tu896311859;
			Ta978411883[Ti978511884].d = t11853;
			Value* Ta978611878;
			Ta978611878 = crashed_point;
			int Ti978711879;
			Ti978711879 = 0;
			Value* Ta978811881;
			Ta978811881 = chkinside_p;
			int Ti978911882;
			Ti978911882 = 0;
			double Td979011880;
			Td979011880 = Ta978811881[Ti978911882].d;
			int Tu896211860;
			Ta978611878[Ti978711879].d = Td979011880;
			Value* Ta979111873;
			Ta979111873 = crashed_point;
			int Ti979211874;
			Ti979211874 = 1;
			Value* Ta979311876;
			Ta979311876 = chkinside_p;
			int Ti979411877;
			Ti979411877 = 1;
			double Td979511875;
			Td979511875 = Ta979311876[Ti979411877].d;
			int Tu896111861;
			Ta979111873[Ti979211874].d = Td979511875;
			Value* Ta979611868;
			Ta979611868 = crashed_point;
			int Ti979711869;
			Ti979711869 = 2;
			Value* Ta979811871;
			Ta979811871 = chkinside_p;
			int Ti979911872;
			Ti979911872 = 2;
			double Td980011870;
			Td980011870 = Ta979811871[Ti979911872].d;
			int Tu896011862;
			Ta979611868[Ti979711869].d = Td980011870;
			Value* Ta980111866;
			Ta980111866 = intsec_rectside;
			int Ti980211867;
			Ti980211867 = 0;
			int Tu895911863;
			Ta980111866[Ti980211867].i = t011841;
			Value* Ta980311864;
			Ta980311864 = crashed_object;
			int Ti980411865;
			Ti980411865 = 0;
			Ta980311864[Ti980411865].i = iobj11839;
		    }
		}
	    }
	}
	Value* Ta980511847;
	Ta980511847 = end_flag;
	int Ti980611848;
	Ti980611848 = 0;
	bool Tb980711843;
	Tb980711843 = Ta980511847[Ti980611848].b;
	int Ti980811844;
	Ti980811844 = 0;
	if(Tb980711843 == Ti980811844){
	    int Ti980911846;
	    Ti980911846 = 1;
	    int Ti981011845;
	    Ti981011845 = iand_ofs10972 + Ti980911846;
	    result = solve_each_element10971_fun(Ti981011845, and_group10973, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int solve_one_or_network10974_fun(int ofs10975, Value* or_group10976, Value *env){
    int result;
    int head11826;
    head11826 = or_group10976[ofs10975].i;
    int Ti972311838;
    Ti972311838 = 1;
    int Ti972411827;
    Ti972411827 = -Ti972311838;
    if(head11826 == Ti972411827){
	result = 1;
    }
    else{
	Value* Ta972511837;
	Ta972511837 = and_net;
	Value* and_group11828;
	and_group11828 = Ta972511837[head11826].a;
	Value* Ta972611834;
	Ta972611834 = end_flag;
	int Ti972711835;
	Ti972711835 = 0;
	int Ti972811836;
	Ti972811836 = 0;
	int Tu896911829;
	Ta972611834[Ti972711835].i = Ti972811836;
	int Ti972911833;
	Ti972911833 = 0;
	int Tu896811830;
	Tu896811830 = solve_each_element10971_fun(Ti972911833, and_group11828, NULL);
	int Ti973011832;
	Ti973011832 = 1;
	int Ti973111831;
	Ti973111831 = ofs10975 + Ti973011832;
	result = solve_one_or_network10974_fun(Ti973111831, or_group10976, NULL);
    }
    return result;
}

int trace_or_matrix10977_fun(int ofs10978, Value* or_network10979, Value *env){
    int result;
    Value* head11805;
    head11805 = or_network10979[ofs10978].a;
    int Ti970711825;
    Ti970711825 = 0;
    int range_primitive11806;
    range_primitive11806 = head11805[Ti970711825].i;
    int Ti970811824;
    Ti970811824 = 1;
    int Ti970911807;
    Ti970911807 = -Ti970811824;
    if(range_primitive11806 == Ti970911807){
	result = 1;
    }
    else{
	int Ti971011811;
	Ti971011811 = 99;
	int Tu897011808;
	if(range_primitive11806 == Ti971011811){
	    int Ti971111823;
	    Ti971111823 = 1;
	    Tu897011808 = solve_one_or_network10974_fun(Ti971111823, head11805, NULL);
	}
	else{
	    Value* Ta971211821;
	    Ta971211821 = vscan;
	    Value* Ta971311822;
	    Ta971311822 = viewpoint;
	    int t11812;
	    t11812 = solver10944_fun(range_primitive11806, Ta971211821, Ta971311822, NULL);
	    int Ti971411813;
	    Ti971411813 = 0;
	    if(t11812 == Ti971411813){
		Tu897011808 = 1;
	    }
	    else{
		Value* Ta971511819;
		Ta971511819 = solver_dist;
		int Ti971611820;
		Ti971611820 = 0;
		double tp11814;
		tp11814 = Ta971511819[Ti971611820].d;
		Value* Ta971711817;
		Ta971711817 = tmin;
		int Ti971811818;
		Ti971811818 = 0;
		double Td971911815;
		Td971911815 = Ta971711817[Ti971811818].d;
		if(Td971911815 <= tp11814){
		    Tu897011808 = 1;
		}
		else{
		    int Ti972011816;
		    Ti972011816 = 1;
		    Tu897011808 = solve_one_or_network10974_fun(Ti972011816, head11805, NULL);
		}
	    }
	}
	int Ti972111810;
	Ti972111810 = 1;
	int Ti972211809;
	Ti972211809 = ofs10978 + Ti972111810;
	result = trace_or_matrix10977_fun(Ti972211809, or_network10979, NULL);
    }
    return result;
}

bool tracer10980_fun(Value* viewpoint10981, Value* vscan10982, Value *env){
    bool result;
    Value* Ta969611802;
    Ta969611802 = tmin;
    int Ti969711803;
    Ti969711803 = 0;
    double Td969811804;
    Td969811804 = 1000000000.000000;
    int Tu897211791;
    Ta969611802[Ti969711803].d = Td969811804;
    int Ti969911798;
    Ti969911798 = 0;
    Value* Ta970011800;
    Ta970011800 = or_net;
    int Ti970111801;
    Ti970111801 = 0;
    Value* Ta970211799;
    Ta970211799 = Ta970011800[Ti970111801].a;
    int Tu897111792;
    Tu897111792 = trace_or_matrix10977_fun(Ti969911798, Ta970211799, NULL);
    Value* Ta970311796;
    Ta970311796 = tmin;
    int Ti970411797;
    Ti970411797 = 0;
    double t11793;
    t11793 = Ta970311796[Ti970411797].d;
    double Td970511794;
    Td970511794 = -0.100000;
    if(t11793 <= Td970511794){
	result = 0;
    }
    else{
	double Td970611795;
	Td970611795 = 100000000.000000;
	if(Td970611795 <= t11793){
	    result = 0;
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int get_nvector_rect10983_fun(int Tu897310984, Value *env){
    int result;
    Value* Ta965211789;
    Ta965211789 = intsec_rectside;
    int Ti965311790;
    Ti965311790 = 0;
    int rectside11740;
    rectside11740 = Ta965211789[Ti965311790].i;
    int Ti965411741;
    Ti965411741 = 1;
    if(rectside11740 == Ti965411741){
	Value* Ta965511782;
	Ta965511782 = nvector;
	int Ti965611783;
	Ti965611783 = 0;
	Value* Ta965711787;
	Ta965711787 = vscan;
	int Ti965811788;
	Ti965811788 = 0;
	double Td965911786;
	Td965911786 = Ta965711787[Ti965811788].d;
	double Td966011785;
	Td966011785 = sgn10903_fun(Td965911786, NULL);
	double Td966111784;
	Td966111784 = -Td966011785;
	int Tu897511774;
	Ta965511782[Ti965611783].d = Td966111784;
	Value* Ta966211779;
	Ta966211779 = nvector;
	int Ti966311780;
	Ti966311780 = 1;
	double Td966411781;
	Td966411781 = 0.000000;
	int Tu897411775;
	Ta966211779[Ti966311780].d = Td966411781;
	Value* Ta966511776;
	Ta966511776 = nvector;
	int Ti966611777;
	Ti966611777 = 2;
	double Td966711778;
	Td966711778 = 0.000000;
	Ta966511776[Ti966611777].d = Td966711778;
    }
    else{
	int Ti966811742;
	Ti966811742 = 2;
	if(rectside11740 == Ti966811742){
	    Value* Ta966911771;
	    Ta966911771 = nvector;
	    int Ti967011772;
	    Ti967011772 = 0;
	    double Td967111773;
	    Td967111773 = 0.000000;
	    int Tu897711759;
	    Ta966911771[Ti967011772].d = Td967111773;
	    Value* Ta967211764;
	    Ta967211764 = nvector;
	    int Ti967311765;
	    Ti967311765 = 1;
	    Value* Ta967411769;
	    Ta967411769 = vscan;
	    int Ti967511770;
	    Ti967511770 = 1;
	    double Td967611768;
	    Td967611768 = Ta967411769[Ti967511770].d;
	    double Td967711767;
	    Td967711767 = sgn10903_fun(Td967611768, NULL);
	    double Td967811766;
	    Td967811766 = -Td967711767;
	    int Tu897611760;
	    Ta967211764[Ti967311765].d = Td967811766;
	    Value* Ta967911761;
	    Ta967911761 = nvector;
	    int Ti968011762;
	    Ti968011762 = 2;
	    double Td968111763;
	    Td968111763 = 0.000000;
	    Ta967911761[Ti968011762].d = Td968111763;
	}
	else{
	    int Ti968211743;
	    Ti968211743 = 3;
	    if(rectside11740 == Ti968211743){
		Value* Ta968311756;
		Ta968311756 = nvector;
		int Ti968411757;
		Ti968411757 = 0;
		double Td968511758;
		Td968511758 = 0.000000;
		int Tu897911744;
		Ta968311756[Ti968411757].d = Td968511758;
		Value* Ta968611753;
		Ta968611753 = nvector;
		int Ti968711754;
		Ti968711754 = 1;
		double Td968811755;
		Td968811755 = 0.000000;
		int Tu897811745;
		Ta968611753[Ti968711754].d = Td968811755;
		Value* Ta968911746;
		Ta968911746 = nvector;
		int Ti969011747;
		Ti969011747 = 2;
		Value* Ta969111751;
		Ta969111751 = vscan;
		int Ti969211752;
		Ti969211752 = 2;
		double Td969311750;
		Td969311750 = Ta969111751[Ti969211752].d;
		double Td969411749;
		Td969411749 = sgn10903_fun(Td969311750, NULL);
		double Td969511748;
		Td969511748 = -Td969411749;
		Ta968911746[Ti969011747].d = Td969511748;
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

int get_nvector_plane10985_fun(int* m10986, Value *env){
    int result;
    Value* Ta964011736;
    Ta964011736 = nvector;
    int Ti964111737;
    Ti964111737 = 0;
    double Td964211739;
    Td964211739 = o_param_a10872_fun(m10986, NULL);
    double Td964311738;
    Td964311738 = -Td964211739;
    int Tu898111726;
    Ta964011736[Ti964111737].d = Td964311738;
    Value* Ta964411732;
    Ta964411732 = nvector;
    int Ti964511733;
    Ti964511733 = 1;
    double Td964611735;
    Td964611735 = o_param_b10874_fun(m10986, NULL);
    double Td964711734;
    Td964711734 = -Td964611735;
    int Tu898011727;
    Ta964411732[Ti964511733].d = Td964711734;
    Value* Ta964811728;
    Ta964811728 = nvector;
    int Ti964911729;
    Ti964911729 = 2;
    double Td965011731;
    Td965011731 = o_param_c10876_fun(m10986, NULL);
    double Td965111730;
    Td965111730 = -Td965011731;
    Ta964811728[Ti964911729].d = Td965111730;
    return result;
}

int get_nvector_second_norot10987_fun(int* m10988, Value* p10989, Value *env){
    int result;
    Value* Ta961411718;
    Ta961411718 = nvector;
    int Ti961511719;
    Ti961511719 = 0;
    int Ti961611725;
    Ti961611725 = 0;
    double Td961711723;
    Td961711723 = p10989[Ti961611725].d;
    double Td961811724;
    Td961811724 = o_param_x10878_fun(m10988, NULL);
    double Td961911721;
    Td961911721 = Td961711723 - Td961811724;
    double Td962011722;
    Td962011722 = o_param_a10872_fun(m10988, NULL);
    double Td962111720;
    Td962111720 =  Td961911721 * Td962011722;
    int Tu898411697;
    Ta961411718[Ti961511719].d = Td962111720;
    Value* Ta962211710;
    Ta962211710 = nvector;
    int Ti962311711;
    Ti962311711 = 1;
    int Ti962411717;
    Ti962411717 = 1;
    double Td962511715;
    Td962511715 = p10989[Ti962411717].d;
    double Td962611716;
    Td962611716 = o_param_y10880_fun(m10988, NULL);
    double Td962711713;
    Td962711713 = Td962511715 - Td962611716;
    double Td962811714;
    Td962811714 = o_param_b10874_fun(m10988, NULL);
    double Td962911712;
    Td962911712 =  Td962711713 * Td962811714;
    int Tu898311698;
    Ta962211710[Ti962311711].d = Td962911712;
    Value* Ta963011702;
    Ta963011702 = nvector;
    int Ti963111703;
    Ti963111703 = 2;
    int Ti963211709;
    Ti963211709 = 2;
    double Td963311707;
    Td963311707 = p10989[Ti963211709].d;
    double Td963411708;
    Td963411708 = o_param_z10882_fun(m10988, NULL);
    double Td963511705;
    Td963511705 = Td963311707 - Td963411708;
    double Td963611706;
    Td963611706 = o_param_c10876_fun(m10988, NULL);
    double Td963711704;
    Td963711704 =  Td963511705 * Td963611706;
    int Tu898211699;
    Ta963011702[Ti963111703].d = Td963711704;
    Value* Ta963811700;
    Ta963811700 = nvector;
    bool Tb963911701;
    Tb963911701 = o_isinvert10868_fun(m10988, NULL);
    result = normalize_vector10900_fun(Ta963811700, Tb963911701, NULL);
    return result;
}

int get_nvector_second_rot10990_fun(int* m10991, Value* p10992, Value *env){
    int result;
    Value* Ta953411691;
    Ta953411691 = nvector_w;
    int Ti953511692;
    Ti953511692 = 0;
    int Ti953611696;
    Ti953611696 = 0;
    double Td953711694;
    Td953711694 = p10992[Ti953611696].d;
    double Td953811695;
    Td953811695 = o_param_x10878_fun(m10991, NULL);
    double Td953911693;
    Td953911693 = Td953711694 - Td953811695;
    int Tu899011611;
    Ta953411691[Ti953511692].d = Td953911693;
    Value* Ta954011685;
    Ta954011685 = nvector_w;
    int Ti954111686;
    Ti954111686 = 1;
    int Ti954211690;
    Ti954211690 = 1;
    double Td954311688;
    Td954311688 = p10992[Ti954211690].d;
    double Td954411689;
    Td954411689 = o_param_y10880_fun(m10991, NULL);
    double Td954511687;
    Td954511687 = Td954311688 - Td954411689;
    int Tu898911612;
    Ta954011685[Ti954111686].d = Td954511687;
    Value* Ta954611679;
    Ta954611679 = nvector_w;
    int Ti954711680;
    Ti954711680 = 2;
    int Ti954811684;
    Ti954811684 = 2;
    double Td954911682;
    Td954911682 = p10992[Ti954811684].d;
    double Td955011683;
    Td955011683 = o_param_z10882_fun(m10991, NULL);
    double Td955111681;
    Td955111681 = Td954911682 - Td955011683;
    int Tu898811613;
    Ta954611679[Ti954711680].d = Td955111681;
    Value* Ta955211659;
    Ta955211659 = nvector;
    int Ti955311660;
    Ti955311660 = 0;
    Value* Ta955411677;
    Ta955411677 = nvector_w;
    int Ti955511678;
    Ti955511678 = 0;
    double Td955611675;
    Td955611675 = Ta955411677[Ti955511678].d;
    double Td955711676;
    Td955711676 = o_param_a10872_fun(m10991, NULL);
    double Td955811662;
    Td955811662 =  Td955611675 * Td955711676;
    Value* Ta955911673;
    Ta955911673 = nvector_w;
    int Ti956011674;
    Ti956011674 = 1;
    double Td956111671;
    Td956111671 = Ta955911673[Ti956011674].d;
    double Td956211672;
    Td956211672 = o_param_r310898_fun(m10991, NULL);
    double Td956311665;
    Td956311665 =  Td956111671 * Td956211672;
    Value* Ta956411669;
    Ta956411669 = nvector_w;
    int Ti956511670;
    Ti956511670 = 2;
    double Td956611667;
    Td956611667 = Ta956411669[Ti956511670].d;
    double Td956711668;
    Td956711668 = o_param_r210896_fun(m10991, NULL);
    double Td956811666;
    Td956811666 =  Td956611667 * Td956711668;
    double Td956911664;
    Td956911664 = Td956311665 + Td956811666;
    double Td957011663;
    Td957011663 = fhalf10860_fun(Td956911664, NULL);
    double Td957111661;
    Td957111661 = Td955811662 + Td957011663;
    int Tu898711614;
    Ta955211659[Ti955311660].d = Td957111661;
    Value* Ta957211639;
    Ta957211639 = nvector;
    int Ti957311640;
    Ti957311640 = 1;
    Value* Ta957411657;
    Ta957411657 = nvector_w;
    int Ti957511658;
    Ti957511658 = 1;
    double Td957611655;
    Td957611655 = Ta957411657[Ti957511658].d;
    double Td957711656;
    Td957711656 = o_param_b10874_fun(m10991, NULL);
    double Td957811642;
    Td957811642 =  Td957611655 * Td957711656;
    Value* Ta957911653;
    Ta957911653 = nvector_w;
    int Ti958011654;
    Ti958011654 = 0;
    double Td958111651;
    Td958111651 = Ta957911653[Ti958011654].d;
    double Td958211652;
    Td958211652 = o_param_r310898_fun(m10991, NULL);
    double Td958311645;
    Td958311645 =  Td958111651 * Td958211652;
    Value* Ta958411649;
    Ta958411649 = nvector_w;
    int Ti958511650;
    Ti958511650 = 2;
    double Td958611647;
    Td958611647 = Ta958411649[Ti958511650].d;
    double Td958711648;
    Td958711648 = o_param_r110894_fun(m10991, NULL);
    double Td958811646;
    Td958811646 =  Td958611647 * Td958711648;
    double Td958911644;
    Td958911644 = Td958311645 + Td958811646;
    double Td959011643;
    Td959011643 = fhalf10860_fun(Td958911644, NULL);
    double Td959111641;
    Td959111641 = Td957811642 + Td959011643;
    int Tu898611615;
    Ta957211639[Ti957311640].d = Td959111641;
    Value* Ta959211619;
    Ta959211619 = nvector;
    int Ti959311620;
    Ti959311620 = 2;
    Value* Ta959411637;
    Ta959411637 = nvector_w;
    int Ti959511638;
    Ti959511638 = 2;
    double Td959611635;
    Td959611635 = Ta959411637[Ti959511638].d;
    double Td959711636;
    Td959711636 = o_param_c10876_fun(m10991, NULL);
    double Td959811622;
    Td959811622 =  Td959611635 * Td959711636;
    Value* Ta959911633;
    Ta959911633 = nvector_w;
    int Ti960011634;
    Ti960011634 = 0;
    double Td960111631;
    Td960111631 = Ta959911633[Ti960011634].d;
    double Td960211632;
    Td960211632 = o_param_r210896_fun(m10991, NULL);
    double Td960311625;
    Td960311625 =  Td960111631 * Td960211632;
    Value* Ta960411629;
    Ta960411629 = nvector_w;
    int Ti960511630;
    Ti960511630 = 1;
    double Td960611627;
    Td960611627 = Ta960411629[Ti960511630].d;
    double Td960711628;
    Td960711628 = o_param_r110894_fun(m10991, NULL);
    double Td960811626;
    Td960811626 =  Td960611627 * Td960711628;
    double Td960911624;
    Td960911624 = Td960311625 + Td960811626;
    double Td961011623;
    Td961011623 = fhalf10860_fun(Td960911624, NULL);
    double Td961111621;
    Td961111621 = Td959811622 + Td961011623;
    int Tu898511616;
    Ta959211619[Ti959311620].d = Td961111621;
    Value* Ta961211617;
    Ta961211617 = nvector;
    bool Tb961311618;
    Tb961311618 = o_isinvert10868_fun(m10991, NULL);
    result = normalize_vector10900_fun(Ta961211617, Tb961311618, NULL);
    return result;
}

int get_nvector10993_fun(int* m10994, Value* p10995, Value *env){
    int result;
    int m_shape11605;
    m_shape11605 = o_form10864_fun(m10994, NULL);
    int Ti952911606;
    Ti952911606 = 1;
    if(m_shape11605 == Ti952911606){
	int Tu953011610;
	Tu953011610 = 1;
	result = get_nvector_rect10983_fun(Tu953011610, NULL);
    }
    else{
	int Ti953111607;
	Ti953111607 = 2;
	if(m_shape11605 == Ti953111607){
	    result = get_nvector_plane10985_fun(m10994, NULL);
	}
	else{
	    int Ti953211608;
	    Ti953211608 = o_isrot10870_fun(m10994, NULL);
	    int Ti953311609;
	    Ti953311609 = 0;
	    if(Ti953211608 == Ti953311609){
		result = get_nvector_second_norot10987_fun(m10994, p10995, NULL);
	    }
	    else{
		result = get_nvector_second_rot10990_fun(m10994, p10995, NULL);
	    }
	}
    }
    return result;
}

int utexture10996_fun(int* m10997, Value* p10998, Value *env){
    int result;
    int m_tex11447;
    m_tex11447 = o_texturetype10862_fun(m10997, NULL);
    Value* Ta940011602;
    Ta940011602 = texture_color;
    int Ti940111603;
    Ti940111603 = 0;
    double Td940211604;
    Td940211604 = o_color_red10888_fun(m10997, NULL);
    int Tu899511448;
    Ta940011602[Ti940111603].d = Td940211604;
    Value* Ta940311599;
    Ta940311599 = texture_color;
    int Ti940411600;
    Ti940411600 = 1;
    double Td940511601;
    Td940511601 = o_color_green10890_fun(m10997, NULL);
    int Tu899411449;
    Ta940311599[Ti940411600].d = Td940511601;
    Value* Ta940611596;
    Ta940611596 = texture_color;
    int Ti940711597;
    Ti940711597 = 2;
    double Td940811598;
    Td940811598 = o_color_blue10892_fun(m10997, NULL);
    int Tu899311450;
    Ta940611596[Ti940711597].d = Td940811598;
    int Ti940911451;
    Ti940911451 = 1;
    if(m_tex11447 == Ti940911451){
	int Ti941011595;
	Ti941011595 = 0;
	double Td941111593;
	Td941111593 = p10998[Ti941011595].d;
	double Td941211594;
	Td941211594 = o_param_x10878_fun(m10997, NULL);
	double w111566;
	w111566 = Td941111593 - Td941211594;
	double Td941311592;
	Td941311592 = 0.050000;
	double Td941411591;
	Td941411591 =  w111566 * Td941311592;
	double Td941511589;
	Td941511589 = floor(Td941411591);
	double Td941611590;
	Td941611590 = 20.000000;
	double d111586;
	d111586 =  Td941511589 * Td941611590;
	double Td941711587;
	Td941711587 = 10.000000;
	double Td941811588;
	Td941811588 = w111566 - d111586;
	bool flag111567;
	if(Td941711587 <= Td941811588){
	    flag111567 = 0;
	}
	else{
	    flag111567 = 1;
	}
	int Ti941911585;
	Ti941911585 = 2;
	double Td942011583;
	Td942011583 = p10998[Ti941911585].d;
	double Td942111584;
	Td942111584 = o_param_z10882_fun(m10997, NULL);
	double w311568;
	w311568 = Td942011583 - Td942111584;
	double Td942211582;
	Td942211582 = 0.050000;
	double Td942311581;
	Td942311581 =  w311568 * Td942211582;
	double Td942411579;
	Td942411579 = floor(Td942311581);
	double Td942511580;
	Td942511580 = 20.000000;
	double d211576;
	d211576 =  Td942411579 * Td942511580;
	double Td942611577;
	Td942611577 = 10.000000;
	double Td942711578;
	Td942711578 = w311568 - d211576;
	bool flag211569;
	if(Td942611577 <= Td942711578){
	    flag211569 = 0;
	}
	else{
	    flag211569 = 1;
	}
	Value* Ta942811570;
	Ta942811570 = texture_color;
	int Ti942911571;
	Ti942911571 = 1;
	int Ti943011573;
	Ti943011573 = 0;
	double Td943311572;
	if(flag111567 == Ti943011573){
	    int Ti943111575;
	    Ti943111575 = 0;
	    if(flag211569 == Ti943111575){
		Td943311572 = 255.000000;
	    }
	    else{
		Td943311572 = 0.000000;
	    }
	}
	else{
	    int Ti943211574;
	    Ti943211574 = 0;
	    if(flag211569 == Ti943211574){
		Td943311572 = 0.000000;
	    }
	    else{
		Td943311572 = 255.000000;
	    }
	}
	Ta942811570[Ti942911571].d = Td943311572;
    }
    else{
	int Ti943411452;
	Ti943411452 = 2;
	if(m_tex11447 == Ti943411452){
	    int Ti943511565;
	    Ti943511565 = 1;
	    double Td943611563;
	    Td943611563 = p10998[Ti943511565].d;
	    double Td943711564;
	    Td943711564 = 0.250000;
	    double Td943811562;
	    Td943811562 =  Td943611563 * Td943711564;
	    double Td943911561;
	    Td943911561 = sin(Td943811562);
	    double w211549;
	    w211549 = fsqr10858_fun(Td943911561, NULL);
	    Value* Ta944011557;
	    Ta944011557 = texture_color;
	    int Ti944111558;
	    Ti944111558 = 0;
	    double Td944211560;
	    Td944211560 = 255.000000;
	    double Td944311559;
	    Td944311559 =  Td944211560 * w211549;
	    int Tu899111550;
	    Ta944011557[Ti944111558].d = Td944311559;
	    Value* Ta944411551;
	    Ta944411551 = texture_color;
	    int Ti944511552;
	    Ti944511552 = 1;
	    double Td944611554;
	    Td944611554 = 255.000000;
	    double Td944711556;
	    Td944711556 = 1.000000;
	    double Td944811555;
	    Td944811555 = Td944711556 - w211549;
	    double Td944911553;
	    Td944911553 =  Td944611554 * Td944811555;
	    Ta944411551[Ti944511552].d = Td944911553;
	}
	else{
	    int Ti945011453;
	    Ti945011453 = 3;
	    if(m_tex11447 == Ti945011453){
		int Ti945111548;
		Ti945111548 = 0;
		double Td945211546;
		Td945211546 = p10998[Ti945111548].d;
		double Td945311547;
		Td945311547 = o_param_x10878_fun(m10997, NULL);
		double w111518;
		w111518 = Td945211546 - Td945311547;
		int Ti945411545;
		Ti945411545 = 2;
		double Td945511543;
		Td945511543 = p10998[Ti945411545].d;
		double Td945611544;
		Td945611544 = o_param_z10882_fun(m10997, NULL);
		double w311519;
		w311519 = Td945511543 - Td945611544;
		double Td945711541;
		Td945711541 = fsqr10858_fun(w111518, NULL);
		double Td945811542;
		Td945811542 = fsqr10858_fun(w311519, NULL);
		double Td945911540;
		Td945911540 = Td945711541 + Td945811542;
		double Td946011538;
		Td946011538 = sqrt(Td945911540);
		double Td946111539;
		Td946111539 = 10.000000;
		double w211520;
		w211520 = Td946011538 / Td946111539;
		double Td946211537;
		Td946211537 = floor(w211520);
		double Td946311535;
		Td946311535 = w211520 - Td946211537;
		double Td946411536;
		Td946411536 = 3.141593;
		double w411521;
		w411521 =  Td946311535 * Td946411536;
		double Td946511534;
		Td946511534 = cos(w411521);
		double cws11522;
		cws11522 = fsqr10858_fun(Td946511534, NULL);
		Value* Ta946611530;
		Ta946611530 = texture_color;
		int Ti946711531;
		Ti946711531 = 1;
		double Td946811533;
		Td946811533 = 255.000000;
		double Td946911532;
		Td946911532 =  cws11522 * Td946811533;
		int Tu899211523;
		Ta946611530[Ti946711531].d = Td946911532;
		Value* Ta947011524;
		Ta947011524 = texture_color;
		int Ti947111525;
		Ti947111525 = 2;
		double Td947211529;
		Td947211529 = 1.000000;
		double Td947311527;
		Td947311527 = Td947211529 - cws11522;
		double Td947411528;
		Td947411528 = 255.000000;
		double Td947511526;
		Td947511526 =  Td947311527 * Td947411528;
		Ta947011524[Ti947111525].d = Td947511526;
	    }
	    else{
		int Ti947611454;
		Ti947611454 = 4;
		if(m_tex11447 == Ti947611454){
		    int Ti947711517;
		    Ti947711517 = 0;
		    double Td947811515;
		    Td947811515 = p10998[Ti947711517].d;
		    double Td947911516;
		    Td947911516 = o_param_x10878_fun(m10997, NULL);
		    double Td948011512;
		    Td948011512 = Td947811515 - Td947911516;
		    double Td948111514;
		    Td948111514 = o_param_a10872_fun(m10997, NULL);
		    double Td948211513;
		    Td948211513 = sqrt(Td948111514);
		    double w111455;
		    w111455 =  Td948011512 * Td948211513;
		    int Ti948311511;
		    Ti948311511 = 2;
		    double Td948411509;
		    Td948411509 = p10998[Ti948311511].d;
		    double Td948511510;
		    Td948511510 = o_param_z10882_fun(m10997, NULL);
		    double Td948611506;
		    Td948611506 = Td948411509 - Td948511510;
		    double Td948711508;
		    Td948711508 = o_param_c10876_fun(m10997, NULL);
		    double Td948811507;
		    Td948811507 = sqrt(Td948711508);
		    double w311456;
		    w311456 =  Td948611506 * Td948811507;
		    double Td948911504;
		    Td948911504 = fsqr10858_fun(w111455, NULL);
		    double Td949011505;
		    Td949011505 = fsqr10858_fun(w311456, NULL);
		    double Td949111503;
		    Td949111503 = Td948911504 + Td949011505;
		    double w411457;
		    w411457 = sqrt(Td949111503);
		    double Td949211495;
		    Td949211495 = 0.000100;
		    double Td949311496;
		    Td949311496 = fabs(w111455);
		    double w711458;
		    if(Td949211495 <= Td949311496){
			double Td949411502;
			Td949411502 = w311456 / w111455;
			double w511497;
			w511497 = fabs(Td949411502);
			double Td949511498;
			Td949511498 = atan(w511497);
			double Td949611500;
			Td949611500 = 30.000000;
			double Td949711501;
			Td949711501 = 3.141593;
			double Td949811499;
			Td949811499 = Td949611500 / Td949711501;
			w711458 =  Td949511498 * Td949811499;
		    }
		    else{
			w711458 = 15.000000;
		    }
		    double Td949911494;
		    Td949911494 = floor(w711458);
		    double w911459;
		    w911459 = w711458 - Td949911494;
		    int Ti950011493;
		    Ti950011493 = 1;
		    double Td950111491;
		    Td950111491 = p10998[Ti950011493].d;
		    double Td950211492;
		    Td950211492 = o_param_y10880_fun(m10997, NULL);
		    double Td950311488;
		    Td950311488 = Td950111491 - Td950211492;
		    double Td950411490;
		    Td950411490 = o_param_b10874_fun(m10997, NULL);
		    double Td950511489;
		    Td950511489 = sqrt(Td950411490);
		    double w211460;
		    w211460 =  Td950311488 * Td950511489;
		    double Td950611480;
		    Td950611480 = 0.000100;
		    double Td950711481;
		    Td950711481 = fabs(w711458);
		    double w811461;
		    if(Td950611480 <= Td950711481){
			double Td950811487;
			Td950811487 = w211460 / w411457;
			double w611482;
			w611482 = fabs(Td950811487);
			double Td950911483;
			Td950911483 = atan(w611482);
			double Td951011485;
			Td951011485 = 30.000000;
			double Td951111486;
			Td951111486 = 3.141593;
			double Td951211484;
			Td951211484 = Td951011485 / Td951111486;
			w811461 =  Td950911483 * Td951211484;
		    }
		    else{
			w811461 = 15.000000;
		    }
		    double Td951311479;
		    Td951311479 = floor(w811461);
		    double w1011462;
		    w1011462 = w811461 - Td951311479;
		    double Td951411475;
		    Td951411475 = 0.150000;
		    double Td951511478;
		    Td951511478 = 0.500000;
		    double Td951611477;
		    Td951611477 = Td951511478 - w911459;
		    double Td951711476;
		    Td951711476 = fsqr10858_fun(Td951611477, NULL);
		    double Td951811471;
		    Td951811471 = Td951411475 - Td951711476;
		    double Td951911474;
		    Td951911474 = 0.500000;
		    double Td952011473;
		    Td952011473 = Td951911474 - w1011462;
		    double Td952111472;
		    Td952111472 = fsqr10858_fun(Td952011473, NULL);
		    double w1111463;
		    w1111463 = Td951811471 - Td952111472;
		    Value* Ta952211464;
		    Ta952211464 = texture_color;
		    int Ti952311465;
		    Ti952311465 = 2;
		    double Td952411467;
		    Td952411467 = 0.000000;
		    double Td952811466;
		    if(w1111463 <= Td952411467){
			Td952811466 = 0.000000;
		    }
		    else{
			double Td952511469;
			Td952511469 = 255.000000;
			double Td952611470;
			Td952611470 = 0.300000;
			double Td952711468;
			Td952711468 = Td952511469 / Td952611470;
			Td952811466 =  w1111463 * Td952711468;
		    }
		    Ta952211464[Ti952311465].d = Td952811466;
		}
		else{
		    result = 1;
		}
	    }
	}
    }
    return result;
}

double in_prod10999_fun(Value* v111000, Value* v211001, Value *env){
    double result;
    int Ti938411446;
    Ti938411446 = 0;
    double Td938511443;
    Td938511443 = v111000[Ti938411446].d;
    int Ti938611445;
    Ti938611445 = 0;
    double Td938711444;
    Td938711444 = v211001[Ti938611445].d;
    double Td938811437;
    Td938811437 =  Td938511443 * Td938711444;
    int Ti938911442;
    Ti938911442 = 1;
    double Td939011439;
    Td939011439 = v111000[Ti938911442].d;
    int Ti939111441;
    Ti939111441 = 1;
    double Td939211440;
    Td939211440 = v211001[Ti939111441].d;
    double Td939311438;
    Td939311438 =  Td939011439 * Td939211440;
    double Td939411431;
    Td939411431 = Td938811437 + Td939311438;
    int Ti939511436;
    Ti939511436 = 2;
    double Td939611433;
    Td939611433 = v111000[Ti939511436].d;
    int Ti939711435;
    Ti939711435 = 2;
    double Td939811434;
    Td939811434 = v211001[Ti939711435].d;
    double Td939911432;
    Td939911432 =  Td939611433 * Td939811434;
    result = Td939411431 + Td939911432;
    return result;
}

int accumulate_vec_mul11002_fun(Value* v111003, Value* v211004, double w11005, Value *env){
    int result;
    int Ti936311424;
    Ti936311424 = 0;
    int Ti936411430;
    Ti936411430 = 0;
    double Td936511426;
    Td936511426 = v111003[Ti936411430].d;
    int Ti936611429;
    Ti936611429 = 0;
    double Td936711428;
    Td936711428 = v211004[Ti936611429].d;
    double Td936811427;
    Td936811427 =  w11005 * Td936711428;
    double Td936911425;
    Td936911425 = Td936511426 + Td936811427;
    int Tu899711408;
    v111003[Ti936311424].d = Td936911425;
    int Ti937011417;
    Ti937011417 = 1;
    int Ti937111423;
    Ti937111423 = 1;
    double Td937211419;
    Td937211419 = v111003[Ti937111423].d;
    int Ti937311422;
    Ti937311422 = 1;
    double Td937411421;
    Td937411421 = v211004[Ti937311422].d;
    double Td937511420;
    Td937511420 =  w11005 * Td937411421;
    double Td937611418;
    Td937611418 = Td937211419 + Td937511420;
    int Tu899611409;
    v111003[Ti937011417].d = Td937611418;
    int Ti937711410;
    Ti937711410 = 2;
    int Ti937811416;
    Ti937811416 = 2;
    double Td937911412;
    Td937911412 = v111003[Ti937811416].d;
    int Ti938011415;
    Ti938011415 = 2;
    double Td938111414;
    Td938111414 = v211004[Ti938011415].d;
    double Td938211413;
    Td938211413 =  w11005 * Td938111414;
    double Td938311411;
    Td938311411 = Td937911412 + Td938211413;
    v111003[Ti937711410].d = Td938311411;
    return result;
}

int raytracing11006_fun(int nref11007, double energy11008, Value *env){
    int result;
    Value* Ta924911406;
    Ta924911406 = viewpoint;
    Value* Ta925011407;
    Ta925011407 = vscan;
    bool crashed_p11270;
    crashed_p11270 = tracer10980_fun(Ta924911406, Ta925011407, NULL);
    int Ti925111372;
    Ti925111372 = 0;
    int Tu900911271;
    if(crashed_p11270 == Ti925111372){
	int Ti925211373;
	Ti925211373 = 0;
	if(nref11007 == Ti925211373){
	    Tu900911271 = 1;
	}
	else{
	    Value* Ta925311404;
	    Ta925311404 = vscan;
	    Value* Ta925411405;
	    Ta925411405 = light;
	    double Td925511403;
	    Td925511403 = in_prod10999_fun(Ta925311404, Ta925411405, NULL);
	    double hl11374;
	    hl11374 = -Td925511403;
	    double Td925611375;
	    Td925611375 = 0.000000;
	    if(hl11374 <= Td925611375){
		Tu900911271 = 1;
	    }
	    else{
		double Td925711402;
		Td925711402 = fsqr10858_fun(hl11374, NULL);
		double Td925811401;
		Td925811401 =  Td925711402 * hl11374;
		double Td925911397;
		Td925911397 =  Td925811401 * energy11008;
		Value* Ta926011399;
		Ta926011399 = beam;
		int Ti926111400;
		Ti926111400 = 0;
		double Td926211398;
		Td926211398 = Ta926011399[Ti926111400].d;
		double ihl11376;
		ihl11376 =  Td925911397 * Td926211398;
		Value* Ta926311391;
		Ta926311391 = rgb;
		int Ti926411392;
		Ti926411392 = 0;
		Value* Ta926511395;
		Ta926511395 = rgb;
		int Ti926611396;
		Ti926611396 = 0;
		double Td926711394;
		Td926711394 = Ta926511395[Ti926611396].d;
		double Td926811393;
		Td926811393 = Td926711394 + ihl11376;
		int Tu899911377;
		Ta926311391[Ti926411392].d = Td926811393;
		Value* Ta926911385;
		Ta926911385 = rgb;
		int Ti927011386;
		Ti927011386 = 1;
		Value* Ta927111389;
		Ta927111389 = rgb;
		int Ti927211390;
		Ti927211390 = 1;
		double Td927311388;
		Td927311388 = Ta927111389[Ti927211390].d;
		double Td927411387;
		Td927411387 = Td927311388 + ihl11376;
		int Tu899811378;
		Ta926911385[Ti927011386].d = Td927411387;
		Value* Ta927511379;
		Ta927511379 = rgb;
		int Ti927611380;
		Ti927611380 = 2;
		Value* Ta927711383;
		Ta927711383 = rgb;
		int Ti927811384;
		Ti927811384 = 2;
		double Td927911382;
		Td927911382 = Ta927711383[Ti927811384].d;
		double Td928011381;
		Td928011381 = Td927911382 + ihl11376;
		Ta927511379[Ti927611380].d = Td928011381;
	    }
	}
    }
    else{
	Tu900911271 = 1;
    }
    int Ti928111272;
    Ti928111272 = 0;
    if(crashed_p11270 == Ti928111272){
	result = 1;
    }
    else{
	Value* Ta928211368;
	Ta928211368 = objects;
	Value* Ta928311370;
	Ta928311370 = crashed_object;
	int Ti928411371;
	Ti928411371 = 0;
	int Ti928511369;
	Ti928511369 = Ta928311370[Ti928411371].i;
	int* cobj11273;
	cobj11273 = Ta928211368[Ti928511369].a;
	Value* Ta928611367;
	Ta928611367 = crashed_point;
	int Tu900811274;
	Tu900811274 = get_nvector10993_fun(cobj11273, Ta928611367, NULL);
	int Ti928711362;
	Ti928711362 = 0;
	Value* Ta928811365;
	Ta928811365 = or_net;
	int Ti928911366;
	Ti928911366 = 0;
	Value* Ta929011363;
	Ta929011363 = Ta928811365[Ti928911366].a;
	Value* Ta929111364;
	Ta929111364 = crashed_point;
	bool Tb929211351;
	Tb929211351 = shadow_check_one_or_matrix10967_fun(Ti928711362, Ta929011363, Ta929111364, NULL);
	int Ti929311352;
	Ti929311352 = 0;
	double bright11275;
	if(Tb929211351 == Ti929311352){
	    Value* Ta929411360;
	    Ta929411360 = nvector;
	    Value* Ta929511361;
	    Ta929511361 = light;
	    double Td929611359;
	    Td929611359 = in_prod10999_fun(Ta929411360, Ta929511361, NULL);
	    double br11353;
	    br11353 = -Td929611359;
	    double Td929711357;
	    Td929711357 = 0.000000;
	    double br111354;
	    if(Td929711357 <= br11353){
		double Td929811358;
		Td929811358 = 0.200000;
		br111354 = br11353 + Td929811358;
	    }
	    else{
		br111354 = 0.200000;
	    }
	    double Td929911355;
	    Td929911355 =  br111354 * energy11008;
	    double Td930011356;
	    Td930011356 = o_diffuse10884_fun(cobj11273, NULL);
	    bright11275 =  Td929911355 * Td930011356;
	}
	else{
	    bright11275 = 0.000000;
	}
	Value* Ta930111350;
	Ta930111350 = crashed_point;
	int Tu900711276;
	Tu900711276 = utexture10996_fun(cobj11273, Ta930111350, NULL);
	Value* Ta930211348;
	Ta930211348 = rgb;
	Value* Ta930311349;
	Ta930311349 = texture_color;
	int Tu900611277;
	Tu900611277 = accumulate_vec_mul11002_fun(Ta930211348, Ta930311349, bright11275, NULL);
	int Ti930411278;
	Ti930411278 = 4;
	if(nref11007 <= Ti930411278){
	    double Td930511279;
	    Td930511279 = 0.100000;
	    if(energy11008 <= Td930511279){
		result = 1;
	    }
	    else{
		double Td930611344;
		Td930611344 = -2.000000;
		Value* Ta930711346;
		Ta930711346 = vscan;
		Value* Ta930811347;
		Ta930811347 = nvector;
		double Td930911345;
		Td930911345 = in_prod10999_fun(Ta930711346, Ta930811347, NULL);
		double w11280;
		w11280 =  Td930611344 * Td930911345;
		Value* Ta931011342;
		Ta931011342 = vscan;
		Value* Ta931111343;
		Ta931111343 = nvector;
		int Tu900511281;
		Tu900511281 = accumulate_vec_mul11002_fun(Ta931011342, Ta931111343, w11280, NULL);
		int m_surface11282;
		m_surface11282 = o_reflectiontype10866_fun(cobj11273, NULL);
		int Ti931211283;
		Ti931211283 = 1;
		if(m_surface11282 == Ti931211283){
		    double Td931311309;
		    Td931311309 = 0.000000;
		    double Td931411310;
		    Td931411310 = o_hilight10886_fun(cobj11273, NULL);
		    if(Td931311309 == Td931411310){
			result = 1;
		    }
		    else{
			Value* Ta931511340;
			Ta931511340 = vscan;
			Value* Ta931611341;
			Ta931611341 = light;
			double Td931711339;
			Td931711339 = in_prod10999_fun(Ta931511340, Ta931611341, NULL);
			double hl11311;
			hl11311 = -Td931711339;
			double Td931811312;
			Td931811312 = 0.000000;
			if(hl11311 <= Td931811312){
			    result = 1;
			}
			else{
			    double Td931911338;
			    Td931911338 = fsqr10858_fun(hl11311, NULL);
			    double Td932011337;
			    Td932011337 = fsqr10858_fun(Td931911338, NULL);
			    double Td932111336;
			    Td932111336 =  Td932011337 * energy11008;
			    double Td932211334;
			    Td932211334 =  Td932111336 * bright11275;
			    double Td932311335;
			    Td932311335 = o_hilight10886_fun(cobj11273, NULL);
			    double ihl11313;
			    ihl11313 =  Td932211334 * Td932311335;
			    Value* Ta932411328;
			    Ta932411328 = rgb;
			    int Ti932511329;
			    Ti932511329 = 0;
			    Value* Ta932611332;
			    Ta932611332 = rgb;
			    int Ti932711333;
			    Ti932711333 = 0;
			    double Td932811331;
			    Td932811331 = Ta932611332[Ti932711333].d;
			    double Td932911330;
			    Td932911330 = Td932811331 + ihl11313;
			    int Tu900111314;
			    Ta932411328[Ti932511329].d = Td932911330;
			    Value* Ta933011322;
			    Ta933011322 = rgb;
			    int Ti933111323;
			    Ti933111323 = 1;
			    Value* Ta933211326;
			    Ta933211326 = rgb;
			    int Ti933311327;
			    Ti933311327 = 1;
			    double Td933411325;
			    Td933411325 = Ta933211326[Ti933311327].d;
			    double Td933511324;
			    Td933511324 = Td933411325 + ihl11313;
			    int Tu900011315;
			    Ta933011322[Ti933111323].d = Td933511324;
			    Value* Ta933611316;
			    Ta933611316 = rgb;
			    int Ti933711317;
			    Ti933711317 = 2;
			    Value* Ta933811320;
			    Ta933811320 = rgb;
			    int Ti933911321;
			    Ti933911321 = 2;
			    double Td934011319;
			    Td934011319 = Ta933811320[Ti933911321].d;
			    double Td934111318;
			    Td934111318 = Td934011319 + ihl11313;
			    Ta933611316[Ti933711317].d = Td934111318;
			}
		    }
		}
		else{
		    int Ti934211284;
		    Ti934211284 = 2;
		    if(m_surface11282 == Ti934211284){
			Value* Ta934311304;
			Ta934311304 = viewpoint;
			int Ti934411305;
			Ti934411305 = 0;
			Value* Ta934511307;
			Ta934511307 = crashed_point;
			int Ti934611308;
			Ti934611308 = 0;
			double Td934711306;
			Td934711306 = Ta934511307[Ti934611308].d;
			int Tu900411285;
			Ta934311304[Ti934411305].d = Td934711306;
			Value* Ta934811299;
			Ta934811299 = viewpoint;
			int Ti934911300;
			Ti934911300 = 1;
			Value* Ta935011302;
			Ta935011302 = crashed_point;
			int Ti935111303;
			Ti935111303 = 1;
			double Td935211301;
			Td935211301 = Ta935011302[Ti935111303].d;
			int Tu900311286;
			Ta934811299[Ti934911300].d = Td935211301;
			Value* Ta935311294;
			Ta935311294 = viewpoint;
			int Ti935411295;
			Ti935411295 = 2;
			Value* Ta935511297;
			Ta935511297 = crashed_point;
			int Ti935611298;
			Ti935611298 = 2;
			double Td935711296;
			Td935711296 = Ta935511297[Ti935611298].d;
			int Tu900211287;
			Ta935311294[Ti935411295].d = Td935711296;
			double Td935811292;
			Td935811292 = 1.000000;
			double Td935911293;
			Td935911293 = o_diffuse10884_fun(cobj11273, NULL);
			double Td936011291;
			Td936011291 = Td935811292 - Td935911293;
			double energy211288;
			energy211288 =  energy11008 * Td936011291;
			int Ti936111290;
			Ti936111290 = 1;
			int Ti936211289;
			Ti936211289 = nref11007 + Ti936111290;
			result = raytracing11006_fun(Ti936211289, energy211288, NULL);
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

int write_rgb11009_fun(int Tu901011010, Value *env){
    int result;
    Value* Ta923711268;
    Ta923711268 = rgb;
    int Ti923811269;
    Ti923811269 = 0;
    double Td923911267;
    Td923911267 = Ta923711268[Ti923811269].d;
    int red11250;
    red11250 = (int) Td923911267;
    int Ti924011266;
    Ti924011266 = 255;
    int red11251;
    if(red11250 <= Ti924011266){
	red11251 = red11250;
    }
    else{
	red11251 = 255;
    }
    int Tu901211252;
    printf("%d", red11251);
    Value* Ta924111264;
    Ta924111264 = rgb;
    int Ti924211265;
    Ti924211265 = 1;
    double Td924311263;
    Td924311263 = Ta924111264[Ti924211265].d;
    int green11253;
    green11253 = (int) Td924311263;
    int Ti924411262;
    Ti924411262 = 255;
    int green11254;
    if(green11253 <= Ti924411262){
	green11254 = green11253;
    }
    else{
	green11254 = 255;
    }
    int Tu901111255;
    printf("%d", green11254);
    Value* Ta924511260;
    Ta924511260 = rgb;
    int Ti924611261;
    Ti924611261 = 2;
    double Td924711259;
    Td924711259 = Ta924511260[Ti924611261].d;
    int blue11256;
    blue11256 = (int) Td924711259;
    int Ti924811258;
    Ti924811258 = 255;
    int blue11257;
    if(blue11256 <= Ti924811258){
	blue11257 = blue11256;
    }
    else{
	blue11257 = 255;
    }
    printf("%d", blue11257);
    return result;
}

int write_ppm_header11011_fun(int Tu901311012, Value *env){
    int result;
    int Ti922211249;
    Ti922211249 = 80;
    int Tu902111227;
    printf("%d", Ti922211249);
    int Ti922311247;
    Ti922311247 = 48;
    int Ti922411248;
    Ti922411248 = 6;
    int Ti922511246;
    Ti922511246 = Ti922311247 + Ti922411248;
    int Tu902011228;
    printf("%d", Ti922511246);
    int Ti922611245;
    Ti922611245 = 10;
    int Tu901911229;
    printf("%d", Ti922611245);
    Value* Ta922711243;
    Ta922711243 = size;
    int Ti922811244;
    Ti922811244 = 0;
    int Ti922911242;
    Ti922911242 = Ta922711243[Ti922811244].i;
    int Tu901811230;
    printf("%d", Ti922911242);
    int Ti923011241;
    Ti923011241 = 32;
    int Tu901711231;
    printf("%d", Ti923011241);
    Value* Ta923111239;
    Ta923111239 = size;
    int Ti923211240;
    Ti923211240 = 1;
    int Ti923311238;
    Ti923311238 = Ta923111239[Ti923211240].i;
    int Tu901611232;
    printf("%d", Ti923311238);
    int Ti923411237;
    Ti923411237 = 10;
    int Tu901511233;
    printf("%d", Ti923411237);
    int Ti923511236;
    Ti923511236 = 255;
    int Tu901411234;
    printf("%d", Ti923511236);
    int Ti923611235;
    Ti923611235 = 10;
    printf("%d", Ti923611235);
    return result;
}

int scan_point11013_fun(int scanx11014, Value *env){
    int result;
    Value* Ta912511225;
    Ta912511225 = size;
    int Ti912611226;
    Ti912611226 = 0;
    int Ti912711114;
    Ti912711114 = Ta912511225[Ti912611226].i;
    if(Ti912711114 <= scanx11014){
	result = 1;
    }
    else{
	double Td912811221;
	Td912811221 = (double) scanx11014;
	Value* Ta912911223;
	Ta912911223 = scan_offset;
	int Ti913011224;
	Ti913011224 = 0;
	double Td913111222;
	Td913111222 = Ta912911223[Ti913011224].d;
	double Td913211217;
	Td913211217 = Td912811221 - Td913111222;
	Value* Ta913311219;
	Ta913311219 = scan_d;
	int Ti913411220;
	Ti913411220 = 0;
	double Td913511218;
	Td913511218 = Ta913311219[Ti913411220].d;
	double sscanx11115;
	sscanx11115 =  Td913211217 * Td913511218;
	Value* Ta913611207;
	Ta913611207 = vscan;
	int Ti913711208;
	Ti913711208 = 0;
	Value* Ta913811215;
	Ta913811215 = cos_v;
	int Ti913911216;
	Ti913911216 = 1;
	double Td914011214;
	Td914011214 = Ta913811215[Ti913911216].d;
	double Td914111210;
	Td914111210 =  sscanx11115 * Td914011214;
	Value* Ta914211212;
	Ta914211212 = wscan;
	int Ti914311213;
	Ti914311213 = 0;
	double Td914411211;
	Td914411211 = Ta914211212[Ti914311213].d;
	double Td914511209;
	Td914511209 = Td914111210 + Td914411211;
	int Tu903511116;
	Ta913611207[Ti913711208].d = Td914511209;
	Value* Ta914611194;
	Ta914611194 = vscan;
	int Ti914711195;
	Ti914711195 = 1;
	Value* Ta914811205;
	Ta914811205 = scan_sscany;
	int Ti914911206;
	Ti914911206 = 0;
	double Td915011201;
	Td915011201 = Ta914811205[Ti914911206].d;
	Value* Ta915111203;
	Ta915111203 = cos_v;
	int Ti915211204;
	Ti915211204 = 0;
	double Td915311202;
	Td915311202 = Ta915111203[Ti915211204].d;
	double Td915411197;
	Td915411197 =  Td915011201 * Td915311202;
	Value* Ta915511199;
	Ta915511199 = vp;
	int Ti915611200;
	Ti915611200 = 1;
	double Td915711198;
	Td915711198 = Ta915511199[Ti915611200].d;
	double Td915811196;
	Td915811196 = Td915411197 - Td915711198;
	int Tu903411117;
	Ta914611194[Ti914711195].d = Td915811196;
	Value* Ta915911183;
	Ta915911183 = vscan;
	int Ti916011184;
	Ti916011184 = 2;
	double Td916111190;
	Td916111190 = -sscanx11115;
	Value* Ta916211192;
	Ta916211192 = sin_v;
	int Ti916311193;
	Ti916311193 = 1;
	double Td916411191;
	Td916411191 = Ta916211192[Ti916311193].d;
	double Td916511186;
	Td916511186 =  Td916111190 * Td916411191;
	Value* Ta916611188;
	Ta916611188 = wscan;
	int Ti916711189;
	Ti916711189 = 2;
	double Td916811187;
	Td916811187 = Ta916611188[Ti916711189].d;
	double Td916911185;
	Td916911185 = Td916511186 + Td916811187;
	int Tu903311118;
	Ta915911183[Ti916011184].d = Td916911185;
	double Td917011179;
	Td917011179 = fsqr10858_fun(sscanx11115, NULL);
	Value* Ta917111181;
	Ta917111181 = scan_met1;
	int Ti917211182;
	Ti917211182 = 0;
	double Td917311180;
	Td917311180 = Ta917111181[Ti917211182].d;
	double Td917411178;
	Td917411178 = Td917011179 + Td917311180;
	double metric11119;
	metric11119 = sqrt(Td917411178);
	Value* Ta917511172;
	Ta917511172 = vscan;
	int Ti917611173;
	Ti917611173 = 0;
	Value* Ta917711176;
	Ta917711176 = vscan;
	int Ti917811177;
	Ti917811177 = 0;
	double Td917911175;
	Td917911175 = Ta917711176[Ti917811177].d;
	double Td918011174;
	Td918011174 = Td917911175 / metric11119;
	int Tu903211120;
	Ta917511172[Ti917611173].d = Td918011174;
	Value* Ta918111166;
	Ta918111166 = vscan;
	int Ti918211167;
	Ti918211167 = 1;
	Value* Ta918311170;
	Ta918311170 = vscan;
	int Ti918411171;
	Ti918411171 = 1;
	double Td918511169;
	Td918511169 = Ta918311170[Ti918411171].d;
	double Td918611168;
	Td918611168 = Td918511169 / metric11119;
	int Tu903111121;
	Ta918111166[Ti918211167].d = Td918611168;
	Value* Ta918711160;
	Ta918711160 = vscan;
	int Ti918811161;
	Ti918811161 = 2;
	Value* Ta918911164;
	Ta918911164 = vscan;
	int Ti919011165;
	Ti919011165 = 2;
	double Td919111163;
	Td919111163 = Ta918911164[Ti919011165].d;
	double Td919211162;
	Td919211162 = Td919111163 / metric11119;
	int Tu903011122;
	Ta918711160[Ti918811161].d = Td919211162;
	Value* Ta919311155;
	Ta919311155 = viewpoint;
	int Ti919411156;
	Ti919411156 = 0;
	Value* Ta919511158;
	Ta919511158 = view;
	int Ti919611159;
	Ti919611159 = 0;
	double Td919711157;
	Td919711157 = Ta919511158[Ti919611159].d;
	int Tu902911123;
	Ta919311155[Ti919411156].d = Td919711157;
	Value* Ta919811150;
	Ta919811150 = viewpoint;
	int Ti919911151;
	Ti919911151 = 1;
	Value* Ta920011153;
	Ta920011153 = view;
	int Ti920111154;
	Ti920111154 = 1;
	double Td920211152;
	Td920211152 = Ta920011153[Ti920111154].d;
	int Tu902811124;
	Ta919811150[Ti919911151].d = Td920211152;
	Value* Ta920311145;
	Ta920311145 = viewpoint;
	int Ti920411146;
	Ti920411146 = 2;
	Value* Ta920511148;
	Ta920511148 = view;
	int Ti920611149;
	Ti920611149 = 2;
	double Td920711147;
	Td920711147 = Ta920511148[Ti920611149].d;
	int Tu902711125;
	Ta920311145[Ti920411146].d = Td920711147;
	Value* Ta920811142;
	Ta920811142 = rgb;
	int Ti920911143;
	Ti920911143 = 0;
	double Td921011144;
	Td921011144 = 0.000000;
	int Tu902611126;
	Ta920811142[Ti920911143].d = Td921011144;
	Value* Ta921111139;
	Ta921111139 = rgb;
	int Ti921211140;
	Ti921211140 = 1;
	double Td921311141;
	Td921311141 = 0.000000;
	int Tu902511127;
	Ta921111139[Ti921211140].d = Td921311141;
	Value* Ta921411136;
	Ta921411136 = rgb;
	int Ti921511137;
	Ti921511137 = 2;
	double Td921611138;
	Td921611138 = 0.000000;
	int Tu902411128;
	Ta921411136[Ti921511137].d = Td921611138;
	int Ti921711134;
	Ti921711134 = 0;
	double Td921811135;
	Td921811135 = 1.000000;
	int Tu902311129;
	Tu902311129 = raytracing11006_fun(Ti921711134, Td921811135, NULL);
	int Tu921911133;
	Tu921911133 = 1;
	int Tu902211130;
	Tu902211130 = write_rgb11009_fun(Tu921911133, NULL);
	int Ti922011132;
	Ti922011132 = 1;
	int Ti922111131;
	Ti922111131 = scanx11014 + Ti922011132;
	result = scan_point11013_fun(Ti922111131, NULL);
    }
    return result;
}

int scan_line11015_fun(int scany11016, Value *env){
    int result;
    Value* Ta907311112;
    Ta907311112 = size;
    int Ti907411113;
    Ti907411113 = 0;
    int Ti907511055;
    Ti907511055 = Ta907311112[Ti907411113].i;
    if(Ti907511055 <= scany11016){
	result = 1;
    }
    else{
	Value* Ta907611099;
	Ta907611099 = scan_sscany;
	int Ti907711100;
	Ti907711100 = 0;
	Value* Ta907811110;
	Ta907811110 = scan_offset;
	int Ti907911111;
	Ti907911111 = 0;
	double Td908011108;
	Td908011108 = Ta907811110[Ti907911111].d;
	double Td908111109;
	Td908111109 = 1.000000;
	double Td908211106;
	Td908211106 = Td908011108 - Td908111109;
	double Td908311107;
	Td908311107 = (double) scany11016;
	double t11102;
	t11102 = Td908211106 - Td908311107;
	Value* Ta908411104;
	Ta908411104 = scan_d;
	int Ti908511105;
	Ti908511105 = 0;
	double Td908611103;
	Td908611103 = Ta908411104[Ti908511105].d;
	double Td908711101;
	Td908711101 =  Td908611103 * t11102;
	int Tu904011056;
	Ta907611099[Ti907711100].d = Td908711101;
	Value* Ta908811091;
	Ta908811091 = scan_met1;
	int Ti908911092;
	Ti908911092 = 0;
	Value* Ta909011097;
	Ta909011097 = scan_sscany;
	int Ti909111098;
	Ti909111098 = 0;
	double Td909211096;
	Td909211096 = Ta909011097[Ti909111098].d;
	double Td909311094;
	Td909311094 = fsqr10858_fun(Td909211096, NULL);
	double Td909411095;
	Td909411095 = 40000.000000;
	double Td909511093;
	Td909511093 = Td909311094 + Td909411095;
	int Tu903911057;
	Ta908811091[Ti908911092].d = Td909511093;
	Value* Ta909611089;
	Ta909611089 = scan_sscany;
	int Ti909711090;
	Ti909711090 = 0;
	double Td909811085;
	Td909811085 = Ta909611089[Ti909711090].d;
	Value* Ta909911087;
	Ta909911087 = sin_v;
	int Ti910011088;
	Ti910011088 = 0;
	double Td910111086;
	Td910111086 = Ta909911087[Ti910011088].d;
	double t111058;
	t111058 =  Td909811085 * Td910111086;
	Value* Ta910211075;
	Ta910211075 = wscan;
	int Ti910311076;
	Ti910311076 = 0;
	Value* Ta910411083;
	Ta910411083 = sin_v;
	int Ti910511084;
	Ti910511084 = 1;
	double Td910611082;
	Td910611082 = Ta910411083[Ti910511084].d;
	double Td910711078;
	Td910711078 =  t111058 * Td910611082;
	Value* Ta910811080;
	Ta910811080 = vp;
	int Ti910911081;
	Ti910911081 = 0;
	double Td911011079;
	Td911011079 = Ta910811080[Ti910911081].d;
	double Td911111077;
	Td911111077 = Td910711078 - Td911011079;
	int Tu903811059;
	Ta910211075[Ti910311076].d = Td911111077;
	Value* Ta911211065;
	Ta911211065 = wscan;
	int Ti911311066;
	Ti911311066 = 2;
	Value* Ta911411073;
	Ta911411073 = cos_v;
	int Ti911511074;
	Ti911511074 = 1;
	double Td911611072;
	Td911611072 = Ta911411073[Ti911511074].d;
	double Td911711068;
	Td911711068 =  t111058 * Td911611072;
	Value* Ta911811070;
	Ta911811070 = vp;
	int Ti911911071;
	Ti911911071 = 2;
	double Td912011069;
	Td912011069 = Ta911811070[Ti911911071].d;
	double Td912111067;
	Td912111067 = Td911711068 - Td912011069;
	int Tu903711060;
	Ta911211065[Ti911311066].d = Td912111067;
	int Ti912211064;
	Ti912211064 = 0;
	int Tu903611061;
	Tu903611061 = scan_point11013_fun(Ti912211064, NULL);
	int Ti912311063;
	Ti912311063 = 1;
	int Ti912411062;
	Ti912411062 = scany11016 + Ti912311063;
	result = scan_line11015_fun(Ti912411062, NULL);
    }
    return result;
}

int scan_start11017_fun(int Tu904111018, Value *env){
    int result;
    int Tu906011054;
    Tu906011054 = 1;
    int Tu904411038;
    Tu904411038 = write_ppm_header11011_fun(Tu906011054, NULL);
    Value* Ta906111052;
    Ta906111052 = size;
    int Ti906211053;
    Ti906211053 = 0;
    int Ti906311051;
    Ti906311051 = Ta906111052[Ti906211053].i;
    double sizex11039;
    sizex11039 = (double) Ti906311051;
    Value* Ta906411047;
    Ta906411047 = scan_d;
    int Ti906511048;
    Ti906511048 = 0;
    double Td906611050;
    Td906611050 = 128.000000;
    double Td906711049;
    Td906711049 = Td906611050 / sizex11039;
    int Tu904311040;
    Ta906411047[Ti906511048].d = Td906711049;
    Value* Ta906811043;
    Ta906811043 = scan_offset;
    int Ti906911044;
    Ti906911044 = 0;
    double Td907011046;
    Td907011046 = 2.000000;
    double Td907111045;
    Td907111045 = sizex11039 / Td907011046;
    int Tu904211041;
    Ta906811043[Ti906911044].d = Td907111045;
    int Ti907211042;
    Ti907211042 = 0;
    result = scan_line11015_fun(Ti907211042, NULL);
    return result;
}

int rt11019_fun(int size_x11020, int size_y11021, bool debug_p11022, Value *env){
    int result;
    Value* Ta905211036;
    Ta905211036 = size;
    int Ti905311037;
    Ti905311037 = 0;
    int Tu904811026;
    Ta905211036[Ti905311037].i = size_x11020;
    Value* Ta905411034;
    Ta905411034 = size;
    int Ti905511035;
    Ti905511035 = 1;
    int Tu904711027;
    Ta905411034[Ti905511035].i = size_y11021;
    Value* Ta905611032;
    Ta905611032 = dbg;
    int Ti905711033;
    Ti905711033 = 0;
    int Tu904611028;
    Ta905611032[Ti905711033].b = debug_p11022;
    int Tu905811031;
    Tu905811031 = 1;
    int Tu904511029;
    Tu904511029 = read_parameter10921_fun(Tu905811031, NULL);
    int Tu905911030;
    Tu905911030 = 1;
    result = scan_start11017_fun(Tu905911030, NULL);
    return result;
}

int main(){
    and_net = malloc(200 * sizeof(Value));
    beam = malloc(8 * sizeof(Value));
    chkinside_p = malloc(24 * sizeof(Value));
    cos_v = malloc(16 * sizeof(Value));
    crashed_object = malloc(4 * sizeof(Value));
    crashed_point = malloc(4 * sizeof(Value));
    cs_temp = malloc(128 * sizeof(Value));
    dbg = malloc(4 * sizeof(Value));
    end_flag = malloc(4 * sizeof(Value));
    intsec_rectside = malloc(4 * sizeof(Value));
    isoutside_q = malloc(24 * sizeof(Value));
    light = malloc(24 * sizeof(Value));
    nvector = malloc(24 * sizeof(Value));
    nvector_w = malloc(24 * sizeof(Value));
    objects = malloc(240 * sizeof(Value));
    or_net = malloc(4 * sizeof(Value));
    rgb = malloc(24 * sizeof(Value));
    scan_d = malloc(8 * sizeof(Value));
    scan_met1 = malloc(8 * sizeof(Value));
    scan_offset = malloc(8 * sizeof(Value));
    scan_sscany = malloc(8 * sizeof(Value));
    screen = malloc(24 * sizeof(Value));
    sin_v = malloc(16 * sizeof(Value));
    size = malloc(8 * sizeof(Value));
    solver_dist = malloc(8 * sizeof(Value));
    solver_w_vec = malloc(24 * sizeof(Value));
    texture_color = malloc(24 * sizeof(Value));
    tmin = malloc(8 * sizeof(Value));
    view = malloc(24 * sizeof(Value));
    viewpoint = malloc(24 * sizeof(Value));
    vp = malloc(24 * sizeof(Value));
    vscan = malloc(24 * sizeof(Value));
    wscan = malloc(24 * sizeof(Value));
    int ans = 1;
    int Ti904911023;
    Ti904911023 = 768;
    int Ti905011024;
    Ti905011024 = 768;
    int Ti905111025;
    Ti905111025 = 0;
    ans = rt11019_fun(Ti904911023, Ti905011024, Ti905111025, NULL);
    return ans;
}
