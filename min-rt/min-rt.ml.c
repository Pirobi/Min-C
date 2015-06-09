#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x, int size_y, bool debug_p, Value *env);
typedef int fun_int_int_double_Value(int nref, double energy, Value *env);
typedef int fun_int_array_array_double_Value(Value* v1, Value* v2, double w, Value *env);
typedef double fun_double_array_array_Value(Value* v1, Value* v2, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint, Value* vscan, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs, Value* and_group, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs, Value* and_group, Value* p, Value *env);
typedef bool fun_bool_int_array_Value(int ofs, Value* iand, Value *env);
typedef int fun_int_int_array_array_Value(int index, Value* l, Value* p, Value *env);
typedef double fun_double_tuple_array_Value(int* m, Value* v, Value *env);
typedef int fun_int_tuple_array_Value(int* m, Value* l, Value *env);
typedef Value* fun_array_int_Value(int length, Value *env);
typedef bool fun_bool_int_Value(int n, Value *env);
typedef int fun_int_int_Value(int Tu3955, Value *env);
typedef int fun_int_array_bool_Value(Value* v, bool inv, Value *env);
typedef double fun_double_tuple_Value(int* m, Value *env);
typedef bool fun_bool_tuple_Value(int* m, Value *env);
typedef int fun_int_tuple_Value(int* m, Value *env);
typedef double fun_double_double_Value(double x, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x, bool y, Value *env);

bool xor_fun(bool x, bool y, Value *env){
    bool result;
    int Ti5927;
    Ti5927 = 0;
    if(x == Ti5927){
	result = y;
    }
    else{
	int Ti5928;
	Ti5928 = 0;
	if(y == Ti5928){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    return result;
}

double fsqr_fun(double x, Value *env){
    double result;
    result =  x * x;
    return result;
}

double fhalf_fun(double x, Value *env){
    double result;
    double Td5926;
    Td5926 = 2.000000;
    result = x / Td5926;
    return result;
}

int o_texturetype_fun(int* m, Value *env){
    int result;
    int m_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    result = m_tex;
    return result;
}

int o_form_fun(int* m, Value *env){
    int result;
    int xm_tex = m[0];
    int m_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    result = m_shape;
    return result;
}

int o_reflectiontype_fun(int* m, Value *env){
    int result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int m_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    result = m_surface;
    return result;
}

bool o_isinvert_fun(int* m, Value *env){
    bool result;
    int m_tex = m[0];
    int m_shape = m[1];
    int m_surface = m[2];
    int m_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool m_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    result = m_invert;
    return result;
}

int o_isrot_fun(int* m, Value *env){
    int result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int m_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    result = m_isrot;
    return result;
}

double o_param_a_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* m_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5925;
    Ti5925 = 0;
    result = m_abc[Ti5925].d;
    return result;
}

double o_param_b_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* m_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5924;
    Ti5924 = 1;
    result = m_abc[Ti5924].d;
    return result;
}

double o_param_c_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* m_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5923;
    Ti5923 = 2;
    result = m_abc[Ti5923].d;
    return result;
}

double o_param_x_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* m_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5922;
    Ti5922 = 0;
    result = m_xyz[Ti5922].d;
    return result;
}

double o_param_y_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* m_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5921;
    Ti5921 = 1;
    result = m_xyz[Ti5921].d;
    return result;
}

double o_param_z_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* m_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5920;
    Ti5920 = 2;
    result = m_xyz[Ti5920].d;
    return result;
}

double o_diffuse_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* m_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5919;
    Ti5919 = 0;
    result = m_surfparams[Ti5919].d;
    return result;
}

double o_hilight_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* m_surfparams = m[7];
    Value* xm_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5918;
    Ti5918 = 1;
    result = m_surfparams[Ti5918].d;
    return result;
}

double o_color_red_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int m_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* m_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5917;
    Ti5917 = 0;
    result = m_color[Ti5917].d;
    return result;
}

double o_color_green_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int m_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* m_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5916;
    Ti5916 = 1;
    result = m_color[Ti5916].d;
    return result;
}

double o_color_blue_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int m_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* m_color = m[8];
    Value* xm_rot123 = m[9];
    int Ti5915;
    Ti5915 = 2;
    result = m_color[Ti5915].d;
    return result;
}

double o_param_r1_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* m_rot123 = m[9];
    int Ti5914;
    Ti5914 = 0;
    result = m_rot123[Ti5914].d;
    return result;
}

double o_param_r2_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* m_rot123 = m[9];
    int Ti5913;
    Ti5913 = 1;
    result = m_rot123[Ti5913].d;
    return result;
}

double o_param_r3_fun(int* m, Value *env){
    double result;
    int xm_tex = m[0];
    int xm_shape = m[1];
    int xm_surface = m[2];
    int xm_isrot = m[3];
    Value* xm_abc = m[4];
    Value* xm_xyz = m[5];
    bool xm_invert = m[6];
    Value* xm_surfparams = m[7];
    Value* xm_color = m[8];
    Value* m_rot123 = m[9];
    int Ti5912;
    Ti5912 = 2;
    result = m_rot123[Ti5912].d;
    return result;
}

int normalize_vector_fun(Value* v, bool inv, Value *env){
    int result;
    int Ti5888;
    Ti5888 = 0;
    double Td5889;
    Td5889 = v[Ti5888].d;
    double Td5890;
    Td5890 = fsqr_fun(Td5889, NULL);
    int Ti5891;
    Ti5891 = 1;
    double Td5892;
    Td5892 = v[Ti5891].d;
    double Td5893;
    Td5893 = fsqr_fun(Td5892, NULL);
    double Td5894;
    Td5894 = Td5890 + Td5893;
    int Ti5895;
    Ti5895 = 2;
    double Td5896;
    Td5896 = v[Ti5895].d;
    double Td5897;
    Td5897 = fsqr_fun(Td5896, NULL);
    double Td5898;
    Td5898 = Td5894 + Td5897;
    double n0;
    n0 = min_caml_sqrt_fun(Td5898, NULL);
    int Ti5899;
    Ti5899 = 0;
    double n;
    if(inv == Ti5899){
	n = n0;
    }
    else{
	n = -n0;
    }
    int Ti5900;
    Ti5900 = 0;
    int Ti5901;
    Ti5901 = 0;
    double Td5902;
    Td5902 = v[Ti5901].d;
    double Td5903;
    Td5903 = Td5902 / n;
    int Tu3954;
    v[Ti5900].d = Td5903;
    int Ti5904;
    Ti5904 = 1;
    int Ti5905;
    Ti5905 = 1;
    double Td5906;
    Td5906 = v[Ti5905].d;
    double Td5907;
    Td5907 = Td5906 / n;
    int Tu3953;
    v[Ti5904].d = Td5907;
    int Ti5908;
    Ti5908 = 2;
    int Ti5909;
    Ti5909 = 2;
    double Td5910;
    Td5910 = v[Ti5909].d;
    double Td5911;
    Td5911 = Td5910 / n;
    v[Ti5908].d = Td5911;
    return result;
}

double sgn_fun(double x, Value *env){
    double result;
    double Td5887;
    Td5887 = 0.000000;
    if(x <= Td5887){
	result = -1.000000;
    }
    else{
	result = 1.000000;
    }
    return result;
}

double rad_fun(double x, Value *env){
    double result;
    double Td5886;
    Td5886 = 0.017453;
    result =  x * Td5886;
    return result;
}

int read_environ_fun(int Tu3955, Value *env){
    int result;
    Value* Ta5783;

    int Ti5784;
    Ti5784 = 0;
    int Tu5785;
    Tu5785 = 1;
    double Td5786;
    Td5786 = min_caml_read_float_fun(Tu5785, NULL);
    int Tu3971;
    Ta5783[Ti5784].d = Td5786;
    Value* Ta5787;

    int Ti5788;
    Ti5788 = 1;
    int Tu5789;
    Tu5789 = 1;
    double Td5790;
    Td5790 = min_caml_read_float_fun(Tu5789, NULL);
    int Tu3970;
    Ta5787[Ti5788].d = Td5790;
    Value* Ta5791;

    int Ti5792;
    Ti5792 = 2;
    int Tu5793;
    Tu5793 = 1;
    double Td5794;
    Td5794 = min_caml_read_float_fun(Tu5793, NULL);
    int Tu3969;
    Ta5791[Ti5792].d = Td5794;
    int Tu5795;
    Tu5795 = 1;
    double Td5796;
    Td5796 = min_caml_read_float_fun(Tu5795, NULL);
    double v1;
    v1 = rad_fun(Td5796, NULL);
    Value* Ta5797;

    int Ti5798;
    Ti5798 = 0;
    double Td5799;
    Td5799 = min_caml_cos_fun(v1, NULL);
    int Tu3968;
    Ta5797[Ti5798].d = Td5799;
    Value* Ta5800;

    int Ti5801;
    Ti5801 = 0;
    double Td5802;
    Td5802 = min_caml_sin_fun(v1, NULL);
    int Tu3967;
    Ta5800[Ti5801].d = Td5802;
    int Tu5803;
    Tu5803 = 1;
    double Td5804;
    Td5804 = min_caml_read_float_fun(Tu5803, NULL);
    double v2;
    v2 = rad_fun(Td5804, NULL);
    Value* Ta5805;

    int Ti5806;
    Ti5806 = 1;
    double Td5807;
    Td5807 = min_caml_cos_fun(v2, NULL);
    int Tu3966;
    Ta5805[Ti5806].d = Td5807;
    Value* Ta5808;

    int Ti5809;
    Ti5809 = 1;
    double Td5810;
    Td5810 = min_caml_sin_fun(v2, NULL);
    int Tu3965;
    Ta5808[Ti5809].d = Td5810;
    int Tu5811;
    Tu5811 = 1;
    double nl;
    nl = min_caml_read_float_fun(Tu5811, NULL);
    int Tu5812;
    Tu5812 = 1;
    double Td5813;
    Td5813 = min_caml_read_float_fun(Tu5812, NULL);
    double l1;
    l1 = rad_fun(Td5813, NULL);
    double sl1;
    sl1 = min_caml_sin_fun(l1, NULL);
    Value* Ta5814;

    int Ti5815;
    Ti5815 = 1;
    double Td5816;
    Td5816 = -sl1;
    int Tu3964;
    Ta5814[Ti5815].d = Td5816;
    int Tu5817;
    Tu5817 = 1;
    double Td5818;
    Td5818 = min_caml_read_float_fun(Tu5817, NULL);
    double l2;
    l2 = rad_fun(Td5818, NULL);
    double cl1;
    cl1 = min_caml_cos_fun(l1, NULL);
    double sl2;
    sl2 = min_caml_sin_fun(l2, NULL);
    Value* Ta5819;

    int Ti5820;
    Ti5820 = 0;
    double Td5821;
    Td5821 =  cl1 * sl2;
    int Tu3963;
    Ta5819[Ti5820].d = Td5821;
    double cl2;
    cl2 = min_caml_cos_fun(l2, NULL);
    Value* Ta5822;

    int Ti5823;
    Ti5823 = 2;
    double Td5824;
    Td5824 =  cl1 * cl2;
    int Tu3962;
    Ta5822[Ti5823].d = Td5824;
    Value* Ta5825;

    int Ti5826;
    Ti5826 = 0;
    int Tu5827;
    Tu5827 = 1;
    double Td5828;
    Td5828 = min_caml_read_float_fun(Tu5827, NULL);
    int Tu3961;
    Ta5825[Ti5826].d = Td5828;
    Value* Ta5829;

    int Ti5830;
    Ti5830 = 0;
    Value* Ta5831;

    int Ti5832;
    Ti5832 = 0;
    double Td5833;
    Td5833 = Ta5831[Ti5832].d;
    Value* Ta5834;

    int Ti5835;
    Ti5835 = 1;
    double Td5836;
    Td5836 = Ta5834[Ti5835].d;
    double Td5837;
    Td5837 =  Td5833 * Td5836;
    double Td5838;
    Td5838 = -200.000000;
    double Td5839;
    Td5839 =  Td5837 * Td5838;
    int Tu3960;
    Ta5829[Ti5830].d = Td5839;
    Value* Ta5840;

    int Ti5841;
    Ti5841 = 1;
    Value* Ta5842;

    int Ti5843;
    Ti5843 = 0;
    double Td5844;
    Td5844 = Ta5842[Ti5843].d;
    double Td5845;
    Td5845 = -Td5844;
    double Td5846;
    Td5846 = -200.000000;
    double Td5847;
    Td5847 =  Td5845 * Td5846;
    int Tu3959;
    Ta5840[Ti5841].d = Td5847;
    Value* Ta5848;

    int Ti5849;
    Ti5849 = 2;
    Value* Ta5850;

    int Ti5851;
    Ti5851 = 0;
    double Td5852;
    Td5852 = Ta5850[Ti5851].d;
    Value* Ta5853;

    int Ti5854;
    Ti5854 = 1;
    double Td5855;
    Td5855 = Ta5853[Ti5854].d;
    double Td5856;
    Td5856 =  Td5852 * Td5855;
    double Td5857;
    Td5857 = -200.000000;
    double Td5858;
    Td5858 =  Td5856 * Td5857;
    int Tu3958;
    Ta5848[Ti5849].d = Td5858;
    Value* Ta5859;

    int Ti5860;
    Ti5860 = 0;
    Value* Ta5861;

    int Ti5862;
    Ti5862 = 0;
    double Td5863;
    Td5863 = Ta5861[Ti5862].d;
    Value* Ta5864;

    int Ti5865;
    Ti5865 = 0;
    double Td5866;
    Td5866 = Ta5864[Ti5865].d;
    double Td5867;
    Td5867 = Td5863 + Td5866;
    int Tu3957;
    Ta5859[Ti5860].d = Td5867;
    Value* Ta5868;

    int Ti5869;
    Ti5869 = 1;
    Value* Ta5870;

    int Ti5871;
    Ti5871 = 1;
    double Td5872;
    Td5872 = Ta5870[Ti5871].d;
    Value* Ta5873;

    int Ti5874;
    Ti5874 = 1;
    double Td5875;
    Td5875 = Ta5873[Ti5874].d;
    double Td5876;
    Td5876 = Td5872 + Td5875;
    int Tu3956;
    Ta5868[Ti5869].d = Td5876;
    Value* Ta5877;

    int Ti5878;
    Ti5878 = 2;
    Value* Ta5879;

    int Ti5880;
    Ti5880 = 2;
    double Td5881;
    Td5881 = Ta5879[Ti5880].d;
    Value* Ta5882;

    int Ti5883;
    Ti5883 = 2;
    double Td5884;
    Td5884 = Ta5882[Ti5883].d;
    double Td5885;
    Td5885 = Td5881 + Td5884;
    Ta5877[Ti5878].d = Td5885;
    return result;
}

