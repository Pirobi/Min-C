#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x2142, int size_y2143, bool debug_p2144, Value *env);
typedef int fun_int_int_double_Value(int nref2129, double energy2130, Value *env);
typedef int fun_int_array_array_double_Value(Value* v12125, Value* v22126, double w2127, Value *env);
typedef double fun_double_array_array_Value(Value* v12122, Value* v22123, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint2103, Value* vscan2104, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs2094, Value* and_group2095, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs2082, Value* and_group2083, Value* p2084, Value *env);
typedef bool fun_bool_int_array_Value(int ofs2079, Value* iand2080, Value *env);
typedef int fun_int_int_array_array_Value(int index2067, Value* l2068, Value* p2069, Value *env);
typedef double fun_double_tuple_array_Value(int* m2052, Value* v2053, Value *env);
typedef int fun_int_tuple_array_Value(int* m2046, Value* l2047, Value *env);
typedef Value* fun_array_int_Value(int length2040, Value *env);
typedef bool fun_bool_int_Value(int n2032, Value *env);
typedef int fun_int_int_Value(int Tu32030, Value *env);
typedef int fun_int_array_bool_Value(Value* v2023, bool inv2024, Value *env);
typedef double fun_double_tuple_Value(int* m1995, Value *env);
typedef bool fun_bool_tuple_Value(int* m1991, Value *env);
typedef int fun_int_tuple_Value(int* m1985, Value *env);
typedef double fun_double_double_Value(double x1981, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x1978, bool y1979, Value *env);

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