bool read_nth_object_fun(int n, Value *env){
    bool result;
    int Tu5393;
    Tu5393 = 1;
    int texture;
    texture = min_caml_read_int_fun(Tu5393, NULL);
    int Ti5394;
    Ti5394 = 1;
    int Ti5395;
    Ti5395 = -Ti5394;
    if(texture == Ti5395){
	result = 0;
    }
    else{
	int Tu5396;
	Tu5396 = 1;
	int form;
	form = min_caml_read_int_fun(Tu5396, NULL);
	int Tu5397;
	Tu5397 = 1;
	int refltype;
	refltype = min_caml_read_int_fun(Tu5397, NULL);
	int Tu5398;
	Tu5398 = 1;
	int isrot_p;
	isrot_p = min_caml_read_int_fun(Tu5398, NULL);
	int Ti5399;
	Ti5399 = 3;
	double Td5400;
	Td5400 = 0.000000;
	Value* abc;
	make_double_array(&abc, Ti5399, Td5400);
	int Ti5401;
	Ti5401 = 0;
	int Tu5402;
	Tu5402 = 1;
	double Td5403;
	Td5403 = min_caml_read_float_fun(Tu5402, NULL);
	int Tu4010;
	abc[Ti5401].d = Td5403;
	int Ti5404;
	Ti5404 = 1;
	int Tu5405;
	Tu5405 = 1;
	double Td5406;
	Td5406 = min_caml_read_float_fun(Tu5405, NULL);
	int Tu4009;
	abc[Ti5404].d = Td5406;
	int Ti5407;
	Ti5407 = 2;
	int Tu5408;
	Tu5408 = 1;
	double Td5409;
	Td5409 = min_caml_read_float_fun(Tu5408, NULL);
	int Tu4008;
	abc[Ti5407].d = Td5409;
	int Ti5410;
	Ti5410 = 3;
	double Td5411;
	Td5411 = 0.000000;
	Value* xyz;
	make_double_array(&xyz, Ti5410, Td5411);
	int Ti5412;
	Ti5412 = 0;
	int Tu5413;
	Tu5413 = 1;
	double Td5414;
	Td5414 = min_caml_read_float_fun(Tu5413, NULL);
	int Tu4007;
	xyz[Ti5412].d = Td5414;
	int Ti5415;
	Ti5415 = 1;
	int Tu5416;
	Tu5416 = 1;
	double Td5417;
	Td5417 = min_caml_read_float_fun(Tu5416, NULL);
	int Tu4006;
	xyz[Ti5415].d = Td5417;
	int Ti5418;
	Ti5418 = 2;
	int Tu5419;
	Tu5419 = 1;
	double Td5420;
	Td5420 = min_caml_read_float_fun(Tu5419, NULL);
	int Tu4005;
	xyz[Ti5418].d = Td5420;
	double Td5421;
	Td5421 = 0.000000;
	int Tu5422;
	Tu5422 = 1;
	double Td5423;
	Td5423 = min_caml_read_float_fun(Tu5422, NULL);
	bool m_invert;
	if(Td5421 <= Td5423){
	    m_invert = 0;
	}
	else{
	    m_invert = 1;
	}
	int Ti5424;
	Ti5424 = 2;
	double Td5425;
	Td5425 = 0.000000;
	Value* reflparam;
	make_double_array(&reflparam, Ti5424, Td5425);
	int Ti5426;
	Ti5426 = 0;
	int Tu5427;
	Tu5427 = 1;
	double Td5428;
	Td5428 = min_caml_read_float_fun(Tu5427, NULL);
	int Tu4004;
	reflparam[Ti5426].d = Td5428;
	int Ti5429;
	Ti5429 = 1;
	int Tu5430;
	Tu5430 = 1;
	double Td5431;
	Td5431 = min_caml_read_float_fun(Tu5430, NULL);
	int Tu4003;
	reflparam[Ti5429].d = Td5431;
	int Ti5432;
	Ti5432 = 3;
	double Td5433;
	Td5433 = 0.000000;
	Value* color;
	make_double_array(&color, Ti5432, Td5433);
	int Ti5434;
	Ti5434 = 0;
	int Tu5435;
	Tu5435 = 1;
	double Td5436;
	Td5436 = min_caml_read_float_fun(Tu5435, NULL);
	int Tu4002;
	color[Ti5434].d = Td5436;
	int Ti5437;
	Ti5437 = 1;
	int Tu5438;
	Tu5438 = 1;
	double Td5439;
	Td5439 = min_caml_read_float_fun(Tu5438, NULL);
	int Tu4001;
	color[Ti5437].d = Td5439;
	int Ti5440;
	Ti5440 = 2;
	int Tu5441;
	Tu5441 = 1;
	double Td5442;
	Td5442 = min_caml_read_float_fun(Tu5441, NULL);
	int Tu4000;
	color[Ti5440].d = Td5442;
	int Ti5443;
	Ti5443 = 3;
	double Td5444;
	Td5444 = 0.000000;
	Value* rotation;
	make_double_array(&rotation, Ti5443, Td5444);
	int Ti5445;
	Ti5445 = 0;
	int Tu3999;
	if(isrot_p == Ti5445){
	    Tu3999 = 1;
	}
	else{
	    int Ti5446;
	    Ti5446 = 0;
	    int Tu5447;
	    Tu5447 = 1;
	    double Td5448;
	    Td5448 = min_caml_read_float_fun(Tu5447, NULL);
	    double Td5449;
	    Td5449 = rad_fun(Td5448, NULL);
	    int Tu3973;
	    rotation[Ti5446].d = Td5449;
	    int Ti5450;
	    Ti5450 = 1;
	    int Tu5451;
	    Tu5451 = 1;
	    double Td5452;
	    Td5452 = min_caml_read_float_fun(Tu5451, NULL);
	    double Td5453;
	    Td5453 = rad_fun(Td5452, NULL);
	    int Tu3972;
	    rotation[Ti5450].d = Td5453;
	    int Ti5454;
	    Ti5454 = 2;
	    int Tu5455;
	    Tu5455 = 1;
	    double Td5456;
	    Td5456 = min_caml_read_float_fun(Tu5455, NULL);
	    double Td5457;
	    Td5457 = rad_fun(Td5456, NULL);
	    rotation[Ti5454].d = Td5457;
	}
	int Ti5458;
	Ti5458 = 2;
	bool m_invert2;
	if(form == Ti5458){
	    m_invert2 = 1;
	}
	else{
	    m_invert2 = m_invert;
	}
	int* obj;
	obj = malloc(10 * sizeof(int));
	obj[0] = texture;
	obj[1] = form;
	obj[2] = refltype;
	obj[3] = isrot_p;
	obj[4] = abc;
	obj[5] = xyz;
	obj[6] = m_invert2;
	obj[7] = reflparam;
	obj[8] = color;
	obj[9] = rotation;

	Value* Ta5459;

	int Tu3998;
	Ta5459[n].a = obj;
	int Ti5460;
	Ti5460 = 3;
	int Tu3997;
	if(form == Ti5460){
	    int Ti5461;
	    Ti5461 = 0;
	    double a;
	    a = abc[Ti5461].d;
	    int Ti5462;
	    Ti5462 = 0;
	    double Td5463;
	    Td5463 = 0.000000;
	    double Td5466;
	    if(Td5463 == a){
		Td5466 = 0.000000;
	    }
	    else{
		double Td5464;
		Td5464 = sgn_fun(a, NULL);
		double Td5465;
		Td5465 = fsqr_fun(a, NULL);
		Td5466 = Td5464 / Td5465;
	    }
	    int Tu3975;
	    abc[Ti5462].d = Td5466;
	    int Ti5467;
	    Ti5467 = 1;
	    double b;
	    b = abc[Ti5467].d;
	    int Ti5468;
	    Ti5468 = 1;
	    double Td5469;
	    Td5469 = 0.000000;
	    double Td5472;
	    if(Td5469 == b){
		Td5472 = 0.000000;
	    }
	    else{
		double Td5470;
		Td5470 = sgn_fun(b, NULL);
		double Td5471;
		Td5471 = fsqr_fun(b, NULL);
		Td5472 = Td5470 / Td5471;
	    }
	    int Tu3974;
	    abc[Ti5468].d = Td5472;
	    int Ti5473;
	    Ti5473 = 2;
	    double c;
	    c = abc[Ti5473].d;
	    int Ti5474;
	    Ti5474 = 2;
	    double Td5475;
	    Td5475 = 0.000000;
	    double Td5478;
	    if(Td5475 == c){
		Td5478 = 0.000000;
	    }
	    else{
		double Td5476;
		Td5476 = sgn_fun(c, NULL);
		double Td5477;
		Td5477 = fsqr_fun(c, NULL);
		Td5478 = Td5476 / Td5477;
	    }
	    abc[Ti5474].d = Td5478;
	}
	else{
	    int Ti5479;
	    Ti5479 = 2;
	    if(form == Ti5479){
		int Ti5480;
		Ti5480 = 0;
		int Ti5481;
		if(m_invert == Ti5480){
		    Ti5481 = 1;
		}
		else{
		    Ti5481 = 0;
		}
		Tu3997 = normalize_vector_fun(abc, Ti5481, NULL);
	    }
	    else{
		Tu3997 = 1;
	    }
	}
	int Ti5482;
	Ti5482 = 0;
	int Tu3996;
	if(isrot_p == Ti5482){
	    Tu3996 = 1;
	}
	else{
	    Value* Ta5483;

	    int Ti5484;
	    Ti5484 = 10;
	    int Ti5485;
	    Ti5485 = 0;
	    double Td5486;
	    Td5486 = rotation[Ti5485].d;
	    double Td5487;
	    Td5487 = min_caml_cos_fun(Td5486, NULL);
	    int Tu3995;
	    Ta5483[Ti5484].d = Td5487;
	    Value* Ta5488;

	    int Ti5489;
	    Ti5489 = 11;
	    int Ti5490;
	    Ti5490 = 0;
	    double Td5491;
	    Td5491 = rotation[Ti5490].d;
	    double Td5492;
	    Td5492 = min_caml_sin_fun(Td5491, NULL);
	    int Tu3994;
	    Ta5488[Ti5489].d = Td5492;
	    Value* Ta5493;

	    int Ti5494;
	    Ti5494 = 12;
	    int Ti5495;
	    Ti5495 = 1;
	    double Td5496;
	    Td5496 = rotation[Ti5495].d;
	    double Td5497;
	    Td5497 = min_caml_cos_fun(Td5496, NULL);
	    int Tu3993;
	    Ta5493[Ti5494].d = Td5497;
	    Value* Ta5498;

	    int Ti5499;
	    Ti5499 = 13;
	    int Ti5500;
	    Ti5500 = 1;
	    double Td5501;
	    Td5501 = rotation[Ti5500].d;
	    double Td5502;
	    Td5502 = min_caml_sin_fun(Td5501, NULL);
	    int Tu3992;
	    Ta5498[Ti5499].d = Td5502;
	    Value* Ta5503;

	    int Ti5504;
	    Ti5504 = 14;
	    int Ti5505;
	    Ti5505 = 2;
	    double Td5506;
	    Td5506 = rotation[Ti5505].d;
	    double Td5507;
	    Td5507 = min_caml_cos_fun(Td5506, NULL);
	    int Tu3991;
	    Ta5503[Ti5504].d = Td5507;
	    Value* Ta5508;

	    int Ti5509;
	    Ti5509 = 15;
	    int Ti5510;
	    Ti5510 = 2;
	    double Td5511;
	    Td5511 = rotation[Ti5510].d;
	    double Td5512;
	    Td5512 = min_caml_sin_fun(Td5511, NULL);
	    int Tu3990;
	    Ta5508[Ti5509].d = Td5512;
	    Value* Ta5513;

	    int Ti5514;
	    Ti5514 = 0;
	    Value* Ta5515;

	    int Ti5516;
	    Ti5516 = 12;
	    double Td5517;
	    Td5517 = Ta5515[Ti5516].d;
	    Value* Ta5518;

	    int Ti5519;
	    Ti5519 = 14;
	    double Td5520;
	    Td5520 = Ta5518[Ti5519].d;
	    double Td5521;
	    Td5521 =  Td5517 * Td5520;
	    int Tu3989;
	    Ta5513[Ti5514].d = Td5521;
	    Value* Ta5522;

	    int Ti5523;
	    Ti5523 = 1;
	    Value* Ta5524;

	    int Ti5525;
	    Ti5525 = 11;
	    double Td5526;
	    Td5526 = Ta5524[Ti5525].d;
	    Value* Ta5527;

	    int Ti5528;
	    Ti5528 = 13;
	    double Td5529;
	    Td5529 = Ta5527[Ti5528].d;
	    double Td5530;
	    Td5530 =  Td5526 * Td5529;
	    Value* Ta5531;

	    int Ti5532;
	    Ti5532 = 14;
	    double Td5533;
	    Td5533 = Ta5531[Ti5532].d;
	    double Td5534;
	    Td5534 =  Td5530 * Td5533;
	    Value* Ta5535;

	    int Ti5536;
	    Ti5536 = 10;
	    double Td5537;
	    Td5537 = Ta5535[Ti5536].d;
	    Value* Ta5538;

	    int Ti5539;
	    Ti5539 = 15;
	    double Td5540;
	    Td5540 = Ta5538[Ti5539].d;
	    double Td5541;
	    Td5541 =  Td5537 * Td5540;
	    double Td5542;
	    Td5542 = Td5534 - Td5541;
	    int Tu3988;
	    Ta5522[Ti5523].d = Td5542;
	    Value* Ta5543;

	    int Ti5544;
	    Ti5544 = 2;
	    Value* Ta5545;

	    int Ti5546;
	    Ti5546 = 10;
	    double Td5547;
	    Td5547 = Ta5545[Ti5546].d;
	    Value* Ta5548;

	    int Ti5549;
	    Ti5549 = 13;
	    double Td5550;
	    Td5550 = Ta5548[Ti5549].d;
	    double Td5551;
	    Td5551 =  Td5547 * Td5550;
	    Value* Ta5552;

	    int Ti5553;
	    Ti5553 = 14;
	    double Td5554;
	    Td5554 = Ta5552[Ti5553].d;
	    double Td5555;
	    Td5555 =  Td5551 * Td5554;
	    Value* Ta5556;

	    int Ti5557;
	    Ti5557 = 11;
	    double Td5558;
	    Td5558 = Ta5556[Ti5557].d;
	    Value* Ta5559;

	    int Ti5560;
	    Ti5560 = 15;
	    double Td5561;
	    Td5561 = Ta5559[Ti5560].d;
	    double Td5562;
	    Td5562 =  Td5558 * Td5561;
	    double Td5563;
	    Td5563 = Td5555 + Td5562;
	    int Tu3987;
	    Ta5543[Ti5544].d = Td5563;
	    Value* Ta5564;

	    int Ti5565;
	    Ti5565 = 3;
	    Value* Ta5566;

	    int Ti5567;
	    Ti5567 = 12;
	    double Td5568;
	    Td5568 = Ta5566[Ti5567].d;
	    Value* Ta5569;

	    int Ti5570;
	    Ti5570 = 15;
	    double Td5571;
	    Td5571 = Ta5569[Ti5570].d;
	    double Td5572;
	    Td5572 =  Td5568 * Td5571;
	    int Tu3986;
	    Ta5564[Ti5565].d = Td5572;
	    Value* Ta5573;

	    int Ti5574;
	    Ti5574 = 4;
	    Value* Ta5575;

	    int Ti5576;
	    Ti5576 = 11;
	    double Td5577;
	    Td5577 = Ta5575[Ti5576].d;
	    Value* Ta5578;

	    int Ti5579;
	    Ti5579 = 13;
	    double Td5580;
	    Td5580 = Ta5578[Ti5579].d;
	    double Td5581;
	    Td5581 =  Td5577 * Td5580;
	    Value* Ta5582;

	    int Ti5583;
	    Ti5583 = 15;
	    double Td5584;
	    Td5584 = Ta5582[Ti5583].d;
	    double Td5585;
	    Td5585 =  Td5581 * Td5584;
	    Value* Ta5586;

	    int Ti5587;
	    Ti5587 = 10;
	    double Td5588;
	    Td5588 = Ta5586[Ti5587].d;
	    Value* Ta5589;

	    int Ti5590;
	    Ti5590 = 14;
	    double Td5591;
	    Td5591 = Ta5589[Ti5590].d;
	    double Td5592;
	    Td5592 =  Td5588 * Td5591;
	    double Td5593;
	    Td5593 = Td5585 + Td5592;
	    int Tu3985;
	    Ta5573[Ti5574].d = Td5593;
	    Value* Ta5594;

	    int Ti5595;
	    Ti5595 = 5;
	    Value* Ta5596;

	    int Ti5597;
	    Ti5597 = 10;
	    double Td5598;
	    Td5598 = Ta5596[Ti5597].d;
	    Value* Ta5599;

	    int Ti5600;
	    Ti5600 = 13;
	    double Td5601;
	    Td5601 = Ta5599[Ti5600].d;
	    double Td5602;
	    Td5602 =  Td5598 * Td5601;
	    Value* Ta5603;

	    int Ti5604;
	    Ti5604 = 15;
	    double Td5605;
	    Td5605 = Ta5603[Ti5604].d;
	    double Td5606;
	    Td5606 =  Td5602 * Td5605;
	    Value* Ta5607;

	    int Ti5608;
	    Ti5608 = 11;
	    double Td5609;
	    Td5609 = Ta5607[Ti5608].d;
	    Value* Ta5610;

	    int Ti5611;
	    Ti5611 = 14;
	    double Td5612;
	    Td5612 = Ta5610[Ti5611].d;
	    double Td5613;
	    Td5613 =  Td5609 * Td5612;
	    double Td5614;
	    Td5614 = Td5606 - Td5613;
	    int Tu3984;
	    Ta5594[Ti5595].d = Td5614;
	    Value* Ta5615;

	    int Ti5616;
	    Ti5616 = 6;
	    Value* Ta5617;

	    int Ti5618;
	    Ti5618 = 13;
	    double Td5619;
	    Td5619 = Ta5617[Ti5618].d;
	    double Td5620;
	    Td5620 = -Td5619;
	    int Tu3983;
	    Ta5615[Ti5616].d = Td5620;
	    Value* Ta5621;

	    int Ti5622;
	    Ti5622 = 7;
	    Value* Ta5623;

	    int Ti5624;
	    Ti5624 = 11;
	    double Td5625;
	    Td5625 = Ta5623[Ti5624].d;
	    Value* Ta5626;

	    int Ti5627;
	    Ti5627 = 12;
	    double Td5628;
	    Td5628 = Ta5626[Ti5627].d;
	    double Td5629;
	    Td5629 =  Td5625 * Td5628;
	    int Tu3982;
	    Ta5621[Ti5622].d = Td5629;
	    Value* Ta5630;

	    int Ti5631;
	    Ti5631 = 8;
	    Value* Ta5632;

	    int Ti5633;
	    Ti5633 = 10;
	    double Td5634;
	    Td5634 = Ta5632[Ti5633].d;
	    Value* Ta5635;

	    int Ti5636;
	    Ti5636 = 12;
	    double Td5637;
	    Td5637 = Ta5635[Ti5636].d;
	    double Td5638;
	    Td5638 =  Td5634 * Td5637;
	    int Tu3981;
	    Ta5630[Ti5631].d = Td5638;
	    int Ti5639;
	    Ti5639 = 0;
	    double ao;
	    ao = abc[Ti5639].d;
	    int Ti5640;
	    Ti5640 = 1;
	    double bo;
	    bo = abc[Ti5640].d;
	    int Ti5641;
	    Ti5641 = 2;
	    double co;
	    co = abc[Ti5641].d;
	    int Ti5642;
	    Ti5642 = 0;
	    Value* Ta5643;

	    int Ti5644;
	    Ti5644 = 0;
	    double Td5645;
	    Td5645 = Ta5643[Ti5644].d;
	    double Td5646;
	    Td5646 = fsqr_fun(Td5645, NULL);
	    double Td5647;
	    Td5647 =  ao * Td5646;
	    Value* Ta5648;

	    int Ti5649;
	    Ti5649 = 3;
	    double Td5650;
	    Td5650 = Ta5648[Ti5649].d;
	    double Td5651;
	    Td5651 = fsqr_fun(Td5650, NULL);
	    double Td5652;
	    Td5652 =  bo * Td5651;
	    double Td5653;
	    Td5653 = Td5647 + Td5652;
	    Value* Ta5654;

	    int Ti5655;
	    Ti5655 = 6;
	    double Td5656;
	    Td5656 = Ta5654[Ti5655].d;
	    double Td5657;
	    Td5657 = fsqr_fun(Td5656, NULL);
	    double Td5658;
	    Td5658 =  co * Td5657;
	    double Td5659;
	    Td5659 = Td5653 + Td5658;
	    int Tu3980;
	    abc[Ti5642].d = Td5659;
	    int Ti5660;
	    Ti5660 = 1;
	    Value* Ta5661;

	    int Ti5662;
	    Ti5662 = 1;
	    double Td5663;
	    Td5663 = Ta5661[Ti5662].d;
	    double Td5664;
	    Td5664 = fsqr_fun(Td5663, NULL);
	    double Td5665;
	    Td5665 =  ao * Td5664;
	    Value* Ta5666;

	    int Ti5667;
	    Ti5667 = 4;
	    double Td5668;
	    Td5668 = Ta5666[Ti5667].d;
	    double Td5669;
	    Td5669 = fsqr_fun(Td5668, NULL);
	    double Td5670;
	    Td5670 =  bo * Td5669;
	    double Td5671;
	    Td5671 = Td5665 + Td5670;
	    Value* Ta5672;

	    int Ti5673;
	    Ti5673 = 7;
	    double Td5674;
	    Td5674 = Ta5672[Ti5673].d;
	    double Td5675;
	    Td5675 = fsqr_fun(Td5674, NULL);
	    double Td5676;
	    Td5676 =  co * Td5675;
	    double Td5677;
	    Td5677 = Td5671 + Td5676;
	    int Tu3979;
	    abc[Ti5660].d = Td5677;
	    int Ti5678;
	    Ti5678 = 2;
	    Value* Ta5679;

	    int Ti5680;
	    Ti5680 = 2;
	    double Td5681;
	    Td5681 = Ta5679[Ti5680].d;
	    double Td5682;
	    Td5682 = fsqr_fun(Td5681, NULL);
	    double Td5683;
	    Td5683 =  ao * Td5682;
	    Value* Ta5684;

	    int Ti5685;
	    Ti5685 = 5;
	    double Td5686;
	    Td5686 = Ta5684[Ti5685].d;
	    double Td5687;
	    Td5687 = fsqr_fun(Td5686, NULL);
	    double Td5688;
	    Td5688 =  bo * Td5687;
	    double Td5689;
	    Td5689 = Td5683 + Td5688;
	    Value* Ta5690;

	    int Ti5691;
	    Ti5691 = 8;
	    double Td5692;
	    Td5692 = Ta5690[Ti5691].d;
	    double Td5693;
	    Td5693 = fsqr_fun(Td5692, NULL);
	    double Td5694;
	    Td5694 =  co * Td5693;
	    double Td5695;
	    Td5695 = Td5689 + Td5694;
	    int Tu3978;
	    abc[Ti5678].d = Td5695;
	    int Ti5696;
	    Ti5696 = 0;
	    double Td5697;
	    Td5697 = 2.000000;
	    Value* Ta5698;

	    int Ti5699;
	    Ti5699 = 1;
	    double Td5700;
	    Td5700 = Ta5698[Ti5699].d;
	    double Td5701;
	    Td5701 =  ao * Td5700;
	    Value* Ta5702;

	    int Ti5703;
	    Ti5703 = 2;
	    double Td5704;
	    Td5704 = Ta5702[Ti5703].d;
	    double Td5705;
	    Td5705 =  Td5701 * Td5704;
	    Value* Ta5706;

	    int Ti5707;
	    Ti5707 = 4;
	    double Td5708;
	    Td5708 = Ta5706[Ti5707].d;
	    double Td5709;
	    Td5709 =  bo * Td5708;
	    Value* Ta5710;

	    int Ti5711;
	    Ti5711 = 5;
	    double Td5712;
	    Td5712 = Ta5710[Ti5711].d;
	    double Td5713;
	    Td5713 =  Td5709 * Td5712;
	    double Td5714;
	    Td5714 = Td5705 + Td5713;
	    Value* Ta5715;

	    int Ti5716;
	    Ti5716 = 7;
	    double Td5717;
	    Td5717 = Ta5715[Ti5716].d;
	    double Td5718;
	    Td5718 =  co * Td5717;
	    Value* Ta5719;

	    int Ti5720;
	    Ti5720 = 8;
	    double Td5721;
	    Td5721 = Ta5719[Ti5720].d;
	    double Td5722;
	    Td5722 =  Td5718 * Td5721;
	    double Td5723;
	    Td5723 = Td5714 + Td5722;
	    double Td5724;
	    Td5724 =  Td5697 * Td5723;
	    int Tu3977;
	    rotation[Ti5696].d = Td5724;
	    int Ti5725;
	    Ti5725 = 1;
	    double Td5726;
	    Td5726 = 2.000000;
	    Value* Ta5727;

	    int Ti5728;
	    Ti5728 = 0;
	    double Td5729;
	    Td5729 = Ta5727[Ti5728].d;
	    double Td5730;
	    Td5730 =  ao * Td5729;
	    Value* Ta5731;

	    int Ti5732;
	    Ti5732 = 2;
	    double Td5733;
	    Td5733 = Ta5731[Ti5732].d;
	    double Td5734;
	    Td5734 =  Td5730 * Td5733;
	    Value* Ta5735;

	    int Ti5736;
	    Ti5736 = 3;
	    double Td5737;
	    Td5737 = Ta5735[Ti5736].d;
	    double Td5738;
	    Td5738 =  bo * Td5737;
	    Value* Ta5739;

	    int Ti5740;
	    Ti5740 = 5;
	    double Td5741;
	    Td5741 = Ta5739[Ti5740].d;
	    double Td5742;
	    Td5742 =  Td5738 * Td5741;
	    double Td5743;
	    Td5743 = Td5734 + Td5742;
	    Value* Ta5744;

	    int Ti5745;
	    Ti5745 = 6;
	    double Td5746;
	    Td5746 = Ta5744[Ti5745].d;
	    double Td5747;
	    Td5747 =  co * Td5746;
	    Value* Ta5748;

	    int Ti5749;
	    Ti5749 = 8;
	    double Td5750;
	    Td5750 = Ta5748[Ti5749].d;
	    double Td5751;
	    Td5751 =  Td5747 * Td5750;
	    double Td5752;
	    Td5752 = Td5743 + Td5751;
	    double Td5753;
	    Td5753 =  Td5726 * Td5752;
	    int Tu3976;
	    rotation[Ti5725].d = Td5753;
	    int Ti5754;
	    Ti5754 = 2;
	    double Td5755;
	    Td5755 = 2.000000;
	    Value* Ta5756;

	    int Ti5757;
	    Ti5757 = 0;
	    double Td5758;
	    Td5758 = Ta5756[Ti5757].d;
	    double Td5759;
	    Td5759 =  ao * Td5758;
	    Value* Ta5760;

	    int Ti5761;
	    Ti5761 = 1;
	    double Td5762;
	    Td5762 = Ta5760[Ti5761].d;
	    double Td5763;
	    Td5763 =  Td5759 * Td5762;
	    Value* Ta5764;

	    int Ti5765;
	    Ti5765 = 3;
	    double Td5766;
	    Td5766 = Ta5764[Ti5765].d;
	    double Td5767;
	    Td5767 =  bo * Td5766;
	    Value* Ta5768;

	    int Ti5769;
	    Ti5769 = 4;
	    double Td5770;
	    Td5770 = Ta5768[Ti5769].d;
	    double Td5771;
	    Td5771 =  Td5767 * Td5770;
	    double Td5772;
	    Td5772 = Td5763 + Td5771;
	    Value* Ta5773;

	    int Ti5774;
	    Ti5774 = 6;
	    double Td5775;
	    Td5775 = Ta5773[Ti5774].d;
	    double Td5776;
	    Td5776 =  co * Td5775;
	    Value* Ta5777;

	    int Ti5778;
	    Ti5778 = 7;
	    double Td5779;
	    Td5779 = Ta5777[Ti5778].d;
	    double Td5780;
	    Td5780 =  Td5776 * Td5779;
	    double Td5781;
	    Td5781 = Td5772 + Td5780;
	    double Td5782;
	    Td5782 =  Td5755 * Td5781;
	    rotation[Ti5754].d = Td5782;
	}
	result = 1;
    }
    return result;
}

int read_object_fun(int n, Value *env){
    int result;
    int Ti5388;
    Ti5388 = 61;
    if(Ti5388 <= n){
	result = 1;
    }
    else{
	bool Tb5389;
	Tb5389 = read_nth_object_fun(n, NULL);
	int Ti5390;
	Ti5390 = 0;
	if(Tb5389 == Ti5390){
	    result = 1;
	}
	else{
	    int Ti5391;
	    Ti5391 = 1;
	    int Ti5392;
	    Ti5392 = n + Ti5391;
	    result = read_object_fun(Ti5392, NULL);
	}
    }
    return result;
}

int read_all_object_fun(int Tu4011, Value *env){
    int result;
    int Ti5387;
    Ti5387 = 0;
    result = read_object_fun(Ti5387, NULL);
    return result;
}

Value* read_net_item_fun(int length, Value *env){
    Value* result;
    int Tu5378;
    Tu5378 = 1;
    int item;
    item = min_caml_read_int_fun(Tu5378, NULL);
    int Ti5379;
    Ti5379 = 1;
    int Ti5380;
    Ti5380 = -Ti5379;
    if(item == Ti5380){
	int Ti5381;
	Ti5381 = 1;
	int Ti5382;
	Ti5382 = length + Ti5381;
	int Ti5383;
	Ti5383 = 1;
	int Ti5384;
	Ti5384 = -Ti5383;
	make_int_array(&result, Ti5382, Ti5384);
    }
    else{
	int Ti5385;
	Ti5385 = 1;
	int Ti5386;
	Ti5386 = length + Ti5385;
	Value* v;
	v = read_net_item_fun(Ti5386, NULL);
	int Tu4012;
	v[length].i = item;
	result = v;
    }
    return result;
}

Value* read_or_network_fun(int length, Value *env){
    Value* result;
    int Ti5369;
    Ti5369 = 0;
    Value* net;
    net = read_net_item_fun(Ti5369, NULL);
    int Ti5370;
    Ti5370 = 0;
    int Ti5371;
    Ti5371 = net[Ti5370].i;
    int Ti5372;
    Ti5372 = 1;
    int Ti5373;
    Ti5373 = -Ti5372;
    if(Ti5371 == Ti5373){
	int Ti5374;
	Ti5374 = 1;
	int Ti5375;
	Ti5375 = length + Ti5374;
	make_multi_array(&result, Ti5375, net);
    }
    else{
	int Ti5376;
	Ti5376 = 1;
	int Ti5377;
	Ti5377 = length + Ti5376;
	Value* v;
	v = read_or_network_fun(Ti5377, NULL);
	int Tu4013;
	v[length].a = net;
	result = v;
    }
    return result;
}

int read_and_network_fun(int n, Value *env){
    int result;
    int Ti5361;
    Ti5361 = 0;
    Value* net;
    net = read_net_item_fun(Ti5361, NULL);
    int Ti5362;
    Ti5362 = 0;
    int Ti5363;
    Ti5363 = net[Ti5362].i;
    int Ti5364;
    Ti5364 = 1;
    int Ti5365;
    Ti5365 = -Ti5364;
    if(Ti5363 == Ti5365){
	result = 1;
    }
    else{
	Value* Ta5366;

	int Tu4014;
	Ta5366[n].a = net;
	int Ti5367;
	Ti5367 = 1;
	int Ti5368;
	Ti5368 = n + Ti5367;
	result = read_and_network_fun(Ti5368, NULL);
    }
    return result;
}

int read_parameter_fun(int Tu4015, Value *env){
    int result;
    int Tu5354;
    Tu5354 = 1;
    int Tu4018;
    Tu4018 = read_environ_fun(Tu5354, NULL);
    int Tu5355;
    Tu5355 = 1;
    int Tu4017;
    Tu4017 = read_all_object_fun(Tu5355, NULL);
    int Ti5356;
    Ti5356 = 0;
    int Tu4016;
    Tu4016 = read_and_network_fun(Ti5356, NULL);
    Value* Ta5357;

    int Ti5358;
    Ti5358 = 0;
    int Ti5359;
    Ti5359 = 0;
    Value* Ta5360;
    Ta5360 = read_or_network_fun(Ti5359, NULL);
    Ta5357[Ti5358].a = Ta5360;
    return result;
}