bool xor1977_fun(bool x1978, bool y1979, Value *env){
    bool result;
    int Ti19754438;
    Ti19754438 = 0;
    if(x1978 == Ti19754438){
	result = y1979;
    }
    else{
	int Ti19764439;
	Ti19764439 = 0;
	if(y1979 == Ti19764439){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    return result;
}

double fsqr1980_fun(double x1981, Value *env){
    double result;
    result =  x1981 * x1981;
    return result;
}

double fhalf1982_fun(double x1983, Value *env){
    double result;
    double Td19744437;
    Td19744437 = 2.000000;
    result = x1983 / Td19744437;
    return result;
}

int o_texturetype1984_fun(int* m1985, Value *env){
    int result;
    int m_tex4427 = m1985[0];
    int xm_shape4428 = m1985[1];
    int xm_surface4429 = m1985[2];
    int xm_isrot4430 = m1985[3];
    Value* xm_abc4431 = m1985[4];
    Value* xm_xyz4432 = m1985[5];
    bool xm_invert4433 = m1985[6];
    Value* xm_surfparams4434 = m1985[7];
    Value* xm_color4435 = m1985[8];
    Value* xm_rot1234436 = m1985[9];
    result = m_tex4427;
    return result;
}

int o_form1986_fun(int* m1987, Value *env){
    int result;
    int xm_tex4417 = m1987[0];
    int m_shape4418 = m1987[1];
    int xm_surface4419 = m1987[2];
    int xm_isrot4420 = m1987[3];
    Value* xm_abc4421 = m1987[4];
    Value* xm_xyz4422 = m1987[5];
    bool xm_invert4423 = m1987[6];
    Value* xm_surfparams4424 = m1987[7];
    Value* xm_color4425 = m1987[8];
    Value* xm_rot1234426 = m1987[9];
    result = m_shape4418;
    return result;
}

int o_reflectiontype1988_fun(int* m1989, Value *env){
    int result;
    int xm_tex4407 = m1989[0];
    int xm_shape4408 = m1989[1];
    int m_surface4409 = m1989[2];
    int xm_isrot4410 = m1989[3];
    Value* xm_abc4411 = m1989[4];
    Value* xm_xyz4412 = m1989[5];
    bool xm_invert4413 = m1989[6];
    Value* xm_surfparams4414 = m1989[7];
    Value* xm_color4415 = m1989[8];
    Value* xm_rot1234416 = m1989[9];
    result = m_surface4409;
    return result;
}

bool o_isinvert1990_fun(int* m1991, Value *env){
    bool result;
    int m_tex4397 = m1991[0];
    int m_shape4398 = m1991[1];
    int m_surface4399 = m1991[2];
    int m_isrot4400 = m1991[3];
    Value* xm_abc4401 = m1991[4];
    Value* xm_xyz4402 = m1991[5];
    bool m_invert4403 = m1991[6];
    Value* xm_surfparams4404 = m1991[7];
    Value* xm_color4405 = m1991[8];
    Value* xm_rot1234406 = m1991[9];
    result = m_invert4403;
    return result;
}

int o_isrot1992_fun(int* m1993, Value *env){
    int result;
    int xm_tex4387 = m1993[0];
    int xm_shape4388 = m1993[1];
    int xm_surface4389 = m1993[2];
    int m_isrot4390 = m1993[3];
    Value* xm_abc4391 = m1993[4];
    Value* xm_xyz4392 = m1993[5];
    bool xm_invert4393 = m1993[6];
    Value* xm_surfparams4394 = m1993[7];
    Value* xm_color4395 = m1993[8];
    Value* xm_rot1234396 = m1993[9];
    result = m_isrot4390;
    return result;
}

double o_param_a1994_fun(int* m1995, Value *env){
    double result;
    int xm_tex4376 = m1995[0];
    int xm_shape4377 = m1995[1];
    int xm_surface4378 = m1995[2];
    int xm_isrot4379 = m1995[3];
    Value* m_abc4380 = m1995[4];
    Value* xm_xyz4381 = m1995[5];
    bool xm_invert4382 = m1995[6];
    Value* xm_surfparams4383 = m1995[7];
    Value* xm_color4384 = m1995[8];
    Value* xm_rot1234385 = m1995[9];
    int Ti19734386;
    Ti19734386 = 0;
    result = m_abc4380[Ti19734386].d;
    return result;
}

double o_param_b1996_fun(int* m1997, Value *env){
    double result;
    int xm_tex4365 = m1997[0];
    int xm_shape4366 = m1997[1];
    int xm_surface4367 = m1997[2];
    int xm_isrot4368 = m1997[3];
    Value* m_abc4369 = m1997[4];
    Value* xm_xyz4370 = m1997[5];
    bool xm_invert4371 = m1997[6];
    Value* xm_surfparams4372 = m1997[7];
    Value* xm_color4373 = m1997[8];
    Value* xm_rot1234374 = m1997[9];
    int Ti19724375;
    Ti19724375 = 1;
    result = m_abc4369[Ti19724375].d;
    return result;
}

double o_param_c1998_fun(int* m1999, Value *env){
    double result;
    int xm_tex4354 = m1999[0];
    int xm_shape4355 = m1999[1];
    int xm_surface4356 = m1999[2];
    int xm_isrot4357 = m1999[3];
    Value* m_abc4358 = m1999[4];
    Value* xm_xyz4359 = m1999[5];
    bool xm_invert4360 = m1999[6];
    Value* xm_surfparams4361 = m1999[7];
    Value* xm_color4362 = m1999[8];
    Value* xm_rot1234363 = m1999[9];
    int Ti19714364;
    Ti19714364 = 2;
    result = m_abc4358[Ti19714364].d;
    return result;
}

double o_param_x2000_fun(int* m2001, Value *env){
    double result;
    int xm_tex4343 = m2001[0];
    int xm_shape4344 = m2001[1];
    int xm_surface4345 = m2001[2];
    int xm_isrot4346 = m2001[3];
    Value* xm_abc4347 = m2001[4];
    Value* m_xyz4348 = m2001[5];
    bool xm_invert4349 = m2001[6];
    Value* xm_surfparams4350 = m2001[7];
    Value* xm_color4351 = m2001[8];
    Value* xm_rot1234352 = m2001[9];
    int Ti19704353;
    Ti19704353 = 0;
    result = m_xyz4348[Ti19704353].d;
    return result;
}

double o_param_y2002_fun(int* m2003, Value *env){
    double result;
    int xm_tex4332 = m2003[0];
    int xm_shape4333 = m2003[1];
    int xm_surface4334 = m2003[2];
    int xm_isrot4335 = m2003[3];
    Value* xm_abc4336 = m2003[4];
    Value* m_xyz4337 = m2003[5];
    bool xm_invert4338 = m2003[6];
    Value* xm_surfparams4339 = m2003[7];
    Value* xm_color4340 = m2003[8];
    Value* xm_rot1234341 = m2003[9];
    int Ti19694342;
    Ti19694342 = 1;
    result = m_xyz4337[Ti19694342].d;
    return result;
}

double o_param_z2004_fun(int* m2005, Value *env){
    double result;
    int xm_tex4321 = m2005[0];
    int xm_shape4322 = m2005[1];
    int xm_surface4323 = m2005[2];
    int xm_isrot4324 = m2005[3];
    Value* xm_abc4325 = m2005[4];
    Value* m_xyz4326 = m2005[5];
    bool xm_invert4327 = m2005[6];
    Value* xm_surfparams4328 = m2005[7];
    Value* xm_color4329 = m2005[8];
    Value* xm_rot1234330 = m2005[9];
    int Ti19684331;
    Ti19684331 = 2;
    result = m_xyz4326[Ti19684331].d;
    return result;
}

double o_diffuse2006_fun(int* m2007, Value *env){
    double result;
    int xm_tex4310 = m2007[0];
    int xm_shape4311 = m2007[1];
    int xm_surface4312 = m2007[2];
    int xm_isrot4313 = m2007[3];
    Value* xm_abc4314 = m2007[4];
    Value* xm_xyz4315 = m2007[5];
    bool xm_invert4316 = m2007[6];
    Value* m_surfparams4317 = m2007[7];
    Value* xm_color4318 = m2007[8];
    Value* xm_rot1234319 = m2007[9];
    int Ti19674320;
    Ti19674320 = 0;
    result = m_surfparams4317[Ti19674320].d;
    return result;
}

double o_hilight2008_fun(int* m2009, Value *env){
    double result;
    int xm_tex4299 = m2009[0];
    int xm_shape4300 = m2009[1];
    int xm_surface4301 = m2009[2];
    int xm_isrot4302 = m2009[3];
    Value* xm_abc4303 = m2009[4];
    Value* xm_xyz4304 = m2009[5];
    bool xm_invert4305 = m2009[6];
    Value* m_surfparams4306 = m2009[7];
    Value* xm_color4307 = m2009[8];
    Value* xm_rot1234308 = m2009[9];
    int Ti19664309;
    Ti19664309 = 1;
    result = m_surfparams4306[Ti19664309].d;
    return result;
}

double o_color_red2010_fun(int* m2011, Value *env){
    double result;
    int xm_tex4288 = m2011[0];
    int xm_shape4289 = m2011[1];
    int m_surface4290 = m2011[2];
    int xm_isrot4291 = m2011[3];
    Value* xm_abc4292 = m2011[4];
    Value* xm_xyz4293 = m2011[5];
    bool xm_invert4294 = m2011[6];
    Value* xm_surfparams4295 = m2011[7];
    Value* m_color4296 = m2011[8];
    Value* xm_rot1234297 = m2011[9];
    int Ti19654298;
    Ti19654298 = 0;
    result = m_color4296[Ti19654298].d;
    return result;
}

double o_color_green2012_fun(int* m2013, Value *env){
    double result;
    int xm_tex4277 = m2013[0];
    int xm_shape4278 = m2013[1];
    int m_surface4279 = m2013[2];
    int xm_isrot4280 = m2013[3];
    Value* xm_abc4281 = m2013[4];
    Value* xm_xyz4282 = m2013[5];
    bool xm_invert4283 = m2013[6];
    Value* xm_surfparams4284 = m2013[7];
    Value* m_color4285 = m2013[8];
    Value* xm_rot1234286 = m2013[9];
    int Ti19644287;
    Ti19644287 = 1;
    result = m_color4285[Ti19644287].d;
    return result;
}

double o_color_blue2014_fun(int* m2015, Value *env){
    double result;
    int xm_tex4266 = m2015[0];
    int xm_shape4267 = m2015[1];
    int m_surface4268 = m2015[2];
    int xm_isrot4269 = m2015[3];
    Value* xm_abc4270 = m2015[4];
    Value* xm_xyz4271 = m2015[5];
    bool xm_invert4272 = m2015[6];
    Value* xm_surfparams4273 = m2015[7];
    Value* m_color4274 = m2015[8];
    Value* xm_rot1234275 = m2015[9];
    int Ti19634276;
    Ti19634276 = 2;
    result = m_color4274[Ti19634276].d;
    return result;
}

double o_param_r12016_fun(int* m2017, Value *env){
    double result;
    int xm_tex4255 = m2017[0];
    int xm_shape4256 = m2017[1];
    int xm_surface4257 = m2017[2];
    int xm_isrot4258 = m2017[3];
    Value* xm_abc4259 = m2017[4];
    Value* xm_xyz4260 = m2017[5];
    bool xm_invert4261 = m2017[6];
    Value* xm_surfparams4262 = m2017[7];
    Value* xm_color4263 = m2017[8];
    Value* m_rot1234264 = m2017[9];
    int Ti19624265;
    Ti19624265 = 0;
    result = m_rot1234264[Ti19624265].d;
    return result;
}

double o_param_r22018_fun(int* m2019, Value *env){
    double result;
    int xm_tex4244 = m2019[0];
    int xm_shape4245 = m2019[1];
    int xm_surface4246 = m2019[2];
    int xm_isrot4247 = m2019[3];
    Value* xm_abc4248 = m2019[4];
    Value* xm_xyz4249 = m2019[5];
    bool xm_invert4250 = m2019[6];
    Value* xm_surfparams4251 = m2019[7];
    Value* xm_color4252 = m2019[8];
    Value* m_rot1234253 = m2019[9];
    int Ti19614254;
    Ti19614254 = 1;
    result = m_rot1234253[Ti19614254].d;
    return result;
}

double o_param_r32020_fun(int* m2021, Value *env){
    double result;
    int xm_tex4233 = m2021[0];
    int xm_shape4234 = m2021[1];
    int xm_surface4235 = m2021[2];
    int xm_isrot4236 = m2021[3];
    Value* xm_abc4237 = m2021[4];
    Value* xm_xyz4238 = m2021[5];
    bool xm_invert4239 = m2021[6];
    Value* xm_surfparams4240 = m2021[7];
    Value* xm_color4241 = m2021[8];
    Value* m_rot1234242 = m2021[9];
    int Ti19604243;
    Ti19604243 = 2;
    result = m_rot1234242[Ti19604243].d;
    return result;
}

int normalize_vector2022_fun(Value* v2023, bool inv2024, Value *env){
    int result;
    int Ti19364232;
    Ti19364232 = 0;
    double Td19374231;
    Td19374231 = v2023[Ti19364232].d;
    double Td19384227;
    Td19384227 = fsqr1980_fun(Td19374231, NULL);
    int Ti19394230;
    Ti19394230 = 1;
    double Td19404229;
    Td19404229 = v2023[Ti19394230].d;
    double Td19414228;
    Td19414228 = fsqr1980_fun(Td19404229, NULL);
    double Td19424223;
    Td19424223 = Td19384227 + Td19414228;
    int Ti19434226;
    Ti19434226 = 2;
    double Td19444225;
    Td19444225 = v2023[Ti19434226].d;
    double Td19454224;
    Td19454224 = fsqr1980_fun(Td19444225, NULL);
    double Td19464222;
    Td19464222 = Td19424223 + Td19454224;
    double n04205;
    n04205 = sqrt(Td19464222);
    int Ti19474221;
    Ti19474221 = 0;
    double n4206;
    if(inv2024 == Ti19474221){
	n4206 = n04205;
    }
    else{
	n4206 = -n04205;
    }
    int Ti19484217;
    Ti19484217 = 0;
    int Ti19494220;
    Ti19494220 = 0;
    double Td19504219;
    Td19504219 = v2023[Ti19494220].d;
    double Td19514218;
    Td19514218 = Td19504219 / n4206;
    int Tu24207;
    v2023[Ti19484217].d = Td19514218;
    int Ti19524213;
    Ti19524213 = 1;
    int Ti19534216;
    Ti19534216 = 1;
    double Td19544215;
    Td19544215 = v2023[Ti19534216].d;
    double Td19554214;
    Td19554214 = Td19544215 / n4206;
    int Tu14208;
    v2023[Ti19524213].d = Td19554214;
    int Ti19564209;
    Ti19564209 = 2;
    int Ti19574212;
    Ti19574212 = 2;
    double Td19584211;
    Td19584211 = v2023[Ti19574212].d;
    double Td19594210;
    Td19594210 = Td19584211 / n4206;
    v2023[Ti19564209].d = Td19594210;
    return result;
}

double sgn2025_fun(double x2026, Value *env){
    double result;
    double Td19354204;
    Td19354204 = 0.000000;
    if(x2026 <= Td19354204){
	result = -1.000000;
    }
    else{
	result = 1.000000;
    }
    return result;
}

double rad2027_fun(double x2028, Value *env){
    double result;
    double Td19344203;
    Td19344203 = 0.017453;
    result =  x2028 * Td19344203;
    return result;
}

int read_environ2029_fun(int Tu32030, Value *env){
    int result;
    Value* Ta18314199;
    Ta18314199 = screen;
    int Ti18324200;
    Ti18324200 = 0;
    int Tu18334202;
    Tu18334202 = 1;
    double Td18344201;
    scanf("%f", &Td18344201);
    int Tu194075;
    Ta18314199[Ti18324200].d = Td18344201;
    Value* Ta18354195;
    Ta18354195 = screen;
    int Ti18364196;
    Ti18364196 = 1;
    int Tu18374198;
    Tu18374198 = 1;
    double Td18384197;
    scanf("%f", &Td18384197);
    int Tu184076;
    Ta18354195[Ti18364196].d = Td18384197;
    Value* Ta18394191;
    Ta18394191 = screen;
    int Ti18404192;
    Ti18404192 = 2;
    int Tu18414194;
    Tu18414194 = 1;
    double Td18424193;
    scanf("%f", &Td18424193);
    int Tu174077;
    Ta18394191[Ti18404192].d = Td18424193;
    int Tu18434190;
    Tu18434190 = 1;
    double Td18444189;
    scanf("%f", &Td18444189);
    double v14078;
    v14078 = rad2027_fun(Td18444189, NULL);
    Value* Ta18454186;
    Ta18454186 = cos_v;
    int Ti18464187;
    Ti18464187 = 0;
    double Td18474188;
    Td18474188 = cos(v14078);
    int Tu164079;
    Ta18454186[Ti18464187].d = Td18474188;
    Value* Ta18484183;
    Ta18484183 = sin_v;
    int Ti18494184;
    Ti18494184 = 0;
    double Td18504185;
    Td18504185 = sin(v14078);
    int Tu154080;
    Ta18484183[Ti18494184].d = Td18504185;
    int Tu18514182;
    Tu18514182 = 1;
    double Td18524181;
    scanf("%f", &Td18524181);
    double v24081;
    v24081 = rad2027_fun(Td18524181, NULL);
    Value* Ta18534178;
    Ta18534178 = cos_v;
    int Ti18544179;
    Ti18544179 = 1;
    double Td18554180;
    Td18554180 = cos(v24081);
    int Tu144082;
    Ta18534178[Ti18544179].d = Td18554180;
    Value* Ta18564175;
    Ta18564175 = sin_v;
    int Ti18574176;
    Ti18574176 = 1;
    double Td18584177;
    Td18584177 = sin(v24081);
    int Tu134083;
    Ta18564175[Ti18574176].d = Td18584177;
    int Tu18594174;
    Tu18594174 = 1;
    double nl4084;
    scanf("%f", &nl4084);
    int Tu18604173;
    Tu18604173 = 1;
    double Td18614172;
    scanf("%f", &Td18614172);
    double l14085;
    l14085 = rad2027_fun(Td18614172, NULL);
    double sl14086;
    sl14086 = sin(l14085);
    Value* Ta18624169;
    Ta18624169 = light;
    int Ti18634170;
    Ti18634170 = 1;
    double Td18644171;
    Td18644171 = -sl14086;
    int Tu124087;
    Ta18624169[Ti18634170].d = Td18644171;
    int Tu18654168;
    Tu18654168 = 1;
    double Td18664167;
    scanf("%f", &Td18664167);
    double l24088;
    l24088 = rad2027_fun(Td18664167, NULL);
    double cl14089;
    cl14089 = cos(l14085);
    double sl24090;
    sl24090 = sin(l24088);
    Value* Ta18674164;
    Ta18674164 = light;
    int Ti18684165;
    Ti18684165 = 0;
    double Td18694166;
    Td18694166 =  cl14089 * sl24090;
    int Tu114091;
    Ta18674164[Ti18684165].d = Td18694166;
    double cl24092;
    cl24092 = cos(l24088);
    Value* Ta18704161;
    Ta18704161 = light;
    int Ti18714162;
    Ti18714162 = 2;
    double Td18724163;
    Td18724163 =  cl14089 * cl24092;
    int Tu104093;
    Ta18704161[Ti18714162].d = Td18724163;
    Value* Ta18734157;
    Ta18734157 = beam;
    int Ti18744158;
    Ti18744158 = 0;
    int Tu18754160;
    Tu18754160 = 1;
    double Td18764159;
    scanf("%f", &Td18764159);
    int Tu94094;
    Ta18734157[Ti18744158].d = Td18764159;
    Value* Ta18774146;
    Ta18774146 = vp;
    int Ti18784147;
    Ti18784147 = 0;
    Value* Ta18794155;
    Ta18794155 = cos_v;
    int Ti18804156;
    Ti18804156 = 0;
    double Td18814151;
    Td18814151 = Ta18794155[Ti18804156].d;
    Value* Ta18824153;
    Ta18824153 = sin_v;
    int Ti18834154;
    Ti18834154 = 1;
    double Td18844152;
    Td18844152 = Ta18824153[Ti18834154].d;
    double Td18854149;
    Td18854149 =  Td18814151 * Td18844152;
    double Td18864150;
    Td18864150 = -200.000000;
    double Td18874148;
    Td18874148 =  Td18854149 * Td18864150;
    int Tu84095;
    Ta18774146[Ti18784147].d = Td18874148;
    Value* Ta18884138;
    Ta18884138 = vp;
    int Ti18894139;
    Ti18894139 = 1;
    Value* Ta18904144;
    Ta18904144 = sin_v;
    int Ti18914145;
    Ti18914145 = 0;
    double Td18924143;
    Td18924143 = Ta18904144[Ti18914145].d;
    double Td18934141;
    Td18934141 = -Td18924143;
    double Td18944142;
    Td18944142 = -200.000000;
    double Td18954140;
    Td18954140 =  Td18934141 * Td18944142;
    int Tu74096;
    Ta18884138[Ti18894139].d = Td18954140;
    Value* Ta18964127;
    Ta18964127 = vp;
    int Ti18974128;
    Ti18974128 = 2;
    Value* Ta18984136;
    Ta18984136 = cos_v;
    int Ti18994137;
    Ti18994137 = 0;
    double Td19004132;
    Td19004132 = Ta18984136[Ti18994137].d;
    Value* Ta19014134;
    Ta19014134 = cos_v;
    int Ti19024135;
    Ti19024135 = 1;
    double Td19034133;
    Td19034133 = Ta19014134[Ti19024135].d;
    double Td19044130;
    Td19044130 =  Td19004132 * Td19034133;
    double Td19054131;
    Td19054131 = -200.000000;
    double Td19064129;
    Td19064129 =  Td19044130 * Td19054131;
    int Tu64097;
    Ta18964127[Ti18974128].d = Td19064129;
    Value* Ta19074118;
    Ta19074118 = view;
    int Ti19084119;
    Ti19084119 = 0;
    Value* Ta19094125;
    Ta19094125 = vp;
    int Ti19104126;
    Ti19104126 = 0;
    double Td19114121;
    Td19114121 = Ta19094125[Ti19104126].d;
    Value* Ta19124123;
    Ta19124123 = screen;
    int Ti19134124;
    Ti19134124 = 0;
    double Td19144122;
    Td19144122 = Ta19124123[Ti19134124].d;
    double Td19154120;
    Td19154120 = Td19114121 + Td19144122;
    int Tu54098;
    Ta19074118[Ti19084119].d = Td19154120;
    Value* Ta19164109;
    Ta19164109 = view;
    int Ti19174110;
    Ti19174110 = 1;
    Value* Ta19184116;
    Ta19184116 = vp;
    int Ti19194117;
    Ti19194117 = 1;
    double Td19204112;
    Td19204112 = Ta19184116[Ti19194117].d;
    Value* Ta19214114;
    Ta19214114 = screen;
    int Ti19224115;
    Ti19224115 = 1;
    double Td19234113;
    Td19234113 = Ta19214114[Ti19224115].d;
    double Td19244111;
    Td19244111 = Td19204112 + Td19234113;
    int Tu44099;
    Ta19164109[Ti19174110].d = Td19244111;
    Value* Ta19254100;
    Ta19254100 = view;
    int Ti19264101;
    Ti19264101 = 2;
    Value* Ta19274107;
    Ta19274107 = vp;
    int Ti19284108;
    Ti19284108 = 2;
    double Td19294103;
    Td19294103 = Ta19274107[Ti19284108].d;
    Value* Ta19304105;
    Ta19304105 = screen;
    int Ti19314106;
    Ti19314106 = 2;
    double Td19324104;
    Td19324104 = Ta19304105[Ti19314106].d;
    double Td19334102;
    Td19334102 = Td19294103 + Td19324104;
    Ta19254100[Ti19264101].d = Td19334102;
    return result;
}

bool read_nth_object2031_fun(int n2032, Value *env){
    bool result;
    int Tu14414074;
    Tu14414074 = 1;
    int texture3628;
    scanf("%d", &texture3628);
    int Ti14424073;
    Ti14424073 = 1;
    int Ti14433629;
    Ti14433629 = -Ti14424073;
    if(texture3628 == Ti14433629){
	result = 0;
    }
    else{
	int Tu14444072;
	Tu14444072 = 1;
	int form3630;
	scanf("%d", &form3630);
	int Tu14454071;
	Tu14454071 = 1;
	int refltype3631;
	scanf("%d", &refltype3631);
	int Tu14464070;
	Tu14464070 = 1;
	int isrot_p3632;
	scanf("%d", &isrot_p3632);
	int Ti14474068;
	Ti14474068 = 3;
	double Td14484069;
	Td14484069 = 0.000000;
	Value* abc3633;
	make_double_array(&abc3633, Ti14474068, Td14484069);
	int Ti14494065;
	Ti14494065 = 0;
	int Tu14504067;
	Tu14504067 = 1;
	double Td14514066;
	scanf("%f", &Td14514066);
	int Tu583634;
	abc3633[Ti14494065].d = Td14514066;
	int Ti14524062;
	Ti14524062 = 1;
	int Tu14534064;
	Tu14534064 = 1;
	double Td14544063;
	scanf("%f", &Td14544063);
	int Tu573635;
	abc3633[Ti14524062].d = Td14544063;
	int Ti14554059;
	Ti14554059 = 2;
	int Tu14564061;
	Tu14564061 = 1;
	double Td14574060;
	scanf("%f", &Td14574060);
	int Tu563636;
	abc3633[Ti14554059].d = Td14574060;
	int Ti14584057;
	Ti14584057 = 3;
	double Td14594058;
	Td14594058 = 0.000000;
	Value* xyz3637;
	make_double_array(&xyz3637, Ti14584057, Td14594058);
	int Ti14604054;
	Ti14604054 = 0;
	int Tu14614056;
	Tu14614056 = 1;
	double Td14624055;
	scanf("%f", &Td14624055);
	int Tu553638;
	xyz3637[Ti14604054].d = Td14624055;
	int Ti14634051;
	Ti14634051 = 1;
	int Tu14644053;
	Tu14644053 = 1;
	double Td14654052;
	scanf("%f", &Td14654052);
	int Tu543639;
	xyz3637[Ti14634051].d = Td14654052;
	int Ti14664048;
	Ti14664048 = 2;
	int Tu14674050;
	Tu14674050 = 1;
	double Td14684049;
	scanf("%f", &Td14684049);
	int Tu533640;
	xyz3637[Ti14664048].d = Td14684049;
	double Td14694045;
	Td14694045 = 0.000000;
	int Tu14704047;
	Tu14704047 = 1;
	double Td14714046;
	scanf("%f", &Td14714046);
	bool m_invert3641;
	if(Td14694045 <= Td14714046){
	    m_invert3641 = 0;
	}
	else{
	    m_invert3641 = 1;
	}
	int Ti14724043;
	Ti14724043 = 2;
	double Td14734044;
	Td14734044 = 0.000000;
	Value* reflparam3642;
	make_double_array(&reflparam3642, Ti14724043, Td14734044);
	int Ti14744040;
	Ti14744040 = 0;
	int Tu14754042;
	Tu14754042 = 1;
	double Td14764041;
	scanf("%f", &Td14764041);
	int Tu523643;
	reflparam3642[Ti14744040].d = Td14764041;
	int Ti14774037;
	Ti14774037 = 1;
	int Tu14784039;
	Tu14784039 = 1;
	double Td14794038;
	scanf("%f", &Td14794038);
	int Tu513644;
	reflparam3642[Ti14774037].d = Td14794038;
	int Ti14804035;
	Ti14804035 = 3;
	double Td14814036;
	Td14814036 = 0.000000;
	Value* color3645;
	make_double_array(&color3645, Ti14804035, Td14814036);
	int Ti14824032;
	Ti14824032 = 0;
	int Tu14834034;
	Tu14834034 = 1;
	double Td14844033;
	scanf("%f", &Td14844033);
	int Tu503646;
	color3645[Ti14824032].d = Td14844033;
	int Ti14854029;
	Ti14854029 = 1;
	int Tu14864031;
	Tu14864031 = 1;
	double Td14874030;
	scanf("%f", &Td14874030);
	int Tu493647;
	color3645[Ti14854029].d = Td14874030;
	int Ti14884026;
	Ti14884026 = 2;
	int Tu14894028;
	Tu14894028 = 1;
	double Td14904027;
	scanf("%f", &Td14904027);
	int Tu483648;
	color3645[Ti14884026].d = Td14904027;
	int Ti14914024;
	Ti14914024 = 3;
	double Td14924025;
	Td14924025 = 0.000000;
	Value* rotation3649;
	make_double_array(&rotation3649, Ti14914024, Td14924025);
	int Ti14934009;
	Ti14934009 = 0;
	int Tu473650;
	if(isrot_p3632 == Ti14934009){
	    Tu473650 = 1;
	}
	else{
	    int Ti14944020;
	    Ti14944020 = 0;
	    int Tu14954023;
	    Tu14954023 = 1;
	    double Td14964022;
	    scanf("%f", &Td14964022);
	    double Td14974021;
	    Td14974021 = rad2027_fun(Td14964022, NULL);
	    int Tu214010;
	    rotation3649[Ti14944020].d = Td14974021;
	    int Ti14984016;
	    Ti14984016 = 1;
	    int Tu14994019;
	    Tu14994019 = 1;
	    double Td15004018;
	    scanf("%f", &Td15004018);
	    double Td15014017;
	    Td15014017 = rad2027_fun(Td15004018, NULL);
	    int Tu204011;
	    rotation3649[Ti14984016].d = Td15014017;
	    int Ti15024012;
	    Ti15024012 = 2;
	    int Tu15034015;
	    Tu15034015 = 1;
	    double Td15044014;
	    scanf("%f", &Td15044014);
	    double Td15054013;
	    Td15054013 = rad2027_fun(Td15044014, NULL);
	    rotation3649[Ti15024012].d = Td15054013;
	}
	int Ti15064008;
	Ti15064008 = 2;
	bool m_invert23651;
	if(form3630 == Ti15064008){
	    m_invert23651 = 1;
	}
	else{
	    m_invert23651 = m_invert3641;
	}
	int* obj3652;
	obj3652 = malloc(10 * sizeof(int));
	obj3652[0] = texture3628;
	obj3652[1] = form3630;
	obj3652[2] = refltype3631;
	obj3652[3] = isrot_p3632;
	obj3652[4] = abc3633;
	obj3652[5] = xyz3637;
	obj3652[6] = m_invert23651;
	obj3652[7] = reflparam3642;
	obj3652[8] = color3645;
	obj3652[9] = rotation3649;

	Value* Ta15074007;
	Ta15074007 = objects;
	int Tu463653;
	Ta15074007[n2032].a = obj3652;
	int Ti15083980;
	Ti15083980 = 3;
	int Tu453654;
	if(form3630 == Ti15083980){
	    int Ti15094006;
	    Ti15094006 = 0;
	    double a3984;
	    a3984 = abc3633[Ti15094006].d;
	    int Ti15104001;
	    Ti15104001 = 0;
	    double Td15114003;
	    Td15114003 = 0.000000;
	    double Td15144002;
	    if(Td15114003 == a3984){
		Td15144002 = 0.000000;
	    }
	    else{
		double Td15124004;
		Td15124004 = sgn2025_fun(a3984, NULL);
		double Td15134005;
		Td15134005 = fsqr1980_fun(a3984, NULL);
		Td15144002 = Td15124004 / Td15134005;
	    }
	    int Tu233985;
	    abc3633[Ti15104001].d = Td15144002;
	    int Ti15154000;
	    Ti15154000 = 1;
	    double b3986;
	    b3986 = abc3633[Ti15154000].d;
	    int Ti15163995;
	    Ti15163995 = 1;
	    double Td15173997;
	    Td15173997 = 0.000000;
	    double Td15203996;
	    if(Td15173997 == b3986){
		Td15203996 = 0.000000;
	    }
	    else{
		double Td15183998;
		Td15183998 = sgn2025_fun(b3986, NULL);
		double Td15193999;
		Td15193999 = fsqr1980_fun(b3986, NULL);
		Td15203996 = Td15183998 / Td15193999;
	    }
	    int Tu223987;
	    abc3633[Ti15163995].d = Td15203996;
	    int Ti15213994;
	    Ti15213994 = 2;
	    double c3988;
	    c3988 = abc3633[Ti15213994].d;
	    int Ti15223989;
	    Ti15223989 = 2;
	    double Td15233991;
	    Td15233991 = 0.000000;
	    double Td15263990;
	    if(Td15233991 == c3988){
		Td15263990 = 0.000000;
	    }
	    else{
		double Td15243992;
		Td15243992 = sgn2025_fun(c3988, NULL);
		double Td15253993;
		Td15253993 = fsqr1980_fun(c3988, NULL);
		Td15263990 = Td15243992 / Td15253993;
	    }
	    abc3633[Ti15223989].d = Td15263990;
	}
	else{
	    int Ti15273981;
	    Ti15273981 = 2;
	    if(form3630 == Ti15273981){
		int Ti15283983;
		Ti15283983 = 0;
		int Ti15293982;
		if(m_invert3641 == Ti15283983){
		    Ti15293982 = 1;
		}
		else{
		    Ti15293982 = 0;
		}
		Tu453654 = normalize_vector2022_fun(abc3633, Ti15293982, NULL);
	    }
	    else{
		Tu453654 = 1;
	    }
	}
	int Ti15303656;
	Ti15303656 = 0;
	int Tu443655;
	if(isrot_p3632 == Ti15303656){
	    Tu443655 = 1;
	}
	else{
	    Value* Ta15313975;
	    Ta15313975 = cs_temp;
	    int Ti15323976;
	    Ti15323976 = 10;
	    int Ti15333979;
	    Ti15333979 = 0;
	    double Td15343978;
	    Td15343978 = rotation3649[Ti15333979].d;
	    double Td15353977;
	    Td15353977 = cos(Td15343978);
	    int Tu433657;
	    Ta15313975[Ti15323976].d = Td15353977;
	    Value* Ta15363970;
	    Ta15363970 = cs_temp;
	    int Ti15373971;
	    Ti15373971 = 11;
	    int Ti15383974;
	    Ti15383974 = 0;
	    double Td15393973;
	    Td15393973 = rotation3649[Ti15383974].d;
	    double Td15403972;
	    Td15403972 = sin(Td15393973);
	    int Tu423658;
	    Ta15363970[Ti15373971].d = Td15403972;
	    Value* Ta15413965;
	    Ta15413965 = cs_temp;
	    int Ti15423966;
	    Ti15423966 = 12;
	    int Ti15433969;
	    Ti15433969 = 1;
	    double Td15443968;
	    Td15443968 = rotation3649[Ti15433969].d;
	    double Td15453967;
	    Td15453967 = cos(Td15443968);
	    int Tu413659;
	    Ta15413965[Ti15423966].d = Td15453967;
	    Value* Ta15463960;
	    Ta15463960 = cs_temp;
	    int Ti15473961;
	    Ti15473961 = 13;
	    int Ti15483964;
	    Ti15483964 = 1;
	    double Td15493963;
	    Td15493963 = rotation3649[Ti15483964].d;
	    double Td15503962;
	    Td15503962 = sin(Td15493963);
	    int Tu403660;
	    Ta15463960[Ti15473961].d = Td15503962;
	    Value* Ta15513955;
	    Ta15513955 = cs_temp;
	    int Ti15523956;
	    Ti15523956 = 14;
	    int Ti15533959;
	    Ti15533959 = 2;
	    double Td15543958;
	    Td15543958 = rotation3649[Ti15533959].d;
	    double Td15553957;
	    Td15553957 = cos(Td15543958);
	    int Tu393661;
	    Ta15513955[Ti15523956].d = Td15553957;
	    Value* Ta15563950;
	    Ta15563950 = cs_temp;
	    int Ti15573951;
	    Ti15573951 = 15;
	    int Ti15583954;
	    Ti15583954 = 2;
	    double Td15593953;
	    Td15593953 = rotation3649[Ti15583954].d;
	    double Td15603952;
	    Td15603952 = sin(Td15593953);
	    int Tu383662;
	    Ta15563950[Ti15573951].d = Td15603952;
	    Value* Ta15613941;
	    Ta15613941 = cs_temp;
	    int Ti15623942;
	    Ti15623942 = 0;
	    Value* Ta15633948;
	    Ta15633948 = cs_temp;
	    int Ti15643949;
	    Ti15643949 = 12;
	    double Td15653944;
	    Td15653944 = Ta15633948[Ti15643949].d;
	    Value* Ta15663946;
	    Ta15663946 = cs_temp;
	    int Ti15673947;
	    Ti15673947 = 14;
	    double Td15683945;
	    Td15683945 = Ta15663946[Ti15673947].d;
	    double Td15693943;
	    Td15693943 =  Td15653944 * Td15683945;
	    int Tu373663;
	    Ta15613941[Ti15623942].d = Td15693943;
	    Value* Ta15703920;
	    Ta15703920 = cs_temp;
	    int Ti15713921;
	    Ti15713921 = 1;
	    Value* Ta15723939;
	    Ta15723939 = cs_temp;
	    int Ti15733940;
	    Ti15733940 = 11;
	    double Td15743935;
	    Td15743935 = Ta15723939[Ti15733940].d;
	    Value* Ta15753937;
	    Ta15753937 = cs_temp;
	    int Ti15763938;
	    Ti15763938 = 13;
	    double Td15773936;
	    Td15773936 = Ta15753937[Ti15763938].d;
	    double Td15783931;
	    Td15783931 =  Td15743935 * Td15773936;
	    Value* Ta15793933;
	    Ta15793933 = cs_temp;
	    int Ti15803934;
	    Ti15803934 = 14;
	    double Td15813932;
	    Td15813932 = Ta15793933[Ti15803934].d;
	    double Td15823923;
	    Td15823923 =  Td15783931 * Td15813932;
	    Value* Ta15833929;
	    Ta15833929 = cs_temp;
	    int Ti15843930;
	    Ti15843930 = 10;
	    double Td15853925;
	    Td15853925 = Ta15833929[Ti15843930].d;
	    Value* Ta15863927;
	    Ta15863927 = cs_temp;
	    int Ti15873928;
	    Ti15873928 = 15;
	    double Td15883926;
	    Td15883926 = Ta15863927[Ti15873928].d;
	    double Td15893924;
	    Td15893924 =  Td15853925 * Td15883926;
	    double Td15903922;
	    Td15903922 = Td15823923 - Td15893924;
	    int Tu363664;
	    Ta15703920[Ti15713921].d = Td15903922;
	    Value* Ta15913899;
	    Ta15913899 = cs_temp;
	    int Ti15923900;
	    Ti15923900 = 2;
	    Value* Ta15933918;
	    Ta15933918 = cs_temp;
	    int Ti15943919;
	    Ti15943919 = 10;
	    double Td15953914;
	    Td15953914 = Ta15933918[Ti15943919].d;
	    Value* Ta15963916;
	    Ta15963916 = cs_temp;
	    int Ti15973917;
	    Ti15973917 = 13;
	    double Td15983915;
	    Td15983915 = Ta15963916[Ti15973917].d;
	    double Td15993910;
	    Td15993910 =  Td15953914 * Td15983915;
	    Value* Ta16003912;
	    Ta16003912 = cs_temp;
	    int Ti16013913;
	    Ti16013913 = 14;
	    double Td16023911;
	    Td16023911 = Ta16003912[Ti16013913].d;
	    double Td16033902;
	    Td16033902 =  Td15993910 * Td16023911;
	    Value* Ta16043908;
	    Ta16043908 = cs_temp;
	    int Ti16053909;
	    Ti16053909 = 11;
	    double Td16063904;
	    Td16063904 = Ta16043908[Ti16053909].d;
	    Value* Ta16073906;
	    Ta16073906 = cs_temp;
	    int Ti16083907;
	    Ti16083907 = 15;
	    double Td16093905;
	    Td16093905 = Ta16073906[Ti16083907].d;
	    double Td16103903;
	    Td16103903 =  Td16063904 * Td16093905;
	    double Td16113901;
	    Td16113901 = Td16033902 + Td16103903;
	    int Tu353665;
	    Ta15913899[Ti15923900].d = Td16113901;
	    Value* Ta16123890;
	    Ta16123890 = cs_temp;
	    int Ti16133891;
	    Ti16133891 = 3;
	    Value* Ta16143897;
	    Ta16143897 = cs_temp;
	    int Ti16153898;
	    Ti16153898 = 12;
	    double Td16163893;
	    Td16163893 = Ta16143897[Ti16153898].d;
	    Value* Ta16173895;
	    Ta16173895 = cs_temp;
	    int Ti16183896;
	    Ti16183896 = 15;
	    double Td16193894;
	    Td16193894 = Ta16173895[Ti16183896].d;
	    double Td16203892;
	    Td16203892 =  Td16163893 * Td16193894;
	    int Tu343666;
	    Ta16123890[Ti16133891].d = Td16203892;
	    Value* Ta16213869;
	    Ta16213869 = cs_temp;
	    int Ti16223870;
	    Ti16223870 = 4;
	    Value* Ta16233888;
	    Ta16233888 = cs_temp;
	    int Ti16243889;
	    Ti16243889 = 11;
	    double Td16253884;
	    Td16253884 = Ta16233888[Ti16243889].d;
	    Value* Ta16263886;
	    Ta16263886 = cs_temp;
	    int Ti16273887;
	    Ti16273887 = 13;
	    double Td16283885;
	    Td16283885 = Ta16263886[Ti16273887].d;
	    double Td16293880;
	    Td16293880 =  Td16253884 * Td16283885;
	    Value* Ta16303882;
	    Ta16303882 = cs_temp;
	    int Ti16313883;
	    Ti16313883 = 15;
	    double Td16323881;
	    Td16323881 = Ta16303882[Ti16313883].d;
	    double Td16333872;
	    Td16333872 =  Td16293880 * Td16323881;
	    Value* Ta16343878;
	    Ta16343878 = cs_temp;
	    int Ti16353879;
	    Ti16353879 = 10;
	    double Td16363874;
	    Td16363874 = Ta16343878[Ti16353879].d;
	    Value* Ta16373876;
	    Ta16373876 = cs_temp;
	    int Ti16383877;
	    Ti16383877 = 14;
	    double Td16393875;
	    Td16393875 = Ta16373876[Ti16383877].d;
	    double Td16403873;
	    Td16403873 =  Td16363874 * Td16393875;
	    double Td16413871;
	    Td16413871 = Td16333872 + Td16403873;
	    int Tu333667;
	    Ta16213869[Ti16223870].d = Td16413871;
	    Value* Ta16423848;
	    Ta16423848 = cs_temp;
	    int Ti16433849;
	    Ti16433849 = 5;
	    Value* Ta16443867;
	    Ta16443867 = cs_temp;
	    int Ti16453868;
	    Ti16453868 = 10;
	    double Td16463863;
	    Td16463863 = Ta16443867[Ti16453868].d;
	    Value* Ta16473865;
	    Ta16473865 = cs_temp;
	    int Ti16483866;
	    Ti16483866 = 13;
	    double Td16493864;
	    Td16493864 = Ta16473865[Ti16483866].d;
	    double Td16503859;
	    Td16503859 =  Td16463863 * Td16493864;
	    Value* Ta16513861;
	    Ta16513861 = cs_temp;
	    int Ti16523862;
	    Ti16523862 = 15;
	    double Td16533860;
	    Td16533860 = Ta16513861[Ti16523862].d;
	    double Td16543851;
	    Td16543851 =  Td16503859 * Td16533860;
	    Value* Ta16553857;
	    Ta16553857 = cs_temp;
	    int Ti16563858;
	    Ti16563858 = 11;
	    double Td16573853;
	    Td16573853 = Ta16553857[Ti16563858].d;
	    Value* Ta16583855;
	    Ta16583855 = cs_temp;
	    int Ti16593856;
	    Ti16593856 = 14;
	    double Td16603854;
	    Td16603854 = Ta16583855[Ti16593856].d;
	    double Td16613852;
	    Td16613852 =  Td16573853 * Td16603854;
	    double Td16623850;
	    Td16623850 = Td16543851 - Td16613852;
	    int Tu323668;
	    Ta16423848[Ti16433849].d = Td16623850;
	    Value* Ta16633842;
	    Ta16633842 = cs_temp;
	    int Ti16643843;
	    Ti16643843 = 6;
	    Value* Ta16653846;
	    Ta16653846 = cs_temp;
	    int Ti16663847;
	    Ti16663847 = 13;
	    double Td16673845;
	    Td16673845 = Ta16653846[Ti16663847].d;
	    double Td16683844;
	    Td16683844 = -Td16673845;
	    int Tu313669;
	    Ta16633842[Ti16643843].d = Td16683844;
	    Value* Ta16693833;
	    Ta16693833 = cs_temp;
	    int Ti16703834;
	    Ti16703834 = 7;
	    Value* Ta16713840;
	    Ta16713840 = cs_temp;
	    int Ti16723841;
	    Ti16723841 = 11;
	    double Td16733836;
	    Td16733836 = Ta16713840[Ti16723841].d;
	    Value* Ta16743838;
	    Ta16743838 = cs_temp;
	    int Ti16753839;
	    Ti16753839 = 12;
	    double Td16763837;
	    Td16763837 = Ta16743838[Ti16753839].d;
	    double Td16773835;
	    Td16773835 =  Td16733836 * Td16763837;
	    int Tu303670;
	    Ta16693833[Ti16703834].d = Td16773835;
	    Value* Ta16783824;
	    Ta16783824 = cs_temp;
	    int Ti16793825;
	    Ti16793825 = 8;
	    Value* Ta16803831;
	    Ta16803831 = cs_temp;
	    int Ti16813832;
	    Ti16813832 = 10;
	    double Td16823827;
	    Td16823827 = Ta16803831[Ti16813832].d;
	    Value* Ta16833829;
	    Ta16833829 = cs_temp;
	    int Ti16843830;
	    Ti16843830 = 12;
	    double Td16853828;
	    Td16853828 = Ta16833829[Ti16843830].d;
	    double Td16863826;
	    Td16863826 =  Td16823827 * Td16853828;
	    int Tu293671;
	    Ta16783824[Ti16793825].d = Td16863826;
	    int Ti16873823;
	    Ti16873823 = 0;
	    double ao3672;
	    ao3672 = abc3633[Ti16873823].d;
	    int Ti16883822;
	    Ti16883822 = 1;
	    double bo3673;
	    bo3673 = abc3633[Ti16883822].d;
	    int Ti16893821;
	    Ti16893821 = 2;
	    double co3674;
	    co3674 = abc3633[Ti16893821].d;
	    int Ti16903803;
	    Ti16903803 = 0;
	    Value* Ta16913819;
	    Ta16913819 = cs_temp;
	    int Ti16923820;
	    Ti16923820 = 0;
	    double Td16933818;
	    Td16933818 = Ta16913819[Ti16923820].d;
	    double Td16943817;
	    Td16943817 = fsqr1980_fun(Td16933818, NULL);
	    double Td16953811;
	    Td16953811 =  ao3672 * Td16943817;
	    Value* Ta16963815;
	    Ta16963815 = cs_temp;
	    int Ti16973816;
	    Ti16973816 = 3;
	    double Td16983814;
	    Td16983814 = Ta16963815[Ti16973816].d;
	    double Td16993813;
	    Td16993813 = fsqr1980_fun(Td16983814, NULL);
	    double Td17003812;
	    Td17003812 =  bo3673 * Td16993813;
	    double Td17013805;
	    Td17013805 = Td16953811 + Td17003812;
	    Value* Ta17023809;
	    Ta17023809 = cs_temp;
	    int Ti17033810;
	    Ti17033810 = 6;
	    double Td17043808;
	    Td17043808 = Ta17023809[Ti17033810].d;
	    double Td17053807;
	    Td17053807 = fsqr1980_fun(Td17043808, NULL);
	    double Td17063806;
	    Td17063806 =  co3674 * Td17053807;
	    double Td17073804;
	    Td17073804 = Td17013805 + Td17063806;
	    int Tu283675;
	    abc3633[Ti16903803].d = Td17073804;
	    int Ti17083785;
	    Ti17083785 = 1;
	    Value* Ta17093801;
	    Ta17093801 = cs_temp;
	    int Ti17103802;
	    Ti17103802 = 1;
	    double Td17113800;
	    Td17113800 = Ta17093801[Ti17103802].d;
	    double Td17123799;
	    Td17123799 = fsqr1980_fun(Td17113800, NULL);
	    double Td17133793;
	    Td17133793 =  ao3672 * Td17123799;
	    Value* Ta17143797;
	    Ta17143797 = cs_temp;
	    int Ti17153798;
	    Ti17153798 = 4;
	    double Td17163796;
	    Td17163796 = Ta17143797[Ti17153798].d;
	    double Td17173795;
	    Td17173795 = fsqr1980_fun(Td17163796, NULL);
	    double Td17183794;
	    Td17183794 =  bo3673 * Td17173795;
	    double Td17193787;
	    Td17193787 = Td17133793 + Td17183794;
	    Value* Ta17203791;
	    Ta17203791 = cs_temp;
	    int Ti17213792;
	    Ti17213792 = 7;
	    double Td17223790;
	    Td17223790 = Ta17203791[Ti17213792].d;
	    double Td17233789;
	    Td17233789 = fsqr1980_fun(Td17223790, NULL);
	    double Td17243788;
	    Td17243788 =  co3674 * Td17233789;
	    double Td17253786;
	    Td17253786 = Td17193787 + Td17243788;
	    int Tu273676;
	    abc3633[Ti17083785].d = Td17253786;
	    int Ti17263767;
	    Ti17263767 = 2;
	    Value* Ta17273783;
	    Ta17273783 = cs_temp;
	    int Ti17283784;
	    Ti17283784 = 2;
	    double Td17293782;
	    Td17293782 = Ta17273783[Ti17283784].d;
	    double Td17303781;
	    Td17303781 = fsqr1980_fun(Td17293782, NULL);
	    double Td17313775;
	    Td17313775 =  ao3672 * Td17303781;
	    Value* Ta17323779;
	    Ta17323779 = cs_temp;
	    int Ti17333780;
	    Ti17333780 = 5;
	    double Td17343778;
	    Td17343778 = Ta17323779[Ti17333780].d;
	    double Td17353777;
	    Td17353777 = fsqr1980_fun(Td17343778, NULL);
	    double Td17363776;
	    Td17363776 =  bo3673 * Td17353777;
	    double Td17373769;
	    Td17373769 = Td17313775 + Td17363776;
	    Value* Ta17383773;
	    Ta17383773 = cs_temp;
	    int Ti17393774;
	    Ti17393774 = 8;
	    double Td17403772;
	    Td17403772 = Ta17383773[Ti17393774].d;
	    double Td17413771;
	    Td17413771 = fsqr1980_fun(Td17403772, NULL);
	    double Td17423770;
	    Td17423770 =  co3674 * Td17413771;
	    double Td17433768;
	    Td17433768 = Td17373769 + Td17423770;
	    int Tu263677;
	    abc3633[Ti17263767].d = Td17433768;
	    int Ti17443738;
	    Ti17443738 = 0;
	    double Td17453740;
	    Td17453740 = 2.000000;
	    Value* Ta17463765;
	    Ta17463765 = cs_temp;
	    int Ti17473766;
	    Ti17473766 = 1;
	    double Td17483764;
	    Td17483764 = Ta17463765[Ti17473766].d;
	    double Td17493760;
	    Td17493760 =  ao3672 * Td17483764;
	    Value* Ta17503762;
	    Ta17503762 = cs_temp;
	    int Ti17513763;
	    Ti17513763 = 2;
	    double Td17523761;
	    Td17523761 = Ta17503762[Ti17513763].d;
	    double Td17533751;
	    Td17533751 =  Td17493760 * Td17523761;
	    Value* Ta17543758;
	    Ta17543758 = cs_temp;
	    int Ti17553759;
	    Ti17553759 = 4;
	    double Td17563757;
	    Td17563757 = Ta17543758[Ti17553759].d;
	    double Td17573753;
	    Td17573753 =  bo3673 * Td17563757;
	    Value* Ta17583755;
	    Ta17583755 = cs_temp;
	    int Ti17593756;
	    Ti17593756 = 5;
	    double Td17603754;
	    Td17603754 = Ta17583755[Ti17593756].d;
	    double Td17613752;
	    Td17613752 =  Td17573753 * Td17603754;
	    double Td17623742;
	    Td17623742 = Td17533751 + Td17613752;
	    Value* Ta17633749;
	    Ta17633749 = cs_temp;
	    int Ti17643750;
	    Ti17643750 = 7;
	    double Td17653748;
	    Td17653748 = Ta17633749[Ti17643750].d;
	    double Td17663744;
	    Td17663744 =  co3674 * Td17653748;
	    Value* Ta17673746;
	    Ta17673746 = cs_temp;
	    int Ti17683747;
	    Ti17683747 = 8;
	    double Td17693745;
	    Td17693745 = Ta17673746[Ti17683747].d;
	    double Td17703743;
	    Td17703743 =  Td17663744 * Td17693745;
	    double Td17713741;
	    Td17713741 = Td17623742 + Td17703743;
	    double Td17723739;
	    Td17723739 =  Td17453740 * Td17713741;
	    int Tu253678;
	    rotation3649[Ti17443738].d = Td17723739;
	    int Ti17733709;
	    Ti17733709 = 1;
	    double Td17743711;
	    Td17743711 = 2.000000;
	    Value* Ta17753736;
	    Ta17753736 = cs_temp;
	    int Ti17763737;
	    Ti17763737 = 0;
	    double Td17773735;
	    Td17773735 = Ta17753736[Ti17763737].d;
	    double Td17783731;
	    Td17783731 =  ao3672 * Td17773735;
	    Value* Ta17793733;
	    Ta17793733 = cs_temp;
	    int Ti17803734;
	    Ti17803734 = 2;
	    double Td17813732;
	    Td17813732 = Ta17793733[Ti17803734].d;
	    double Td17823722;
	    Td17823722 =  Td17783731 * Td17813732;
	    Value* Ta17833729;
	    Ta17833729 = cs_temp;
	    int Ti17843730;
	    Ti17843730 = 3;
	    double Td17853728;
	    Td17853728 = Ta17833729[Ti17843730].d;
	    double Td17863724;
	    Td17863724 =  bo3673 * Td17853728;
	    Value* Ta17873726;
	    Ta17873726 = cs_temp;
	    int Ti17883727;
	    Ti17883727 = 5;
	    double Td17893725;
	    Td17893725 = Ta17873726[Ti17883727].d;
	    double Td17903723;
	    Td17903723 =  Td17863724 * Td17893725;
	    double Td17913713;
	    Td17913713 = Td17823722 + Td17903723;
	    Value* Ta17923720;
	    Ta17923720 = cs_temp;
	    int Ti17933721;
	    Ti17933721 = 6;
	    double Td17943719;
	    Td17943719 = Ta17923720[Ti17933721].d;
	    double Td17953715;
	    Td17953715 =  co3674 * Td17943719;
	    Value* Ta17963717;
	    Ta17963717 = cs_temp;
	    int Ti17973718;
	    Ti17973718 = 8;
	    double Td17983716;
	    Td17983716 = Ta17963717[Ti17973718].d;
	    double Td17993714;
	    Td17993714 =  Td17953715 * Td17983716;
	    double Td18003712;
	    Td18003712 = Td17913713 + Td17993714;
	    double Td18013710;
	    Td18013710 =  Td17743711 * Td18003712;
	    int Tu243679;
	    rotation3649[Ti17733709].d = Td18013710;
	    int Ti18023680;
	    Ti18023680 = 2;
	    double Td18033682;
	    Td18033682 = 2.000000;
	    Value* Ta18043707;
	    Ta18043707 = cs_temp;
	    int Ti18053708;
	    Ti18053708 = 0;
	    double Td18063706;
	    Td18063706 = Ta18043707[Ti18053708].d;
	    double Td18073702;
	    Td18073702 =  ao3672 * Td18063706;
	    Value* Ta18083704;
	    Ta18083704 = cs_temp;
	    int Ti18093705;
	    Ti18093705 = 1;
	    double Td18103703;
	    Td18103703 = Ta18083704[Ti18093705].d;
	    double Td18113693;
	    Td18113693 =  Td18073702 * Td18103703;
	    Value* Ta18123700;
	    Ta18123700 = cs_temp;
	    int Ti18133701;
	    Ti18133701 = 3;
	    double Td18143699;
	    Td18143699 = Ta18123700[Ti18133701].d;
	    double Td18153695;
	    Td18153695 =  bo3673 * Td18143699;
	    Value* Ta18163697;
	    Ta18163697 = cs_temp;
	    int Ti18173698;
	    Ti18173698 = 4;
	    double Td18183696;
	    Td18183696 = Ta18163697[Ti18173698].d;
	    double Td18193694;
	    Td18193694 =  Td18153695 * Td18183696;
	    double Td18203684;
	    Td18203684 = Td18113693 + Td18193694;
	    Value* Ta18213691;
	    Ta18213691 = cs_temp;
	    int Ti18223692;
	    Ti18223692 = 6;
	    double Td18233690;
	    Td18233690 = Ta18213691[Ti18223692].d;
	    double Td18243686;
	    Td18243686 =  co3674 * Td18233690;
	    Value* Ta18253688;
	    Ta18253688 = cs_temp;
	    int Ti18263689;
	    Ti18263689 = 7;
	    double Td18273687;
	    Td18273687 = Ta18253688[Ti18263689].d;
	    double Td18283685;
	    Td18283685 =  Td18243686 * Td18273687;
	    double Td18293683;
	    Td18293683 = Td18203684 + Td18283685;
	    double Td18303681;
	    Td18303681 =  Td18033682 * Td18293683;
	    rotation3649[Ti18023680].d = Td18303681;
	}
	result = 1;
    }
    return result;
}

int read_object2033_fun(int n2034, Value *env){
    int result;
    int Ti14363623;
    Ti14363623 = 61;
    if(Ti14363623 <= n2034){
	result = 1;
    }
    else{
	bool Tb14373624;
	Tb14373624 = read_nth_object2031_fun(n2034, NULL);
	int Ti14383625;
	Ti14383625 = 0;
	if(Tb14373624 == Ti14383625){
	    result = 1;
	}
	else{
	    int Ti14393627;
	    Ti14393627 = 1;
	    int Ti14403626;
	    Ti14403626 = n2034 + Ti14393627;
	    result = read_object2033_fun(Ti14403626, NULL);
	}
    }
    return result;
}

int read_all_object2035_fun(int Tu592036, Value *env){
    int result;
    int Ti14353622;
    Ti14353622 = 0;
    result = read_object2033_fun(Ti14353622, NULL);
    return result;
}

Value* read_net_item2037_fun(int length2038, Value *env){
    Value* result;
    int Tu14263621;
    Tu14263621 = 1;
    int item3610;
    scanf("%d", &item3610);
    int Ti14273620;
    Ti14273620 = 1;
    int Ti14283611;
    Ti14283611 = -Ti14273620;
    if(item3610 == Ti14283611){
	int Ti14293619;
	Ti14293619 = 1;
	int Ti14303616;
	Ti14303616 = length2038 + Ti14293619;
	int Ti14313618;
	Ti14313618 = 1;
	int Ti14323617;
	Ti14323617 = -Ti14313618;
	make_int_array(&result, Ti14303616, Ti14323617);
    }
    else{
	int Ti14333615;
	Ti14333615 = 1;
	int Ti14343614;
	Ti14343614 = length2038 + Ti14333615;
	Value* v3612;
	v3612 = read_net_item2037_fun(Ti14343614, NULL);
	int Tu603613;
	v3612[length2038].i = item3610;
	result = v3612;
    }
    return result;
}

Value* read_or_network2039_fun(int length2040, Value *env){
    Value* result;
    int Ti14173609;
    Ti14173609 = 0;
    Value* net3598;
    net3598 = read_net_item2037_fun(Ti14173609, NULL);
    int Ti14183608;
    Ti14183608 = 0;
    int Ti14193599;
    Ti14193599 = net3598[Ti14183608].i;
    int Ti14203607;
    Ti14203607 = 1;
    int Ti14213600;
    Ti14213600 = -Ti14203607;
    if(Ti14193599 == Ti14213600){
	int Ti14223606;
	Ti14223606 = 1;
	int Ti14233605;
	Ti14233605 = length2040 + Ti14223606;
	make_multi_array(&result, Ti14233605, net3598);
    }
    else{
	int Ti14243604;
	Ti14243604 = 1;
	int Ti14253603;
	Ti14253603 = length2040 + Ti14243604;
	Value* v3601;
	v3601 = read_or_network2039_fun(Ti14253603, NULL);
	int Tu613602;
	v3601[length2040].a = net3598;
	result = v3601;
    }
    return result;
}

int read_and_network2041_fun(int n2042, Value *env){
    int result;
    int Ti14093597;
    Ti14093597 = 0;
    Value* net3588;
    net3588 = read_net_item2037_fun(Ti14093597, NULL);
    int Ti14103596;
    Ti14103596 = 0;
    int Ti14113589;
    Ti14113589 = net3588[Ti14103596].i;
    int Ti14123595;
    Ti14123595 = 1;
    int Ti14133590;
    Ti14133590 = -Ti14123595;
    if(Ti14113589 == Ti14133590){
	result = 1;
    }
    else{
	Value* Ta14143594;
	Ta14143594 = and_net;
	int Tu623591;
	Ta14143594[n2042].a = net3588;
	int Ti14153593;
	Ti14153593 = 1;
	int Ti14163592;
	Ti14163592 = n2042 + Ti14153593;
	result = read_and_network2041_fun(Ti14163592, NULL);
    }
    return result;
}

int read_parameter2043_fun(int Tu632044, Value *env){
    int result;
    int Tu14023587;
    Tu14023587 = 1;
    int Tu663578;
    Tu663578 = read_environ2029_fun(Tu14023587, NULL);
    int Tu14033586;
    Tu14033586 = 1;
    int Tu653579;
    Tu653579 = read_all_object2035_fun(Tu14033586, NULL);
    int Ti14043585;
    Ti14043585 = 0;
    int Tu643580;
    Tu643580 = read_and_network2041_fun(Ti14043585, NULL);
    Value* Ta14053581;
    Ta14053581 = or_net;
    int Ti14063582;
    Ti14063582 = 0;
    int Ti14073584;
    Ti14073584 = 0;
    Value* Ta14083583;
    Ta14083583 = read_or_network2039_fun(Ti14073584, NULL);
    Ta14053581[Ti14063582].a = Ta14083583;
    return result;
}

int solver_rect2045_fun(int* m2046, Value* l2047, Value *env){
    int result;
    double Td12883538;
    Td12883538 = 0.000000;
    int Ti12893577;
    Ti12893577 = 0;
    double Td12903539;
    Td12903539 = l2047[Ti12893577].d;
    bool answera3452;
    if(Td12883538 == Td12903539){
	answera3452 = 0;
    }
    else{
	bool Tb12913572;
	Tb12913572 = o_isinvert1990_fun(m2046, NULL);
	double Td12923574;
	Td12923574 = 0.000000;
	int Ti12933576;
	Ti12933576 = 0;
	double Td12943575;
	Td12943575 = l2047[Ti12933576].d;
	int Ti12953573;
	if(Td12923574 <= Td12943575){
	    Ti12953573 = 0;
	}
	else{
	    Ti12953573 = 1;
	}
	bool Tb12963569;
	Tb12963569 = xor1977_fun(Tb12913572, Ti12953573, NULL);
	int Ti12973570;
	Ti12973570 = 0;
	double d3540;
	if(Tb12963569 == Ti12973570){
	    double Td12983571;
	    Td12983571 = o_param_a1994_fun(m2046, NULL);
	    d3540 = -Td12983571;
	}
	else{
	    d3540 = o_param_a1994_fun(m2046, NULL);
	}
	Value* Ta12993567;
	Ta12993567 = solver_w_vec;
	int Ti13003568;
	Ti13003568 = 0;
	double Td13013566;
	Td13013566 = Ta12993567[Ti13003568].d;
	double Td13023563;
	Td13023563 = d3540 - Td13013566;
	int Ti13033565;
	Ti13033565 = 0;
	double Td13043564;
	Td13043564 = l2047[Ti13033565].d;
	double d23541;
	d23541 = Td13023563 / Td13043564;
	double Td13053542;
	Td13053542 = o_param_b1996_fun(m2046, NULL);
	int Ti13063562;
	Ti13063562 = 1;
	double Td13073561;
	Td13073561 = l2047[Ti13063562].d;
	double Td13083557;
	Td13083557 =  d23541 * Td13073561;
	Value* Ta13093559;
	Ta13093559 = solver_w_vec;
	int Ti13103560;
	Ti13103560 = 1;
	double Td13113558;
	Td13113558 = Ta13093559[Ti13103560].d;
	double Td13123556;
	Td13123556 = Td13083557 + Td13113558;
	double Td13133543;
	Td13133543 = fabs(Td13123556);
	if(Td13053542 <= Td13133543){
	    answera3452 = 0;
	}
	else{
	    double Td13143544;
	    Td13143544 = o_param_c1998_fun(m2046, NULL);
	    int Ti13153555;
	    Ti13153555 = 2;
	    double Td13163554;
	    Td13163554 = l2047[Ti13153555].d;
	    double Td13173550;
	    Td13173550 =  d23541 * Td13163554;
	    Value* Ta13183552;
	    Ta13183552 = solver_w_vec;
	    int Ti13193553;
	    Ti13193553 = 2;
	    double Td13203551;
	    Td13203551 = Ta13183552[Ti13193553].d;
	    double Td13213549;
	    Td13213549 = Td13173550 + Td13203551;
	    double Td13223545;
	    Td13223545 = fabs(Td13213549);
	    if(Td13143544 <= Td13223545){
		answera3452 = 0;
	    }
	    else{
		Value* Ta13233547;
		Ta13233547 = solver_dist;
		int Ti13243548;
		Ti13243548 = 0;
		int Tu673546;
		Ta13233547[Ti13243548].d = d23541;
		answera3452 = 1;
	    }
	}
    }
    int Ti13253453;
    Ti13253453 = 0;
    if(answera3452 == Ti13253453){
	double Td13263498;
	Td13263498 = 0.000000;
	int Ti13273537;
	Ti13273537 = 1;
	double Td13283499;
	Td13283499 = l2047[Ti13273537].d;
	bool answerb3454;
	if(Td13263498 == Td13283499){
	    answerb3454 = 0;
	}
	else{
	    bool Tb13293532;
	    Tb13293532 = o_isinvert1990_fun(m2046, NULL);
	    double Td13303534;
	    Td13303534 = 0.000000;
	    int Ti13313536;
	    Ti13313536 = 1;
	    double Td13323535;
	    Td13323535 = l2047[Ti13313536].d;
	    int Ti13333533;
	    if(Td13303534 <= Td13323535){
		Ti13333533 = 0;
	    }
	    else{
		Ti13333533 = 1;
	    }
	    bool Tb13343529;
	    Tb13343529 = xor1977_fun(Tb13293532, Ti13333533, NULL);
	    int Ti13353530;
	    Ti13353530 = 0;
	    double d3500;
	    if(Tb13343529 == Ti13353530){
		double Td13363531;
		Td13363531 = o_param_b1996_fun(m2046, NULL);
		d3500 = -Td13363531;
	    }
	    else{
		d3500 = o_param_b1996_fun(m2046, NULL);
	    }
	    Value* Ta13373527;
	    Ta13373527 = solver_w_vec;
	    int Ti13383528;
	    Ti13383528 = 1;
	    double Td13393526;
	    Td13393526 = Ta13373527[Ti13383528].d;
	    double Td13403523;
	    Td13403523 = d3500 - Td13393526;
	    int Ti13413525;
	    Ti13413525 = 1;
	    double Td13423524;
	    Td13423524 = l2047[Ti13413525].d;
	    double d23501;
	    d23501 = Td13403523 / Td13423524;
	    double Td13433502;
	    Td13433502 = o_param_c1998_fun(m2046, NULL);
	    int Ti13443522;
	    Ti13443522 = 2;
	    double Td13453521;
	    Td13453521 = l2047[Ti13443522].d;
	    double Td13463517;
	    Td13463517 =  d23501 * Td13453521;
	    Value* Ta13473519;
	    Ta13473519 = solver_w_vec;
	    int Ti13483520;
	    Ti13483520 = 2;
	    double Td13493518;
	    Td13493518 = Ta13473519[Ti13483520].d;
	    double Td13503516;
	    Td13503516 = Td13463517 + Td13493518;
	    double Td13513503;
	    Td13513503 = fabs(Td13503516);
	    if(Td13433502 <= Td13513503){
		answerb3454 = 0;
	    }
	    else{
		double Td13523504;
		Td13523504 = o_param_a1994_fun(m2046, NULL);
		int Ti13533515;
		Ti13533515 = 0;
		double Td13543514;
		Td13543514 = l2047[Ti13533515].d;
		double Td13553510;
		Td13553510 =  d23501 * Td13543514;
		Value* Ta13563512;
		Ta13563512 = solver_w_vec;
		int Ti13573513;
		Ti13573513 = 0;
		double Td13583511;
		Td13583511 = Ta13563512[Ti13573513].d;
		double Td13593509;
		Td13593509 = Td13553510 + Td13583511;
		double Td13603505;
		Td13603505 = fabs(Td13593509);
		if(Td13523504 <= Td13603505){
		    answerb3454 = 0;
		}
		else{
		    Value* Ta13613507;
		    Ta13613507 = solver_dist;
		    int Ti13623508;
		    Ti13623508 = 0;
		    int Tu683506;
		    Ta13613507[Ti13623508].d = d23501;
		    answerb3454 = 1;
		}
	    }
	}
	int Ti13633455;
	Ti13633455 = 0;
	if(answerb3454 == Ti13633455){
	    double Td13643458;
	    Td13643458 = 0.000000;
	    int Ti13653497;
	    Ti13653497 = 2;
	    double Td13663459;
	    Td13663459 = l2047[Ti13653497].d;
	    bool answerc3456;
	    if(Td13643458 == Td13663459){
		answerc3456 = 0;
	    }
	    else{
		bool Tb13673492;
		Tb13673492 = o_isinvert1990_fun(m2046, NULL);
		double Td13683494;
		Td13683494 = 0.000000;
		int Ti13693496;
		Ti13693496 = 2;
		double Td13703495;
		Td13703495 = l2047[Ti13693496].d;
		int Ti13713493;
		if(Td13683494 <= Td13703495){
		    Ti13713493 = 0;
		}
		else{
		    Ti13713493 = 1;
		}
		bool Tb13723489;
		Tb13723489 = xor1977_fun(Tb13673492, Ti13713493, NULL);
		int Ti13733490;
		Ti13733490 = 0;
		double d3460;
		if(Tb13723489 == Ti13733490){
		    double Td13743491;
		    Td13743491 = o_param_c1998_fun(m2046, NULL);
		    d3460 = -Td13743491;
		}
		else{
		    d3460 = o_param_c1998_fun(m2046, NULL);
		}
		Value* Ta13753487;
		Ta13753487 = solver_w_vec;
		int Ti13763488;
		Ti13763488 = 2;
		double Td13773486;
		Td13773486 = Ta13753487[Ti13763488].d;
		double Td13783483;
		Td13783483 = d3460 - Td13773486;
		int Ti13793485;
		Ti13793485 = 2;
		double Td13803484;
		Td13803484 = l2047[Ti13793485].d;
		double d23461;
		d23461 = Td13783483 / Td13803484;
		double Td13813462;
		Td13813462 = o_param_a1994_fun(m2046, NULL);
		int Ti13823482;
		Ti13823482 = 0;
		double Td13833481;
		Td13833481 = l2047[Ti13823482].d;
		double Td13843477;
		Td13843477 =  d23461 * Td13833481;
		Value* Ta13853479;
		Ta13853479 = solver_w_vec;
		int Ti13863480;
		Ti13863480 = 0;
		double Td13873478;
		Td13873478 = Ta13853479[Ti13863480].d;
		double Td13883476;
		Td13883476 = Td13843477 + Td13873478;
		double Td13893463;
		Td13893463 = fabs(Td13883476);
		if(Td13813462 <= Td13893463){
		    answerc3456 = 0;
		}
		else{
		    double Td13903464;
		    Td13903464 = o_param_b1996_fun(m2046, NULL);
		    int Ti13913475;
		    Ti13913475 = 1;
		    double Td13923474;
		    Td13923474 = l2047[Ti13913475].d;
		    double Td13933470;
		    Td13933470 =  d23461 * Td13923474;
		    Value* Ta13943472;
		    Ta13943472 = solver_w_vec;
		    int Ti13953473;
		    Ti13953473 = 1;
		    double Td13963471;
		    Td13963471 = Ta13943472[Ti13953473].d;
		    double Td13973469;
		    Td13973469 = Td13933470 + Td13963471;
		    double Td13983465;
		    Td13983465 = fabs(Td13973469);
		    if(Td13903464 <= Td13983465){
			answerc3456 = 0;
		    }
		    else{
			Value* Ta13993467;
			Ta13993467 = solver_dist;
			int Ti14003468;
			Ti14003468 = 0;
			int Tu693466;
			Ta13993467[Ti14003468].d = d23461;
			answerc3456 = 1;
		    }
		}
	    }
	    int Ti14013457;
	    Ti14013457 = 0;
	    if(answerc3456 == Ti14013457){
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

int solver_surface2048_fun(int* m2049, Value* l2050, Value *env){
    int result;
    int Ti12543451;
    Ti12543451 = 0;
    double Td12553449;
    Td12553449 = l2050[Ti12543451].d;
    double Td12563450;
    Td12563450 = o_param_a1994_fun(m2049, NULL);
    double Td12573444;
    Td12573444 =  Td12553449 * Td12563450;
    int Ti12583448;
    Ti12583448 = 1;
    double Td12593446;
    Td12593446 = l2050[Ti12583448].d;
    double Td12603447;
    Td12603447 = o_param_b1996_fun(m2049, NULL);
    double Td12613445;
    Td12613445 =  Td12593446 * Td12603447;
    double Td12623439;
    Td12623439 = Td12573444 + Td12613445;
    int Ti12633443;
    Ti12633443 = 2;
    double Td12643441;
    Td12643441 = l2050[Ti12633443].d;
    double Td12653442;
    Td12653442 = o_param_c1998_fun(m2049, NULL);
    double Td12663440;
    Td12663440 =  Td12643441 * Td12653442;
    double q3415;
    q3415 = Td12623439 + Td12663440;
    double Td12673416;
    Td12673416 = 0.000000;
    if(q3415 <= Td12673416){
	result = 0;
    }
    else{
	Value* Ta12683437;
	Ta12683437 = solver_w_vec;
	int Ti12693438;
	Ti12693438 = 0;
	double Td12703435;
	Td12703435 = Ta12683437[Ti12693438].d;
	double Td12713436;
	Td12713436 = o_param_a1994_fun(m2049, NULL);
	double Td12723429;
	Td12723429 =  Td12703435 * Td12713436;
	Value* Ta12733433;
	Ta12733433 = solver_w_vec;
	int Ti12743434;
	Ti12743434 = 1;
	double Td12753431;
	Td12753431 = Ta12733433[Ti12743434].d;
	double Td12763432;
	Td12763432 = o_param_b1996_fun(m2049, NULL);
	double Td12773430;
	Td12773430 =  Td12753431 * Td12763432;
	double Td12783423;
	Td12783423 = Td12723429 + Td12773430;
	Value* Ta12793427;
	Ta12793427 = solver_w_vec;
	int Ti12803428;
	Ti12803428 = 2;
	double Td12813425;
	Td12813425 = Ta12793427[Ti12803428].d;
	double Td12823426;
	Td12823426 = o_param_c1998_fun(m2049, NULL);
	double Td12833424;
	Td12833424 =  Td12813425 * Td12823426;
	double Td12843422;
	Td12843422 = Td12783423 + Td12833424;
	double t3417;
	t3417 = Td12843422 / q3415;
	Value* Ta12853419;
	Ta12853419 = solver_dist;
	int Ti12863420;
	Ti12863420 = 0;
	double Td12873421;
	Td12873421 = -t3417;
	int Tu703418;
	Ta12853419[Ti12863420].d = Td12873421;
	result = 1;
    }
    return result;
}

double in_prod_sqr_obj2051_fun(int* m2052, Value* v2053, Value *env){
    double result;
    int Ti12383414;
    Ti12383414 = 0;
    double Td12393413;
    Td12393413 = v2053[Ti12383414].d;
    double Td12403411;
    Td12403411 = fsqr1980_fun(Td12393413, NULL);
    double Td12413412;
    Td12413412 = o_param_a1994_fun(m2052, NULL);
    double Td12423405;
    Td12423405 =  Td12403411 * Td12413412;
    int Ti12433410;
    Ti12433410 = 1;
    double Td12443409;
    Td12443409 = v2053[Ti12433410].d;
    double Td12453407;
    Td12453407 = fsqr1980_fun(Td12443409, NULL);
    double Td12463408;
    Td12463408 = o_param_b1996_fun(m2052, NULL);
    double Td12473406;
    Td12473406 =  Td12453407 * Td12463408;
    double Td12483399;
    Td12483399 = Td12423405 + Td12473406;
    int Ti12493404;
    Ti12493404 = 2;
    double Td12503403;
    Td12503403 = v2053[Ti12493404].d;
    double Td12513401;
    Td12513401 = fsqr1980_fun(Td12503403, NULL);
    double Td12523402;
    Td12523402 = o_param_c1998_fun(m2052, NULL);
    double Td12533400;
    Td12533400 =  Td12513401 * Td12523402;
    result = Td12483399 + Td12533400;
    return result;
}

double in_prod_co_objrot2054_fun(int* m2055, Value* v2056, Value *env){
    double result;
    int Ti12163398;
    Ti12163398 = 1;
    double Td12173395;
    Td12173395 = v2056[Ti12163398].d;
    int Ti12183397;
    Ti12183397 = 2;
    double Td12193396;
    Td12193396 = v2056[Ti12183397].d;
    double Td12203393;
    Td12203393 =  Td12173395 * Td12193396;
    double Td12213394;
    Td12213394 = o_param_r12016_fun(m2055, NULL);
    double Td12223385;
    Td12223385 =  Td12203393 * Td12213394;
    int Ti12233392;
    Ti12233392 = 0;
    double Td12243389;
    Td12243389 = v2056[Ti12233392].d;
    int Ti12253391;
    Ti12253391 = 2;
    double Td12263390;
    Td12263390 = v2056[Ti12253391].d;
    double Td12273387;
    Td12273387 =  Td12243389 * Td12263390;
    double Td12283388;
    Td12283388 = o_param_r22018_fun(m2055, NULL);
    double Td12293386;
    Td12293386 =  Td12273387 * Td12283388;
    double Td12303377;
    Td12303377 = Td12223385 + Td12293386;
    int Ti12313384;
    Ti12313384 = 0;
    double Td12323381;
    Td12323381 = v2056[Ti12313384].d;
    int Ti12333383;
    Ti12333383 = 1;
    double Td12343382;
    Td12343382 = v2056[Ti12333383].d;
    double Td12353379;
    Td12353379 =  Td12323381 * Td12343382;
    double Td12363380;
    Td12363380 = o_param_r32020_fun(m2055, NULL);
    double Td12373378;
    Td12373378 =  Td12353379 * Td12363380;
    result = Td12303377 + Td12373378;
    return result;
}

double solver2nd_mul_b2057_fun(int* m2058, Value* l2059, Value *env){
    double result;
    Value* Ta11913375;
    Ta11913375 = solver_w_vec;
    int Ti11923376;
    Ti11923376 = 0;
    double Td11933372;
    Td11933372 = Ta11913375[Ti11923376].d;
    int Ti11943374;
    Ti11943374 = 0;
    double Td11953373;
    Td11953373 = l2059[Ti11943374].d;
    double Td11963370;
    Td11963370 =  Td11933372 * Td11953373;
    double Td11973371;
    Td11973371 = o_param_a1994_fun(m2058, NULL);
    double Td11983361;
    Td11983361 =  Td11963370 * Td11973371;
    Value* Ta11993368;
    Ta11993368 = solver_w_vec;
    int Ti12003369;
    Ti12003369 = 1;
    double Td12013365;
    Td12013365 = Ta11993368[Ti12003369].d;
    int Ti12023367;
    Ti12023367 = 1;
    double Td12033366;
    Td12033366 = l2059[Ti12023367].d;
    double Td12043363;
    Td12043363 =  Td12013365 * Td12033366;
    double Td12053364;
    Td12053364 = o_param_b1996_fun(m2058, NULL);
    double Td12063362;
    Td12063362 =  Td12043363 * Td12053364;
    double Td12073352;
    Td12073352 = Td11983361 + Td12063362;
    Value* Ta12083359;
    Ta12083359 = solver_w_vec;
    int Ti12093360;
    Ti12093360 = 2;
    double Td12103356;
    Td12103356 = Ta12083359[Ti12093360].d;
    int Ti12113358;
    Ti12113358 = 2;
    double Td12123357;
    Td12123357 = l2059[Ti12113358].d;
    double Td12133354;
    Td12133354 =  Td12103356 * Td12123357;
    double Td12143355;
    Td12143355 = o_param_c1998_fun(m2058, NULL);
    double Td12153353;
    Td12153353 =  Td12133354 * Td12143355;
    result = Td12073352 + Td12153353;
    return result;
}

double solver2nd_rot_b2060_fun(int* m2061, Value* l2062, Value *env){
    double result;
    Value* Ta11453350;
    Ta11453350 = solver_w_vec;
    int Ti11463351;
    Ti11463351 = 2;
    double Td11473347;
    Td11473347 = Ta11453350[Ti11463351].d;
    int Ti11483349;
    Ti11483349 = 1;
    double Td11493348;
    Td11493348 = l2062[Ti11483349].d;
    double Td11503340;
    Td11503340 =  Td11473347 * Td11493348;
    Value* Ta11513345;
    Ta11513345 = solver_w_vec;
    int Ti11523346;
    Ti11523346 = 1;
    double Td11533342;
    Td11533342 = Ta11513345[Ti11523346].d;
    int Ti11543344;
    Ti11543344 = 2;
    double Td11553343;
    Td11553343 = l2062[Ti11543344].d;
    double Td11563341;
    Td11563341 =  Td11533342 * Td11553343;
    double Td11573338;
    Td11573338 = Td11503340 + Td11563341;
    double Td11583339;
    Td11583339 = o_param_r12016_fun(m2061, NULL);
    double Td11593322;
    Td11593322 =  Td11573338 * Td11583339;
    Value* Ta11603336;
    Ta11603336 = solver_w_vec;
    int Ti11613337;
    Ti11613337 = 0;
    double Td11623333;
    Td11623333 = Ta11603336[Ti11613337].d;
    int Ti11633335;
    Ti11633335 = 2;
    double Td11643334;
    Td11643334 = l2062[Ti11633335].d;
    double Td11653326;
    Td11653326 =  Td11623333 * Td11643334;
    Value* Ta11663331;
    Ta11663331 = solver_w_vec;
    int Ti11673332;
    Ti11673332 = 2;
    double Td11683328;
    Td11683328 = Ta11663331[Ti11673332].d;
    int Ti11693330;
    Ti11693330 = 0;
    double Td11703329;
    Td11703329 = l2062[Ti11693330].d;
    double Td11713327;
    Td11713327 =  Td11683328 * Td11703329;
    double Td11723324;
    Td11723324 = Td11653326 + Td11713327;
    double Td11733325;
    Td11733325 = o_param_r22018_fun(m2061, NULL);
    double Td11743323;
    Td11743323 =  Td11723324 * Td11733325;
    double Td11753306;
    Td11753306 = Td11593322 + Td11743323;
    Value* Ta11763320;
    Ta11763320 = solver_w_vec;
    int Ti11773321;
    Ti11773321 = 0;
    double Td11783317;
    Td11783317 = Ta11763320[Ti11773321].d;
    int Ti11793319;
    Ti11793319 = 1;
    double Td11803318;
    Td11803318 = l2062[Ti11793319].d;
    double Td11813310;
    Td11813310 =  Td11783317 * Td11803318;
    Value* Ta11823315;
    Ta11823315 = solver_w_vec;
    int Ti11833316;
    Ti11833316 = 1;
    double Td11843312;
    Td11843312 = Ta11823315[Ti11833316].d;
    int Ti11853314;
    Ti11853314 = 0;
    double Td11863313;
    Td11863313 = l2062[Ti11853314].d;
    double Td11873311;
    Td11873311 =  Td11843312 * Td11863313;
    double Td11883308;
    Td11883308 = Td11813310 + Td11873311;
    double Td11893309;
    Td11893309 = o_param_r32020_fun(m2061, NULL);
    double Td11903307;
    Td11903307 =  Td11883308 * Td11893309;
    result = Td11753306 + Td11903307;
    return result;
}

int solver_second2063_fun(int* m2064, Value* l2065, Value *env){
    int result;
    double aa03265;
    aa03265 = in_prod_sqr_obj2051_fun(m2064, l2065, NULL);
    int Ti11163303;
    Ti11163303 = o_isrot1992_fun(m2064, NULL);
    int Ti11173304;
    Ti11173304 = 0;
    double aa3266;
    if(Ti11163303 == Ti11173304){
	aa3266 = aa03265;
    }
    else{
	double Td11183305;
	Td11183305 = in_prod_co_objrot2054_fun(m2064, l2065, NULL);
	aa3266 = aa03265 + Td11183305;
    }
    double Td11193267;
    Td11193267 = 0.000000;
    if(Td11193267 == aa3266){
	result = 0;
    }
    else{
	double Td11203301;
	Td11203301 = 2.000000;
	double Td11213302;
	Td11213302 = solver2nd_mul_b2057_fun(m2064, l2065, NULL);
	double bb03268;
	bb03268 =  Td11203301 * Td11213302;
	int Ti11223298;
	Ti11223298 = o_isrot1992_fun(m2064, NULL);
	int Ti11233299;
	Ti11233299 = 0;
	double bb3269;
	if(Ti11223298 == Ti11233299){
	    bb3269 = bb03268;
	}
	else{
	    double Td11243300;
	    Td11243300 = solver2nd_rot_b2060_fun(m2064, l2065, NULL);
	    bb3269 = bb03268 + Td11243300;
	}
	Value* Ta11253297;
	Ta11253297 = solver_w_vec;
	double cc03270;
	cc03270 = in_prod_sqr_obj2051_fun(m2064, Ta11253297, NULL);
	int Ti11263293;
	Ti11263293 = o_isrot1992_fun(m2064, NULL);
	int Ti11273294;
	Ti11273294 = 0;
	double cc13271;
	if(Ti11263293 == Ti11273294){
	    cc13271 = cc03270;
	}
	else{
	    Value* Ta11283296;
	    Ta11283296 = solver_w_vec;
	    double Td11293295;
	    Td11293295 = in_prod_co_objrot2054_fun(m2064, Ta11283296, NULL);
	    cc13271 = cc03270 + Td11293295;
	}
	int Ti11303290;
	Ti11303290 = o_form1986_fun(m2064, NULL);
	int Ti11313291;
	Ti11313291 = 3;
	double cc3272;
	if(Ti11303290 == Ti11313291){
	    double Td11323292;
	    Td11323292 = 1.000000;
	    cc3272 = cc13271 - Td11323292;
	}
	else{
	    cc3272 = cc13271;
	}
	double Td11333289;
	Td11333289 = 4.000000;
	double Td11343288;
	Td11343288 =  Td11333289 * aa3266;
	double d23286;
	d23286 =  Td11343288 * cc3272;
	double Td11353287;
	Td11353287 = fsqr1980_fun(bb3269, NULL);
	double d3273;
	d3273 = Td11353287 - d23286;
	double Td11363274;
	Td11363274 = 0.000000;
	if(d3273 <= Td11363274){
	    result = 0;
	}
	else{
	    double sd3275;
	    sd3275 = sqrt(d3273);
	    bool Tb11373284;
	    Tb11373284 = o_isinvert1990_fun(m2064, NULL);
	    int Ti11383285;
	    Ti11383285 = 0;
	    double t13276;
	    if(Tb11373284 == Ti11383285){
		t13276 = -sd3275;
	    }
	    else{
		t13276 = sd3275;
	    }
	    Value* Ta11393278;
	    Ta11393278 = solver_dist;
	    int Ti11403279;
	    Ti11403279 = 0;
	    double Td11413282;
	    Td11413282 = t13276 - bb3269;
	    double Td11423283;
	    Td11423283 = 2.000000;
	    double Td11433281;
	    Td11433281 = Td11413282 / Td11423283;
	    double Td11443280;
	    Td11443280 = Td11433281 / aa3266;
	    int Tu713277;
	    Ta11393278[Ti11403279].d = Td11443280;
	    result = 1;
	}
    }
    return result;
}

int solver2066_fun(int index2067, Value* l2068, Value* p2069, Value *env){
    int result;
    Value* Ta10953264;
    Ta10953264 = objects;
    int* m3239;
    m3239 = Ta10953264[index2067].a;
    Value* Ta10963258;
    Ta10963258 = solver_w_vec;
    int Ti10973259;
    Ti10973259 = 0;
    int Ti10983263;
    Ti10983263 = 0;
    double Td10993261;
    Td10993261 = p2069[Ti10983263].d;
    double Td11003262;
    Td11003262 = o_param_x2000_fun(m3239, NULL);
    double Td11013260;
    Td11013260 = Td10993261 - Td11003262;
    int Tu743240;
    Ta10963258[Ti10973259].d = Td11013260;
    Value* Ta11023252;
    Ta11023252 = solver_w_vec;
    int Ti11033253;
    Ti11033253 = 1;
    int Ti11043257;
    Ti11043257 = 1;
    double Td11053255;
    Td11053255 = p2069[Ti11043257].d;
    double Td11063256;
    Td11063256 = o_param_y2002_fun(m3239, NULL);
    double Td11073254;
    Td11073254 = Td11053255 - Td11063256;
    int Tu733241;
    Ta11023252[Ti11033253].d = Td11073254;
    Value* Ta11083246;
    Ta11083246 = solver_w_vec;
    int Ti11093247;
    Ti11093247 = 2;
    int Ti11103251;
    Ti11103251 = 2;
    double Td11113249;
    Td11113249 = p2069[Ti11103251].d;
    double Td11123250;
    Td11123250 = o_param_z2004_fun(m3239, NULL);
    double Td11133248;
    Td11133248 = Td11113249 - Td11123250;
    int Tu723242;
    Ta11083246[Ti11093247].d = Td11133248;
    int m_shape3243;
    m_shape3243 = o_form1986_fun(m3239, NULL);
    int Ti11143244;
    Ti11143244 = 1;
    if(m_shape3243 == Ti11143244){
	result = solver_rect2045_fun(m3239, l2068, NULL);
    }
    else{
	int Ti11153245;
	Ti11153245 = 2;
	if(m_shape3243 == Ti11153245){
	    result = solver_surface2048_fun(m3239, l2068, NULL);
	}
	else{
	    result = solver_second2063_fun(m3239, l2068, NULL);
	}
    }
    return result;
}

bool is_rect_outside2070_fun(int* m2071, Value *env){
    bool result;
    double Td10763224;
    Td10763224 = o_param_a1994_fun(m2071, NULL);
    Value* Ta10773237;
    Ta10773237 = isoutside_q;
    int Ti10783238;
    Ti10783238 = 0;
    double Td10793236;
    Td10793236 = Ta10773237[Ti10783238].d;
    double Td10803225;
    Td10803225 = fabs(Td10793236);
    int Ti10913220;
    if(Td10763224 <= Td10803225){
	Ti10913220 = 0;
    }
    else{
	double Td10813226;
	Td10813226 = o_param_b1996_fun(m2071, NULL);
	Value* Ta10823234;
	Ta10823234 = isoutside_q;
	int Ti10833235;
	Ti10833235 = 1;
	double Td10843233;
	Td10843233 = Ta10823234[Ti10833235].d;
	double Td10853227;
	Td10853227 = fabs(Td10843233);
	if(Td10813226 <= Td10853227){
	    Ti10913220 = 0;
	}
	else{
	    double Td10863228;
	    Td10863228 = o_param_c1998_fun(m2071, NULL);
	    Value* Ta10873231;
	    Ta10873231 = isoutside_q;
	    int Ti10883232;
	    Ti10883232 = 2;
	    double Td10893230;
	    Td10893230 = Ta10873231[Ti10883232].d;
	    double Td10903229;
	    Td10903229 = fabs(Td10893230);
	    if(Td10863228 <= Td10903229){
		Ti10913220 = 0;
	    }
	    else{
		Ti10913220 = 1;
	    }
	}
    }
    int Ti10923221;
    Ti10923221 = 0;
    if(Ti10913220 == Ti10923221){
	bool Tb10933222;
	Tb10933222 = o_isinvert1990_fun(m2071, NULL);
	int Ti10943223;
	Ti10943223 = 0;
	if(Tb10933222 == Ti10943223){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    else{
	result = o_isinvert1990_fun(m2071, NULL);
    }
    return result;
}

bool is_plane_outside2072_fun(int* m2073, Value *env){
    bool result;
    double Td10563216;
    Td10563216 = o_param_a1994_fun(m2073, NULL);
    Value* Ta10573218;
    Ta10573218 = isoutside_q;
    int Ti10583219;
    Ti10583219 = 0;
    double Td10593217;
    Td10593217 = Ta10573218[Ti10583219].d;
    double Td10603210;
    Td10603210 =  Td10563216 * Td10593217;
    double Td10613212;
    Td10613212 = o_param_b1996_fun(m2073, NULL);
    Value* Ta10623214;
    Ta10623214 = isoutside_q;
    int Ti10633215;
    Ti10633215 = 1;
    double Td10643213;
    Td10643213 = Ta10623214[Ti10633215].d;
    double Td10653211;
    Td10653211 =  Td10613212 * Td10643213;
    double Td10663204;
    Td10663204 = Td10603210 + Td10653211;
    double Td10673206;
    Td10673206 = o_param_c1998_fun(m2073, NULL);
    Value* Ta10683208;
    Ta10683208 = isoutside_q;
    int Ti10693209;
    Ti10693209 = 2;
    double Td10703207;
    Td10703207 = Ta10683208[Ti10693209].d;
    double Td10713205;
    Td10713205 =  Td10673206 * Td10703207;
    double w3198;
    w3198 = Td10663204 + Td10713205;
    double Td10723203;
    Td10723203 = 0.000000;
    bool s3199;
    if(Td10723203 <= w3198){
	s3199 = 0;
    }
    else{
	s3199 = 1;
    }
    bool Tb10733202;
    Tb10733202 = o_isinvert1990_fun(m2073, NULL);
    bool Tb10743200;
    Tb10743200 = xor1977_fun(Tb10733202, s3199, NULL);
    int Ti10753201;
    Ti10753201 = 0;
    if(Tb10743200 == Ti10753201){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_second_outside2074_fun(int* m2075, Value *env){
    bool result;
    Value* Ta10443197;
    Ta10443197 = isoutside_q;
    double w3182;
    w3182 = in_prod_sqr_obj2051_fun(m2075, Ta10443197, NULL);
    int Ti10453194;
    Ti10453194 = o_form1986_fun(m2075, NULL);
    int Ti10463195;
    Ti10463195 = 3;
    double w23183;
    if(Ti10453194 == Ti10463195){
	double Td10473196;
	Td10473196 = 1.000000;
	w23183 = w3182 - Td10473196;
    }
    else{
	w23183 = w3182;
    }
    int Ti10483190;
    Ti10483190 = o_isrot1992_fun(m2075, NULL);
    int Ti10493191;
    Ti10493191 = 0;
    double w33184;
    if(Ti10483190 == Ti10493191){
	w33184 = w23183;
    }
    else{
	Value* Ta10503193;
	Ta10503193 = isoutside_q;
	double Td10513192;
	Td10513192 = in_prod_co_objrot2054_fun(m2075, Ta10503193, NULL);
	w33184 = w23183 + Td10513192;
    }
    double Td10523189;
    Td10523189 = 0.000000;
    bool s3185;
    if(Td10523189 <= w33184){
	s3185 = 0;
    }
    else{
	s3185 = 1;
    }
    bool Tb10533188;
    Tb10533188 = o_isinvert1990_fun(m2075, NULL);
    bool Tb10543186;
    Tb10543186 = xor1977_fun(Tb10533188, s3185, NULL);
    int Ti10553187;
    Ti10553187 = 0;
    if(Tb10543186 == Ti10553187){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_outside2076_fun(int* m2077, Value *env){
    bool result;
    Value* Ta10213175;
    Ta10213175 = isoutside_q;
    int Ti10223176;
    Ti10223176 = 0;
    Value* Ta10233180;
    Ta10233180 = chkinside_p;
    int Ti10243181;
    Ti10243181 = 0;
    double Td10253178;
    Td10253178 = Ta10233180[Ti10243181].d;
    double Td10263179;
    Td10263179 = o_param_x2000_fun(m2077, NULL);
    double Td10273177;
    Td10273177 = Td10253178 - Td10263179;
    int Tu773155;
    Ta10213175[Ti10223176].d = Td10273177;
    Value* Ta10283168;
    Ta10283168 = isoutside_q;
    int Ti10293169;
    Ti10293169 = 1;
    Value* Ta10303173;
    Ta10303173 = chkinside_p;
    int Ti10313174;
    Ti10313174 = 1;
    double Td10323171;
    Td10323171 = Ta10303173[Ti10313174].d;
    double Td10333172;
    Td10333172 = o_param_y2002_fun(m2077, NULL);
    double Td10343170;
    Td10343170 = Td10323171 - Td10333172;
    int Tu763156;
    Ta10283168[Ti10293169].d = Td10343170;
    Value* Ta10353161;
    Ta10353161 = isoutside_q;
    int Ti10363162;
    Ti10363162 = 2;
    Value* Ta10373166;
    Ta10373166 = chkinside_p;
    int Ti10383167;
    Ti10383167 = 2;
    double Td10393164;
    Td10393164 = Ta10373166[Ti10383167].d;
    double Td10403165;
    Td10403165 = o_param_z2004_fun(m2077, NULL);
    double Td10413163;
    Td10413163 = Td10393164 - Td10403165;
    int Tu753157;
    Ta10353161[Ti10363162].d = Td10413163;
    int m_shape3158;
    m_shape3158 = o_form1986_fun(m2077, NULL);
    int Ti10423159;
    Ti10423159 = 1;
    if(m_shape3158 == Ti10423159){
	result = is_rect_outside2070_fun(m2077, NULL);
    }
    else{
	int Ti10433160;
	Ti10433160 = 2;
	if(m_shape3158 == Ti10433160){
	    result = is_plane_outside2072_fun(m2077, NULL);
	}
	else{
	    result = is_second_outside2074_fun(m2077, NULL);
	}
    }
    return result;
}

bool check_all_inside2078_fun(int ofs2079, Value* iand2080, Value *env){
    bool result;
    int head3146;
    head3146 = iand2080[ofs2079].i;
    int Ti10133154;
    Ti10133154 = 1;
    int Ti10143147;
    Ti10143147 = -Ti10133154;
    if(head3146 == Ti10143147){
	result = 1;
    }
    else{
	Value* Ta10153153;
	Ta10153153 = objects;
	int* Tt10163152;
	Tt10163152 = Ta10153153[head3146].a;
	bool Tb10173148;
	Tb10173148 = is_outside2076_fun(Tt10163152, NULL);
	int Ti10183149;
	Ti10183149 = 0;
	if(Tb10173148 == Ti10183149){
	    int Ti10193151;
	    Ti10193151 = 1;
	    int Ti10203150;
	    Ti10203150 = ofs2079 + Ti10193151;
	    result = check_all_inside2078_fun(Ti10203150, iand2080, NULL);
	}
	else{
	    result = 0;
	}
    }
    return result;
}

bool shadow_check_and_group2081_fun(int iand_ofs2082, Value* and_group2083, Value* p2084, Value *env){
    bool result;
    int Ti9643090;
    Ti9643090 = and_group2083[iand_ofs2082].i;
    int Ti9653145;
    Ti9653145 = 1;
    int Ti9663091;
    Ti9663091 = -Ti9653145;
    if(Ti9643090 == Ti9663091){
	result = 0;
    }
    else{
	int obj3092;
	obj3092 = and_group2083[iand_ofs2082].i;
	Value* Ta9673144;
	Ta9673144 = light;
	int t03093;
	t03093 = solver2066_fun(obj3092, Ta9673144, p2084, NULL);
	Value* Ta9683142;
	Ta9683142 = solver_dist;
	int Ti9693143;
	Ti9693143 = 0;
	double t0p3094;
	t0p3094 = Ta9683142[Ti9693143].d;
	int Ti9703140;
	Ti9703140 = 0;
	int Ti9723095;
	if(t03093 == Ti9703140){
	    Ti9723095 = 0;
	}
	else{
	    double Td9713141;
	    Td9713141 = -0.200000;
	    if(Td9713141 <= t0p3094){
		Ti9723095 = 0;
	    }
	    else{
		Ti9723095 = 1;
	    }
	}
	int Ti9733096;
	Ti9733096 = 0;
	if(Ti9723095 == Ti9733096){
	    Value* Ta9743139;
	    Ta9743139 = objects;
	    int* Tt9753138;
	    Tt9753138 = Ta9743139[obj3092].a;
	    bool Tb9763134;
	    Tb9763134 = o_isinvert1990_fun(Tt9753138, NULL);
	    int Ti9773135;
	    Ti9773135 = 0;
	    if(Tb9763134 == Ti9773135){
		result = 0;
	    }
	    else{
		int Ti9783137;
		Ti9783137 = 1;
		int Ti9793136;
		Ti9793136 = iand_ofs2082 + Ti9783137;
		result = shadow_check_and_group2081_fun(Ti9793136, and_group2083, p2084, NULL);
	    }
	}
	else{
	    double Td9803133;
	    Td9803133 = 0.010000;
	    double t3097;
	    t3097 = t0p3094 + Td9803133;
	    Value* Ta9813124;
	    Ta9813124 = chkinside_p;
	    int Ti9823125;
	    Ti9823125 = 0;
	    Value* Ta9833131;
	    Ta9833131 = light;
	    int Ti9843132;
	    Ti9843132 = 0;
	    double Td9853130;
	    Td9853130 = Ta9833131[Ti9843132].d;
	    double Td9863127;
	    Td9863127 =  Td9853130 * t3097;
	    int Ti9873129;
	    Ti9873129 = 0;
	    double Td9883128;
	    Td9883128 = p2084[Ti9873129].d;
	    double Td9893126;
	    Td9893126 = Td9863127 + Td9883128;
	    int Tu803098;
	    Ta9813124[Ti9823125].d = Td9893126;
	    Value* Ta9903115;
	    Ta9903115 = chkinside_p;
	    int Ti9913116;
	    Ti9913116 = 1;
	    Value* Ta9923122;
	    Ta9923122 = light;
	    int Ti9933123;
	    Ti9933123 = 1;
	    double Td9943121;
	    Td9943121 = Ta9923122[Ti9933123].d;
	    double Td9953118;
	    Td9953118 =  Td9943121 * t3097;
	    int Ti9963120;
	    Ti9963120 = 1;
	    double Td9973119;
	    Td9973119 = p2084[Ti9963120].d;
	    double Td9983117;
	    Td9983117 = Td9953118 + Td9973119;
	    int Tu793099;
	    Ta9903115[Ti9913116].d = Td9983117;
	    Value* Ta9993106;
	    Ta9993106 = chkinside_p;
	    int Ti10003107;
	    Ti10003107 = 2;
	    Value* Ta10013113;
	    Ta10013113 = light;
	    int Ti10023114;
	    Ti10023114 = 2;
	    double Td10033112;
	    Td10033112 = Ta10013113[Ti10023114].d;
	    double Td10043109;
	    Td10043109 =  Td10033112 * t3097;
	    int Ti10053111;
	    Ti10053111 = 2;
	    double Td10063110;
	    Td10063110 = p2084[Ti10053111].d;
	    double Td10073108;
	    Td10073108 = Td10043109 + Td10063110;
	    int Tu783100;
	    Ta9993106[Ti10003107].d = Td10073108;
	    int Ti10083105;
	    Ti10083105 = 0;
	    bool Tb10093101;
	    Tb10093101 = check_all_inside2078_fun(Ti10083105, and_group2083, NULL);
	    int Ti10103102;
	    Ti10103102 = 0;
	    if(Tb10093101 == Ti10103102){
		int Ti10113104;
		Ti10113104 = 1;
		int Ti10123103;
		Ti10123103 = iand_ofs2082 + Ti10113104;
		result = shadow_check_and_group2081_fun(Ti10123103, and_group2083, p2084, NULL);
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

bool shadow_check_one_or_group2085_fun(int ofs2086, Value* or_group2087, Value* p2088, Value *env){
    bool result;
    int head3080;
    head3080 = or_group2087[ofs2086].i;
    int Ti9573089;
    Ti9573089 = 1;
    int Ti9583081;
    Ti9583081 = -Ti9573089;
    if(head3080 == Ti9583081){
	result = 0;
    }
    else{
	Value* Ta9593088;
	Ta9593088 = and_net;
	Value* and_group3082;
	and_group3082 = Ta9593088[head3080].a;
	int Ti9603087;
	Ti9603087 = 0;
	bool shadow_p3083;
	shadow_p3083 = shadow_check_and_group2081_fun(Ti9603087, and_group3082, p2088, NULL);
	int Ti9613084;
	Ti9613084 = 0;
	if(shadow_p3083 == Ti9613084){
	    int Ti9623086;
	    Ti9623086 = 1;
	    int Ti9633085;
	    Ti9633085 = ofs2086 + Ti9623086;
	    result = shadow_check_one_or_group2085_fun(Ti9633085, or_group2087, p2088, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

bool shadow_check_one_or_matrix2089_fun(int ofs2090, Value* or_matrix2091, Value* p2092, Value *env){
    bool result;
    Value* head3053;
    head3053 = or_matrix2091[ofs2090].a;
    int Ti9333079;
    Ti9333079 = 0;
    int range_primitive3054;
    range_primitive3054 = head3053[Ti9333079].i;
    int Ti9343078;
    Ti9343078 = 1;
    int Ti9353055;
    Ti9353055 = -Ti9343078;
    if(range_primitive3054 == Ti9353055){
	result = 0;
    }
    else{
	int Ti9363056;
	Ti9363056 = 99;
	if(range_primitive3054 == Ti9363056){
	    int Ti9373077;
	    Ti9373077 = 1;
	    bool Tb9383073;
	    Tb9383073 = shadow_check_one_or_group2085_fun(Ti9373077, head3053, p2092, NULL);
	    int Ti9393074;
	    Ti9393074 = 0;
	    if(Tb9383073 == Ti9393074){
		int Ti9403076;
		Ti9403076 = 1;
		int Ti9413075;
		Ti9413075 = ofs2090 + Ti9403076;
		result = shadow_check_one_or_matrix2089_fun(Ti9413075, or_matrix2091, p2092, NULL);
	    }
	    else{
		result = 1;
	    }
	}
	else{
	    Value* Ta9423072;
	    Ta9423072 = light;
	    int t3057;
	    t3057 = solver2066_fun(range_primitive3054, Ta9423072, p2092, NULL);
	    int Ti9433058;
	    Ti9433058 = 0;
	    if(t3057 == Ti9433058){
		int Ti9443071;
		Ti9443071 = 1;
		int Ti9453070;
		Ti9453070 = ofs2090 + Ti9443071;
		result = shadow_check_one_or_matrix2089_fun(Ti9453070, or_matrix2091, p2092, NULL);
	    }
	    else{
		double Td9463059;
		Td9463059 = -0.100000;
		Value* Ta9473068;
		Ta9473068 = solver_dist;
		int Ti9483069;
		Ti9483069 = 0;
		double Td9493060;
		Td9493060 = Ta9473068[Ti9483069].d;
		if(Td9463059 <= Td9493060){
		    int Ti9503067;
		    Ti9503067 = 1;
		    int Ti9513066;
		    Ti9513066 = ofs2090 + Ti9503067;
		    result = shadow_check_one_or_matrix2089_fun(Ti9513066, or_matrix2091, p2092, NULL);
		}
		else{
		    int Ti9523065;
		    Ti9523065 = 1;
		    bool Tb9533061;
		    Tb9533061 = shadow_check_one_or_group2085_fun(Ti9523065, head3053, p2092, NULL);
		    int Ti9543062;
		    Ti9543062 = 0;
		    if(Tb9533061 == Ti9543062){
			int Ti9553064;
			Ti9553064 = 1;
			int Ti9563063;
			Ti9563063 = ofs2090 + Ti9553064;
			result = shadow_check_one_or_matrix2089_fun(Ti9563063, or_matrix2091, p2092, NULL);
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

int solve_each_element2093_fun(int iand_ofs2094, Value* and_group2095, Value *env){
    int result;
    int iobj2961;
    iobj2961 = and_group2095[iand_ofs2094].i;
    int Ti8543052;
    Ti8543052 = 1;
    int Ti8552962;
    Ti8552962 = -Ti8543052;
    if(iobj2961 == Ti8552962){
	result = 1;
    }
    else{
	Value* Ta8563050;
	Ta8563050 = vscan;
	Value* Ta8573051;
	Ta8573051 = viewpoint;
	int t02963;
	t02963 = solver2066_fun(iobj2961, Ta8563050, Ta8573051, NULL);
	int Ti8582971;
	Ti8582971 = 0;
	int Tu892964;
	if(t02963 == Ti8582971){
	    Value* Ta8593049;
	    Ta8593049 = objects;
	    int* Tt8603048;
	    Tt8603048 = Ta8593049[iobj2961].a;
	    bool Tb8613043;
	    Tb8613043 = o_isinvert1990_fun(Tt8603048, NULL);
	    int Ti8623044;
	    Ti8623044 = 0;
	    if(Tb8613043 == Ti8623044){
		Value* Ta8633045;
		Ta8633045 = end_flag;
		int Ti8643046;
		Ti8643046 = 0;
		int Ti8653047;
		Ti8653047 = 1;
		Ta8633045[Ti8643046].i = Ti8653047;
	    }
	    else{
		Tu892964 = 1;
	    }
	}
	else{
	    Value* Ta8663041;
	    Ta8663041 = solver_dist;
	    int Ti8673042;
	    Ti8673042 = 0;
	    double t0p2972;
	    t0p2972 = Ta8663041[Ti8673042].d;
	    double Td8682973;
	    Td8682973 = -0.100000;
	    if(t0p2972 <= Td8682973){
		Tu892964 = 1;
	    }
	    else{
		Value* Ta8693039;
		Ta8693039 = tmin;
		int Ti8703040;
		Ti8703040 = 0;
		double Td8712974;
		Td8712974 = Ta8693039[Ti8703040].d;
		if(Td8712974 <= t0p2972){
		    Tu892964 = 1;
		}
		else{
		    double Td8723038;
		    Td8723038 = 0.010000;
		    double t2975;
		    t2975 = t0p2972 + Td8723038;
		    Value* Ta8733028;
		    Ta8733028 = chkinside_p;
		    int Ti8743029;
		    Ti8743029 = 0;
		    Value* Ta8753036;
		    Ta8753036 = vscan;
		    int Ti8763037;
		    Ti8763037 = 0;
		    double Td8773035;
		    Td8773035 = Ta8753036[Ti8763037].d;
		    double Td8783031;
		    Td8783031 =  Td8773035 * t2975;
		    Value* Ta8793033;
		    Ta8793033 = viewpoint;
		    int Ti8803034;
		    Ti8803034 = 0;
		    double Td8813032;
		    Td8813032 = Ta8793033[Ti8803034].d;
		    double Td8823030;
		    Td8823030 = Td8783031 + Td8813032;
		    int Tu882976;
		    Ta8733028[Ti8743029].d = Td8823030;
		    Value* Ta8833018;
		    Ta8833018 = chkinside_p;
		    int Ti8843019;
		    Ti8843019 = 1;
		    Value* Ta8853026;
		    Ta8853026 = vscan;
		    int Ti8863027;
		    Ti8863027 = 1;
		    double Td8873025;
		    Td8873025 = Ta8853026[Ti8863027].d;
		    double Td8883021;
		    Td8883021 =  Td8873025 * t2975;
		    Value* Ta8893023;
		    Ta8893023 = viewpoint;
		    int Ti8903024;
		    Ti8903024 = 1;
		    double Td8913022;
		    Td8913022 = Ta8893023[Ti8903024].d;
		    double Td8923020;
		    Td8923020 = Td8883021 + Td8913022;
		    int Tu872977;
		    Ta8833018[Ti8843019].d = Td8923020;
		    Value* Ta8933008;
		    Ta8933008 = chkinside_p;
		    int Ti8943009;
		    Ti8943009 = 2;
		    Value* Ta8953016;
		    Ta8953016 = vscan;
		    int Ti8963017;
		    Ti8963017 = 2;
		    double Td8973015;
		    Td8973015 = Ta8953016[Ti8963017].d;
		    double Td8983011;
		    Td8983011 =  Td8973015 * t2975;
		    Value* Ta8993013;
		    Ta8993013 = viewpoint;
		    int Ti9003014;
		    Ti9003014 = 2;
		    double Td9013012;
		    Td9013012 = Ta8993013[Ti9003014].d;
		    double Td9023010;
		    Td9023010 = Td8983011 + Td9013012;
		    int Tu862978;
		    Ta8933008[Ti8943009].d = Td9023010;
		    int Ti9033007;
		    Ti9033007 = 0;
		    bool Tb9042979;
		    Tb9042979 = check_all_inside2078_fun(Ti9033007, and_group2095, NULL);
		    int Ti9052980;
		    Ti9052980 = 0;
		    if(Tb9042979 == Ti9052980){
			Tu892964 = 1;
		    }
		    else{
			Value* Ta9063005;
			Ta9063005 = tmin;
			int Ti9073006;
			Ti9073006 = 0;
			int Tu852981;
			Ta9063005[Ti9073006].d = t2975;
			Value* Ta9083000;
			Ta9083000 = crashed_point;
			int Ti9093001;
			Ti9093001 = 0;
			Value* Ta9103003;
			Ta9103003 = chkinside_p;
			int Ti9113004;
			Ti9113004 = 0;
			double Td9123002;
			Td9123002 = Ta9103003[Ti9113004].d;
			int Tu842982;
			Ta9083000[Ti9093001].d = Td9123002;
			Value* Ta9132995;
			Ta9132995 = crashed_point;
			int Ti9142996;
			Ti9142996 = 1;
			Value* Ta9152998;
			Ta9152998 = chkinside_p;
			int Ti9162999;
			Ti9162999 = 1;
			double Td9172997;
			Td9172997 = Ta9152998[Ti9162999].d;
			int Tu832983;
			Ta9132995[Ti9142996].d = Td9172997;
			Value* Ta9182990;
			Ta9182990 = crashed_point;
			int Ti9192991;
			Ti9192991 = 2;
			Value* Ta9202993;
			Ta9202993 = chkinside_p;
			int Ti9212994;
			Ti9212994 = 2;
			double Td9222992;
			Td9222992 = Ta9202993[Ti9212994].d;
			int Tu822984;
			Ta9182990[Ti9192991].d = Td9222992;
			Value* Ta9232988;
			Ta9232988 = intsec_rectside;
			int Ti9242989;
			Ti9242989 = 0;
			int Tu812985;
			Ta9232988[Ti9242989].i = t02963;
			Value* Ta9252986;
			Ta9252986 = crashed_object;
			int Ti9262987;
			Ti9262987 = 0;
			Ta9252986[Ti9262987].i = iobj2961;
		    }
		}
	    }
	}
	Value* Ta9272969;
	Ta9272969 = end_flag;
	int Ti9282970;
	Ti9282970 = 0;
	bool Tb9292965;
	Tb9292965 = Ta9272969[Ti9282970].b;
	int Ti9302966;
	Ti9302966 = 0;
	if(Tb9292965 == Ti9302966){
	    int Ti9312968;
	    Ti9312968 = 1;
	    int Ti9322967;
	    Ti9322967 = iand_ofs2094 + Ti9312968;
	    result = solve_each_element2093_fun(Ti9322967, and_group2095, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int solve_one_or_network2096_fun(int ofs2097, Value* or_group2098, Value *env){
    int result;
    int head2948;
    head2948 = or_group2098[ofs2097].i;
    int Ti8452960;
    Ti8452960 = 1;
    int Ti8462949;
    Ti8462949 = -Ti8452960;
    if(head2948 == Ti8462949){
	result = 1;
    }
    else{
	Value* Ta8472959;
	Ta8472959 = and_net;
	Value* and_group2950;
	and_group2950 = Ta8472959[head2948].a;
	Value* Ta8482956;
	Ta8482956 = end_flag;
	int Ti8492957;
	Ti8492957 = 0;
	int Ti8502958;
	Ti8502958 = 0;
	int Tu912951;
	Ta8482956[Ti8492957].i = Ti8502958;
	int Ti8512955;
	Ti8512955 = 0;
	int Tu902952;
	Tu902952 = solve_each_element2093_fun(Ti8512955, and_group2950, NULL);
	int Ti8522954;
	Ti8522954 = 1;
	int Ti8532953;
	Ti8532953 = ofs2097 + Ti8522954;
	result = solve_one_or_network2096_fun(Ti8532953, or_group2098, NULL);
    }
    return result;
}

int trace_or_matrix2099_fun(int ofs2100, Value* or_network2101, Value *env){
    int result;
    Value* head2927;
    head2927 = or_network2101[ofs2100].a;
    int Ti8292947;
    Ti8292947 = 0;
    int range_primitive2928;
    range_primitive2928 = head2927[Ti8292947].i;
    int Ti8302946;
    Ti8302946 = 1;
    int Ti8312929;
    Ti8312929 = -Ti8302946;
    if(range_primitive2928 == Ti8312929){
	result = 1;
    }
    else{
	int Ti8322933;
	Ti8322933 = 99;
	int Tu922930;
	if(range_primitive2928 == Ti8322933){
	    int Ti8332945;
	    Ti8332945 = 1;
	    Tu922930 = solve_one_or_network2096_fun(Ti8332945, head2927, NULL);
	}
	else{
	    Value* Ta8342943;
	    Ta8342943 = vscan;
	    Value* Ta8352944;
	    Ta8352944 = viewpoint;
	    int t2934;
	    t2934 = solver2066_fun(range_primitive2928, Ta8342943, Ta8352944, NULL);
	    int Ti8362935;
	    Ti8362935 = 0;
	    if(t2934 == Ti8362935){
		Tu922930 = 1;
	    }
	    else{
		Value* Ta8372941;
		Ta8372941 = solver_dist;
		int Ti8382942;
		Ti8382942 = 0;
		double tp2936;
		tp2936 = Ta8372941[Ti8382942].d;
		Value* Ta8392939;
		Ta8392939 = tmin;
		int Ti8402940;
		Ti8402940 = 0;
		double Td8412937;
		Td8412937 = Ta8392939[Ti8402940].d;
		if(Td8412937 <= tp2936){
		    Tu922930 = 1;
		}
		else{
		    int Ti8422938;
		    Ti8422938 = 1;
		    Tu922930 = solve_one_or_network2096_fun(Ti8422938, head2927, NULL);
		}
	    }
	}
	int Ti8432932;
	Ti8432932 = 1;
	int Ti8442931;
	Ti8442931 = ofs2100 + Ti8432932;
	result = trace_or_matrix2099_fun(Ti8442931, or_network2101, NULL);
    }
    return result;
}

bool tracer2102_fun(Value* viewpoint2103, Value* vscan2104, Value *env){
    bool result;
    Value* Ta8182924;
    Ta8182924 = tmin;
    int Ti8192925;
    Ti8192925 = 0;
    double Td8202926;
    Td8202926 = 1000000000.000000;
    int Tu942913;
    Ta8182924[Ti8192925].d = Td8202926;
    int Ti8212920;
    Ti8212920 = 0;
    Value* Ta8222922;
    Ta8222922 = or_net;
    int Ti8232923;
    Ti8232923 = 0;
    Value* Ta8242921;
    Ta8242921 = Ta8222922[Ti8232923].a;
    int Tu932914;
    Tu932914 = trace_or_matrix2099_fun(Ti8212920, Ta8242921, NULL);
    Value* Ta8252918;
    Ta8252918 = tmin;
    int Ti8262919;
    Ti8262919 = 0;
    double t2915;
    t2915 = Ta8252918[Ti8262919].d;
    double Td8272916;
    Td8272916 = -0.100000;
    if(t2915 <= Td8272916){
	result = 0;
    }
    else{
	double Td8282917;
	Td8282917 = 100000000.000000;
	if(Td8282917 <= t2915){
	    result = 0;
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int get_nvector_rect2105_fun(int Tu952106, Value *env){
    int result;
    Value* Ta7742911;
    Ta7742911 = intsec_rectside;
    int Ti7752912;
    Ti7752912 = 0;
    int rectside2862;
    rectside2862 = Ta7742911[Ti7752912].i;
    int Ti7762863;
    Ti7762863 = 1;
    if(rectside2862 == Ti7762863){
	Value* Ta7772904;
	Ta7772904 = nvector;
	int Ti7782905;
	Ti7782905 = 0;
	Value* Ta7792909;
	Ta7792909 = vscan;
	int Ti7802910;
	Ti7802910 = 0;
	double Td7812908;
	Td7812908 = Ta7792909[Ti7802910].d;
	double Td7822907;
	Td7822907 = sgn2025_fun(Td7812908, NULL);
	double Td7832906;
	Td7832906 = -Td7822907;
	int Tu972896;
	Ta7772904[Ti7782905].d = Td7832906;
	Value* Ta7842901;
	Ta7842901 = nvector;
	int Ti7852902;
	Ti7852902 = 1;
	double Td7862903;
	Td7862903 = 0.000000;
	int Tu962897;
	Ta7842901[Ti7852902].d = Td7862903;
	Value* Ta7872898;
	Ta7872898 = nvector;
	int Ti7882899;
	Ti7882899 = 2;
	double Td7892900;
	Td7892900 = 0.000000;
	Ta7872898[Ti7882899].d = Td7892900;
    }
    else{
	int Ti7902864;
	Ti7902864 = 2;
	if(rectside2862 == Ti7902864){
	    Value* Ta7912893;
	    Ta7912893 = nvector;
	    int Ti7922894;
	    Ti7922894 = 0;
	    double Td7932895;
	    Td7932895 = 0.000000;
	    int Tu992881;
	    Ta7912893[Ti7922894].d = Td7932895;
	    Value* Ta7942886;
	    Ta7942886 = nvector;
	    int Ti7952887;
	    Ti7952887 = 1;
	    Value* Ta7962891;
	    Ta7962891 = vscan;
	    int Ti7972892;
	    Ti7972892 = 1;
	    double Td7982890;
	    Td7982890 = Ta7962891[Ti7972892].d;
	    double Td7992889;
	    Td7992889 = sgn2025_fun(Td7982890, NULL);
	    double Td8002888;
	    Td8002888 = -Td7992889;
	    int Tu982882;
	    Ta7942886[Ti7952887].d = Td8002888;
	    Value* Ta8012883;
	    Ta8012883 = nvector;
	    int Ti8022884;
	    Ti8022884 = 2;
	    double Td8032885;
	    Td8032885 = 0.000000;
	    Ta8012883[Ti8022884].d = Td8032885;
	}
	else{
	    int Ti8042865;
	    Ti8042865 = 3;
	    if(rectside2862 == Ti8042865){
		Value* Ta8052878;
		Ta8052878 = nvector;
		int Ti8062879;
		Ti8062879 = 0;
		double Td8072880;
		Td8072880 = 0.000000;
		int Tu1012866;
		Ta8052878[Ti8062879].d = Td8072880;
		Value* Ta8082875;
		Ta8082875 = nvector;
		int Ti8092876;
		Ti8092876 = 1;
		double Td8102877;
		Td8102877 = 0.000000;
		int Tu1002867;
		Ta8082875[Ti8092876].d = Td8102877;
		Value* Ta8112868;
		Ta8112868 = nvector;
		int Ti8122869;
		Ti8122869 = 2;
		Value* Ta8132873;
		Ta8132873 = vscan;
		int Ti8142874;
		Ti8142874 = 2;
		double Td8152872;
		Td8152872 = Ta8132873[Ti8142874].d;
		double Td8162871;
		Td8162871 = sgn2025_fun(Td8152872, NULL);
		double Td8172870;
		Td8172870 = -Td8162871;
		Ta8112868[Ti8122869].d = Td8172870;
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

int get_nvector_plane2107_fun(int* m2108, Value *env){
    int result;
    Value* Ta7622858;
    Ta7622858 = nvector;
    int Ti7632859;
    Ti7632859 = 0;
    double Td7642861;
    Td7642861 = o_param_a1994_fun(m2108, NULL);
    double Td7652860;
    Td7652860 = -Td7642861;
    int Tu1032848;
    Ta7622858[Ti7632859].d = Td7652860;
    Value* Ta7662854;
    Ta7662854 = nvector;
    int Ti7672855;
    Ti7672855 = 1;
    double Td7682857;
    Td7682857 = o_param_b1996_fun(m2108, NULL);
    double Td7692856;
    Td7692856 = -Td7682857;
    int Tu1022849;
    Ta7662854[Ti7672855].d = Td7692856;
    Value* Ta7702850;
    Ta7702850 = nvector;
    int Ti7712851;
    Ti7712851 = 2;
    double Td7722853;
    Td7722853 = o_param_c1998_fun(m2108, NULL);
    double Td7732852;
    Td7732852 = -Td7722853;
    Ta7702850[Ti7712851].d = Td7732852;
    return result;
}

int get_nvector_second_norot2109_fun(int* m2110, Value* p2111, Value *env){
    int result;
    Value* Ta7362840;
    Ta7362840 = nvector;
    int Ti7372841;
    Ti7372841 = 0;
    int Ti7382847;
    Ti7382847 = 0;
    double Td7392845;
    Td7392845 = p2111[Ti7382847].d;
    double Td7402846;
    Td7402846 = o_param_x2000_fun(m2110, NULL);
    double Td7412843;
    Td7412843 = Td7392845 - Td7402846;
    double Td7422844;
    Td7422844 = o_param_a1994_fun(m2110, NULL);
    double Td7432842;
    Td7432842 =  Td7412843 * Td7422844;
    int Tu1062819;
    Ta7362840[Ti7372841].d = Td7432842;
    Value* Ta7442832;
    Ta7442832 = nvector;
    int Ti7452833;
    Ti7452833 = 1;
    int Ti7462839;
    Ti7462839 = 1;
    double Td7472837;
    Td7472837 = p2111[Ti7462839].d;
    double Td7482838;
    Td7482838 = o_param_y2002_fun(m2110, NULL);
    double Td7492835;
    Td7492835 = Td7472837 - Td7482838;
    double Td7502836;
    Td7502836 = o_param_b1996_fun(m2110, NULL);
    double Td7512834;
    Td7512834 =  Td7492835 * Td7502836;
    int Tu1052820;
    Ta7442832[Ti7452833].d = Td7512834;
    Value* Ta7522824;
    Ta7522824 = nvector;
    int Ti7532825;
    Ti7532825 = 2;
    int Ti7542831;
    Ti7542831 = 2;
    double Td7552829;
    Td7552829 = p2111[Ti7542831].d;
    double Td7562830;
    Td7562830 = o_param_z2004_fun(m2110, NULL);
    double Td7572827;
    Td7572827 = Td7552829 - Td7562830;
    double Td7582828;
    Td7582828 = o_param_c1998_fun(m2110, NULL);
    double Td7592826;
    Td7592826 =  Td7572827 * Td7582828;
    int Tu1042821;
    Ta7522824[Ti7532825].d = Td7592826;
    Value* Ta7602822;
    Ta7602822 = nvector;
    bool Tb7612823;
    Tb7612823 = o_isinvert1990_fun(m2110, NULL);
    result = normalize_vector2022_fun(Ta7602822, Tb7612823, NULL);
    return result;
}

int get_nvector_second_rot2112_fun(int* m2113, Value* p2114, Value *env){
    int result;
    Value* Ta6562813;
    Ta6562813 = nvector_w;
    int Ti6572814;
    Ti6572814 = 0;
    int Ti6582818;
    Ti6582818 = 0;
    double Td6592816;
    Td6592816 = p2114[Ti6582818].d;
    double Td6602817;
    Td6602817 = o_param_x2000_fun(m2113, NULL);
    double Td6612815;
    Td6612815 = Td6592816 - Td6602817;
    int Tu1122733;
    Ta6562813[Ti6572814].d = Td6612815;
    Value* Ta6622807;
    Ta6622807 = nvector_w;
    int Ti6632808;
    Ti6632808 = 1;
    int Ti6642812;
    Ti6642812 = 1;
    double Td6652810;
    Td6652810 = p2114[Ti6642812].d;
    double Td6662811;
    Td6662811 = o_param_y2002_fun(m2113, NULL);
    double Td6672809;
    Td6672809 = Td6652810 - Td6662811;
    int Tu1112734;
    Ta6622807[Ti6632808].d = Td6672809;
    Value* Ta6682801;
    Ta6682801 = nvector_w;
    int Ti6692802;
    Ti6692802 = 2;
    int Ti6702806;
    Ti6702806 = 2;
    double Td6712804;
    Td6712804 = p2114[Ti6702806].d;
    double Td6722805;
    Td6722805 = o_param_z2004_fun(m2113, NULL);
    double Td6732803;
    Td6732803 = Td6712804 - Td6722805;
    int Tu1102735;
    Ta6682801[Ti6692802].d = Td6732803;
    Value* Ta6742781;
    Ta6742781 = nvector;
    int Ti6752782;
    Ti6752782 = 0;
    Value* Ta6762799;
    Ta6762799 = nvector_w;
    int Ti6772800;
    Ti6772800 = 0;
    double Td6782797;
    Td6782797 = Ta6762799[Ti6772800].d;
    double Td6792798;
    Td6792798 = o_param_a1994_fun(m2113, NULL);
    double Td6802784;
    Td6802784 =  Td6782797 * Td6792798;
    Value* Ta6812795;
    Ta6812795 = nvector_w;
    int Ti6822796;
    Ti6822796 = 1;
    double Td6832793;
    Td6832793 = Ta6812795[Ti6822796].d;
    double Td6842794;
    Td6842794 = o_param_r32020_fun(m2113, NULL);
    double Td6852787;
    Td6852787 =  Td6832793 * Td6842794;
    Value* Ta6862791;
    Ta6862791 = nvector_w;
    int Ti6872792;
    Ti6872792 = 2;
    double Td6882789;
    Td6882789 = Ta6862791[Ti6872792].d;
    double Td6892790;
    Td6892790 = o_param_r22018_fun(m2113, NULL);
    double Td6902788;
    Td6902788 =  Td6882789 * Td6892790;
    double Td6912786;
    Td6912786 = Td6852787 + Td6902788;
    double Td6922785;
    Td6922785 = fhalf1982_fun(Td6912786, NULL);
    double Td6932783;
    Td6932783 = Td6802784 + Td6922785;
    int Tu1092736;
    Ta6742781[Ti6752782].d = Td6932783;
    Value* Ta6942761;
    Ta6942761 = nvector;
    int Ti6952762;
    Ti6952762 = 1;
    Value* Ta6962779;
    Ta6962779 = nvector_w;
    int Ti6972780;
    Ti6972780 = 1;
    double Td6982777;
    Td6982777 = Ta6962779[Ti6972780].d;
    double Td6992778;
    Td6992778 = o_param_b1996_fun(m2113, NULL);
    double Td7002764;
    Td7002764 =  Td6982777 * Td6992778;
    Value* Ta7012775;
    Ta7012775 = nvector_w;
    int Ti7022776;
    Ti7022776 = 0;
    double Td7032773;
    Td7032773 = Ta7012775[Ti7022776].d;
    double Td7042774;
    Td7042774 = o_param_r32020_fun(m2113, NULL);
    double Td7052767;
    Td7052767 =  Td7032773 * Td7042774;
    Value* Ta7062771;
    Ta7062771 = nvector_w;
    int Ti7072772;
    Ti7072772 = 2;
    double Td7082769;
    Td7082769 = Ta7062771[Ti7072772].d;
    double Td7092770;
    Td7092770 = o_param_r12016_fun(m2113, NULL);
    double Td7102768;
    Td7102768 =  Td7082769 * Td7092770;
    double Td7112766;
    Td7112766 = Td7052767 + Td7102768;
    double Td7122765;
    Td7122765 = fhalf1982_fun(Td7112766, NULL);
    double Td7132763;
    Td7132763 = Td7002764 + Td7122765;
    int Tu1082737;
    Ta6942761[Ti6952762].d = Td7132763;
    Value* Ta7142741;
    Ta7142741 = nvector;
    int Ti7152742;
    Ti7152742 = 2;
    Value* Ta7162759;
    Ta7162759 = nvector_w;
    int Ti7172760;
    Ti7172760 = 2;
    double Td7182757;
    Td7182757 = Ta7162759[Ti7172760].d;
    double Td7192758;
    Td7192758 = o_param_c1998_fun(m2113, NULL);
    double Td7202744;
    Td7202744 =  Td7182757 * Td7192758;
    Value* Ta7212755;
    Ta7212755 = nvector_w;
    int Ti7222756;
    Ti7222756 = 0;
    double Td7232753;
    Td7232753 = Ta7212755[Ti7222756].d;
    double Td7242754;
    Td7242754 = o_param_r22018_fun(m2113, NULL);
    double Td7252747;
    Td7252747 =  Td7232753 * Td7242754;
    Value* Ta7262751;
    Ta7262751 = nvector_w;
    int Ti7272752;
    Ti7272752 = 1;
    double Td7282749;
    Td7282749 = Ta7262751[Ti7272752].d;
    double Td7292750;
    Td7292750 = o_param_r12016_fun(m2113, NULL);
    double Td7302748;
    Td7302748 =  Td7282749 * Td7292750;
    double Td7312746;
    Td7312746 = Td7252747 + Td7302748;
    double Td7322745;
    Td7322745 = fhalf1982_fun(Td7312746, NULL);
    double Td7332743;
    Td7332743 = Td7202744 + Td7322745;
    int Tu1072738;
    Ta7142741[Ti7152742].d = Td7332743;
    Value* Ta7342739;
    Ta7342739 = nvector;
    bool Tb7352740;
    Tb7352740 = o_isinvert1990_fun(m2113, NULL);
    result = normalize_vector2022_fun(Ta7342739, Tb7352740, NULL);
    return result;
}

int get_nvector2115_fun(int* m2116, Value* p2117, Value *env){
    int result;
    int m_shape2727;
    m_shape2727 = o_form1986_fun(m2116, NULL);
    int Ti6512728;
    Ti6512728 = 1;
    if(m_shape2727 == Ti6512728){
	int Tu6522732;
	Tu6522732 = 1;
	result = get_nvector_rect2105_fun(Tu6522732, NULL);
    }
    else{
	int Ti6532729;
	Ti6532729 = 2;
	if(m_shape2727 == Ti6532729){
	    result = get_nvector_plane2107_fun(m2116, NULL);
	}
	else{
	    int Ti6542730;
	    Ti6542730 = o_isrot1992_fun(m2116, NULL);
	    int Ti6552731;
	    Ti6552731 = 0;
	    if(Ti6542730 == Ti6552731){
		result = get_nvector_second_norot2109_fun(m2116, p2117, NULL);
	    }
	    else{
		result = get_nvector_second_rot2112_fun(m2116, p2117, NULL);
	    }
	}
    }
    return result;
}

int utexture2118_fun(int* m2119, Value* p2120, Value *env){
    int result;
    int m_tex2569;
    m_tex2569 = o_texturetype1984_fun(m2119, NULL);
    Value* Ta5222724;
    Ta5222724 = texture_color;
    int Ti5232725;
    Ti5232725 = 0;
    double Td5242726;
    Td5242726 = o_color_red2010_fun(m2119, NULL);
    int Tu1172570;
    Ta5222724[Ti5232725].d = Td5242726;
    Value* Ta5252721;
    Ta5252721 = texture_color;
    int Ti5262722;
    Ti5262722 = 1;
    double Td5272723;
    Td5272723 = o_color_green2012_fun(m2119, NULL);
    int Tu1162571;
    Ta5252721[Ti5262722].d = Td5272723;
    Value* Ta5282718;
    Ta5282718 = texture_color;
    int Ti5292719;
    Ti5292719 = 2;
    double Td5302720;
    Td5302720 = o_color_blue2014_fun(m2119, NULL);
    int Tu1152572;
    Ta5282718[Ti5292719].d = Td5302720;
    int Ti5312573;
    Ti5312573 = 1;
    if(m_tex2569 == Ti5312573){
	int Ti5322717;
	Ti5322717 = 0;
	double Td5332715;
	Td5332715 = p2120[Ti5322717].d;
	double Td5342716;
	Td5342716 = o_param_x2000_fun(m2119, NULL);
	double w12688;
	w12688 = Td5332715 - Td5342716;
	double Td5352714;
	Td5352714 = 0.050000;
	double Td5362713;
	Td5362713 =  w12688 * Td5352714;
	double Td5372711;
	Td5372711 = floor(Td5362713);
	double Td5382712;
	Td5382712 = 20.000000;
	double d12708;
	d12708 =  Td5372711 * Td5382712;
	double Td5392709;
	Td5392709 = 10.000000;
	double Td5402710;
	Td5402710 = w12688 - d12708;
	bool flag12689;
	if(Td5392709 <= Td5402710){
	    flag12689 = 0;
	}
	else{
	    flag12689 = 1;
	}
	int Ti5412707;
	Ti5412707 = 2;
	double Td5422705;
	Td5422705 = p2120[Ti5412707].d;
	double Td5432706;
	Td5432706 = o_param_z2004_fun(m2119, NULL);
	double w32690;
	w32690 = Td5422705 - Td5432706;
	double Td5442704;
	Td5442704 = 0.050000;
	double Td5452703;
	Td5452703 =  w32690 * Td5442704;
	double Td5462701;
	Td5462701 = floor(Td5452703);
	double Td5472702;
	Td5472702 = 20.000000;
	double d22698;
	d22698 =  Td5462701 * Td5472702;
	double Td5482699;
	Td5482699 = 10.000000;
	double Td5492700;
	Td5492700 = w32690 - d22698;
	bool flag22691;
	if(Td5482699 <= Td5492700){
	    flag22691 = 0;
	}
	else{
	    flag22691 = 1;
	}
	Value* Ta5502692;
	Ta5502692 = texture_color;
	int Ti5512693;
	Ti5512693 = 1;
	int Ti5522695;
	Ti5522695 = 0;
	double Td5552694;
	if(flag12689 == Ti5522695){
	    int Ti5532697;
	    Ti5532697 = 0;
	    if(flag22691 == Ti5532697){
		Td5552694 = 255.000000;
	    }
	    else{
		Td5552694 = 0.000000;
	    }
	}
	else{
	    int Ti5542696;
	    Ti5542696 = 0;
	    if(flag22691 == Ti5542696){
		Td5552694 = 0.000000;
	    }
	    else{
		Td5552694 = 255.000000;
	    }
	}
	Ta5502692[Ti5512693].d = Td5552694;
    }
    else{
	int Ti5562574;
	Ti5562574 = 2;
	if(m_tex2569 == Ti5562574){
	    int Ti5572687;
	    Ti5572687 = 1;
	    double Td5582685;
	    Td5582685 = p2120[Ti5572687].d;
	    double Td5592686;
	    Td5592686 = 0.250000;
	    double Td5602684;
	    Td5602684 =  Td5582685 * Td5592686;
	    double Td5612683;
	    Td5612683 = sin(Td5602684);
	    double w22671;
	    w22671 = fsqr1980_fun(Td5612683, NULL);
	    Value* Ta5622679;
	    Ta5622679 = texture_color;
	    int Ti5632680;
	    Ti5632680 = 0;
	    double Td5642682;
	    Td5642682 = 255.000000;
	    double Td5652681;
	    Td5652681 =  Td5642682 * w22671;
	    int Tu1132672;
	    Ta5622679[Ti5632680].d = Td5652681;
	    Value* Ta5662673;
	    Ta5662673 = texture_color;
	    int Ti5672674;
	    Ti5672674 = 1;
	    double Td5682676;
	    Td5682676 = 255.000000;
	    double Td5692678;
	    Td5692678 = 1.000000;
	    double Td5702677;
	    Td5702677 = Td5692678 - w22671;
	    double Td5712675;
	    Td5712675 =  Td5682676 * Td5702677;
	    Ta5662673[Ti5672674].d = Td5712675;
	}
	else{
	    int Ti5722575;
	    Ti5722575 = 3;
	    if(m_tex2569 == Ti5722575){
		int Ti5732670;
		Ti5732670 = 0;
		double Td5742668;
		Td5742668 = p2120[Ti5732670].d;
		double Td5752669;
		Td5752669 = o_param_x2000_fun(m2119, NULL);
		double w12640;
		w12640 = Td5742668 - Td5752669;
		int Ti5762667;
		Ti5762667 = 2;
		double Td5772665;
		Td5772665 = p2120[Ti5762667].d;
		double Td5782666;
		Td5782666 = o_param_z2004_fun(m2119, NULL);
		double w32641;
		w32641 = Td5772665 - Td5782666;
		double Td5792663;
		Td5792663 = fsqr1980_fun(w12640, NULL);
		double Td5802664;
		Td5802664 = fsqr1980_fun(w32641, NULL);
		double Td5812662;
		Td5812662 = Td5792663 + Td5802664;
		double Td5822660;
		Td5822660 = sqrt(Td5812662);
		double Td5832661;
		Td5832661 = 10.000000;
		double w22642;
		w22642 = Td5822660 / Td5832661;
		double Td5842659;
		Td5842659 = floor(w22642);
		double Td5852657;
		Td5852657 = w22642 - Td5842659;
		double Td5862658;
		Td5862658 = 3.141593;
		double w42643;
		w42643 =  Td5852657 * Td5862658;
		double Td5872656;
		Td5872656 = cos(w42643);
		double cws2644;
		cws2644 = fsqr1980_fun(Td5872656, NULL);
		Value* Ta5882652;
		Ta5882652 = texture_color;
		int Ti5892653;
		Ti5892653 = 1;
		double Td5902655;
		Td5902655 = 255.000000;
		double Td5912654;
		Td5912654 =  cws2644 * Td5902655;
		int Tu1142645;
		Ta5882652[Ti5892653].d = Td5912654;
		Value* Ta5922646;
		Ta5922646 = texture_color;
		int Ti5932647;
		Ti5932647 = 2;
		double Td5942651;
		Td5942651 = 1.000000;
		double Td5952649;
		Td5952649 = Td5942651 - cws2644;
		double Td5962650;
		Td5962650 = 255.000000;
		double Td5972648;
		Td5972648 =  Td5952649 * Td5962650;
		Ta5922646[Ti5932647].d = Td5972648;
	    }
	    else{
		int Ti5982576;
		Ti5982576 = 4;
		if(m_tex2569 == Ti5982576){
		    int Ti5992639;
		    Ti5992639 = 0;
		    double Td6002637;
		    Td6002637 = p2120[Ti5992639].d;
		    double Td6012638;
		    Td6012638 = o_param_x2000_fun(m2119, NULL);
		    double Td6022634;
		    Td6022634 = Td6002637 - Td6012638;
		    double Td6032636;
		    Td6032636 = o_param_a1994_fun(m2119, NULL);
		    double Td6042635;
		    Td6042635 = sqrt(Td6032636);
		    double w12577;
		    w12577 =  Td6022634 * Td6042635;
		    int Ti6052633;
		    Ti6052633 = 2;
		    double Td6062631;
		    Td6062631 = p2120[Ti6052633].d;
		    double Td6072632;
		    Td6072632 = o_param_z2004_fun(m2119, NULL);
		    double Td6082628;
		    Td6082628 = Td6062631 - Td6072632;
		    double Td6092630;
		    Td6092630 = o_param_c1998_fun(m2119, NULL);
		    double Td6102629;
		    Td6102629 = sqrt(Td6092630);
		    double w32578;
		    w32578 =  Td6082628 * Td6102629;
		    double Td6112626;
		    Td6112626 = fsqr1980_fun(w12577, NULL);
		    double Td6122627;
		    Td6122627 = fsqr1980_fun(w32578, NULL);
		    double Td6132625;
		    Td6132625 = Td6112626 + Td6122627;
		    double w42579;
		    w42579 = sqrt(Td6132625);
		    double Td6142617;
		    Td6142617 = 0.000100;
		    double Td6152618;
		    Td6152618 = fabs(w12577);
		    double w72580;
		    if(Td6142617 <= Td6152618){
			double Td6162624;
			Td6162624 = w32578 / w12577;
			double w52619;
			w52619 = fabs(Td6162624);
			double Td6172620;
			Td6172620 = atan(w52619);
			double Td6182622;
			Td6182622 = 30.000000;
			double Td6192623;
			Td6192623 = 3.141593;
			double Td6202621;
			Td6202621 = Td6182622 / Td6192623;
			w72580 =  Td6172620 * Td6202621;
		    }
		    else{
			w72580 = 15.000000;
		    }
		    double Td6212616;
		    Td6212616 = floor(w72580);
		    double w92581;
		    w92581 = w72580 - Td6212616;
		    int Ti6222615;
		    Ti6222615 = 1;
		    double Td6232613;
		    Td6232613 = p2120[Ti6222615].d;
		    double Td6242614;
		    Td6242614 = o_param_y2002_fun(m2119, NULL);
		    double Td6252610;
		    Td6252610 = Td6232613 - Td6242614;
		    double Td6262612;
		    Td6262612 = o_param_b1996_fun(m2119, NULL);
		    double Td6272611;
		    Td6272611 = sqrt(Td6262612);
		    double w22582;
		    w22582 =  Td6252610 * Td6272611;
		    double Td6282602;
		    Td6282602 = 0.000100;
		    double Td6292603;
		    Td6292603 = fabs(w72580);
		    double w82583;
		    if(Td6282602 <= Td6292603){
			double Td6302609;
			Td6302609 = w22582 / w42579;
			double w62604;
			w62604 = fabs(Td6302609);
			double Td6312605;
			Td6312605 = atan(w62604);
			double Td6322607;
			Td6322607 = 30.000000;
			double Td6332608;
			Td6332608 = 3.141593;
			double Td6342606;
			Td6342606 = Td6322607 / Td6332608;
			w82583 =  Td6312605 * Td6342606;
		    }
		    else{
			w82583 = 15.000000;
		    }
		    double Td6352601;
		    Td6352601 = floor(w82583);
		    double w102584;
		    w102584 = w82583 - Td6352601;
		    double Td6362597;
		    Td6362597 = 0.150000;
		    double Td6372600;
		    Td6372600 = 0.500000;
		    double Td6382599;
		    Td6382599 = Td6372600 - w92581;
		    double Td6392598;
		    Td6392598 = fsqr1980_fun(Td6382599, NULL);
		    double Td6402593;
		    Td6402593 = Td6362597 - Td6392598;
		    double Td6412596;
		    Td6412596 = 0.500000;
		    double Td6422595;
		    Td6422595 = Td6412596 - w102584;
		    double Td6432594;
		    Td6432594 = fsqr1980_fun(Td6422595, NULL);
		    double w112585;
		    w112585 = Td6402593 - Td6432594;
		    Value* Ta6442586;
		    Ta6442586 = texture_color;
		    int Ti6452587;
		    Ti6452587 = 2;
		    double Td6462589;
		    Td6462589 = 0.000000;
		    double Td6502588;
		    if(w112585 <= Td6462589){
			Td6502588 = 0.000000;
		    }
		    else{
			double Td6472591;
			Td6472591 = 255.000000;
			double Td6482592;
			Td6482592 = 0.300000;
			double Td6492590;
			Td6492590 = Td6472591 / Td6482592;
			Td6502588 =  w112585 * Td6492590;
		    }
		    Ta6442586[Ti6452587].d = Td6502588;
		}
		else{
		    result = 1;
		}
	    }
	}
    }
    return result;
}

double in_prod2121_fun(Value* v12122, Value* v22123, Value *env){
    double result;
    int Ti5062568;
    Ti5062568 = 0;
    double Td5072565;
    Td5072565 = v12122[Ti5062568].d;
    int Ti5082567;
    Ti5082567 = 0;
    double Td5092566;
    Td5092566 = v22123[Ti5082567].d;
    double Td5102559;
    Td5102559 =  Td5072565 * Td5092566;
    int Ti5112564;
    Ti5112564 = 1;
    double Td5122561;
    Td5122561 = v12122[Ti5112564].d;
    int Ti5132563;
    Ti5132563 = 1;
    double Td5142562;
    Td5142562 = v22123[Ti5132563].d;
    double Td5152560;
    Td5152560 =  Td5122561 * Td5142562;
    double Td5162553;
    Td5162553 = Td5102559 + Td5152560;
    int Ti5172558;
    Ti5172558 = 2;
    double Td5182555;
    Td5182555 = v12122[Ti5172558].d;
    int Ti5192557;
    Ti5192557 = 2;
    double Td5202556;
    Td5202556 = v22123[Ti5192557].d;
    double Td5212554;
    Td5212554 =  Td5182555 * Td5202556;
    result = Td5162553 + Td5212554;
    return result;
}

int accumulate_vec_mul2124_fun(Value* v12125, Value* v22126, double w2127, Value *env){
    int result;
    int Ti4852546;
    Ti4852546 = 0;
    int Ti4862552;
    Ti4862552 = 0;
    double Td4872548;
    Td4872548 = v12125[Ti4862552].d;
    int Ti4882551;
    Ti4882551 = 0;
    double Td4892550;
    Td4892550 = v22126[Ti4882551].d;
    double Td4902549;
    Td4902549 =  w2127 * Td4892550;
    double Td4912547;
    Td4912547 = Td4872548 + Td4902549;
    int Tu1192530;
    v12125[Ti4852546].d = Td4912547;
    int Ti4922539;
    Ti4922539 = 1;
    int Ti4932545;
    Ti4932545 = 1;
    double Td4942541;
    Td4942541 = v12125[Ti4932545].d;
    int Ti4952544;
    Ti4952544 = 1;
    double Td4962543;
    Td4962543 = v22126[Ti4952544].d;
    double Td4972542;
    Td4972542 =  w2127 * Td4962543;
    double Td4982540;
    Td4982540 = Td4942541 + Td4972542;
    int Tu1182531;
    v12125[Ti4922539].d = Td4982540;
    int Ti4992532;
    Ti4992532 = 2;
    int Ti5002538;
    Ti5002538 = 2;
    double Td5012534;
    Td5012534 = v12125[Ti5002538].d;
    int Ti5022537;
    Ti5022537 = 2;
    double Td5032536;
    Td5032536 = v22126[Ti5022537].d;
    double Td5042535;
    Td5042535 =  w2127 * Td5032536;
    double Td5052533;
    Td5052533 = Td5012534 + Td5042535;
    v12125[Ti4992532].d = Td5052533;
    return result;
}

int raytracing2128_fun(int nref2129, double energy2130, Value *env){
    int result;
    Value* Ta3712528;
    Ta3712528 = viewpoint;
    Value* Ta3722529;
    Ta3722529 = vscan;
    bool crashed_p2392;
    crashed_p2392 = tracer2102_fun(Ta3712528, Ta3722529, NULL);
    int Ti3732494;
    Ti3732494 = 0;
    int Tu1312393;
    if(crashed_p2392 == Ti3732494){
	int Ti3742495;
	Ti3742495 = 0;
	if(nref2129 == Ti3742495){
	    Tu1312393 = 1;
	}
	else{
	    Value* Ta3752526;
	    Ta3752526 = vscan;
	    Value* Ta3762527;
	    Ta3762527 = light;
	    double Td3772525;
	    Td3772525 = in_prod2121_fun(Ta3752526, Ta3762527, NULL);
	    double hl2496;
	    hl2496 = -Td3772525;
	    double Td3782497;
	    Td3782497 = 0.000000;
	    if(hl2496 <= Td3782497){
		Tu1312393 = 1;
	    }
	    else{
		double Td3792524;
		Td3792524 = fsqr1980_fun(hl2496, NULL);
		double Td3802523;
		Td3802523 =  Td3792524 * hl2496;
		double Td3812519;
		Td3812519 =  Td3802523 * energy2130;
		Value* Ta3822521;
		Ta3822521 = beam;
		int Ti3832522;
		Ti3832522 = 0;
		double Td3842520;
		Td3842520 = Ta3822521[Ti3832522].d;
		double ihl2498;
		ihl2498 =  Td3812519 * Td3842520;
		Value* Ta3852513;
		Ta3852513 = rgb;
		int Ti3862514;
		Ti3862514 = 0;
		Value* Ta3872517;
		Ta3872517 = rgb;
		int Ti3882518;
		Ti3882518 = 0;
		double Td3892516;
		Td3892516 = Ta3872517[Ti3882518].d;
		double Td3902515;
		Td3902515 = Td3892516 + ihl2498;
		int Tu1212499;
		Ta3852513[Ti3862514].d = Td3902515;
		Value* Ta3912507;
		Ta3912507 = rgb;
		int Ti3922508;
		Ti3922508 = 1;
		Value* Ta3932511;
		Ta3932511 = rgb;
		int Ti3942512;
		Ti3942512 = 1;
		double Td3952510;
		Td3952510 = Ta3932511[Ti3942512].d;
		double Td3962509;
		Td3962509 = Td3952510 + ihl2498;
		int Tu1202500;
		Ta3912507[Ti3922508].d = Td3962509;
		Value* Ta3972501;
		Ta3972501 = rgb;
		int Ti3982502;
		Ti3982502 = 2;
		Value* Ta3992505;
		Ta3992505 = rgb;
		int Ti4002506;
		Ti4002506 = 2;
		double Td4012504;
		Td4012504 = Ta3992505[Ti4002506].d;
		double Td4022503;
		Td4022503 = Td4012504 + ihl2498;
		Ta3972501[Ti3982502].d = Td4022503;
	    }
	}
    }
    else{
	Tu1312393 = 1;
    }
    int Ti4032394;
    Ti4032394 = 0;
    if(crashed_p2392 == Ti4032394){
	result = 1;
    }
    else{
	Value* Ta4042490;
	Ta4042490 = objects;
	Value* Ta4052492;
	Ta4052492 = crashed_object;
	int Ti4062493;
	Ti4062493 = 0;
	int Ti4072491;
	Ti4072491 = Ta4052492[Ti4062493].i;
	int* cobj2395;
	cobj2395 = Ta4042490[Ti4072491].a;
	Value* Ta4082489;
	Ta4082489 = crashed_point;
	int Tu1302396;
	Tu1302396 = get_nvector2115_fun(cobj2395, Ta4082489, NULL);
	int Ti4092484;
	Ti4092484 = 0;
	Value* Ta4102487;
	Ta4102487 = or_net;
	int Ti4112488;
	Ti4112488 = 0;
	Value* Ta4122485;
	Ta4122485 = Ta4102487[Ti4112488].a;
	Value* Ta4132486;
	Ta4132486 = crashed_point;
	bool Tb4142473;
	Tb4142473 = shadow_check_one_or_matrix2089_fun(Ti4092484, Ta4122485, Ta4132486, NULL);
	int Ti4152474;
	Ti4152474 = 0;
	double bright2397;
	if(Tb4142473 == Ti4152474){
	    Value* Ta4162482;
	    Ta4162482 = nvector;
	    Value* Ta4172483;
	    Ta4172483 = light;
	    double Td4182481;
	    Td4182481 = in_prod2121_fun(Ta4162482, Ta4172483, NULL);
	    double br2475;
	    br2475 = -Td4182481;
	    double Td4192479;
	    Td4192479 = 0.000000;
	    double br12476;
	    if(Td4192479 <= br2475){
		double Td4202480;
		Td4202480 = 0.200000;
		br12476 = br2475 + Td4202480;
	    }
	    else{
		br12476 = 0.200000;
	    }
	    double Td4212477;
	    Td4212477 =  br12476 * energy2130;
	    double Td4222478;
	    Td4222478 = o_diffuse2006_fun(cobj2395, NULL);
	    bright2397 =  Td4212477 * Td4222478;
	}
	else{
	    bright2397 = 0.000000;
	}
	Value* Ta4232472;
	Ta4232472 = crashed_point;
	int Tu1292398;
	Tu1292398 = utexture2118_fun(cobj2395, Ta4232472, NULL);
	Value* Ta4242470;
	Ta4242470 = rgb;
	Value* Ta4252471;
	Ta4252471 = texture_color;
	int Tu1282399;
	Tu1282399 = accumulate_vec_mul2124_fun(Ta4242470, Ta4252471, bright2397, NULL);
	int Ti4262400;
	Ti4262400 = 4;
	if(nref2129 <= Ti4262400){
	    double Td4272401;
	    Td4272401 = 0.100000;
	    if(energy2130 <= Td4272401){
		result = 1;
	    }
	    else{
		double Td4282466;
		Td4282466 = -2.000000;
		Value* Ta4292468;
		Ta4292468 = vscan;
		Value* Ta4302469;
		Ta4302469 = nvector;
		double Td4312467;
		Td4312467 = in_prod2121_fun(Ta4292468, Ta4302469, NULL);
		double w2402;
		w2402 =  Td4282466 * Td4312467;
		Value* Ta4322464;
		Ta4322464 = vscan;
		Value* Ta4332465;
		Ta4332465 = nvector;
		int Tu1272403;
		Tu1272403 = accumulate_vec_mul2124_fun(Ta4322464, Ta4332465, w2402, NULL);
		int m_surface2404;
		m_surface2404 = o_reflectiontype1988_fun(cobj2395, NULL);
		int Ti4342405;
		Ti4342405 = 1;
		if(m_surface2404 == Ti4342405){
		    double Td4352431;
		    Td4352431 = 0.000000;
		    double Td4362432;
		    Td4362432 = o_hilight2008_fun(cobj2395, NULL);
		    if(Td4352431 == Td4362432){
			result = 1;
		    }
		    else{
			Value* Ta4372462;
			Ta4372462 = vscan;
			Value* Ta4382463;
			Ta4382463 = light;
			double Td4392461;
			Td4392461 = in_prod2121_fun(Ta4372462, Ta4382463, NULL);
			double hl2433;
			hl2433 = -Td4392461;
			double Td4402434;
			Td4402434 = 0.000000;
			if(hl2433 <= Td4402434){
			    result = 1;
			}
			else{
			    double Td4412460;
			    Td4412460 = fsqr1980_fun(hl2433, NULL);
			    double Td4422459;
			    Td4422459 = fsqr1980_fun(Td4412460, NULL);
			    double Td4432458;
			    Td4432458 =  Td4422459 * energy2130;
			    double Td4442456;
			    Td4442456 =  Td4432458 * bright2397;
			    double Td4452457;
			    Td4452457 = o_hilight2008_fun(cobj2395, NULL);
			    double ihl2435;
			    ihl2435 =  Td4442456 * Td4452457;
			    Value* Ta4462450;
			    Ta4462450 = rgb;
			    int Ti4472451;
			    Ti4472451 = 0;
			    Value* Ta4482454;
			    Ta4482454 = rgb;
			    int Ti4492455;
			    Ti4492455 = 0;
			    double Td4502453;
			    Td4502453 = Ta4482454[Ti4492455].d;
			    double Td4512452;
			    Td4512452 = Td4502453 + ihl2435;
			    int Tu1232436;
			    Ta4462450[Ti4472451].d = Td4512452;
			    Value* Ta4522444;
			    Ta4522444 = rgb;
			    int Ti4532445;
			    Ti4532445 = 1;
			    Value* Ta4542448;
			    Ta4542448 = rgb;
			    int Ti4552449;
			    Ti4552449 = 1;
			    double Td4562447;
			    Td4562447 = Ta4542448[Ti4552449].d;
			    double Td4572446;
			    Td4572446 = Td4562447 + ihl2435;
			    int Tu1222437;
			    Ta4522444[Ti4532445].d = Td4572446;
			    Value* Ta4582438;
			    Ta4582438 = rgb;
			    int Ti4592439;
			    Ti4592439 = 2;
			    Value* Ta4602442;
			    Ta4602442 = rgb;
			    int Ti4612443;
			    Ti4612443 = 2;
			    double Td4622441;
			    Td4622441 = Ta4602442[Ti4612443].d;
			    double Td4632440;
			    Td4632440 = Td4622441 + ihl2435;
			    Ta4582438[Ti4592439].d = Td4632440;
			}
		    }
		}
		else{
		    int Ti4642406;
		    Ti4642406 = 2;
		    if(m_surface2404 == Ti4642406){
			Value* Ta4652426;
			Ta4652426 = viewpoint;
			int Ti4662427;
			Ti4662427 = 0;
			Value* Ta4672429;
			Ta4672429 = crashed_point;
			int Ti4682430;
			Ti4682430 = 0;
			double Td4692428;
			Td4692428 = Ta4672429[Ti4682430].d;
			int Tu1262407;
			Ta4652426[Ti4662427].d = Td4692428;
			Value* Ta4702421;
			Ta4702421 = viewpoint;
			int Ti4712422;
			Ti4712422 = 1;
			Value* Ta4722424;
			Ta4722424 = crashed_point;
			int Ti4732425;
			Ti4732425 = 1;
			double Td4742423;
			Td4742423 = Ta4722424[Ti4732425].d;
			int Tu1252408;
			Ta4702421[Ti4712422].d = Td4742423;
			Value* Ta4752416;
			Ta4752416 = viewpoint;
			int Ti4762417;
			Ti4762417 = 2;
			Value* Ta4772419;
			Ta4772419 = crashed_point;
			int Ti4782420;
			Ti4782420 = 2;
			double Td4792418;
			Td4792418 = Ta4772419[Ti4782420].d;
			int Tu1242409;
			Ta4752416[Ti4762417].d = Td4792418;
			double Td4802414;
			Td4802414 = 1.000000;
			double Td4812415;
			Td4812415 = o_diffuse2006_fun(cobj2395, NULL);
			double Td4822413;
			Td4822413 = Td4802414 - Td4812415;
			double energy22410;
			energy22410 =  energy2130 * Td4822413;
			int Ti4832412;
			Ti4832412 = 1;
			int Ti4842411;
			Ti4842411 = nref2129 + Ti4832412;
			result = raytracing2128_fun(Ti4842411, energy22410, NULL);
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

int write_rgb2131_fun(int Tu1322132, Value *env){
    int result;
    Value* Ta3592390;
    Ta3592390 = rgb;
    int Ti3602391;
    Ti3602391 = 0;
    double Td3612389;
    Td3612389 = Ta3592390[Ti3602391].d;
    int red2372;
    red2372 = (int) Td3612389;
    int Ti3622388;
    Ti3622388 = 255;
    int red2373;
    if(red2372 <= Ti3622388){
	red2373 = red2372;
    }
    else{
	red2373 = 255;
    }
    int Tu1342374;
    putchar(red2373);
    Value* Ta3632386;
    Ta3632386 = rgb;
    int Ti3642387;
    Ti3642387 = 1;
    double Td3652385;
    Td3652385 = Ta3632386[Ti3642387].d;
    int green2375;
    green2375 = (int) Td3652385;
    int Ti3662384;
    Ti3662384 = 255;
    int green2376;
    if(green2375 <= Ti3662384){
	green2376 = green2375;
    }
    else{
	green2376 = 255;
    }
    int Tu1332377;
    putchar(green2376);
    Value* Ta3672382;
    Ta3672382 = rgb;
    int Ti3682383;
    Ti3682383 = 2;
    double Td3692381;
    Td3692381 = Ta3672382[Ti3682383].d;
    int blue2378;
    blue2378 = (int) Td3692381;
    int Ti3702380;
    Ti3702380 = 255;
    int blue2379;
    if(blue2378 <= Ti3702380){
	blue2379 = blue2378;
    }
    else{
	blue2379 = 255;
    }
    putchar(blue2379);
    return result;
}

int write_ppm_header2133_fun(int Tu1352134, Value *env){
    int result;
    int Ti3442371;
    Ti3442371 = 80;
    int Tu1432349;
    putchar(Ti3442371);
    int Ti3452369;
    Ti3452369 = 48;
    int Ti3462370;
    Ti3462370 = 6;
    int Ti3472368;
    Ti3472368 = Ti3452369 + Ti3462370;
    int Tu1422350;
    putchar(Ti3472368);
    int Ti3482367;
    Ti3482367 = 10;
    int Tu1412351;
    putchar(Ti3482367);
    Value* Ta3492365;
    Ta3492365 = size;
    int Ti3502366;
    Ti3502366 = 0;
    int Ti3512364;
    Ti3512364 = Ta3492365[Ti3502366].i;
    int Tu1402352;
    printf("%d", Ti3512364);
    int Ti3522363;
    Ti3522363 = 32;
    int Tu1392353;
    putchar(Ti3522363);
    Value* Ta3532361;
    Ta3532361 = size;
    int Ti3542362;
    Ti3542362 = 1;
    int Ti3552360;
    Ti3552360 = Ta3532361[Ti3542362].i;
    int Tu1382354;
    printf("%d", Ti3552360);
    int Ti3562359;
    Ti3562359 = 10;
    int Tu1372355;
    putchar(Ti3562359);
    int Ti3572358;
    Ti3572358 = 255;
    int Tu1362356;
    printf("%d", Ti3572358);
    int Ti3582357;
    Ti3582357 = 10;
    putchar(Ti3582357);
    return result;
}

int scan_point2135_fun(int scanx2136, Value *env){
    int result;
    Value* Ta2472347;
    Ta2472347 = size;
    int Ti2482348;
    Ti2482348 = 0;
    int Ti2492236;
    Ti2492236 = Ta2472347[Ti2482348].i;
    if(Ti2492236 <= scanx2136){
	result = 1;
    }
    else{
	double Td2502343;
	Td2502343 = (double) scanx2136;
	Value* Ta2512345;
	Ta2512345 = scan_offset;
	int Ti2522346;
	Ti2522346 = 0;
	double Td2532344;
	Td2532344 = Ta2512345[Ti2522346].d;
	double Td2542339;
	Td2542339 = Td2502343 - Td2532344;
	Value* Ta2552341;
	Ta2552341 = scan_d;
	int Ti2562342;
	Ti2562342 = 0;
	double Td2572340;
	Td2572340 = Ta2552341[Ti2562342].d;
	double sscanx2237;
	sscanx2237 =  Td2542339 * Td2572340;
	Value* Ta2582329;
	Ta2582329 = vscan;
	int Ti2592330;
	Ti2592330 = 0;
	Value* Ta2602337;
	Ta2602337 = cos_v;
	int Ti2612338;
	Ti2612338 = 1;
	double Td2622336;
	Td2622336 = Ta2602337[Ti2612338].d;
	double Td2632332;
	Td2632332 =  sscanx2237 * Td2622336;
	Value* Ta2642334;
	Ta2642334 = wscan;
	int Ti2652335;
	Ti2652335 = 0;
	double Td2662333;
	Td2662333 = Ta2642334[Ti2652335].d;
	double Td2672331;
	Td2672331 = Td2632332 + Td2662333;
	int Tu1572238;
	Ta2582329[Ti2592330].d = Td2672331;
	Value* Ta2682316;
	Ta2682316 = vscan;
	int Ti2692317;
	Ti2692317 = 1;
	Value* Ta2702327;
	Ta2702327 = scan_sscany;
	int Ti2712328;
	Ti2712328 = 0;
	double Td2722323;
	Td2722323 = Ta2702327[Ti2712328].d;
	Value* Ta2732325;
	Ta2732325 = cos_v;
	int Ti2742326;
	Ti2742326 = 0;
	double Td2752324;
	Td2752324 = Ta2732325[Ti2742326].d;
	double Td2762319;
	Td2762319 =  Td2722323 * Td2752324;
	Value* Ta2772321;
	Ta2772321 = vp;
	int Ti2782322;
	Ti2782322 = 1;
	double Td2792320;
	Td2792320 = Ta2772321[Ti2782322].d;
	double Td2802318;
	Td2802318 = Td2762319 - Td2792320;
	int Tu1562239;
	Ta2682316[Ti2692317].d = Td2802318;
	Value* Ta2812305;
	Ta2812305 = vscan;
	int Ti2822306;
	Ti2822306 = 2;
	double Td2832312;
	Td2832312 = -sscanx2237;
	Value* Ta2842314;
	Ta2842314 = sin_v;
	int Ti2852315;
	Ti2852315 = 1;
	double Td2862313;
	Td2862313 = Ta2842314[Ti2852315].d;
	double Td2872308;
	Td2872308 =  Td2832312 * Td2862313;
	Value* Ta2882310;
	Ta2882310 = wscan;
	int Ti2892311;
	Ti2892311 = 2;
	double Td2902309;
	Td2902309 = Ta2882310[Ti2892311].d;
	double Td2912307;
	Td2912307 = Td2872308 + Td2902309;
	int Tu1552240;
	Ta2812305[Ti2822306].d = Td2912307;
	double Td2922301;
	Td2922301 = fsqr1980_fun(sscanx2237, NULL);
	Value* Ta2932303;
	Ta2932303 = scan_met1;
	int Ti2942304;
	Ti2942304 = 0;
	double Td2952302;
	Td2952302 = Ta2932303[Ti2942304].d;
	double Td2962300;
	Td2962300 = Td2922301 + Td2952302;
	double metric2241;
	metric2241 = sqrt(Td2962300);
	Value* Ta2972294;
	Ta2972294 = vscan;
	int Ti2982295;
	Ti2982295 = 0;
	Value* Ta2992298;
	Ta2992298 = vscan;
	int Ti3002299;
	Ti3002299 = 0;
	double Td3012297;
	Td3012297 = Ta2992298[Ti3002299].d;
	double Td3022296;
	Td3022296 = Td3012297 / metric2241;
	int Tu1542242;
	Ta2972294[Ti2982295].d = Td3022296;
	Value* Ta3032288;
	Ta3032288 = vscan;
	int Ti3042289;
	Ti3042289 = 1;
	Value* Ta3052292;
	Ta3052292 = vscan;
	int Ti3062293;
	Ti3062293 = 1;
	double Td3072291;
	Td3072291 = Ta3052292[Ti3062293].d;
	double Td3082290;
	Td3082290 = Td3072291 / metric2241;
	int Tu1532243;
	Ta3032288[Ti3042289].d = Td3082290;
	Value* Ta3092282;
	Ta3092282 = vscan;
	int Ti3102283;
	Ti3102283 = 2;
	Value* Ta3112286;
	Ta3112286 = vscan;
	int Ti3122287;
	Ti3122287 = 2;
	double Td3132285;
	Td3132285 = Ta3112286[Ti3122287].d;
	double Td3142284;
	Td3142284 = Td3132285 / metric2241;
	int Tu1522244;
	Ta3092282[Ti3102283].d = Td3142284;
	Value* Ta3152277;
	Ta3152277 = viewpoint;
	int Ti3162278;
	Ti3162278 = 0;
	Value* Ta3172280;
	Ta3172280 = view;
	int Ti3182281;
	Ti3182281 = 0;
	double Td3192279;
	Td3192279 = Ta3172280[Ti3182281].d;
	int Tu1512245;
	Ta3152277[Ti3162278].d = Td3192279;
	Value* Ta3202272;
	Ta3202272 = viewpoint;
	int Ti3212273;
	Ti3212273 = 1;
	Value* Ta3222275;
	Ta3222275 = view;
	int Ti3232276;
	Ti3232276 = 1;
	double Td3242274;
	Td3242274 = Ta3222275[Ti3232276].d;
	int Tu1502246;
	Ta3202272[Ti3212273].d = Td3242274;
	Value* Ta3252267;
	Ta3252267 = viewpoint;
	int Ti3262268;
	Ti3262268 = 2;
	Value* Ta3272270;
	Ta3272270 = view;
	int Ti3282271;
	Ti3282271 = 2;
	double Td3292269;
	Td3292269 = Ta3272270[Ti3282271].d;
	int Tu1492247;
	Ta3252267[Ti3262268].d = Td3292269;
	Value* Ta3302264;
	Ta3302264 = rgb;
	int Ti3312265;
	Ti3312265 = 0;
	double Td3322266;
	Td3322266 = 0.000000;
	int Tu1482248;
	Ta3302264[Ti3312265].d = Td3322266;
	Value* Ta3332261;
	Ta3332261 = rgb;
	int Ti3342262;
	Ti3342262 = 1;
	double Td3352263;
	Td3352263 = 0.000000;
	int Tu1472249;
	Ta3332261[Ti3342262].d = Td3352263;
	Value* Ta3362258;
	Ta3362258 = rgb;
	int Ti3372259;
	Ti3372259 = 2;
	double Td3382260;
	Td3382260 = 0.000000;
	int Tu1462250;
	Ta3362258[Ti3372259].d = Td3382260;
	int Ti3392256;
	Ti3392256 = 0;
	double Td3402257;
	Td3402257 = 1.000000;
	int Tu1452251;
	Tu1452251 = raytracing2128_fun(Ti3392256, Td3402257, NULL);
	int Tu3412255;
	Tu3412255 = 1;
	int Tu1442252;
	Tu1442252 = write_rgb2131_fun(Tu3412255, NULL);
	int Ti3422254;
	Ti3422254 = 1;
	int Ti3432253;
	Ti3432253 = scanx2136 + Ti3422254;
	result = scan_point2135_fun(Ti3432253, NULL);
    }
    return result;
}

int scan_line2137_fun(int scany2138, Value *env){
    int result;
    Value* Ta1952234;
    Ta1952234 = size;
    int Ti1962235;
    Ti1962235 = 0;
    int Ti1972177;
    Ti1972177 = Ta1952234[Ti1962235].i;
    if(Ti1972177 <= scany2138){
	result = 1;
    }
    else{
	Value* Ta1982221;
	Ta1982221 = scan_sscany;
	int Ti1992222;
	Ti1992222 = 0;
	Value* Ta2002232;
	Ta2002232 = scan_offset;
	int Ti2012233;
	Ti2012233 = 0;
	double Td2022230;
	Td2022230 = Ta2002232[Ti2012233].d;
	double Td2032231;
	Td2032231 = 1.000000;
	double Td2042228;
	Td2042228 = Td2022230 - Td2032231;
	double Td2052229;
	Td2052229 = (double) scany2138;
	double t2224;
	t2224 = Td2042228 - Td2052229;
	Value* Ta2062226;
	Ta2062226 = scan_d;
	int Ti2072227;
	Ti2072227 = 0;
	double Td2082225;
	Td2082225 = Ta2062226[Ti2072227].d;
	double Td2092223;
	Td2092223 =  Td2082225 * t2224;
	int Tu1622178;
	Ta1982221[Ti1992222].d = Td2092223;
	Value* Ta2102213;
	Ta2102213 = scan_met1;
	int Ti2112214;
	Ti2112214 = 0;
	Value* Ta2122219;
	Ta2122219 = scan_sscany;
	int Ti2132220;
	Ti2132220 = 0;
	double Td2142218;
	Td2142218 = Ta2122219[Ti2132220].d;
	double Td2152216;
	Td2152216 = fsqr1980_fun(Td2142218, NULL);
	double Td2162217;
	Td2162217 = 40000.000000;
	double Td2172215;
	Td2172215 = Td2152216 + Td2162217;
	int Tu1612179;
	Ta2102213[Ti2112214].d = Td2172215;
	Value* Ta2182211;
	Ta2182211 = scan_sscany;
	int Ti2192212;
	Ti2192212 = 0;
	double Td2202207;
	Td2202207 = Ta2182211[Ti2192212].d;
	Value* Ta2212209;
	Ta2212209 = sin_v;
	int Ti2222210;
	Ti2222210 = 0;
	double Td2232208;
	Td2232208 = Ta2212209[Ti2222210].d;
	double t12180;
	t12180 =  Td2202207 * Td2232208;
	Value* Ta2242197;
	Ta2242197 = wscan;
	int Ti2252198;
	Ti2252198 = 0;
	Value* Ta2262205;
	Ta2262205 = sin_v;
	int Ti2272206;
	Ti2272206 = 1;
	double Td2282204;
	Td2282204 = Ta2262205[Ti2272206].d;
	double Td2292200;
	Td2292200 =  t12180 * Td2282204;
	Value* Ta2302202;
	Ta2302202 = vp;
	int Ti2312203;
	Ti2312203 = 0;
	double Td2322201;
	Td2322201 = Ta2302202[Ti2312203].d;
	double Td2332199;
	Td2332199 = Td2292200 - Td2322201;
	int Tu1602181;
	Ta2242197[Ti2252198].d = Td2332199;
	Value* Ta2342187;
	Ta2342187 = wscan;
	int Ti2352188;
	Ti2352188 = 2;
	Value* Ta2362195;
	Ta2362195 = cos_v;
	int Ti2372196;
	Ti2372196 = 1;
	double Td2382194;
	Td2382194 = Ta2362195[Ti2372196].d;
	double Td2392190;
	Td2392190 =  t12180 * Td2382194;
	Value* Ta2402192;
	Ta2402192 = vp;
	int Ti2412193;
	Ti2412193 = 2;
	double Td2422191;
	Td2422191 = Ta2402192[Ti2412193].d;
	double Td2432189;
	Td2432189 = Td2392190 - Td2422191;
	int Tu1592182;
	Ta2342187[Ti2352188].d = Td2432189;
	int Ti2442186;
	Ti2442186 = 0;
	int Tu1582183;
	Tu1582183 = scan_point2135_fun(Ti2442186, NULL);
	int Ti2452185;
	Ti2452185 = 1;
	int Ti2462184;
	Ti2462184 = scany2138 + Ti2452185;
	result = scan_line2137_fun(Ti2462184, NULL);
    }
    return result;
}

int scan_start2139_fun(int Tu1632140, Value *env){
    int result;
    int Tu1822176;
    Tu1822176 = 1;
    int Tu1662160;
    Tu1662160 = write_ppm_header2133_fun(Tu1822176, NULL);
    Value* Ta1832174;
    Ta1832174 = size;
    int Ti1842175;
    Ti1842175 = 0;
    int Ti1852173;
    Ti1852173 = Ta1832174[Ti1842175].i;
    double sizex2161;
    sizex2161 = (double) Ti1852173;
    Value* Ta1862169;
    Ta1862169 = scan_d;
    int Ti1872170;
    Ti1872170 = 0;
    double Td1882172;
    Td1882172 = 128.000000;
    double Td1892171;
    Td1892171 = Td1882172 / sizex2161;
    int Tu1652162;
    Ta1862169[Ti1872170].d = Td1892171;
    Value* Ta1902165;
    Ta1902165 = scan_offset;
    int Ti1912166;
    Ti1912166 = 0;
    double Td1922168;
    Td1922168 = 2.000000;
    double Td1932167;
    Td1932167 = sizex2161 / Td1922168;
    int Tu1642163;
    Ta1902165[Ti1912166].d = Td1932167;
    int Ti1942164;
    Ti1942164 = 0;
    result = scan_line2137_fun(Ti1942164, NULL);
    return result;
}

int rt2141_fun(int size_x2142, int size_y2143, bool debug_p2144, Value *env){
    int result;
    Value* Ta1742158;
    Ta1742158 = size;
    int Ti1752159;
    Ti1752159 = 0;
    int Tu1702148;
    Ta1742158[Ti1752159].i = size_x2142;
    Value* Ta1762156;
    Ta1762156 = size;
    int Ti1772157;
    Ti1772157 = 1;
    int Tu1692149;
    Ta1762156[Ti1772157].i = size_y2143;
    Value* Ta1782154;
    Ta1782154 = dbg;
    int Ti1792155;
    Ti1792155 = 0;
    int Tu1682150;
    Ta1782154[Ti1792155].b = debug_p2144;
    int Tu1802153;
    Tu1802153 = 1;
    int Tu1672151;
    Tu1672151 = read_parameter2043_fun(Tu1802153, NULL);
    int Tu1812152;
    Tu1812152 = 1;
    result = scan_start2139_fun(Tu1812152, NULL);
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
    int Ti1712145;
    Ti1712145 = 768;
    int Ti1722146;
    Ti1722146 = 768;
    int Ti1732147;
    Ti1732147 = 0;
    ans = rt2141_fun(Ti1712145, Ti1722146, Ti1732147, NULL);
    return ans;
}