int solver_rect_fun(int* m, Value* l, Value *env){
    int result;
    double Td5240;
    Td5240 = 0.000000;
    int Ti5241;
    Ti5241 = 0;
    double Td5242;
    Td5242 = l[Ti5241].d;
    bool answera;
    if(Td5240 == Td5242){
	answera = 0;
    }
    else{
	bool Tb5243;
	Tb5243 = o_isinvert_fun(m, NULL);
	double Td5244;
	Td5244 = 0.000000;
	int Ti5245;
	Ti5245 = 0;
	double Td5246;
	Td5246 = l[Ti5245].d;
	int Ti5247;
	if(Td5244 <= Td5246){
	    Ti5247 = 0;
	}
	else{
	    Ti5247 = 1;
	}
	bool Tb5248;
	Tb5248 = xor_fun(Tb5243, Ti5247, NULL);
	int Ti5249;
	Ti5249 = 0;
	double d;
	if(Tb5248 == Ti5249){
	    double Td5250;
	    Td5250 = o_param_a_fun(m, NULL);
	    d = -Td5250;
	}
	else{
	    d = o_param_a_fun(m, NULL);
	}
	Value* Ta5251;

	int Ti5252;
	Ti5252 = 0;
	double Td5253;
	Td5253 = Ta5251[Ti5252].d;
	double Td5254;
	Td5254 = d - Td5253;
	int Ti5255;
	Ti5255 = 0;
	double Td5256;
	Td5256 = l[Ti5255].d;
	double d2;
	d2 = Td5254 / Td5256;
	double Td5257;
	Td5257 = o_param_b_fun(m, NULL);
	int Ti5258;
	Ti5258 = 1;
	double Td5259;
	Td5259 = l[Ti5258].d;
	double Td5260;
	Td5260 =  d2 * Td5259;
	Value* Ta5261;

	int Ti5262;
	Ti5262 = 1;
	double Td5263;
	Td5263 = Ta5261[Ti5262].d;
	double Td5264;
	Td5264 = Td5260 + Td5263;
	double Td5265;
	Td5265 = min_caml_abs_float_fun(Td5264, NULL);
	if(Td5257 <= Td5265){
	    answera = 0;
	}
	else{
	    double Td5266;
	    Td5266 = o_param_c_fun(m, NULL);
	    int Ti5267;
	    Ti5267 = 2;
	    double Td5268;
	    Td5268 = l[Ti5267].d;
	    double Td5269;
	    Td5269 =  d2 * Td5268;
	    Value* Ta5270;

	    int Ti5271;
	    Ti5271 = 2;
	    double Td5272;
	    Td5272 = Ta5270[Ti5271].d;
	    double Td5273;
	    Td5273 = Td5269 + Td5272;
	    double Td5274;
	    Td5274 = min_caml_abs_float_fun(Td5273, NULL);
	    if(Td5266 <= Td5274){
		answera = 0;
	    }
	    else{
		Value* Ta5275;

		int Ti5276;
		Ti5276 = 0;
		int Tu4019;
		Ta5275[Ti5276].d = d2;
		answera = 1;
	    }
	}
    }
    int Ti5277;
    Ti5277 = 0;
    if(answera == Ti5277){
	double Td5278;
	Td5278 = 0.000000;
	int Ti5279;
	Ti5279 = 1;
	double Td5280;
	Td5280 = l[Ti5279].d;
	bool answerb;
	if(Td5278 == Td5280){
	    answerb = 0;
	}
	else{
	    bool Tb5281;
	    Tb5281 = o_isinvert_fun(m, NULL);
	    double Td5282;
	    Td5282 = 0.000000;
	    int Ti5283;
	    Ti5283 = 1;
	    double Td5284;
	    Td5284 = l[Ti5283].d;
	    int Ti5285;
	    if(Td5282 <= Td5284){
		Ti5285 = 0;
	    }
	    else{
		Ti5285 = 1;
	    }
	    bool Tb5286;
	    Tb5286 = xor_fun(Tb5281, Ti5285, NULL);
	    int Ti5287;
	    Ti5287 = 0;
	    double d;
	    if(Tb5286 == Ti5287){
		double Td5288;
		Td5288 = o_param_b_fun(m, NULL);
		d = -Td5288;
	    }
	    else{
		d = o_param_b_fun(m, NULL);
	    }
	    Value* Ta5289;

	    int Ti5290;
	    Ti5290 = 1;
	    double Td5291;
	    Td5291 = Ta5289[Ti5290].d;
	    double Td5292;
	    Td5292 = d - Td5291;
	    int Ti5293;
	    Ti5293 = 1;
	    double Td5294;
	    Td5294 = l[Ti5293].d;
	    double d2;
	    d2 = Td5292 / Td5294;
	    double Td5295;
	    Td5295 = o_param_c_fun(m, NULL);
	    int Ti5296;
	    Ti5296 = 2;
	    double Td5297;
	    Td5297 = l[Ti5296].d;
	    double Td5298;
	    Td5298 =  d2 * Td5297;
	    Value* Ta5299;

	    int Ti5300;
	    Ti5300 = 2;
	    double Td5301;
	    Td5301 = Ta5299[Ti5300].d;
	    double Td5302;
	    Td5302 = Td5298 + Td5301;
	    double Td5303;
	    Td5303 = min_caml_abs_float_fun(Td5302, NULL);
	    if(Td5295 <= Td5303){
		answerb = 0;
	    }
	    else{
		double Td5304;
		Td5304 = o_param_a_fun(m, NULL);
		int Ti5305;
		Ti5305 = 0;
		double Td5306;
		Td5306 = l[Ti5305].d;
		double Td5307;
		Td5307 =  d2 * Td5306;
		Value* Ta5308;

		int Ti5309;
		Ti5309 = 0;
		double Td5310;
		Td5310 = Ta5308[Ti5309].d;
		double Td5311;
		Td5311 = Td5307 + Td5310;
		double Td5312;
		Td5312 = min_caml_abs_float_fun(Td5311, NULL);
		if(Td5304 <= Td5312){
		    answerb = 0;
		}
		else{
		    Value* Ta5313;

		    int Ti5314;
		    Ti5314 = 0;
		    int Tu4020;
		    Ta5313[Ti5314].d = d2;
		    answerb = 1;
		}
	    }
	}
	int Ti5315;
	Ti5315 = 0;
	if(answerb == Ti5315){
	    double Td5316;
	    Td5316 = 0.000000;
	    int Ti5317;
	    Ti5317 = 2;
	    double Td5318;
	    Td5318 = l[Ti5317].d;
	    bool answerc;
	    if(Td5316 == Td5318){
		answerc = 0;
	    }
	    else{
		bool Tb5319;
		Tb5319 = o_isinvert_fun(m, NULL);
		double Td5320;
		Td5320 = 0.000000;
		int Ti5321;
		Ti5321 = 2;
		double Td5322;
		Td5322 = l[Ti5321].d;
		int Ti5323;
		if(Td5320 <= Td5322){
		    Ti5323 = 0;
		}
		else{
		    Ti5323 = 1;
		}
		bool Tb5324;
		Tb5324 = xor_fun(Tb5319, Ti5323, NULL);
		int Ti5325;
		Ti5325 = 0;
		double d;
		if(Tb5324 == Ti5325){
		    double Td5326;
		    Td5326 = o_param_c_fun(m, NULL);
		    d = -Td5326;
		}
		else{
		    d = o_param_c_fun(m, NULL);
		}
		Value* Ta5327;

		int Ti5328;
		Ti5328 = 2;
		double Td5329;
		Td5329 = Ta5327[Ti5328].d;
		double Td5330;
		Td5330 = d - Td5329;
		int Ti5331;
		Ti5331 = 2;
		double Td5332;
		Td5332 = l[Ti5331].d;
		double d2;
		d2 = Td5330 / Td5332;
		double Td5333;
		Td5333 = o_param_a_fun(m, NULL);
		int Ti5334;
		Ti5334 = 0;
		double Td5335;
		Td5335 = l[Ti5334].d;
		double Td5336;
		Td5336 =  d2 * Td5335;
		Value* Ta5337;

		int Ti5338;
		Ti5338 = 0;
		double Td5339;
		Td5339 = Ta5337[Ti5338].d;
		double Td5340;
		Td5340 = Td5336 + Td5339;
		double Td5341;
		Td5341 = min_caml_abs_float_fun(Td5340, NULL);
		if(Td5333 <= Td5341){
		    answerc = 0;
		}
		else{
		    double Td5342;
		    Td5342 = o_param_b_fun(m, NULL);
		    int Ti5343;
		    Ti5343 = 1;
		    double Td5344;
		    Td5344 = l[Ti5343].d;
		    double Td5345;
		    Td5345 =  d2 * Td5344;
		    Value* Ta5346;

		    int Ti5347;
		    Ti5347 = 1;
		    double Td5348;
		    Td5348 = Ta5346[Ti5347].d;
		    double Td5349;
		    Td5349 = Td5345 + Td5348;
		    double Td5350;
		    Td5350 = min_caml_abs_float_fun(Td5349, NULL);
		    if(Td5342 <= Td5350){
			answerc = 0;
		    }
		    else{
			Value* Ta5351;

			int Ti5352;
			Ti5352 = 0;
			int Tu4021;
			Ta5351[Ti5352].d = d2;
			answerc = 1;
		    }
		}
	    }
	    int Ti5353;
	    Ti5353 = 0;
	    if(answerc == Ti5353){
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

int solver_surface_fun(int* m, Value* l, Value *env){
    int result;
    int Ti5206;
    Ti5206 = 0;
    double Td5207;
    Td5207 = l[Ti5206].d;
    double Td5208;
    Td5208 = o_param_a_fun(m, NULL);
    double Td5209;
    Td5209 =  Td5207 * Td5208;
    int Ti5210;
    Ti5210 = 1;
    double Td5211;
    Td5211 = l[Ti5210].d;
    double Td5212;
    Td5212 = o_param_b_fun(m, NULL);
    double Td5213;
    Td5213 =  Td5211 * Td5212;
    double Td5214;
    Td5214 = Td5209 + Td5213;
    int Ti5215;
    Ti5215 = 2;
    double Td5216;
    Td5216 = l[Ti5215].d;
    double Td5217;
    Td5217 = o_param_c_fun(m, NULL);
    double Td5218;
    Td5218 =  Td5216 * Td5217;
    double q;
    q = Td5214 + Td5218;
    double Td5219;
    Td5219 = 0.000000;
    if(q <= Td5219){
	result = 0;
    }
    else{
	Value* Ta5220;

	int Ti5221;
	Ti5221 = 0;
	double Td5222;
	Td5222 = Ta5220[Ti5221].d;
	double Td5223;
	Td5223 = o_param_a_fun(m, NULL);
	double Td5224;
	Td5224 =  Td5222 * Td5223;
	Value* Ta5225;

	int Ti5226;
	Ti5226 = 1;
	double Td5227;
	Td5227 = Ta5225[Ti5226].d;
	double Td5228;
	Td5228 = o_param_b_fun(m, NULL);
	double Td5229;
	Td5229 =  Td5227 * Td5228;
	double Td5230;
	Td5230 = Td5224 + Td5229;
	Value* Ta5231;

	int Ti5232;
	Ti5232 = 2;
	double Td5233;
	Td5233 = Ta5231[Ti5232].d;
	double Td5234;
	Td5234 = o_param_c_fun(m, NULL);
	double Td5235;
	Td5235 =  Td5233 * Td5234;
	double Td5236;
	Td5236 = Td5230 + Td5235;
	double t;
	t = Td5236 / q;
	Value* Ta5237;

	int Ti5238;
	Ti5238 = 0;
	double Td5239;
	Td5239 = -t;
	int Tu4022;
	Ta5237[Ti5238].d = Td5239;
	result = 1;
    }
    return result;
}

double in_prod_sqr_obj_fun(int* m, Value* v, Value *env){
    double result;
    int Ti5190;
    Ti5190 = 0;
    double Td5191;
    Td5191 = v[Ti5190].d;
    double Td5192;
    Td5192 = fsqr_fun(Td5191, NULL);
    double Td5193;
    Td5193 = o_param_a_fun(m, NULL);
    double Td5194;
    Td5194 =  Td5192 * Td5193;
    int Ti5195;
    Ti5195 = 1;
    double Td5196;
    Td5196 = v[Ti5195].d;
    double Td5197;
    Td5197 = fsqr_fun(Td5196, NULL);
    double Td5198;
    Td5198 = o_param_b_fun(m, NULL);
    double Td5199;
    Td5199 =  Td5197 * Td5198;
    double Td5200;
    Td5200 = Td5194 + Td5199;
    int Ti5201;
    Ti5201 = 2;
    double Td5202;
    Td5202 = v[Ti5201].d;
    double Td5203;
    Td5203 = fsqr_fun(Td5202, NULL);
    double Td5204;
    Td5204 = o_param_c_fun(m, NULL);
    double Td5205;
    Td5205 =  Td5203 * Td5204;
    result = Td5200 + Td5205;
    return result;
}

double in_prod_co_objrot_fun(int* m, Value* v, Value *env){
    double result;
    int Ti5168;
    Ti5168 = 1;
    double Td5169;
    Td5169 = v[Ti5168].d;
    int Ti5170;
    Ti5170 = 2;
    double Td5171;
    Td5171 = v[Ti5170].d;
    double Td5172;
    Td5172 =  Td5169 * Td5171;
    double Td5173;
    Td5173 = o_param_r1_fun(m, NULL);
    double Td5174;
    Td5174 =  Td5172 * Td5173;
    int Ti5175;
    Ti5175 = 0;
    double Td5176;
    Td5176 = v[Ti5175].d;
    int Ti5177;
    Ti5177 = 2;
    double Td5178;
    Td5178 = v[Ti5177].d;
    double Td5179;
    Td5179 =  Td5176 * Td5178;
    double Td5180;
    Td5180 = o_param_r2_fun(m, NULL);
    double Td5181;
    Td5181 =  Td5179 * Td5180;
    double Td5182;
    Td5182 = Td5174 + Td5181;
    int Ti5183;
    Ti5183 = 0;
    double Td5184;
    Td5184 = v[Ti5183].d;
    int Ti5185;
    Ti5185 = 1;
    double Td5186;
    Td5186 = v[Ti5185].d;
    double Td5187;
    Td5187 =  Td5184 * Td5186;
    double Td5188;
    Td5188 = o_param_r3_fun(m, NULL);
    double Td5189;
    Td5189 =  Td5187 * Td5188;
    result = Td5182 + Td5189;
    return result;
}

double solver2nd_mul_b_fun(int* m, Value* l, Value *env){
    double result;
    Value* Ta5143;

    int Ti5144;
    Ti5144 = 0;
    double Td5145;
    Td5145 = Ta5143[Ti5144].d;
    int Ti5146;
    Ti5146 = 0;
    double Td5147;
    Td5147 = l[Ti5146].d;
    double Td5148;
    Td5148 =  Td5145 * Td5147;
    double Td5149;
    Td5149 = o_param_a_fun(m, NULL);
    double Td5150;
    Td5150 =  Td5148 * Td5149;
    Value* Ta5151;

    int Ti5152;
    Ti5152 = 1;
    double Td5153;
    Td5153 = Ta5151[Ti5152].d;
    int Ti5154;
    Ti5154 = 1;
    double Td5155;
    Td5155 = l[Ti5154].d;
    double Td5156;
    Td5156 =  Td5153 * Td5155;
    double Td5157;
    Td5157 = o_param_b_fun(m, NULL);
    double Td5158;
    Td5158 =  Td5156 * Td5157;
    double Td5159;
    Td5159 = Td5150 + Td5158;
    Value* Ta5160;

    int Ti5161;
    Ti5161 = 2;
    double Td5162;
    Td5162 = Ta5160[Ti5161].d;
    int Ti5163;
    Ti5163 = 2;
    double Td5164;
    Td5164 = l[Ti5163].d;
    double Td5165;
    Td5165 =  Td5162 * Td5164;
    double Td5166;
    Td5166 = o_param_c_fun(m, NULL);
    double Td5167;
    Td5167 =  Td5165 * Td5166;
    result = Td5159 + Td5167;
    return result;
}

double solver2nd_rot_b_fun(int* m, Value* l, Value *env){
    double result;
    Value* Ta5097;

    int Ti5098;
    Ti5098 = 2;
    double Td5099;
    Td5099 = Ta5097[Ti5098].d;
    int Ti5100;
    Ti5100 = 1;
    double Td5101;
    Td5101 = l[Ti5100].d;
    double Td5102;
    Td5102 =  Td5099 * Td5101;
    Value* Ta5103;

    int Ti5104;
    Ti5104 = 1;
    double Td5105;
    Td5105 = Ta5103[Ti5104].d;
    int Ti5106;
    Ti5106 = 2;
    double Td5107;
    Td5107 = l[Ti5106].d;
    double Td5108;
    Td5108 =  Td5105 * Td5107;
    double Td5109;
    Td5109 = Td5102 + Td5108;
    double Td5110;
    Td5110 = o_param_r1_fun(m, NULL);
    double Td5111;
    Td5111 =  Td5109 * Td5110;
    Value* Ta5112;

    int Ti5113;
    Ti5113 = 0;
    double Td5114;
    Td5114 = Ta5112[Ti5113].d;
    int Ti5115;
    Ti5115 = 2;
    double Td5116;
    Td5116 = l[Ti5115].d;
    double Td5117;
    Td5117 =  Td5114 * Td5116;
    Value* Ta5118;

    int Ti5119;
    Ti5119 = 2;
    double Td5120;
    Td5120 = Ta5118[Ti5119].d;
    int Ti5121;
    Ti5121 = 0;
    double Td5122;
    Td5122 = l[Ti5121].d;
    double Td5123;
    Td5123 =  Td5120 * Td5122;
    double Td5124;
    Td5124 = Td5117 + Td5123;
    double Td5125;
    Td5125 = o_param_r2_fun(m, NULL);
    double Td5126;
    Td5126 =  Td5124 * Td5125;
    double Td5127;
    Td5127 = Td5111 + Td5126;
    Value* Ta5128;

    int Ti5129;
    Ti5129 = 0;
    double Td5130;
    Td5130 = Ta5128[Ti5129].d;
    int Ti5131;
    Ti5131 = 1;
    double Td5132;
    Td5132 = l[Ti5131].d;
    double Td5133;
    Td5133 =  Td5130 * Td5132;
    Value* Ta5134;

    int Ti5135;
    Ti5135 = 1;
    double Td5136;
    Td5136 = Ta5134[Ti5135].d;
    int Ti5137;
    Ti5137 = 0;
    double Td5138;
    Td5138 = l[Ti5137].d;
    double Td5139;
    Td5139 =  Td5136 * Td5138;
    double Td5140;
    Td5140 = Td5133 + Td5139;
    double Td5141;
    Td5141 = o_param_r3_fun(m, NULL);
    double Td5142;
    Td5142 =  Td5140 * Td5141;
    result = Td5127 + Td5142;
    return result;
}

int solver_second_fun(int* m, Value* l, Value *env){
    int result;
    double aa0;
    aa0 = in_prod_sqr_obj_fun(m, l, NULL);
    int Ti5068;
    Ti5068 = o_isrot_fun(m, NULL);
    int Ti5069;
    Ti5069 = 0;
    double aa;
    if(Ti5068 == Ti5069){
	aa = aa0;
    }
    else{
	double Td5070;
	Td5070 = in_prod_co_objrot_fun(m, l, NULL);
	aa = aa0 + Td5070;
    }
    double Td5071;
    Td5071 = 0.000000;
    if(Td5071 == aa){
	result = 0;
    }
    else{
	double Td5072;
	Td5072 = 2.000000;
	double Td5073;
	Td5073 = solver2nd_mul_b_fun(m, l, NULL);
	double bb0;
	bb0 =  Td5072 * Td5073;
	int Ti5074;
	Ti5074 = o_isrot_fun(m, NULL);
	int Ti5075;
	Ti5075 = 0;
	double bb;
	if(Ti5074 == Ti5075){
	    bb = bb0;
	}
	else{
	    double Td5076;
	    Td5076 = solver2nd_rot_b_fun(m, l, NULL);
	    bb = bb0 + Td5076;
	}
	Value* Ta5077;

	double cc0;
	cc0 = in_prod_sqr_obj_fun(m, Ta5077, NULL);
	int Ti5078;
	Ti5078 = o_isrot_fun(m, NULL);
	int Ti5079;
	Ti5079 = 0;
	double cc1;
	if(Ti5078 == Ti5079){
	    cc1 = cc0;
	}
	else{
	    Value* Ta5080;

	    double Td5081;
	    Td5081 = in_prod_co_objrot_fun(m, Ta5080, NULL);
	    cc1 = cc0 + Td5081;
	}
	int Ti5082;
	Ti5082 = o_form_fun(m, NULL);
	int Ti5083;
	Ti5083 = 3;
	double cc;
	if(Ti5082 == Ti5083){
	    double Td5084;
	    Td5084 = 1.000000;
	    cc = cc1 - Td5084;
	}
	else{
	    cc = cc1;
	}
	double Td5085;
	Td5085 = 4.000000;
	double Td5086;
	Td5086 =  Td5085 * aa;
	double d2;
	d2 =  Td5086 * cc;
	double Td5087;
	Td5087 = fsqr_fun(bb, NULL);
	double d;
	d = Td5087 - d2;
	double Td5088;
	Td5088 = 0.000000;
	if(d <= Td5088){
	    result = 0;
	}
	else{
	    double sd;
	    sd = min_caml_sqrt_fun(d, NULL);
	    bool Tb5089;
	    Tb5089 = o_isinvert_fun(m, NULL);
	    int Ti5090;
	    Ti5090 = 0;
	    double t1;
	    if(Tb5089 == Ti5090){
		t1 = -sd;
	    }
	    else{
		t1 = sd;
	    }
	    Value* Ta5091;

	    int Ti5092;
	    Ti5092 = 0;
	    double Td5093;
	    Td5093 = t1 - bb;
	    double Td5094;
	    Td5094 = 2.000000;
	    double Td5095;
	    Td5095 = Td5093 / Td5094;
	    double Td5096;
	    Td5096 = Td5095 / aa;
	    int Tu4023;
	    Ta5091[Ti5092].d = Td5096;
	    result = 1;
	}
    }
    return result;
}

int solver_fun(int index, Value* l, Value* p, Value *env){
    int result;
    Value* Ta5047;

    int* m;
    m = Ta5047[index].a;
    Value* Ta5048;

    int Ti5049;
    Ti5049 = 0;
    int Ti5050;
    Ti5050 = 0;
    double Td5051;
    Td5051 = p[Ti5050].d;
    double Td5052;
    Td5052 = o_param_x_fun(m, NULL);
    double Td5053;
    Td5053 = Td5051 - Td5052;
    int Tu4026;
    Ta5048[Ti5049].d = Td5053;
    Value* Ta5054;

    int Ti5055;
    Ti5055 = 1;
    int Ti5056;
    Ti5056 = 1;
    double Td5057;
    Td5057 = p[Ti5056].d;
    double Td5058;
    Td5058 = o_param_y_fun(m, NULL);
    double Td5059;
    Td5059 = Td5057 - Td5058;
    int Tu4025;
    Ta5054[Ti5055].d = Td5059;
    Value* Ta5060;

    int Ti5061;
    Ti5061 = 2;
    int Ti5062;
    Ti5062 = 2;
    double Td5063;
    Td5063 = p[Ti5062].d;
    double Td5064;
    Td5064 = o_param_z_fun(m, NULL);
    double Td5065;
    Td5065 = Td5063 - Td5064;
    int Tu4024;
    Ta5060[Ti5061].d = Td5065;
    int m_shape;
    m_shape = o_form_fun(m, NULL);
    int Ti5066;
    Ti5066 = 1;
    if(m_shape == Ti5066){
	result = solver_rect_fun(m, l, NULL);
    }
    else{
	int Ti5067;
	Ti5067 = 2;
	if(m_shape == Ti5067){
	    result = solver_surface_fun(m, l, NULL);
	}
	else{
	    result = solver_second_fun(m, l, NULL);
	}
    }
    return result;
}

bool is_rect_outside_fun(int* m, Value *env){
    bool result;
    double Td5028;
    Td5028 = o_param_a_fun(m, NULL);
    Value* Ta5029;

    int Ti5030;
    Ti5030 = 0;
    double Td5031;
    Td5031 = Ta5029[Ti5030].d;
    double Td5032;
    Td5032 = min_caml_abs_float_fun(Td5031, NULL);
    int Ti5043;
    if(Td5028 <= Td5032){
	Ti5043 = 0;
    }
    else{
	double Td5033;
	Td5033 = o_param_b_fun(m, NULL);
	Value* Ta5034;

	int Ti5035;
	Ti5035 = 1;
	double Td5036;
	Td5036 = Ta5034[Ti5035].d;
	double Td5037;
	Td5037 = min_caml_abs_float_fun(Td5036, NULL);
	if(Td5033 <= Td5037){
	    Ti5043 = 0;
	}
	else{
	    double Td5038;
	    Td5038 = o_param_c_fun(m, NULL);
	    Value* Ta5039;

	    int Ti5040;
	    Ti5040 = 2;
	    double Td5041;
	    Td5041 = Ta5039[Ti5040].d;
	    double Td5042;
	    Td5042 = min_caml_abs_float_fun(Td5041, NULL);
	    if(Td5038 <= Td5042){
		Ti5043 = 0;
	    }
	    else{
		Ti5043 = 1;
	    }
	}
    }
    int Ti5044;
    Ti5044 = 0;
    if(Ti5043 == Ti5044){
	bool Tb5045;
	Tb5045 = o_isinvert_fun(m, NULL);
	int Ti5046;
	Ti5046 = 0;
	if(Tb5045 == Ti5046){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    else{
	result = o_isinvert_fun(m, NULL);
    }
    return result;
}

bool is_plane_outside_fun(int* m, Value *env){
    bool result;
    double Td5008;
    Td5008 = o_param_a_fun(m, NULL);
    Value* Ta5009;

    int Ti5010;
    Ti5010 = 0;
    double Td5011;
    Td5011 = Ta5009[Ti5010].d;
    double Td5012;
    Td5012 =  Td5008 * Td5011;
    double Td5013;
    Td5013 = o_param_b_fun(m, NULL);
    Value* Ta5014;

    int Ti5015;
    Ti5015 = 1;
    double Td5016;
    Td5016 = Ta5014[Ti5015].d;
    double Td5017;
    Td5017 =  Td5013 * Td5016;
    double Td5018;
    Td5018 = Td5012 + Td5017;
    double Td5019;
    Td5019 = o_param_c_fun(m, NULL);
    Value* Ta5020;

    int Ti5021;
    Ti5021 = 2;
    double Td5022;
    Td5022 = Ta5020[Ti5021].d;
    double Td5023;
    Td5023 =  Td5019 * Td5022;
    double w;
    w = Td5018 + Td5023;
    double Td5024;
    Td5024 = 0.000000;
    bool s;
    if(Td5024 <= w){
	s = 0;
    }
    else{
	s = 1;
    }
    bool Tb5025;
    Tb5025 = o_isinvert_fun(m, NULL);
    bool Tb5026;
    Tb5026 = xor_fun(Tb5025, s, NULL);
    int Ti5027;
    Ti5027 = 0;
    if(Tb5026 == Ti5027){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_second_outside_fun(int* m, Value *env){
    bool result;
    Value* Ta4996;

    double w;
    w = in_prod_sqr_obj_fun(m, Ta4996, NULL);
    int Ti4997;
    Ti4997 = o_form_fun(m, NULL);
    int Ti4998;
    Ti4998 = 3;
    double w2;
    if(Ti4997 == Ti4998){
	double Td4999;
	Td4999 = 1.000000;
	w2 = w - Td4999;
    }
    else{
	w2 = w;
    }
    int Ti5000;
    Ti5000 = o_isrot_fun(m, NULL);
    int Ti5001;
    Ti5001 = 0;
    double w3;
    if(Ti5000 == Ti5001){
	w3 = w2;
    }
    else{
	Value* Ta5002;

	double Td5003;
	Td5003 = in_prod_co_objrot_fun(m, Ta5002, NULL);
	w3 = w2 + Td5003;
    }
    double Td5004;
    Td5004 = 0.000000;
    bool s;
    if(Td5004 <= w3){
	s = 0;
    }
    else{
	s = 1;
    }
    bool Tb5005;
    Tb5005 = o_isinvert_fun(m, NULL);
    bool Tb5006;
    Tb5006 = xor_fun(Tb5005, s, NULL);
    int Ti5007;
    Ti5007 = 0;
    if(Tb5006 == Ti5007){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_outside_fun(int* m, Value *env){
    bool result;
    Value* Ta4973;

    int Ti4974;
    Ti4974 = 0;
    Value* Ta4975;

    int Ti4976;
    Ti4976 = 0;
    double Td4977;
    Td4977 = Ta4975[Ti4976].d;
    double Td4978;
    Td4978 = o_param_x_fun(m, NULL);
    double Td4979;
    Td4979 = Td4977 - Td4978;
    int Tu4029;
    Ta4973[Ti4974].d = Td4979;
    Value* Ta4980;

    int Ti4981;
    Ti4981 = 1;
    Value* Ta4982;

    int Ti4983;
    Ti4983 = 1;
    double Td4984;
    Td4984 = Ta4982[Ti4983].d;
    double Td4985;
    Td4985 = o_param_y_fun(m, NULL);
    double Td4986;
    Td4986 = Td4984 - Td4985;
    int Tu4028;
    Ta4980[Ti4981].d = Td4986;
    Value* Ta4987;

    int Ti4988;
    Ti4988 = 2;
    Value* Ta4989;

    int Ti4990;
    Ti4990 = 2;
    double Td4991;
    Td4991 = Ta4989[Ti4990].d;
    double Td4992;
    Td4992 = o_param_z_fun(m, NULL);
    double Td4993;
    Td4993 = Td4991 - Td4992;
    int Tu4027;
    Ta4987[Ti4988].d = Td4993;
    int m_shape;
    m_shape = o_form_fun(m, NULL);
    int Ti4994;
    Ti4994 = 1;
    if(m_shape == Ti4994){
	result = is_rect_outside_fun(m, NULL);
    }
    else{
	int Ti4995;
	Ti4995 = 2;
	if(m_shape == Ti4995){
	    result = is_plane_outside_fun(m, NULL);
	}
	else{
	    result = is_second_outside_fun(m, NULL);
	}
    }
    return result;
}

bool check_all_inside_fun(int ofs, Value* iand, Value *env){
    bool result;
    int head;
    head = iand[ofs].i;
    int Ti4965;
    Ti4965 = 1;
    int Ti4966;
    Ti4966 = -Ti4965;
    if(head == Ti4966){
	result = 1;
    }
    else{
	Value* Ta4967;

	int* Tt4968;
	Tt4968 = Ta4967[head].a;
	bool Tb4969;
	Tb4969 = is_outside_fun(Tt4968, NULL);
	int Ti4970;
	Ti4970 = 0;
	if(Tb4969 == Ti4970){
	    int Ti4971;
	    Ti4971 = 1;
	    int Ti4972;
	    Ti4972 = ofs + Ti4971;
	    result = check_all_inside_fun(Ti4972, iand, NULL);
	}
	else{
	    result = 0;
	}
    }
    return result;
}

bool shadow_check_and_group_fun(int iand_ofs, Value* and_group, Value* p, Value *env){
    bool result;
    int Ti4916;
    Ti4916 = and_group[iand_ofs].i;
    int Ti4917;
    Ti4917 = 1;
    int Ti4918;
    Ti4918 = -Ti4917;
    if(Ti4916 == Ti4918){
	result = 0;
    }
    else{
	int obj;
	obj = and_group[iand_ofs].i;
	Value* Ta4919;

	int t0;
	t0 = solver_fun(obj, Ta4919, p, NULL);
	Value* Ta4920;

	int Ti4921;
	Ti4921 = 0;
	double t0p;
	t0p = Ta4920[Ti4921].d;
	int Ti4922;
	Ti4922 = 0;
	int Ti4924;
	if(t0 == Ti4922){
	    Ti4924 = 0;
	}
	else{
	    double Td4923;
	    Td4923 = -0.200000;
	    if(Td4923 <= t0p){
		Ti4924 = 0;
	    }
	    else{
		Ti4924 = 1;
	    }
	}
	int Ti4925;
	Ti4925 = 0;
	if(Ti4924 == Ti4925){
	    Value* Ta4926;

	    int* Tt4927;
	    Tt4927 = Ta4926[obj].a;
	    bool Tb4928;
	    Tb4928 = o_isinvert_fun(Tt4927, NULL);
	    int Ti4929;
	    Ti4929 = 0;
	    if(Tb4928 == Ti4929){
		result = 0;
	    }
	    else{
		int Ti4930;
		Ti4930 = 1;
		int Ti4931;
		Ti4931 = iand_ofs + Ti4930;
		result = shadow_check_and_group_fun(Ti4931, and_group, p, NULL);
	    }
	}
	else{
	    double Td4932;
	    Td4932 = 0.010000;
	    double t;
	    t = t0p + Td4932;
	    Value* Ta4933;

	    int Ti4934;
	    Ti4934 = 0;
	    Value* Ta4935;

	    int Ti4936;
	    Ti4936 = 0;
	    double Td4937;
	    Td4937 = Ta4935[Ti4936].d;
	    double Td4938;
	    Td4938 =  Td4937 * t;
	    int Ti4939;
	    Ti4939 = 0;
	    double Td4940;
	    Td4940 = p[Ti4939].d;
	    double Td4941;
	    Td4941 = Td4938 + Td4940;
	    int Tu4032;
	    Ta4933[Ti4934].d = Td4941;
	    Value* Ta4942;

	    int Ti4943;
	    Ti4943 = 1;
	    Value* Ta4944;

	    int Ti4945;
	    Ti4945 = 1;
	    double Td4946;
	    Td4946 = Ta4944[Ti4945].d;
	    double Td4947;
	    Td4947 =  Td4946 * t;
	    int Ti4948;
	    Ti4948 = 1;
	    double Td4949;
	    Td4949 = p[Ti4948].d;
	    double Td4950;
	    Td4950 = Td4947 + Td4949;
	    int Tu4031;
	    Ta4942[Ti4943].d = Td4950;
	    Value* Ta4951;

	    int Ti4952;
	    Ti4952 = 2;
	    Value* Ta4953;

	    int Ti4954;
	    Ti4954 = 2;
	    double Td4955;
	    Td4955 = Ta4953[Ti4954].d;
	    double Td4956;
	    Td4956 =  Td4955 * t;
	    int Ti4957;
	    Ti4957 = 2;
	    double Td4958;
	    Td4958 = p[Ti4957].d;
	    double Td4959;
	    Td4959 = Td4956 + Td4958;
	    int Tu4030;
	    Ta4951[Ti4952].d = Td4959;
	    int Ti4960;
	    Ti4960 = 0;
	    bool Tb4961;
	    Tb4961 = check_all_inside_fun(Ti4960, and_group, NULL);
	    int Ti4962;
	    Ti4962 = 0;
	    if(Tb4961 == Ti4962){
		int Ti4963;
		Ti4963 = 1;
		int Ti4964;
		Ti4964 = iand_ofs + Ti4963;
		result = shadow_check_and_group_fun(Ti4964, and_group, p, NULL);
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

bool shadow_check_one_or_group_fun(int ofs, Value* or_group, Value* p, Value *env){
    bool result;
    int head;
    head = or_group[ofs].i;
    int Ti4909;
    Ti4909 = 1;
    int Ti4910;
    Ti4910 = -Ti4909;
    if(head == Ti4910){
	result = 0;
    }
    else{
	Value* Ta4911;

	Value* and_group;
	and_group = Ta4911[head].a;
	int Ti4912;
	Ti4912 = 0;
	bool shadow_p;
	shadow_p = shadow_check_and_group_fun(Ti4912, and_group, p, NULL);
	int Ti4913;
	Ti4913 = 0;
	if(shadow_p == Ti4913){
	    int Ti4914;
	    Ti4914 = 1;
	    int Ti4915;
	    Ti4915 = ofs + Ti4914;
	    result = shadow_check_one_or_group_fun(Ti4915, or_group, p, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

bool shadow_check_one_or_matrix_fun(int ofs, Value* or_matrix, Value* p, Value *env){
    bool result;
    Value* head;
    head = or_matrix[ofs].a;
    int Ti4885;
    Ti4885 = 0;
    int range_primitive;
    range_primitive = head[Ti4885].i;
    int Ti4886;
    Ti4886 = 1;
    int Ti4887;
    Ti4887 = -Ti4886;
    if(range_primitive == Ti4887){
	result = 0;
    }
    else{
	int Ti4888;
	Ti4888 = 99;
	if(range_primitive == Ti4888){
	    int Ti4889;
	    Ti4889 = 1;
	    bool Tb4890;
	    Tb4890 = shadow_check_one_or_group_fun(Ti4889, head, p, NULL);
	    int Ti4891;
	    Ti4891 = 0;
	    if(Tb4890 == Ti4891){
		int Ti4892;
		Ti4892 = 1;
		int Ti4893;
		Ti4893 = ofs + Ti4892;
		result = shadow_check_one_or_matrix_fun(Ti4893, or_matrix, p, NULL);
	    }
	    else{
		result = 1;
	    }
	}
	else{
	    Value* Ta4894;

	    int t;
	    t = solver_fun(range_primitive, Ta4894, p, NULL);
	    int Ti4895;
	    Ti4895 = 0;
	    if(t == Ti4895){
		int Ti4896;
		Ti4896 = 1;
		int Ti4897;
		Ti4897 = ofs + Ti4896;
		result = shadow_check_one_or_matrix_fun(Ti4897, or_matrix, p, NULL);
	    }
	    else{
		double Td4898;
		Td4898 = -0.100000;
		Value* Ta4899;

		int Ti4900;
		Ti4900 = 0;
		double Td4901;
		Td4901 = Ta4899[Ti4900].d;
		if(Td4898 <= Td4901){
		    int Ti4902;
		    Ti4902 = 1;
		    int Ti4903;
		    Ti4903 = ofs + Ti4902;
		    result = shadow_check_one_or_matrix_fun(Ti4903, or_matrix, p, NULL);
		}
		else{
		    int Ti4904;
		    Ti4904 = 1;
		    bool Tb4905;
		    Tb4905 = shadow_check_one_or_group_fun(Ti4904, head, p, NULL);
		    int Ti4906;
		    Ti4906 = 0;
		    if(Tb4905 == Ti4906){
			int Ti4907;
			Ti4907 = 1;
			int Ti4908;
			Ti4908 = ofs + Ti4907;
			result = shadow_check_one_or_matrix_fun(Ti4908, or_matrix, p, NULL);
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

int solve_each_element_fun(int iand_ofs, Value* and_group, Value *env){
    int result;
    int iobj;
    iobj = and_group[iand_ofs].i;
    int Ti4806;
    Ti4806 = 1;
    int Ti4807;
    Ti4807 = -Ti4806;
    if(iobj == Ti4807){
	result = 1;
    }
    else{
	Value* Ta4808;

	Value* Ta4809;

	int t0;
	t0 = solver_fun(iobj, Ta4808, Ta4809, NULL);
	int Ti4810;
	Ti4810 = 0;
	int Tu4041;
	if(t0 == Ti4810){
	    Value* Ta4811;

	    int* Tt4812;
	    Tt4812 = Ta4811[iobj].a;
	    bool Tb4813;
	    Tb4813 = o_isinvert_fun(Tt4812, NULL);
	    int Ti4814;
	    Ti4814 = 0;
	    if(Tb4813 == Ti4814){
		Value* Ta4815;

		int Ti4816;
		Ti4816 = 0;
		int Ti4817;
		Ti4817 = 1;
		Ta4815[Ti4816].i = Ti4817;
	    }
	    else{
		Tu4041 = 1;
	    }
	}
	else{
	    Value* Ta4818;

	    int Ti4819;
	    Ti4819 = 0;
	    double t0p;
	    t0p = Ta4818[Ti4819].d;
	    double Td4820;
	    Td4820 = -0.100000;
	    if(t0p <= Td4820){
		Tu4041 = 1;
	    }
	    else{
		Value* Ta4821;

		int Ti4822;
		Ti4822 = 0;
		double Td4823;
		Td4823 = Ta4821[Ti4822].d;
		if(Td4823 <= t0p){
		    Tu4041 = 1;
		}
		else{
		    double Td4824;
		    Td4824 = 0.010000;
		    double t;
		    t = t0p + Td4824;
		    Value* Ta4825;

		    int Ti4826;
		    Ti4826 = 0;
		    Value* Ta4827;

		    int Ti4828;
		    Ti4828 = 0;
		    double Td4829;
		    Td4829 = Ta4827[Ti4828].d;
		    double Td4830;
		    Td4830 =  Td4829 * t;
		    Value* Ta4831;

		    int Ti4832;
		    Ti4832 = 0;
		    double Td4833;
		    Td4833 = Ta4831[Ti4832].d;
		    double Td4834;
		    Td4834 = Td4830 + Td4833;
		    int Tu4040;
		    Ta4825[Ti4826].d = Td4834;
		    Value* Ta4835;

		    int Ti4836;
		    Ti4836 = 1;
		    Value* Ta4837;

		    int Ti4838;
		    Ti4838 = 1;
		    double Td4839;
		    Td4839 = Ta4837[Ti4838].d;
		    double Td4840;
		    Td4840 =  Td4839 * t;
		    Value* Ta4841;

		    int Ti4842;
		    Ti4842 = 1;
		    double Td4843;
		    Td4843 = Ta4841[Ti4842].d;
		    double Td4844;
		    Td4844 = Td4840 + Td4843;
		    int Tu4039;
		    Ta4835[Ti4836].d = Td4844;
		    Value* Ta4845;

		    int Ti4846;
		    Ti4846 = 2;
		    Value* Ta4847;

		    int Ti4848;
		    Ti4848 = 2;
		    double Td4849;
		    Td4849 = Ta4847[Ti4848].d;
		    double Td4850;
		    Td4850 =  Td4849 * t;
		    Value* Ta4851;

		    int Ti4852;
		    Ti4852 = 2;
		    double Td4853;
		    Td4853 = Ta4851[Ti4852].d;
		    double Td4854;
		    Td4854 = Td4850 + Td4853;
		    int Tu4038;
		    Ta4845[Ti4846].d = Td4854;
		    int Ti4855;
		    Ti4855 = 0;
		    bool Tb4856;
		    Tb4856 = check_all_inside_fun(Ti4855, and_group, NULL);
		    int Ti4857;
		    Ti4857 = 0;
		    if(Tb4856 == Ti4857){
			Tu4041 = 1;
		    }
		    else{
			Value* Ta4858;

			int Ti4859;
			Ti4859 = 0;
			int Tu4037;
			Ta4858[Ti4859].d = t;
			Value* Ta4860;

			int Ti4861;
			Ti4861 = 0;
			Value* Ta4862;

			int Ti4863;
			Ti4863 = 0;
			double Td4864;
			Td4864 = Ta4862[Ti4863].d;
			int Tu4036;
			Ta4860[Ti4861].d = Td4864;
			Value* Ta4865;

			int Ti4866;
			Ti4866 = 1;
			Value* Ta4867;

			int Ti4868;
			Ti4868 = 1;
			double Td4869;
			Td4869 = Ta4867[Ti4868].d;
			int Tu4035;
			Ta4865[Ti4866].d = Td4869;
			Value* Ta4870;

			int Ti4871;
			Ti4871 = 2;
			Value* Ta4872;

			int Ti4873;
			Ti4873 = 2;
			double Td4874;
			Td4874 = Ta4872[Ti4873].d;
			int Tu4034;
			Ta4870[Ti4871].d = Td4874;
			Value* Ta4875;

			int Ti4876;
			Ti4876 = 0;
			int Tu4033;
			Ta4875[Ti4876].i = t0;
			Value* Ta4877;

			int Ti4878;
			Ti4878 = 0;
			Ta4877[Ti4878].i = iobj;
		    }
		}
	    }
	}
	Value* Ta4879;

	int Ti4880;
	Ti4880 = 0;
	bool Tb4881;
	Tb4881 = Ta4879[Ti4880].b;
	int Ti4882;
	Ti4882 = 0;
	if(Tb4881 == Ti4882){
	    int Ti4883;
	    Ti4883 = 1;
	    int Ti4884;
	    Ti4884 = iand_ofs + Ti4883;
	    result = solve_each_element_fun(Ti4884, and_group, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int solve_one_or_network_fun(int ofs, Value* or_group, Value *env){
    int result;
    int head;
    head = or_group[ofs].i;
    int Ti4797;
    Ti4797 = 1;
    int Ti4798;
    Ti4798 = -Ti4797;
    if(head == Ti4798){
	result = 1;
    }
    else{
	Value* Ta4799;

	Value* and_group;
	and_group = Ta4799[head].a;
	Value* Ta4800;

	int Ti4801;
	Ti4801 = 0;
	int Ti4802;
	Ti4802 = 0;
	int Tu4043;
	Ta4800[Ti4801].i = Ti4802;
	int Ti4803;
	Ti4803 = 0;
	int Tu4042;
	Tu4042 = solve_each_element_fun(Ti4803, and_group, NULL);
	int Ti4804;
	Ti4804 = 1;
	int Ti4805;
	Ti4805 = ofs + Ti4804;
	result = solve_one_or_network_fun(Ti4805, or_group, NULL);
    }
    return result;
}

int trace_or_matrix_fun(int ofs, Value* or_network, Value *env){
    int result;
    Value* head;
    head = or_network[ofs].a;
    int Ti4781;
    Ti4781 = 0;
    int range_primitive;
    range_primitive = head[Ti4781].i;
    int Ti4782;
    Ti4782 = 1;
    int Ti4783;
    Ti4783 = -Ti4782;
    if(range_primitive == Ti4783){
	result = 1;
    }
    else{
	int Ti4784;
	Ti4784 = 99;
	int Tu4044;
	if(range_primitive == Ti4784){
	    int Ti4785;
	    Ti4785 = 1;
	    Tu4044 = solve_one_or_network_fun(Ti4785, head, NULL);
	}
	else{
	    Value* Ta4786;

	    Value* Ta4787;

	    int t;
	    t = solver_fun(range_primitive, Ta4786, Ta4787, NULL);
	    int Ti4788;
	    Ti4788 = 0;
	    if(t == Ti4788){
		Tu4044 = 1;
	    }
	    else{
		Value* Ta4789;

		int Ti4790;
		Ti4790 = 0;
		double tp;
		tp = Ta4789[Ti4790].d;
		Value* Ta4791;

		int Ti4792;
		Ti4792 = 0;
		double Td4793;
		Td4793 = Ta4791[Ti4792].d;
		if(Td4793 <= tp){
		    Tu4044 = 1;
		}
		else{
		    int Ti4794;
		    Ti4794 = 1;
		    Tu4044 = solve_one_or_network_fun(Ti4794, head, NULL);
		}
	    }
	}
	int Ti4795;
	Ti4795 = 1;
	int Ti4796;
	Ti4796 = ofs + Ti4795;
	result = trace_or_matrix_fun(Ti4796, or_network, NULL);
    }
    return result;
}

bool tracer_fun(Value* viewpoint, Value* vscan, Value *env){
    bool result;
    Value* Ta4770;

    int Ti4771;
    Ti4771 = 0;
    double Td4772;
    Td4772 = 1000000000.000000;
    int Tu4046;
    Ta4770[Ti4771].d = Td4772;
    int Ti4773;
    Ti4773 = 0;
    Value* Ta4774;

    int Ti4775;
    Ti4775 = 0;
    Value* Ta4776;
    Ta4776 = Ta4774[Ti4775].a;
    int Tu4045;
    Tu4045 = trace_or_matrix_fun(Ti4773, Ta4776, NULL);
    Value* Ta4777;

    int Ti4778;
    Ti4778 = 0;
    double t;
    t = Ta4777[Ti4778].d;
    double Td4779;
    Td4779 = -0.100000;
    if(t <= Td4779){
	result = 0;
    }
    else{
	double Td4780;
	Td4780 = 100000000.000000;
	if(Td4780 <= t){
	    result = 0;
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int get_nvector_rect_fun(int Tu4047, Value *env){
    int result;
    Value* Ta4726;

    int Ti4727;
    Ti4727 = 0;
    int rectside;
    rectside = Ta4726[Ti4727].i;
    int Ti4728;
    Ti4728 = 1;
    if(rectside == Ti4728){
	Value* Ta4729;

	int Ti4730;
	Ti4730 = 0;
	Value* Ta4731;

	int Ti4732;
	Ti4732 = 0;
	double Td4733;
	Td4733 = Ta4731[Ti4732].d;
	double Td4734;
	Td4734 = sgn_fun(Td4733, NULL);
	double Td4735;
	Td4735 = -Td4734;
	int Tu4049;
	Ta4729[Ti4730].d = Td4735;
	Value* Ta4736;

	int Ti4737;
	Ti4737 = 1;
	double Td4738;
	Td4738 = 0.000000;
	int Tu4048;
	Ta4736[Ti4737].d = Td4738;
	Value* Ta4739;

	int Ti4740;
	Ti4740 = 2;
	double Td4741;
	Td4741 = 0.000000;
	Ta4739[Ti4740].d = Td4741;
    }
    else{
	int Ti4742;
	Ti4742 = 2;
	if(rectside == Ti4742){
	    Value* Ta4743;

	    int Ti4744;
	    Ti4744 = 0;
	    double Td4745;
	    Td4745 = 0.000000;
	    int Tu4051;
	    Ta4743[Ti4744].d = Td4745;
	    Value* Ta4746;

	    int Ti4747;
	    Ti4747 = 1;
	    Value* Ta4748;

	    int Ti4749;
	    Ti4749 = 1;
	    double Td4750;
	    Td4750 = Ta4748[Ti4749].d;
	    double Td4751;
	    Td4751 = sgn_fun(Td4750, NULL);
	    double Td4752;
	    Td4752 = -Td4751;
	    int Tu4050;
	    Ta4746[Ti4747].d = Td4752;
	    Value* Ta4753;

	    int Ti4754;
	    Ti4754 = 2;
	    double Td4755;
	    Td4755 = 0.000000;
	    Ta4753[Ti4754].d = Td4755;
	}
	else{
	    int Ti4756;
	    Ti4756 = 3;
	    if(rectside == Ti4756){
		Value* Ta4757;

		int Ti4758;
		Ti4758 = 0;
		double Td4759;
		Td4759 = 0.000000;
		int Tu4053;
		Ta4757[Ti4758].d = Td4759;
		Value* Ta4760;

		int Ti4761;
		Ti4761 = 1;
		double Td4762;
		Td4762 = 0.000000;
		int Tu4052;
		Ta4760[Ti4761].d = Td4762;
		Value* Ta4763;

		int Ti4764;
		Ti4764 = 2;
		Value* Ta4765;

		int Ti4766;
		Ti4766 = 2;
		double Td4767;
		Td4767 = Ta4765[Ti4766].d;
		double Td4768;
		Td4768 = sgn_fun(Td4767, NULL);
		double Td4769;
		Td4769 = -Td4768;
		Ta4763[Ti4764].d = Td4769;
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

int get_nvector_plane_fun(int* m, Value *env){
    int result;
    Value* Ta4714;

    int Ti4715;
    Ti4715 = 0;
    double Td4716;
    Td4716 = o_param_a_fun(m, NULL);
    double Td4717;
    Td4717 = -Td4716;
    int Tu4055;
    Ta4714[Ti4715].d = Td4717;
    Value* Ta4718;

    int Ti4719;
    Ti4719 = 1;
    double Td4720;
    Td4720 = o_param_b_fun(m, NULL);
    double Td4721;
    Td4721 = -Td4720;
    int Tu4054;
    Ta4718[Ti4719].d = Td4721;
    Value* Ta4722;

    int Ti4723;
    Ti4723 = 2;
    double Td4724;
    Td4724 = o_param_c_fun(m, NULL);
    double Td4725;
    Td4725 = -Td4724;
    Ta4722[Ti4723].d = Td4725;
    return result;
}

int get_nvector_second_norot_fun(int* m, Value* p, Value *env){
    int result;
    Value* Ta4688;

    int Ti4689;
    Ti4689 = 0;
    int Ti4690;
    Ti4690 = 0;
    double Td4691;
    Td4691 = p[Ti4690].d;
    double Td4692;
    Td4692 = o_param_x_fun(m, NULL);
    double Td4693;
    Td4693 = Td4691 - Td4692;
    double Td4694;
    Td4694 = o_param_a_fun(m, NULL);
    double Td4695;
    Td4695 =  Td4693 * Td4694;
    int Tu4058;
    Ta4688[Ti4689].d = Td4695;
    Value* Ta4696;

    int Ti4697;
    Ti4697 = 1;
    int Ti4698;
    Ti4698 = 1;
    double Td4699;
    Td4699 = p[Ti4698].d;
    double Td4700;
    Td4700 = o_param_y_fun(m, NULL);
    double Td4701;
    Td4701 = Td4699 - Td4700;
    double Td4702;
    Td4702 = o_param_b_fun(m, NULL);
    double Td4703;
    Td4703 =  Td4701 * Td4702;
    int Tu4057;
    Ta4696[Ti4697].d = Td4703;
    Value* Ta4704;

    int Ti4705;
    Ti4705 = 2;
    int Ti4706;
    Ti4706 = 2;
    double Td4707;
    Td4707 = p[Ti4706].d;
    double Td4708;
    Td4708 = o_param_z_fun(m, NULL);
    double Td4709;
    Td4709 = Td4707 - Td4708;
    double Td4710;
    Td4710 = o_param_c_fun(m, NULL);
    double Td4711;
    Td4711 =  Td4709 * Td4710;
    int Tu4056;
    Ta4704[Ti4705].d = Td4711;
    Value* Ta4712;

    bool Tb4713;
    Tb4713 = o_isinvert_fun(m, NULL);
    result = normalize_vector_fun(Ta4712, Tb4713, NULL);
    return result;
}

int get_nvector_second_rot_fun(int* m, Value* p, Value *env){
    int result;
    Value* Ta4608;

    int Ti4609;
    Ti4609 = 0;
    int Ti4610;
    Ti4610 = 0;
    double Td4611;
    Td4611 = p[Ti4610].d;
    double Td4612;
    Td4612 = o_param_x_fun(m, NULL);
    double Td4613;
    Td4613 = Td4611 - Td4612;
    int Tu4064;
    Ta4608[Ti4609].d = Td4613;
    Value* Ta4614;

    int Ti4615;
    Ti4615 = 1;
    int Ti4616;
    Ti4616 = 1;
    double Td4617;
    Td4617 = p[Ti4616].d;
    double Td4618;
    Td4618 = o_param_y_fun(m, NULL);
    double Td4619;
    Td4619 = Td4617 - Td4618;
    int Tu4063;
    Ta4614[Ti4615].d = Td4619;
    Value* Ta4620;

    int Ti4621;
    Ti4621 = 2;
    int Ti4622;
    Ti4622 = 2;
    double Td4623;
    Td4623 = p[Ti4622].d;
    double Td4624;
    Td4624 = o_param_z_fun(m, NULL);
    double Td4625;
    Td4625 = Td4623 - Td4624;
    int Tu4062;
    Ta4620[Ti4621].d = Td4625;
    Value* Ta4626;

    int Ti4627;
    Ti4627 = 0;
    Value* Ta4628;

    int Ti4629;
    Ti4629 = 0;
    double Td4630;
    Td4630 = Ta4628[Ti4629].d;
    double Td4631;
    Td4631 = o_param_a_fun(m, NULL);
    double Td4632;
    Td4632 =  Td4630 * Td4631;
    Value* Ta4633;

    int Ti4634;
    Ti4634 = 1;
    double Td4635;
    Td4635 = Ta4633[Ti4634].d;
    double Td4636;
    Td4636 = o_param_r3_fun(m, NULL);
    double Td4637;
    Td4637 =  Td4635 * Td4636;
    Value* Ta4638;

    int Ti4639;
    Ti4639 = 2;
    double Td4640;
    Td4640 = Ta4638[Ti4639].d;
    double Td4641;
    Td4641 = o_param_r2_fun(m, NULL);
    double Td4642;
    Td4642 =  Td4640 * Td4641;
    double Td4643;
    Td4643 = Td4637 + Td4642;
    double Td4644;
    Td4644 = fhalf_fun(Td4643, NULL);
    double Td4645;
    Td4645 = Td4632 + Td4644;
    int Tu4061;
    Ta4626[Ti4627].d = Td4645;
    Value* Ta4646;

    int Ti4647;
    Ti4647 = 1;
    Value* Ta4648;

    int Ti4649;
    Ti4649 = 1;
    double Td4650;
    Td4650 = Ta4648[Ti4649].d;
    double Td4651;
    Td4651 = o_param_b_fun(m, NULL);
    double Td4652;
    Td4652 =  Td4650 * Td4651;
    Value* Ta4653;

    int Ti4654;
    Ti4654 = 0;
    double Td4655;
    Td4655 = Ta4653[Ti4654].d;
    double Td4656;
    Td4656 = o_param_r3_fun(m, NULL);
    double Td4657;
    Td4657 =  Td4655 * Td4656;
    Value* Ta4658;

    int Ti4659;
    Ti4659 = 2;
    double Td4660;
    Td4660 = Ta4658[Ti4659].d;
    double Td4661;
    Td4661 = o_param_r1_fun(m, NULL);
    double Td4662;
    Td4662 =  Td4660 * Td4661;
    double Td4663;
    Td4663 = Td4657 + Td4662;
    double Td4664;
    Td4664 = fhalf_fun(Td4663, NULL);
    double Td4665;
    Td4665 = Td4652 + Td4664;
    int Tu4060;
    Ta4646[Ti4647].d = Td4665;
    Value* Ta4666;

    int Ti4667;
    Ti4667 = 2;
    Value* Ta4668;

    int Ti4669;
    Ti4669 = 2;
    double Td4670;
    Td4670 = Ta4668[Ti4669].d;
    double Td4671;
    Td4671 = o_param_c_fun(m, NULL);
    double Td4672;
    Td4672 =  Td4670 * Td4671;
    Value* Ta4673;

    int Ti4674;
    Ti4674 = 0;
    double Td4675;
    Td4675 = Ta4673[Ti4674].d;
    double Td4676;
    Td4676 = o_param_r2_fun(m, NULL);
    double Td4677;
    Td4677 =  Td4675 * Td4676;
    Value* Ta4678;

    int Ti4679;
    Ti4679 = 1;
    double Td4680;
    Td4680 = Ta4678[Ti4679].d;
    double Td4681;
    Td4681 = o_param_r1_fun(m, NULL);
    double Td4682;
    Td4682 =  Td4680 * Td4681;
    double Td4683;
    Td4683 = Td4677 + Td4682;
    double Td4684;
    Td4684 = fhalf_fun(Td4683, NULL);
    double Td4685;
    Td4685 = Td4672 + Td4684;
    int Tu4059;
    Ta4666[Ti4667].d = Td4685;
    Value* Ta4686;

    bool Tb4687;
    Tb4687 = o_isinvert_fun(m, NULL);
    result = normalize_vector_fun(Ta4686, Tb4687, NULL);
    return result;
}

int get_nvector_fun(int* m, Value* p, Value *env){
    int result;
    int m_shape;
    m_shape = o_form_fun(m, NULL);
    int Ti4603;
    Ti4603 = 1;
    if(m_shape == Ti4603){
	int Tu4604;
	Tu4604 = 1;
	result = get_nvector_rect_fun(Tu4604, NULL);
    }
    else{
	int Ti4605;
	Ti4605 = 2;
	if(m_shape == Ti4605){
	    result = get_nvector_plane_fun(m, NULL);
	}
	else{
	    int Ti4606;
	    Ti4606 = o_isrot_fun(m, NULL);
	    int Ti4607;
	    Ti4607 = 0;
	    if(Ti4606 == Ti4607){
		result = get_nvector_second_norot_fun(m, p, NULL);
	    }
	    else{
		result = get_nvector_second_rot_fun(m, p, NULL);
	    }
	}
    }
    return result;
}

int utexture_fun(int* m, Value* p, Value *env){
    int result;
    int m_tex;
    m_tex = o_texturetype_fun(m, NULL);
    Value* Ta4474;

    int Ti4475;
    Ti4475 = 0;
    double Td4476;
    Td4476 = o_color_red_fun(m, NULL);
    int Tu4069;
    Ta4474[Ti4475].d = Td4476;
    Value* Ta4477;

    int Ti4478;
    Ti4478 = 1;
    double Td4479;
    Td4479 = o_color_green_fun(m, NULL);
    int Tu4068;
    Ta4477[Ti4478].d = Td4479;
    Value* Ta4480;

    int Ti4481;
    Ti4481 = 2;
    double Td4482;
    Td4482 = o_color_blue_fun(m, NULL);
    int Tu4067;
    Ta4480[Ti4481].d = Td4482;
    int Ti4483;
    Ti4483 = 1;
    if(m_tex == Ti4483){
	int Ti4484;
	Ti4484 = 0;
	double Td4485;
	Td4485 = p[Ti4484].d;
	double Td4486;
	Td4486 = o_param_x_fun(m, NULL);
	double w1;
	w1 = Td4485 - Td4486;
	double Td4487;
	Td4487 = 0.050000;
	double Td4488;
	Td4488 =  w1 * Td4487;
	double Td4489;
	Td4489 = min_caml_floor_fun(Td4488, NULL);
	double Td4490;
	Td4490 = 20.000000;
	double d1;
	d1 =  Td4489 * Td4490;
	double Td4491;
	Td4491 = 10.000000;
	double Td4492;
	Td4492 = w1 - d1;
	bool flag1;
	if(Td4491 <= Td4492){
	    flag1 = 0;
	}
	else{
	    flag1 = 1;
	}
	int Ti4493;
	Ti4493 = 2;
	double Td4494;
	Td4494 = p[Ti4493].d;
	double Td4495;
	Td4495 = o_param_z_fun(m, NULL);
	double w3;
	w3 = Td4494 - Td4495;
	double Td4496;
	Td4496 = 0.050000;
	double Td4497;
	Td4497 =  w3 * Td4496;
	double Td4498;
	Td4498 = min_caml_floor_fun(Td4497, NULL);
	double Td4499;
	Td4499 = 20.000000;
	double d2;
	d2 =  Td4498 * Td4499;
	double Td4500;
	Td4500 = 10.000000;
	double Td4501;
	Td4501 = w3 - d2;
	bool flag2;
	if(Td4500 <= Td4501){
	    flag2 = 0;
	}
	else{
	    flag2 = 1;
	}
	Value* Ta4502;

	int Ti4503;
	Ti4503 = 1;
	int Ti4504;
	Ti4504 = 0;
	double Td4507;
	if(flag1 == Ti4504){
	    int Ti4505;
	    Ti4505 = 0;
	    if(flag2 == Ti4505){
		Td4507 = 255.000000;
	    }
	    else{
		Td4507 = 0.000000;
	    }
	}
	else{
	    int Ti4506;
	    Ti4506 = 0;
	    if(flag2 == Ti4506){
		Td4507 = 0.000000;
	    }
	    else{
		Td4507 = 255.000000;
	    }
	}
	Ta4502[Ti4503].d = Td4507;
    }
    else{
	int Ti4508;
	Ti4508 = 2;
	if(m_tex == Ti4508){
	    int Ti4509;
	    Ti4509 = 1;
	    double Td4510;
	    Td4510 = p[Ti4509].d;
	    double Td4511;
	    Td4511 = 0.250000;
	    double Td4512;
	    Td4512 =  Td4510 * Td4511;
	    double Td4513;
	    Td4513 = min_caml_sin_fun(Td4512, NULL);
	    double w2;
	    w2 = fsqr_fun(Td4513, NULL);
	    Value* Ta4514;

	    int Ti4515;
	    Ti4515 = 0;
	    double Td4516;
	    Td4516 = 255.000000;
	    double Td4517;
	    Td4517 =  Td4516 * w2;
	    int Tu4065;
	    Ta4514[Ti4515].d = Td4517;
	    Value* Ta4518;

	    int Ti4519;
	    Ti4519 = 1;
	    double Td4520;
	    Td4520 = 255.000000;
	    double Td4521;
	    Td4521 = 1.000000;
	    double Td4522;
	    Td4522 = Td4521 - w2;
	    double Td4523;
	    Td4523 =  Td4520 * Td4522;
	    Ta4518[Ti4519].d = Td4523;
	}
	else{
	    int Ti4524;
	    Ti4524 = 3;
	    if(m_tex == Ti4524){
		int Ti4525;
		Ti4525 = 0;
		double Td4526;
		Td4526 = p[Ti4525].d;
		double Td4527;
		Td4527 = o_param_x_fun(m, NULL);
		double w1;
		w1 = Td4526 - Td4527;
		int Ti4528;
		Ti4528 = 2;
		double Td4529;
		Td4529 = p[Ti4528].d;
		double Td4530;
		Td4530 = o_param_z_fun(m, NULL);
		double w3;
		w3 = Td4529 - Td4530;
		double Td4531;
		Td4531 = fsqr_fun(w1, NULL);
		double Td4532;
		Td4532 = fsqr_fun(w3, NULL);
		double Td4533;
		Td4533 = Td4531 + Td4532;
		double Td4534;
		Td4534 = min_caml_sqrt_fun(Td4533, NULL);
		double Td4535;
		Td4535 = 10.000000;
		double w2;
		w2 = Td4534 / Td4535;
		double Td4536;
		Td4536 = min_caml_floor_fun(w2, NULL);
		double Td4537;
		Td4537 = w2 - Td4536;
		double Td4538;
		Td4538 = 3.141593;
		double w4;
		w4 =  Td4537 * Td4538;
		double Td4539;
		Td4539 = min_caml_cos_fun(w4, NULL);
		double cws;
		cws = fsqr_fun(Td4539, NULL);
		Value* Ta4540;

		int Ti4541;
		Ti4541 = 1;
		double Td4542;
		Td4542 = 255.000000;
		double Td4543;
		Td4543 =  cws * Td4542;
		int Tu4066;
		Ta4540[Ti4541].d = Td4543;
		Value* Ta4544;

		int Ti4545;
		Ti4545 = 2;
		double Td4546;
		Td4546 = 1.000000;
		double Td4547;
		Td4547 = Td4546 - cws;
		double Td4548;
		Td4548 = 255.000000;
		double Td4549;
		Td4549 =  Td4547 * Td4548;
		Ta4544[Ti4545].d = Td4549;
	    }
	    else{
		int Ti4550;
		Ti4550 = 4;
		if(m_tex == Ti4550){
		    int Ti4551;
		    Ti4551 = 0;
		    double Td4552;
		    Td4552 = p[Ti4551].d;
		    double Td4553;
		    Td4553 = o_param_x_fun(m, NULL);
		    double Td4554;
		    Td4554 = Td4552 - Td4553;
		    double Td4555;
		    Td4555 = o_param_a_fun(m, NULL);
		    double Td4556;
		    Td4556 = min_caml_sqrt_fun(Td4555, NULL);
		    double w1;
		    w1 =  Td4554 * Td4556;
		    int Ti4557;
		    Ti4557 = 2;
		    double Td4558;
		    Td4558 = p[Ti4557].d;
		    double Td4559;
		    Td4559 = o_param_z_fun(m, NULL);
		    double Td4560;
		    Td4560 = Td4558 - Td4559;
		    double Td4561;
		    Td4561 = o_param_c_fun(m, NULL);
		    double Td4562;
		    Td4562 = min_caml_sqrt_fun(Td4561, NULL);
		    double w3;
		    w3 =  Td4560 * Td4562;
		    double Td4563;
		    Td4563 = fsqr_fun(w1, NULL);
		    double Td4564;
		    Td4564 = fsqr_fun(w3, NULL);
		    double Td4565;
		    Td4565 = Td4563 + Td4564;
		    double w4;
		    w4 = min_caml_sqrt_fun(Td4565, NULL);
		    double Td4566;
		    Td4566 = 0.000100;
		    double Td4567;
		    Td4567 = min_caml_abs_float_fun(w1, NULL);
		    double w7;
		    if(Td4566 <= Td4567){
			double Td4568;
			Td4568 = w3 / w1;
			double w5;
			w5 = min_caml_abs_float_fun(Td4568, NULL);
			double Td4569;
			Td4569 = min_caml_atan_fun(w5, NULL);
			double Td4570;
			Td4570 = 30.000000;
			double Td4571;
			Td4571 = 3.141593;
			double Td4572;
			Td4572 = Td4570 / Td4571;
			w7 =  Td4569 * Td4572;
		    }
		    else{
			w7 = 15.000000;
		    }
		    double Td4573;
		    Td4573 = min_caml_floor_fun(w7, NULL);
		    double w9;
		    w9 = w7 - Td4573;
		    int Ti4574;
		    Ti4574 = 1;
		    double Td4575;
		    Td4575 = p[Ti4574].d;
		    double Td4576;
		    Td4576 = o_param_y_fun(m, NULL);
		    double Td4577;
		    Td4577 = Td4575 - Td4576;
		    double Td4578;
		    Td4578 = o_param_b_fun(m, NULL);
		    double Td4579;
		    Td4579 = min_caml_sqrt_fun(Td4578, NULL);
		    double w2;
		    w2 =  Td4577 * Td4579;
		    double Td4580;
		    Td4580 = 0.000100;
		    double Td4581;
		    Td4581 = min_caml_abs_float_fun(w7, NULL);
		    double w8;
		    if(Td4580 <= Td4581){
			double Td4582;
			Td4582 = w2 / w4;
			double w6;
			w6 = min_caml_abs_float_fun(Td4582, NULL);
			double Td4583;
			Td4583 = min_caml_atan_fun(w6, NULL);
			double Td4584;
			Td4584 = 30.000000;
			double Td4585;
			Td4585 = 3.141593;
			double Td4586;
			Td4586 = Td4584 / Td4585;
			w8 =  Td4583 * Td4586;
		    }
		    else{
			w8 = 15.000000;
		    }
		    double Td4587;
		    Td4587 = min_caml_floor_fun(w8, NULL);
		    double w10;
		    w10 = w8 - Td4587;
		    double Td4588;
		    Td4588 = 0.150000;
		    double Td4589;
		    Td4589 = 0.500000;
		    double Td4590;
		    Td4590 = Td4589 - w9;
		    double Td4591;
		    Td4591 = fsqr_fun(Td4590, NULL);
		    double Td4592;
		    Td4592 = Td4588 - Td4591;
		    double Td4593;
		    Td4593 = 0.500000;
		    double Td4594;
		    Td4594 = Td4593 - w10;
		    double Td4595;
		    Td4595 = fsqr_fun(Td4594, NULL);
		    double w11;
		    w11 = Td4592 - Td4595;
		    Value* Ta4596;

		    int Ti4597;
		    Ti4597 = 2;
		    double Td4598;
		    Td4598 = 0.000000;
		    double Td4602;
		    if(w11 <= Td4598){
			Td4602 = 0.000000;
		    }
		    else{
			double Td4599;
			Td4599 = 255.000000;
			double Td4600;
			Td4600 = 0.300000;
			double Td4601;
			Td4601 = Td4599 / Td4600;
			Td4602 =  w11 * Td4601;
		    }
		    Ta4596[Ti4597].d = Td4602;
		}
		else{
		    result = 1;
		}
	    }
	}
    }
    return result;
}

double in_prod_fun(Value* v1, Value* v2, Value *env){
    double result;
    int Ti4458;
    Ti4458 = 0;
    double Td4459;
    Td4459 = v1[Ti4458].d;
    int Ti4460;
    Ti4460 = 0;
    double Td4461;
    Td4461 = v2[Ti4460].d;
    double Td4462;
    Td4462 =  Td4459 * Td4461;
    int Ti4463;
    Ti4463 = 1;
    double Td4464;
    Td4464 = v1[Ti4463].d;
    int Ti4465;
    Ti4465 = 1;
    double Td4466;
    Td4466 = v2[Ti4465].d;
    double Td4467;
    Td4467 =  Td4464 * Td4466;
    double Td4468;
    Td4468 = Td4462 + Td4467;
    int Ti4469;
    Ti4469 = 2;
    double Td4470;
    Td4470 = v1[Ti4469].d;
    int Ti4471;
    Ti4471 = 2;
    double Td4472;
    Td4472 = v2[Ti4471].d;
    double Td4473;
    Td4473 =  Td4470 * Td4472;
    result = Td4468 + Td4473;
    return result;
}

int accumulate_vec_mul_fun(Value* v1, Value* v2, double w, Value *env){
    int result;
    int Ti4437;
    Ti4437 = 0;
    int Ti4438;
    Ti4438 = 0;
    double Td4439;
    Td4439 = v1[Ti4438].d;
    int Ti4440;
    Ti4440 = 0;
    double Td4441;
    Td4441 = v2[Ti4440].d;
    double Td4442;
    Td4442 =  w * Td4441;
    double Td4443;
    Td4443 = Td4439 + Td4442;
    int Tu4071;
    v1[Ti4437].d = Td4443;
    int Ti4444;
    Ti4444 = 1;
    int Ti4445;
    Ti4445 = 1;
    double Td4446;
    Td4446 = v1[Ti4445].d;
    int Ti4447;
    Ti4447 = 1;
    double Td4448;
    Td4448 = v2[Ti4447].d;
    double Td4449;
    Td4449 =  w * Td4448;
    double Td4450;
    Td4450 = Td4446 + Td4449;
    int Tu4070;
    v1[Ti4444].d = Td4450;
    int Ti4451;
    Ti4451 = 2;
    int Ti4452;
    Ti4452 = 2;
    double Td4453;
    Td4453 = v1[Ti4452].d;
    int Ti4454;
    Ti4454 = 2;
    double Td4455;
    Td4455 = v2[Ti4454].d;
    double Td4456;
    Td4456 =  w * Td4455;
    double Td4457;
    Td4457 = Td4453 + Td4456;
    v1[Ti4451].d = Td4457;
    return result;
}

int raytracing_fun(int nref, double energy, Value *env){
    int result;
    Value* Ta4323;

    Value* Ta4324;

    bool crashed_p;
    crashed_p = tracer_fun(Ta4323, Ta4324, NULL);
    int Ti4325;
    Ti4325 = 0;
    int Tu4083;
    if(crashed_p == Ti4325){
	int Ti4326;
	Ti4326 = 0;
	if(nref == Ti4326){
	    Tu4083 = 1;
	}
	else{
	    Value* Ta4327;

	    Value* Ta4328;

	    double Td4329;
	    Td4329 = in_prod_fun(Ta4327, Ta4328, NULL);
	    double hl;
	    hl = -Td4329;
	    double Td4330;
	    Td4330 = 0.000000;
	    if(hl <= Td4330){
		Tu4083 = 1;
	    }
	    else{
		double Td4331;
		Td4331 = fsqr_fun(hl, NULL);
		double Td4332;
		Td4332 =  Td4331 * hl;
		double Td4333;
		Td4333 =  Td4332 * energy;
		Value* Ta4334;

		int Ti4335;
		Ti4335 = 0;
		double Td4336;
		Td4336 = Ta4334[Ti4335].d;
		double ihl;
		ihl =  Td4333 * Td4336;
		Value* Ta4337;

		int Ti4338;
		Ti4338 = 0;
		Value* Ta4339;

		int Ti4340;
		Ti4340 = 0;
		double Td4341;
		Td4341 = Ta4339[Ti4340].d;
		double Td4342;
		Td4342 = Td4341 + ihl;
		int Tu4073;
		Ta4337[Ti4338].d = Td4342;
		Value* Ta4343;

		int Ti4344;
		Ti4344 = 1;
		Value* Ta4345;

		int Ti4346;
		Ti4346 = 1;
		double Td4347;
		Td4347 = Ta4345[Ti4346].d;
		double Td4348;
		Td4348 = Td4347 + ihl;
		int Tu4072;
		Ta4343[Ti4344].d = Td4348;
		Value* Ta4349;

		int Ti4350;
		Ti4350 = 2;
		Value* Ta4351;

		int Ti4352;
		Ti4352 = 2;
		double Td4353;
		Td4353 = Ta4351[Ti4352].d;
		double Td4354;
		Td4354 = Td4353 + ihl;
		Ta4349[Ti4350].d = Td4354;
	    }
	}
    }
    else{
	Tu4083 = 1;
    }
    int Ti4355;
    Ti4355 = 0;
    if(crashed_p == Ti4355){
	result = 1;
    }
    else{
	Value* Ta4356;

	Value* Ta4357;

	int Ti4358;
	Ti4358 = 0;
	int Ti4359;
	Ti4359 = Ta4357[Ti4358].i;
	int* cobj;
	cobj = Ta4356[Ti4359].a;
	Value* Ta4360;

	int Tu4082;
	Tu4082 = get_nvector_fun(cobj, Ta4360, NULL);
	int Ti4361;
	Ti4361 = 0;
	Value* Ta4362;

	int Ti4363;
	Ti4363 = 0;
	Value* Ta4364;
	Ta4364 = Ta4362[Ti4363].a;
	Value* Ta4365;

	bool Tb4366;
	Tb4366 = shadow_check_one_or_matrix_fun(Ti4361, Ta4364, Ta4365, NULL);
	int Ti4367;
	Ti4367 = 0;
	double bright;
	if(Tb4366 == Ti4367){
	    Value* Ta4368;

	    Value* Ta4369;

	    double Td4370;
	    Td4370 = in_prod_fun(Ta4368, Ta4369, NULL);
	    double br;
	    br = -Td4370;
	    double Td4371;
	    Td4371 = 0.000000;
	    double br1;
	    if(Td4371 <= br){
		double Td4372;
		Td4372 = 0.200000;
		br1 = br + Td4372;
	    }
	    else{
		br1 = 0.200000;
	    }
	    double Td4373;
	    Td4373 =  br1 * energy;
	    double Td4374;
	    Td4374 = o_diffuse_fun(cobj, NULL);
	    bright =  Td4373 * Td4374;
	}
	else{
	    bright = 0.000000;
	}
	Value* Ta4375;

	int Tu4081;
	Tu4081 = utexture_fun(cobj, Ta4375, NULL);
	Value* Ta4376;

	Value* Ta4377;

	int Tu4080;
	Tu4080 = accumulate_vec_mul_fun(Ta4376, Ta4377, bright, NULL);
	int Ti4378;
	Ti4378 = 4;
	if(nref <= Ti4378){
	    double Td4379;
	    Td4379 = 0.100000;
	    if(energy <= Td4379){
		result = 1;
	    }
	    else{
		double Td4380;
		Td4380 = -2.000000;
		Value* Ta4381;

		Value* Ta4382;

		double Td4383;
		Td4383 = in_prod_fun(Ta4381, Ta4382, NULL);
		double w;
		w =  Td4380 * Td4383;
		Value* Ta4384;

		Value* Ta4385;

		int Tu4079;
		Tu4079 = accumulate_vec_mul_fun(Ta4384, Ta4385, w, NULL);
		int m_surface;
		m_surface = o_reflectiontype_fun(cobj, NULL);
		int Ti4386;
		Ti4386 = 1;
		if(m_surface == Ti4386){
		    double Td4387;
		    Td4387 = 0.000000;
		    double Td4388;
		    Td4388 = o_hilight_fun(cobj, NULL);
		    if(Td4387 == Td4388){
			result = 1;
		    }
		    else{
			Value* Ta4389;

			Value* Ta4390;

			double Td4391;
			Td4391 = in_prod_fun(Ta4389, Ta4390, NULL);
			double hl;
			hl = -Td4391;
			double Td4392;
			Td4392 = 0.000000;
			if(hl <= Td4392){
			    result = 1;
			}
			else{
			    double Td4393;
			    Td4393 = fsqr_fun(hl, NULL);
			    double Td4394;
			    Td4394 = fsqr_fun(Td4393, NULL);
			    double Td4395;
			    Td4395 =  Td4394 * energy;
			    double Td4396;
			    Td4396 =  Td4395 * bright;
			    double Td4397;
			    Td4397 = o_hilight_fun(cobj, NULL);
			    double ihl;
			    ihl =  Td4396 * Td4397;
			    Value* Ta4398;

			    int Ti4399;
			    Ti4399 = 0;
			    Value* Ta4400;

			    int Ti4401;
			    Ti4401 = 0;
			    double Td4402;
			    Td4402 = Ta4400[Ti4401].d;
			    double Td4403;
			    Td4403 = Td4402 + ihl;
			    int Tu4075;
			    Ta4398[Ti4399].d = Td4403;
			    Value* Ta4404;

			    int Ti4405;
			    Ti4405 = 1;
			    Value* Ta4406;

			    int Ti4407;
			    Ti4407 = 1;
			    double Td4408;
			    Td4408 = Ta4406[Ti4407].d;
			    double Td4409;
			    Td4409 = Td4408 + ihl;
			    int Tu4074;
			    Ta4404[Ti4405].d = Td4409;
			    Value* Ta4410;

			    int Ti4411;
			    Ti4411 = 2;
			    Value* Ta4412;

			    int Ti4413;
			    Ti4413 = 2;
			    double Td4414;
			    Td4414 = Ta4412[Ti4413].d;
			    double Td4415;
			    Td4415 = Td4414 + ihl;
			    Ta4410[Ti4411].d = Td4415;
			}
		    }
		}
		else{
		    int Ti4416;
		    Ti4416 = 2;
		    if(m_surface == Ti4416){
			Value* Ta4417;

			int Ti4418;
			Ti4418 = 0;
			Value* Ta4419;

			int Ti4420;
			Ti4420 = 0;
			double Td4421;
			Td4421 = Ta4419[Ti4420].d;
			int Tu4078;
			Ta4417[Ti4418].d = Td4421;
			Value* Ta4422;

			int Ti4423;
			Ti4423 = 1;
			Value* Ta4424;

			int Ti4425;
			Ti4425 = 1;
			double Td4426;
			Td4426 = Ta4424[Ti4425].d;
			int Tu4077;
			Ta4422[Ti4423].d = Td4426;
			Value* Ta4427;

			int Ti4428;
			Ti4428 = 2;
			Value* Ta4429;

			int Ti4430;
			Ti4430 = 2;
			double Td4431;
			Td4431 = Ta4429[Ti4430].d;
			int Tu4076;
			Ta4427[Ti4428].d = Td4431;
			double Td4432;
			Td4432 = 1.000000;
			double Td4433;
			Td4433 = o_diffuse_fun(cobj, NULL);
			double Td4434;
			Td4434 = Td4432 - Td4433;
			double energy2;
			energy2 =  energy * Td4434;
			int Ti4435;
			Ti4435 = 1;
			int Ti4436;
			Ti4436 = nref + Ti4435;
			result = raytracing_fun(Ti4436, energy2, NULL);
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

int write_rgb_fun(int Tu4084, Value *env){
    int result;
    Value* Ta4311;

    int Ti4312;
    Ti4312 = 0;
    double Td4313;
    Td4313 = Ta4311[Ti4312].d;
    int red;
    red = min_caml_int_of_float_fun(Td4313, NULL);
    int Ti4314;
    Ti4314 = 255;
    int red;
    if(red <= Ti4314){
	red = red;
    }
    else{
	red = 255;
    }
    int Tu4086;
    Tu4086 = min_caml_print_byte_fun(red, NULL);
    Value* Ta4315;

    int Ti4316;
    Ti4316 = 1;
    double Td4317;
    Td4317 = Ta4315[Ti4316].d;
    int green;
    green = min_caml_int_of_float_fun(Td4317, NULL);
    int Ti4318;
    Ti4318 = 255;
    int green;
    if(green <= Ti4318){
	green = green;
    }
    else{
	green = 255;
    }
    int Tu4085;
    Tu4085 = min_caml_print_byte_fun(green, NULL);
    Value* Ta4319;

    int Ti4320;
    Ti4320 = 2;
    double Td4321;
    Td4321 = Ta4319[Ti4320].d;
    int blue;
    blue = min_caml_int_of_float_fun(Td4321, NULL);
    int Ti4322;
    Ti4322 = 255;
    int blue;
    if(blue <= Ti4322){
	blue = blue;
    }
    else{
	blue = 255;
    }
    result = min_caml_print_byte_fun(blue, NULL);
    return result;
}

int write_ppm_header_fun(int Tu4087, Value *env){
    int result;
    int Ti4296;
    Ti4296 = 80;
    int Tu4095;
    Tu4095 = min_caml_print_byte_fun(Ti4296, NULL);
    int Ti4297;
    Ti4297 = 48;
    int Ti4298;
    Ti4298 = 6;
    int Ti4299;
    Ti4299 = Ti4297 + Ti4298;
    int Tu4094;
    Tu4094 = min_caml_print_byte_fun(Ti4299, NULL);
    int Ti4300;
    Ti4300 = 10;
    int Tu4093;
    Tu4093 = min_caml_print_byte_fun(Ti4300, NULL);
    Value* Ta4301;

    int Ti4302;
    Ti4302 = 0;
    int Ti4303;
    Ti4303 = Ta4301[Ti4302].i;
    int Tu4092;
    printf("%d", Ti4303);
    int Ti4304;
    Ti4304 = 32;
    int Tu4091;
    Tu4091 = min_caml_print_byte_fun(Ti4304, NULL);
    Value* Ta4305;

    int Ti4306;
    Ti4306 = 1;
    int Ti4307;
    Ti4307 = Ta4305[Ti4306].i;
    int Tu4090;
    printf("%d", Ti4307);
    int Ti4308;
    Ti4308 = 10;
    int Tu4089;
    Tu4089 = min_caml_print_byte_fun(Ti4308, NULL);
    int Ti4309;
    Ti4309 = 255;
    int Tu4088;
    printf("%d", Ti4309);
    int Ti4310;
    Ti4310 = 10;
    result = min_caml_print_byte_fun(Ti4310, NULL);
    return result;
}

int scan_point_fun(int scanx, Value *env){
    int result;
    Value* Ta4199;

    int Ti4200;
    Ti4200 = 0;
    int Ti4201;
    Ti4201 = Ta4199[Ti4200].i;
    if(Ti4201 <= scanx){
	result = 1;
    }
    else{
	double Td4202;
	Td4202 = min_caml_float_of_int_fun(scanx, NULL);
	Value* Ta4203;

	int Ti4204;
	Ti4204 = 0;
	double Td4205;
	Td4205 = Ta4203[Ti4204].d;
	double Td4206;
	Td4206 = Td4202 - Td4205;
	Value* Ta4207;

	int Ti4208;
	Ti4208 = 0;
	double Td4209;
	Td4209 = Ta4207[Ti4208].d;
	double sscanx;
	sscanx =  Td4206 * Td4209;
	Value* Ta4210;

	int Ti4211;
	Ti4211 = 0;
	Value* Ta4212;

	int Ti4213;
	Ti4213 = 1;
	double Td4214;
	Td4214 = Ta4212[Ti4213].d;
	double Td4215;
	Td4215 =  sscanx * Td4214;
	Value* Ta4216;

	int Ti4217;
	Ti4217 = 0;
	double Td4218;
	Td4218 = Ta4216[Ti4217].d;
	double Td4219;
	Td4219 = Td4215 + Td4218;
	int Tu4109;
	Ta4210[Ti4211].d = Td4219;
	Value* Ta4220;

	int Ti4221;
	Ti4221 = 1;
	Value* Ta4222;

	int Ti4223;
	Ti4223 = 0;
	double Td4224;
	Td4224 = Ta4222[Ti4223].d;
	Value* Ta4225;

	int Ti4226;
	Ti4226 = 0;
	double Td4227;
	Td4227 = Ta4225[Ti4226].d;
	double Td4228;
	Td4228 =  Td4224 * Td4227;
	Value* Ta4229;

	int Ti4230;
	Ti4230 = 1;
	double Td4231;
	Td4231 = Ta4229[Ti4230].d;
	double Td4232;
	Td4232 = Td4228 - Td4231;
	int Tu4108;
	Ta4220[Ti4221].d = Td4232;
	Value* Ta4233;

	int Ti4234;
	Ti4234 = 2;
	double Td4235;
	Td4235 = -sscanx;
	Value* Ta4236;

	int Ti4237;
	Ti4237 = 1;
	double Td4238;
	Td4238 = Ta4236[Ti4237].d;
	double Td4239;
	Td4239 =  Td4235 * Td4238;
	Value* Ta4240;

	int Ti4241;
	Ti4241 = 2;
	double Td4242;
	Td4242 = Ta4240[Ti4241].d;
	double Td4243;
	Td4243 = Td4239 + Td4242;
	int Tu4107;
	Ta4233[Ti4234].d = Td4243;
	double Td4244;
	Td4244 = fsqr_fun(sscanx, NULL);
	Value* Ta4245;

	int Ti4246;
	Ti4246 = 0;
	double Td4247;
	Td4247 = Ta4245[Ti4246].d;
	double Td4248;
	Td4248 = Td4244 + Td4247;
	double metric;
	metric = min_caml_sqrt_fun(Td4248, NULL);
	Value* Ta4249;

	int Ti4250;
	Ti4250 = 0;
	Value* Ta4251;

	int Ti4252;
	Ti4252 = 0;
	double Td4253;
	Td4253 = Ta4251[Ti4252].d;
	double Td4254;
	Td4254 = Td4253 / metric;
	int Tu4106;
	Ta4249[Ti4250].d = Td4254;
	Value* Ta4255;

	int Ti4256;
	Ti4256 = 1;
	Value* Ta4257;

	int Ti4258;
	Ti4258 = 1;
	double Td4259;
	Td4259 = Ta4257[Ti4258].d;
	double Td4260;
	Td4260 = Td4259 / metric;
	int Tu4105;
	Ta4255[Ti4256].d = Td4260;
	Value* Ta4261;

	int Ti4262;
	Ti4262 = 2;
	Value* Ta4263;

	int Ti4264;
	Ti4264 = 2;
	double Td4265;
	Td4265 = Ta4263[Ti4264].d;
	double Td4266;
	Td4266 = Td4265 / metric;
	int Tu4104;
	Ta4261[Ti4262].d = Td4266;
	Value* Ta4267;

	int Ti4268;
	Ti4268 = 0;
	Value* Ta4269;

	int Ti4270;
	Ti4270 = 0;
	double Td4271;
	Td4271 = Ta4269[Ti4270].d;
	int Tu4103;
	Ta4267[Ti4268].d = Td4271;
	Value* Ta4272;

	int Ti4273;
	Ti4273 = 1;
	Value* Ta4274;

	int Ti4275;
	Ti4275 = 1;
	double Td4276;
	Td4276 = Ta4274[Ti4275].d;
	int Tu4102;
	Ta4272[Ti4273].d = Td4276;
	Value* Ta4277;

	int Ti4278;
	Ti4278 = 2;
	Value* Ta4279;

	int Ti4280;
	Ti4280 = 2;
	double Td4281;
	Td4281 = Ta4279[Ti4280].d;
	int Tu4101;
	Ta4277[Ti4278].d = Td4281;
	Value* Ta4282;

	int Ti4283;
	Ti4283 = 0;
	double Td4284;
	Td4284 = 0.000000;
	int Tu4100;
	Ta4282[Ti4283].d = Td4284;
	Value* Ta4285;

	int Ti4286;
	Ti4286 = 1;
	double Td4287;
	Td4287 = 0.000000;
	int Tu4099;
	Ta4285[Ti4286].d = Td4287;
	Value* Ta4288;

	int Ti4289;
	Ti4289 = 2;
	double Td4290;
	Td4290 = 0.000000;
	int Tu4098;
	Ta4288[Ti4289].d = Td4290;
	int Ti4291;
	Ti4291 = 0;
	double Td4292;
	Td4292 = 1.000000;
	int Tu4097;
	Tu4097 = raytracing_fun(Ti4291, Td4292, NULL);
	int Tu4293;
	Tu4293 = 1;
	int Tu4096;
	Tu4096 = write_rgb_fun(Tu4293, NULL);
	int Ti4294;
	Ti4294 = 1;
	int Ti4295;
	Ti4295 = scanx + Ti4294;
	result = scan_point_fun(Ti4295, NULL);
    }
    return result;
}

int scan_line_fun(int scany, Value *env){
    int result;
    Value* Ta4147;

    int Ti4148;
    Ti4148 = 0;
    int Ti4149;
    Ti4149 = Ta4147[Ti4148].i;
    if(Ti4149 <= scany){
	result = 1;
    }
    else{
	Value* Ta4150;

	int Ti4151;
	Ti4151 = 0;
	Value* Ta4152;

	int Ti4153;
	Ti4153 = 0;
	double Td4154;
	Td4154 = Ta4152[Ti4153].d;
	double Td4155;
	Td4155 = 1.000000;
	double Td4156;
	Td4156 = Td4154 - Td4155;
	double Td4157;
	Td4157 = min_caml_float_of_int_fun(scany, NULL);
	double t;
	t = Td4156 - Td4157;
	Value* Ta4158;

	int Ti4159;
	Ti4159 = 0;
	double Td4160;
	Td4160 = Ta4158[Ti4159].d;
	double Td4161;
	Td4161 =  Td4160 * t;
	int Tu4114;
	Ta4150[Ti4151].d = Td4161;
	Value* Ta4162;

	int Ti4163;
	Ti4163 = 0;
	Value* Ta4164;

	int Ti4165;
	Ti4165 = 0;
	double Td4166;
	Td4166 = Ta4164[Ti4165].d;
	double Td4167;
	Td4167 = fsqr_fun(Td4166, NULL);
	double Td4168;
	Td4168 = 40000.000000;
	double Td4169;
	Td4169 = Td4167 + Td4168;
	int Tu4113;
	Ta4162[Ti4163].d = Td4169;
	Value* Ta4170;

	int Ti4171;
	Ti4171 = 0;
	double Td4172;
	Td4172 = Ta4170[Ti4171].d;
	Value* Ta4173;

	int Ti4174;
	Ti4174 = 0;
	double Td4175;
	Td4175 = Ta4173[Ti4174].d;
	double t1;
	t1 =  Td4172 * Td4175;
	Value* Ta4176;

	int Ti4177;
	Ti4177 = 0;
	Value* Ta4178;

	int Ti4179;
	Ti4179 = 1;
	double Td4180;
	Td4180 = Ta4178[Ti4179].d;
	double Td4181;
	Td4181 =  t1 * Td4180;
	Value* Ta4182;

	int Ti4183;
	Ti4183 = 0;
	double Td4184;
	Td4184 = Ta4182[Ti4183].d;
	double Td4185;
	Td4185 = Td4181 - Td4184;
	int Tu4112;
	Ta4176[Ti4177].d = Td4185;
	Value* Ta4186;

	int Ti4187;
	Ti4187 = 2;
	Value* Ta4188;

	int Ti4189;
	Ti4189 = 1;
	double Td4190;
	Td4190 = Ta4188[Ti4189].d;
	double Td4191;
	Td4191 =  t1 * Td4190;
	Value* Ta4192;

	int Ti4193;
	Ti4193 = 2;
	double Td4194;
	Td4194 = Ta4192[Ti4193].d;
	double Td4195;
	Td4195 = Td4191 - Td4194;
	int Tu4111;
	Ta4186[Ti4187].d = Td4195;
	int Ti4196;
	Ti4196 = 0;
	int Tu4110;
	Tu4110 = scan_point_fun(Ti4196, NULL);
	int Ti4197;
	Ti4197 = 1;
	int Ti4198;
	Ti4198 = scany + Ti4197;
	result = scan_line_fun(Ti4198, NULL);
    }
    return result;
}

int scan_start_fun(int Tu4115, Value *env){
    int result;
    int Tu4134;
    Tu4134 = 1;
    int Tu4118;
    Tu4118 = write_ppm_header_fun(Tu4134, NULL);
    Value* Ta4135;

    int Ti4136;
    Ti4136 = 0;
    int Ti4137;
    Ti4137 = Ta4135[Ti4136].i;
    double sizex;
    sizex = min_caml_float_of_int_fun(Ti4137, NULL);
    Value* Ta4138;

    int Ti4139;
    Ti4139 = 0;
    double Td4140;
    Td4140 = 128.000000;
    double Td4141;
    Td4141 = Td4140 / sizex;
    int Tu4117;
    Ta4138[Ti4139].d = Td4141;
    Value* Ta4142;

    int Ti4143;
    Ti4143 = 0;
    double Td4144;
    Td4144 = 2.000000;
    double Td4145;
    Td4145 = sizex / Td4144;
    int Tu4116;
    Ta4142[Ti4143].d = Td4145;
    int Ti4146;
    Ti4146 = 0;
    result = scan_line_fun(Ti4146, NULL);
    return result;
}

int rt_fun(int size_x, int size_y, bool debug_p, Value *env){
    int result;
    Value* Ta4126;

    int Ti4127;
    Ti4127 = 0;
    int Tu4122;
    Ta4126[Ti4127].i = size_x;
    Value* Ta4128;

    int Ti4129;
    Ti4129 = 1;
    int Tu4121;
    Ta4128[Ti4129].i = size_y;
    Value* Ta4130;

    int Ti4131;
    Ti4131 = 0;
    int Tu4120;
    Ta4130[Ti4131].b = debug_p;
    int Tu4132;
    Tu4132 = 1;
    int Tu4119;
    Tu4119 = read_parameter_fun(Tu4132, NULL);
    int Tu4133;
    Tu4133 = 1;
    result = scan_start_fun(Tu4133, NULL);
    return result;
}

int main(){
    int ans = 1;
    int Ti4123;
    Ti4123 = 768;
    int Ti4124;
    Ti4124 = 768;
    int Ti4125;
    Ti4125 = 0;
    ans = rt_fun(Ti4123, Ti4124, Ti4125, NULL);
    return ans;
}
