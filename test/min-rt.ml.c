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
typedef int fun_int_int_Value(int Tu3, Value *env);
typedef int fun_int_array_bool_Value(Value* v, bool inv, Value *env);
typedef double fun_double_tuple_Value(int* m, Value *env);
typedef bool fun_bool_tuple_Value(int* m, Value *env);
typedef int fun_int_tuple_Value(int* m, Value *env);
typedef double fun_double_double_Value(double x, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x, bool y, Value *env);

bool xor_fun(bool x, bool y, Value *env){
    bool result;
    int Ti1975;
    Ti1975 = 0;
    if(x == Ti1975){
	result = y;
    }
    else{
	int Ti1976;
	Ti1976 = 0;
	if(y == Ti1976){
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
    double Td1974;
    Td1974 = 2.000000;
    result = x / Td1974;
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
    int Ti1973;
    Ti1973 = 0;
    result = m_abc[Ti1973].c;
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
    int Ti1972;
    Ti1972 = 1;
    result = m_abc[Ti1972].c;
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
    int Ti1971;
    Ti1971 = 2;
    result = m_abc[Ti1971].c;
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
    int Ti1970;
    Ti1970 = 0;
    result = m_xyz[Ti1970].c;
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
    int Ti1969;
    Ti1969 = 1;
    result = m_xyz[Ti1969].c;
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
    int Ti1968;
    Ti1968 = 2;
    result = m_xyz[Ti1968].c;
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
    int Ti1967;
    Ti1967 = 0;
    result = m_surfparams[Ti1967].c;
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
    int Ti1966;
    Ti1966 = 1;
    result = m_surfparams[Ti1966].c;
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
    int Ti1965;
    Ti1965 = 0;
    result = m_color[Ti1965].c;
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
    int Ti1964;
    Ti1964 = 1;
    result = m_color[Ti1964].c;
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
    int Ti1963;
    Ti1963 = 2;
    result = m_color[Ti1963].c;
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
    int Ti1962;
    Ti1962 = 0;
    result = m_rot123[Ti1962].c;
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
    int Ti1961;
    Ti1961 = 1;
    result = m_rot123[Ti1961].c;
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
    int Ti1960;
    Ti1960 = 2;
    result = m_rot123[Ti1960].c;
    return result;
}

int normalize_vector_fun(Value* v, bool inv, Value *env){
    int result;
    int Ti1936;
    Ti1936 = 0;
    double Td1937;
    Td1937 = v[Ti1936].d;
    double Td1938;
    Td1938 = fsqr_fun(Td1937, NULL);
    int Ti1939;
    Ti1939 = 1;
    double Td1940;
    Td1940 = v[Ti1939].d;
    double Td1941;
    Td1941 = fsqr_fun(Td1940, NULL);
    double Td1942;
    Td1942 = Td1938 + Td1941;
    int Ti1943;
    Ti1943 = 2;
    double Td1944;
    Td1944 = v[Ti1943].d;
    double Td1945;
    Td1945 = fsqr_fun(Td1944, NULL);
    double Td1946;
    Td1946 = Td1942 + Td1945;
    double n0;
    n0 = min_caml_sqrt_fun(Td1946, NULL);
    int Ti1947;
    Ti1947 = 0;
    double n;
    if(inv == Ti1947){
	n = n0;
    }
    else{
	n = -n0;
    }
    int Ti1948;
    Ti1948 = 0;
    int Ti1949;
    Ti1949 = 0;
    double Td1950;
    Td1950 = v[Ti1949].d;
    double Td1951;
    Td1951 = Td1950 / n;
    int Tu2;
    v[Ti1948].d = Td1951;
    int Ti1952;
    Ti1952 = 1;
    int Ti1953;
    Ti1953 = 1;
    double Td1954;
    Td1954 = v[Ti1953].d;
    double Td1955;
    Td1955 = Td1954 / n;
    int Tu1;
    v[Ti1952].d = Td1955;
    int Ti1956;
    Ti1956 = 2;
    int Ti1957;
    Ti1957 = 2;
    double Td1958;
    Td1958 = v[Ti1957].d;
    double Td1959;
    Td1959 = Td1958 / n;
    v[Ti1956].d = Td1959;
    return result;
}

double sgn_fun(double x, Value *env){
    double result;
    double Td1935;
    Td1935 = 0.000000;
    if(x <= Td1935){
	result = -1.000000;
    }
    else{
	result = 1.000000;
    }
    return result;
}

double rad_fun(double x, Value *env){
    double result;
    double Td1934;
    Td1934 = 0.017453;
    result =  x * Td1934;
    return result;
}

int read_environ_fun(int Tu3, Value *env){
    int result;
    Value* Ta1831;

    int Ti1832;
    Ti1832 = 0;
    int Tu1833;
    Tu1833 = 1;
    double Td1834;
    Td1834 = min_caml_read_float_fun(Tu1833, NULL);
    int Tu19;
    Ta1831[Ti1832].d = Td1834;
    Value* Ta1835;

    int Ti1836;
    Ti1836 = 1;
    int Tu1837;
    Tu1837 = 1;
    double Td1838;
    Td1838 = min_caml_read_float_fun(Tu1837, NULL);
    int Tu18;
    Ta1835[Ti1836].d = Td1838;
    Value* Ta1839;

    int Ti1840;
    Ti1840 = 2;
    int Tu1841;
    Tu1841 = 1;
    double Td1842;
    Td1842 = min_caml_read_float_fun(Tu1841, NULL);
    int Tu17;
    Ta1839[Ti1840].d = Td1842;
    int Tu1843;
    Tu1843 = 1;
    double Td1844;
    Td1844 = min_caml_read_float_fun(Tu1843, NULL);
    double v1;
    v1 = rad_fun(Td1844, NULL);
    Value* Ta1845;

    int Ti1846;
    Ti1846 = 0;
    double Td1847;
    Td1847 = min_caml_cos_fun(v1, NULL);
    int Tu16;
    Ta1845[Ti1846].d = Td1847;
    Value* Ta1848;

    int Ti1849;
    Ti1849 = 0;
    double Td1850;
    Td1850 = min_caml_sin_fun(v1, NULL);
    int Tu15;
    Ta1848[Ti1849].d = Td1850;
    int Tu1851;
    Tu1851 = 1;
    double Td1852;
    Td1852 = min_caml_read_float_fun(Tu1851, NULL);
    double v2;
    v2 = rad_fun(Td1852, NULL);
    Value* Ta1853;

    int Ti1854;
    Ti1854 = 1;
    double Td1855;
    Td1855 = min_caml_cos_fun(v2, NULL);
    int Tu14;
    Ta1853[Ti1854].d = Td1855;
    Value* Ta1856;

    int Ti1857;
    Ti1857 = 1;
    double Td1858;
    Td1858 = min_caml_sin_fun(v2, NULL);
    int Tu13;
    Ta1856[Ti1857].d = Td1858;
    int Tu1859;
    Tu1859 = 1;
    double nl;
    nl = min_caml_read_float_fun(Tu1859, NULL);
    int Tu1860;
    Tu1860 = 1;
    double Td1861;
    Td1861 = min_caml_read_float_fun(Tu1860, NULL);
    double l1;
    l1 = rad_fun(Td1861, NULL);
    double sl1;
    sl1 = min_caml_sin_fun(l1, NULL);
    Value* Ta1862;

    int Ti1863;
    Ti1863 = 1;
    double Td1864;
    Td1864 = -sl1;
    int Tu12;
    Ta1862[Ti1863].d = Td1864;
    int Tu1865;
    Tu1865 = 1;
    double Td1866;
    Td1866 = min_caml_read_float_fun(Tu1865, NULL);
    double l2;
    l2 = rad_fun(Td1866, NULL);
    double cl1;
    cl1 = min_caml_cos_fun(l1, NULL);
    double sl2;
    sl2 = min_caml_sin_fun(l2, NULL);
    Value* Ta1867;

    int Ti1868;
    Ti1868 = 0;
    double Td1869;
    Td1869 =  cl1 * sl2;
    int Tu11;
    Ta1867[Ti1868].d = Td1869;
    double cl2;
    cl2 = min_caml_cos_fun(l2, NULL);
    Value* Ta1870;

    int Ti1871;
    Ti1871 = 2;
    double Td1872;
    Td1872 =  cl1 * cl2;
    int Tu10;
    Ta1870[Ti1871].d = Td1872;
    Value* Ta1873;

    int Ti1874;
    Ti1874 = 0;
    int Tu1875;
    Tu1875 = 1;
    double Td1876;
    Td1876 = min_caml_read_float_fun(Tu1875, NULL);
    int Tu9;
    Ta1873[Ti1874].d = Td1876;
    Value* Ta1877;

    int Ti1878;
    Ti1878 = 0;
    Value* Ta1879;

    int Ti1880;
    Ti1880 = 0;
    double Td1881;
    Td1881 = Ta1879[Ti1880].d;
    Value* Ta1882;

    int Ti1883;
    Ti1883 = 1;
    double Td1884;
    Td1884 = Ta1882[Ti1883].d;
    double Td1885;
    Td1885 =  Td1881 * Td1884;
    double Td1886;
    Td1886 = -200.000000;
    double Td1887;
    Td1887 =  Td1885 * Td1886;
    int Tu8;
    Ta1877[Ti1878].d = Td1887;
    Value* Ta1888;

    int Ti1889;
    Ti1889 = 1;
    Value* Ta1890;

    int Ti1891;
    Ti1891 = 0;
    double Td1892;
    Td1892 = Ta1890[Ti1891].d;
    double Td1893;
    Td1893 = -Td1892;
    double Td1894;
    Td1894 = -200.000000;
    double Td1895;
    Td1895 =  Td1893 * Td1894;
    int Tu7;
    Ta1888[Ti1889].d = Td1895;
    Value* Ta1896;

    int Ti1897;
    Ti1897 = 2;
    Value* Ta1898;

    int Ti1899;
    Ti1899 = 0;
    double Td1900;
    Td1900 = Ta1898[Ti1899].d;
    Value* Ta1901;

    int Ti1902;
    Ti1902 = 1;
    double Td1903;
    Td1903 = Ta1901[Ti1902].d;
    double Td1904;
    Td1904 =  Td1900 * Td1903;
    double Td1905;
    Td1905 = -200.000000;
    double Td1906;
    Td1906 =  Td1904 * Td1905;
    int Tu6;
    Ta1896[Ti1897].d = Td1906;
    Value* Ta1907;

    int Ti1908;
    Ti1908 = 0;
    Value* Ta1909;

    int Ti1910;
    Ti1910 = 0;
    double Td1911;
    Td1911 = Ta1909[Ti1910].d;
    Value* Ta1912;

    int Ti1913;
    Ti1913 = 0;
    double Td1914;
    Td1914 = Ta1912[Ti1913].d;
    double Td1915;
    Td1915 = Td1911 + Td1914;
    int Tu5;
    Ta1907[Ti1908].d = Td1915;
    Value* Ta1916;

    int Ti1917;
    Ti1917 = 1;
    Value* Ta1918;

    int Ti1919;
    Ti1919 = 1;
    double Td1920;
    Td1920 = Ta1918[Ti1919].d;
    Value* Ta1921;

    int Ti1922;
    Ti1922 = 1;
    double Td1923;
    Td1923 = Ta1921[Ti1922].d;
    double Td1924;
    Td1924 = Td1920 + Td1923;
    int Tu4;
    Ta1916[Ti1917].d = Td1924;
    Value* Ta1925;

    int Ti1926;
    Ti1926 = 2;
    Value* Ta1927;

    int Ti1928;
    Ti1928 = 2;
    double Td1929;
    Td1929 = Ta1927[Ti1928].d;
    Value* Ta1930;

    int Ti1931;
    Ti1931 = 2;
    double Td1932;
    Td1932 = Ta1930[Ti1931].d;
    double Td1933;
    Td1933 = Td1929 + Td1932;
    Ta1925[Ti1926].d = Td1933;
    return result;
}

bool read_nth_object_fun(int n, Value *env){
    bool result;
    int Tu1441;
    Tu1441 = 1;
    int texture;
    texture = min_caml_read_int_fun(Tu1441, NULL);
    int Ti1442;
    Ti1442 = 1;
    int Ti1443;
    Ti1443 = -Ti1442;
    if(texture == Ti1443){
	result = 0;
    }
    else{
	int Tu1444;
	Tu1444 = 1;
	int form;
	form = min_caml_read_int_fun(Tu1444, NULL);
	int Tu1445;
	Tu1445 = 1;
	int refltype;
	refltype = min_caml_read_int_fun(Tu1445, NULL);
	int Tu1446;
	Tu1446 = 1;
	int isrot_p;
	isrot_p = min_caml_read_int_fun(Tu1446, NULL);
	int Ti1447;
	Ti1447 = 3;
	double Td1448;
	Td1448 = 0.000000;
	Value* abc;
	make_double_array(&abc, Ti1447, Td1448);
	int Ti1449;
	Ti1449 = 0;
	int Tu1450;
	Tu1450 = 1;
	double Td1451;
	Td1451 = min_caml_read_float_fun(Tu1450, NULL);
	int Tu58;
	abc[Ti1449].d = Td1451;
	int Ti1452;
	Ti1452 = 1;
	int Tu1453;
	Tu1453 = 1;
	double Td1454;
	Td1454 = min_caml_read_float_fun(Tu1453, NULL);
	int Tu57;
	abc[Ti1452].d = Td1454;
	int Ti1455;
	Ti1455 = 2;
	int Tu1456;
	Tu1456 = 1;
	double Td1457;
	Td1457 = min_caml_read_float_fun(Tu1456, NULL);
	int Tu56;
	abc[Ti1455].d = Td1457;
	int Ti1458;
	Ti1458 = 3;
	double Td1459;
	Td1459 = 0.000000;
	Value* xyz;
	make_double_array(&xyz, Ti1458, Td1459);
	int Ti1460;
	Ti1460 = 0;
	int Tu1461;
	Tu1461 = 1;
	double Td1462;
	Td1462 = min_caml_read_float_fun(Tu1461, NULL);
	int Tu55;
	xyz[Ti1460].d = Td1462;
	int Ti1463;
	Ti1463 = 1;
	int Tu1464;
	Tu1464 = 1;
	double Td1465;
	Td1465 = min_caml_read_float_fun(Tu1464, NULL);
	int Tu54;
	xyz[Ti1463].d = Td1465;
	int Ti1466;
	Ti1466 = 2;
	int Tu1467;
	Tu1467 = 1;
	double Td1468;
	Td1468 = min_caml_read_float_fun(Tu1467, NULL);
	int Tu53;
	xyz[Ti1466].d = Td1468;
	double Td1469;
	Td1469 = 0.000000;
	int Tu1470;
	Tu1470 = 1;
	double Td1471;
	Td1471 = min_caml_read_float_fun(Tu1470, NULL);
	bool m_invert;
	if(Td1469 <= Td1471){
	    m_invert = 0;
	}
	else{
	    m_invert = 1;
	}
	int Ti1472;
	Ti1472 = 2;
	double Td1473;
	Td1473 = 0.000000;
	Value* reflparam;
	make_double_array(&reflparam, Ti1472, Td1473);
	int Ti1474;
	Ti1474 = 0;
	int Tu1475;
	Tu1475 = 1;
	double Td1476;
	Td1476 = min_caml_read_float_fun(Tu1475, NULL);
	int Tu52;
	reflparam[Ti1474].d = Td1476;
	int Ti1477;
	Ti1477 = 1;
	int Tu1478;
	Tu1478 = 1;
	double Td1479;
	Td1479 = min_caml_read_float_fun(Tu1478, NULL);
	int Tu51;
	reflparam[Ti1477].d = Td1479;
	int Ti1480;
	Ti1480 = 3;
	double Td1481;
	Td1481 = 0.000000;
	Value* color;
	make_double_array(&color, Ti1480, Td1481);
	int Ti1482;
	Ti1482 = 0;
	int Tu1483;
	Tu1483 = 1;
	double Td1484;
	Td1484 = min_caml_read_float_fun(Tu1483, NULL);
	int Tu50;
	color[Ti1482].d = Td1484;
	int Ti1485;
	Ti1485 = 1;
	int Tu1486;
	Tu1486 = 1;
	double Td1487;
	Td1487 = min_caml_read_float_fun(Tu1486, NULL);
	int Tu49;
	color[Ti1485].d = Td1487;
	int Ti1488;
	Ti1488 = 2;
	int Tu1489;
	Tu1489 = 1;
	double Td1490;
	Td1490 = min_caml_read_float_fun(Tu1489, NULL);
	int Tu48;
	color[Ti1488].d = Td1490;
	int Ti1491;
	Ti1491 = 3;
	double Td1492;
	Td1492 = 0.000000;
	Value* rotation;
	make_double_array(&rotation, Ti1491, Td1492);
	int Ti1493;
	Ti1493 = 0;
	int Tu47;
	if(isrot_p == Ti1493){
	    Tu47 = 1;
	}
	else{
	    int Ti1494;
	    Ti1494 = 0;
	    int Tu1495;
	    Tu1495 = 1;
	    double Td1496;
	    Td1496 = min_caml_read_float_fun(Tu1495, NULL);
	    double Td1497;
	    Td1497 = rad_fun(Td1496, NULL);
	    int Tu21;
	    rotation[Ti1494].d = Td1497;
	    int Ti1498;
	    Ti1498 = 1;
	    int Tu1499;
	    Tu1499 = 1;
	    double Td1500;
	    Td1500 = min_caml_read_float_fun(Tu1499, NULL);
	    double Td1501;
	    Td1501 = rad_fun(Td1500, NULL);
	    int Tu20;
	    rotation[Ti1498].d = Td1501;
	    int Ti1502;
	    Ti1502 = 2;
	    int Tu1503;
	    Tu1503 = 1;
	    double Td1504;
	    Td1504 = min_caml_read_float_fun(Tu1503, NULL);
	    double Td1505;
	    Td1505 = rad_fun(Td1504, NULL);
	    rotation[Ti1502].d = Td1505;
	}
	int Ti1506;
	Ti1506 = 2;
	bool m_invert2;
	if(form == Ti1506){
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

	Value* Ta1507;

	int Tu46;
	Ta1507[n].ip = obj;
	int Ti1508;
	Ti1508 = 3;
	int Tu45;
	if(form == Ti1508){
	    int Ti1509;
	    Ti1509 = 0;
	    double a;
	    a = abc[Ti1509].d;
	    int Ti1510;
	    Ti1510 = 0;
	    double Td1511;
	    Td1511 = 0.000000;
	    double Td1514;
	    if(Td1511 == a){
		Td1514 = 0.000000;
	    }
	    else{
		double Td1512;
		Td1512 = sgn_fun(a, NULL);
		double Td1513;
		Td1513 = fsqr_fun(a, NULL);
		Td1514 = Td1512 / Td1513;
	    }
	    int Tu23;
	    abc[Ti1510].d = Td1514;
	    int Ti1515;
	    Ti1515 = 1;
	    double b;
	    b = abc[Ti1515].d;
	    int Ti1516;
	    Ti1516 = 1;
	    double Td1517;
	    Td1517 = 0.000000;
	    double Td1520;
	    if(Td1517 == b){
		Td1520 = 0.000000;
	    }
	    else{
		double Td1518;
		Td1518 = sgn_fun(b, NULL);
		double Td1519;
		Td1519 = fsqr_fun(b, NULL);
		Td1520 = Td1518 / Td1519;
	    }
	    int Tu22;
	    abc[Ti1516].d = Td1520;
	    int Ti1521;
	    Ti1521 = 2;
	    double c;
	    c = abc[Ti1521].d;
	    int Ti1522;
	    Ti1522 = 2;
	    double Td1523;
	    Td1523 = 0.000000;
	    double Td1526;
	    if(Td1523 == c){
		Td1526 = 0.000000;
	    }
	    else{
		double Td1524;
		Td1524 = sgn_fun(c, NULL);
		double Td1525;
		Td1525 = fsqr_fun(c, NULL);
		Td1526 = Td1524 / Td1525;
	    }
	    abc[Ti1522].d = Td1526;
	}
	else{
	    int Ti1527;
	    Ti1527 = 2;
	    if(form == Ti1527){
		int Ti1528;
		Ti1528 = 0;
		int Ti1529;
		if(m_invert == Ti1528){
		    Ti1529 = 1;
		}
		else{
		    Ti1529 = 0;
		}
		Tu45 = normalize_vector_fun(abc, Ti1529, NULL);
	    }
	    else{
		Tu45 = 1;
	    }
	}
	int Ti1530;
	Ti1530 = 0;
	int Tu44;
	if(isrot_p == Ti1530){
	    Tu44 = 1;
	}
	else{
	    Value* Ta1531;

	    int Ti1532;
	    Ti1532 = 10;
	    int Ti1533;
	    Ti1533 = 0;
	    double Td1534;
	    Td1534 = rotation[Ti1533].d;
	    double Td1535;
	    Td1535 = min_caml_cos_fun(Td1534, NULL);
	    int Tu43;
	    Ta1531[Ti1532].d = Td1535;
	    Value* Ta1536;

	    int Ti1537;
	    Ti1537 = 11;
	    int Ti1538;
	    Ti1538 = 0;
	    double Td1539;
	    Td1539 = rotation[Ti1538].d;
	    double Td1540;
	    Td1540 = min_caml_sin_fun(Td1539, NULL);
	    int Tu42;
	    Ta1536[Ti1537].d = Td1540;
	    Value* Ta1541;

	    int Ti1542;
	    Ti1542 = 12;
	    int Ti1543;
	    Ti1543 = 1;
	    double Td1544;
	    Td1544 = rotation[Ti1543].d;
	    double Td1545;
	    Td1545 = min_caml_cos_fun(Td1544, NULL);
	    int Tu41;
	    Ta1541[Ti1542].d = Td1545;
	    Value* Ta1546;

	    int Ti1547;
	    Ti1547 = 13;
	    int Ti1548;
	    Ti1548 = 1;
	    double Td1549;
	    Td1549 = rotation[Ti1548].d;
	    double Td1550;
	    Td1550 = min_caml_sin_fun(Td1549, NULL);
	    int Tu40;
	    Ta1546[Ti1547].d = Td1550;
	    Value* Ta1551;

	    int Ti1552;
	    Ti1552 = 14;
	    int Ti1553;
	    Ti1553 = 2;
	    double Td1554;
	    Td1554 = rotation[Ti1553].d;
	    double Td1555;
	    Td1555 = min_caml_cos_fun(Td1554, NULL);
	    int Tu39;
	    Ta1551[Ti1552].d = Td1555;
	    Value* Ta1556;

	    int Ti1557;
	    Ti1557 = 15;
	    int Ti1558;
	    Ti1558 = 2;
	    double Td1559;
	    Td1559 = rotation[Ti1558].d;
	    double Td1560;
	    Td1560 = min_caml_sin_fun(Td1559, NULL);
	    int Tu38;
	    Ta1556[Ti1557].d = Td1560;
	    Value* Ta1561;

	    int Ti1562;
	    Ti1562 = 0;
	    Value* Ta1563;

	    int Ti1564;
	    Ti1564 = 12;
	    double Td1565;
	    Td1565 = Ta1563[Ti1564].d;
	    Value* Ta1566;

	    int Ti1567;
	    Ti1567 = 14;
	    double Td1568;
	    Td1568 = Ta1566[Ti1567].d;
	    double Td1569;
	    Td1569 =  Td1565 * Td1568;
	    int Tu37;
	    Ta1561[Ti1562].d = Td1569;
	    Value* Ta1570;

	    int Ti1571;
	    Ti1571 = 1;
	    Value* Ta1572;

	    int Ti1573;
	    Ti1573 = 11;
	    double Td1574;
	    Td1574 = Ta1572[Ti1573].d;
	    Value* Ta1575;

	    int Ti1576;
	    Ti1576 = 13;
	    double Td1577;
	    Td1577 = Ta1575[Ti1576].d;
	    double Td1578;
	    Td1578 =  Td1574 * Td1577;
	    Value* Ta1579;

	    int Ti1580;
	    Ti1580 = 14;
	    double Td1581;
	    Td1581 = Ta1579[Ti1580].d;
	    double Td1582;
	    Td1582 =  Td1578 * Td1581;
	    Value* Ta1583;

	    int Ti1584;
	    Ti1584 = 10;
	    double Td1585;
	    Td1585 = Ta1583[Ti1584].d;
	    Value* Ta1586;

	    int Ti1587;
	    Ti1587 = 15;
	    double Td1588;
	    Td1588 = Ta1586[Ti1587].d;
	    double Td1589;
	    Td1589 =  Td1585 * Td1588;
	    double Td1590;
	    Td1590 = Td1582 - Td1589;
	    int Tu36;
	    Ta1570[Ti1571].d = Td1590;
	    Value* Ta1591;

	    int Ti1592;
	    Ti1592 = 2;
	    Value* Ta1593;

	    int Ti1594;
	    Ti1594 = 10;
	    double Td1595;
	    Td1595 = Ta1593[Ti1594].d;
	    Value* Ta1596;

	    int Ti1597;
	    Ti1597 = 13;
	    double Td1598;
	    Td1598 = Ta1596[Ti1597].d;
	    double Td1599;
	    Td1599 =  Td1595 * Td1598;
	    Value* Ta1600;

	    int Ti1601;
	    Ti1601 = 14;
	    double Td1602;
	    Td1602 = Ta1600[Ti1601].d;
	    double Td1603;
	    Td1603 =  Td1599 * Td1602;
	    Value* Ta1604;

	    int Ti1605;
	    Ti1605 = 11;
	    double Td1606;
	    Td1606 = Ta1604[Ti1605].d;
	    Value* Ta1607;

	    int Ti1608;
	    Ti1608 = 15;
	    double Td1609;
	    Td1609 = Ta1607[Ti1608].d;
	    double Td1610;
	    Td1610 =  Td1606 * Td1609;
	    double Td1611;
	    Td1611 = Td1603 + Td1610;
	    int Tu35;
	    Ta1591[Ti1592].d = Td1611;
	    Value* Ta1612;

	    int Ti1613;
	    Ti1613 = 3;
	    Value* Ta1614;

	    int Ti1615;
	    Ti1615 = 12;
	    double Td1616;
	    Td1616 = Ta1614[Ti1615].d;
	    Value* Ta1617;

	    int Ti1618;
	    Ti1618 = 15;
	    double Td1619;
	    Td1619 = Ta1617[Ti1618].d;
	    double Td1620;
	    Td1620 =  Td1616 * Td1619;
	    int Tu34;
	    Ta1612[Ti1613].d = Td1620;
	    Value* Ta1621;

	    int Ti1622;
	    Ti1622 = 4;
	    Value* Ta1623;

	    int Ti1624;
	    Ti1624 = 11;
	    double Td1625;
	    Td1625 = Ta1623[Ti1624].d;
	    Value* Ta1626;

	    int Ti1627;
	    Ti1627 = 13;
	    double Td1628;
	    Td1628 = Ta1626[Ti1627].d;
	    double Td1629;
	    Td1629 =  Td1625 * Td1628;
	    Value* Ta1630;

	    int Ti1631;
	    Ti1631 = 15;
	    double Td1632;
	    Td1632 = Ta1630[Ti1631].d;
	    double Td1633;
	    Td1633 =  Td1629 * Td1632;
	    Value* Ta1634;

	    int Ti1635;
	    Ti1635 = 10;
	    double Td1636;
	    Td1636 = Ta1634[Ti1635].d;
	    Value* Ta1637;

	    int Ti1638;
	    Ti1638 = 14;
	    double Td1639;
	    Td1639 = Ta1637[Ti1638].d;
	    double Td1640;
	    Td1640 =  Td1636 * Td1639;
	    double Td1641;
	    Td1641 = Td1633 + Td1640;
	    int Tu33;
	    Ta1621[Ti1622].d = Td1641;
	    Value* Ta1642;

	    int Ti1643;
	    Ti1643 = 5;
	    Value* Ta1644;

	    int Ti1645;
	    Ti1645 = 10;
	    double Td1646;
	    Td1646 = Ta1644[Ti1645].d;
	    Value* Ta1647;

	    int Ti1648;
	    Ti1648 = 13;
	    double Td1649;
	    Td1649 = Ta1647[Ti1648].d;
	    double Td1650;
	    Td1650 =  Td1646 * Td1649;
	    Value* Ta1651;

	    int Ti1652;
	    Ti1652 = 15;
	    double Td1653;
	    Td1653 = Ta1651[Ti1652].d;
	    double Td1654;
	    Td1654 =  Td1650 * Td1653;
	    Value* Ta1655;

	    int Ti1656;
	    Ti1656 = 11;
	    double Td1657;
	    Td1657 = Ta1655[Ti1656].d;
	    Value* Ta1658;

	    int Ti1659;
	    Ti1659 = 14;
	    double Td1660;
	    Td1660 = Ta1658[Ti1659].d;
	    double Td1661;
	    Td1661 =  Td1657 * Td1660;
	    double Td1662;
	    Td1662 = Td1654 - Td1661;
	    int Tu32;
	    Ta1642[Ti1643].d = Td1662;
	    Value* Ta1663;

	    int Ti1664;
	    Ti1664 = 6;
	    Value* Ta1665;

	    int Ti1666;
	    Ti1666 = 13;
	    double Td1667;
	    Td1667 = Ta1665[Ti1666].d;
	    double Td1668;
	    Td1668 = -Td1667;
	    int Tu31;
	    Ta1663[Ti1664].d = Td1668;
	    Value* Ta1669;

	    int Ti1670;
	    Ti1670 = 7;
	    Value* Ta1671;

	    int Ti1672;
	    Ti1672 = 11;
	    double Td1673;
	    Td1673 = Ta1671[Ti1672].d;
	    Value* Ta1674;

	    int Ti1675;
	    Ti1675 = 12;
	    double Td1676;
	    Td1676 = Ta1674[Ti1675].d;
	    double Td1677;
	    Td1677 =  Td1673 * Td1676;
	    int Tu30;
	    Ta1669[Ti1670].d = Td1677;
	    Value* Ta1678;

	    int Ti1679;
	    Ti1679 = 8;
	    Value* Ta1680;

	    int Ti1681;
	    Ti1681 = 10;
	    double Td1682;
	    Td1682 = Ta1680[Ti1681].d;
	    Value* Ta1683;

	    int Ti1684;
	    Ti1684 = 12;
	    double Td1685;
	    Td1685 = Ta1683[Ti1684].d;
	    double Td1686;
	    Td1686 =  Td1682 * Td1685;
	    int Tu29;
	    Ta1678[Ti1679].d = Td1686;
	    int Ti1687;
	    Ti1687 = 0;
	    double ao;
	    ao = abc[Ti1687].d;
	    int Ti1688;
	    Ti1688 = 1;
	    double bo;
	    bo = abc[Ti1688].d;
	    int Ti1689;
	    Ti1689 = 2;
	    double co;
	    co = abc[Ti1689].d;
	    int Ti1690;
	    Ti1690 = 0;
	    Value* Ta1691;

	    int Ti1692;
	    Ti1692 = 0;
	    double Td1693;
	    Td1693 = Ta1691[Ti1692].d;
	    double Td1694;
	    Td1694 = fsqr_fun(Td1693, NULL);
	    double Td1695;
	    Td1695 =  ao * Td1694;
	    Value* Ta1696;

	    int Ti1697;
	    Ti1697 = 3;
	    double Td1698;
	    Td1698 = Ta1696[Ti1697].d;
	    double Td1699;
	    Td1699 = fsqr_fun(Td1698, NULL);
	    double Td1700;
	    Td1700 =  bo * Td1699;
	    double Td1701;
	    Td1701 = Td1695 + Td1700;
	    Value* Ta1702;

	    int Ti1703;
	    Ti1703 = 6;
	    double Td1704;
	    Td1704 = Ta1702[Ti1703].d;
	    double Td1705;
	    Td1705 = fsqr_fun(Td1704, NULL);
	    double Td1706;
	    Td1706 =  co * Td1705;
	    double Td1707;
	    Td1707 = Td1701 + Td1706;
	    int Tu28;
	    abc[Ti1690].d = Td1707;
	    int Ti1708;
	    Ti1708 = 1;
	    Value* Ta1709;

	    int Ti1710;
	    Ti1710 = 1;
	    double Td1711;
	    Td1711 = Ta1709[Ti1710].d;
	    double Td1712;
	    Td1712 = fsqr_fun(Td1711, NULL);
	    double Td1713;
	    Td1713 =  ao * Td1712;
	    Value* Ta1714;

	    int Ti1715;
	    Ti1715 = 4;
	    double Td1716;
	    Td1716 = Ta1714[Ti1715].d;
	    double Td1717;
	    Td1717 = fsqr_fun(Td1716, NULL);
	    double Td1718;
	    Td1718 =  bo * Td1717;
	    double Td1719;
	    Td1719 = Td1713 + Td1718;
	    Value* Ta1720;

	    int Ti1721;
	    Ti1721 = 7;
	    double Td1722;
	    Td1722 = Ta1720[Ti1721].d;
	    double Td1723;
	    Td1723 = fsqr_fun(Td1722, NULL);
	    double Td1724;
	    Td1724 =  co * Td1723;
	    double Td1725;
	    Td1725 = Td1719 + Td1724;
	    int Tu27;
	    abc[Ti1708].d = Td1725;
	    int Ti1726;
	    Ti1726 = 2;
	    Value* Ta1727;

	    int Ti1728;
	    Ti1728 = 2;
	    double Td1729;
	    Td1729 = Ta1727[Ti1728].d;
	    double Td1730;
	    Td1730 = fsqr_fun(Td1729, NULL);
	    double Td1731;
	    Td1731 =  ao * Td1730;
	    Value* Ta1732;

	    int Ti1733;
	    Ti1733 = 5;
	    double Td1734;
	    Td1734 = Ta1732[Ti1733].d;
	    double Td1735;
	    Td1735 = fsqr_fun(Td1734, NULL);
	    double Td1736;
	    Td1736 =  bo * Td1735;
	    double Td1737;
	    Td1737 = Td1731 + Td1736;
	    Value* Ta1738;

	    int Ti1739;
	    Ti1739 = 8;
	    double Td1740;
	    Td1740 = Ta1738[Ti1739].d;
	    double Td1741;
	    Td1741 = fsqr_fun(Td1740, NULL);
	    double Td1742;
	    Td1742 =  co * Td1741;
	    double Td1743;
	    Td1743 = Td1737 + Td1742;
	    int Tu26;
	    abc[Ti1726].d = Td1743;
	    int Ti1744;
	    Ti1744 = 0;
	    double Td1745;
	    Td1745 = 2.000000;
	    Value* Ta1746;

	    int Ti1747;
	    Ti1747 = 1;
	    double Td1748;
	    Td1748 = Ta1746[Ti1747].d;
	    double Td1749;
	    Td1749 =  ao * Td1748;
	    Value* Ta1750;

	    int Ti1751;
	    Ti1751 = 2;
	    double Td1752;
	    Td1752 = Ta1750[Ti1751].d;
	    double Td1753;
	    Td1753 =  Td1749 * Td1752;
	    Value* Ta1754;

	    int Ti1755;
	    Ti1755 = 4;
	    double Td1756;
	    Td1756 = Ta1754[Ti1755].d;
	    double Td1757;
	    Td1757 =  bo * Td1756;
	    Value* Ta1758;

	    int Ti1759;
	    Ti1759 = 5;
	    double Td1760;
	    Td1760 = Ta1758[Ti1759].d;
	    double Td1761;
	    Td1761 =  Td1757 * Td1760;
	    double Td1762;
	    Td1762 = Td1753 + Td1761;
	    Value* Ta1763;

	    int Ti1764;
	    Ti1764 = 7;
	    double Td1765;
	    Td1765 = Ta1763[Ti1764].d;
	    double Td1766;
	    Td1766 =  co * Td1765;
	    Value* Ta1767;

	    int Ti1768;
	    Ti1768 = 8;
	    double Td1769;
	    Td1769 = Ta1767[Ti1768].d;
	    double Td1770;
	    Td1770 =  Td1766 * Td1769;
	    double Td1771;
	    Td1771 = Td1762 + Td1770;
	    double Td1772;
	    Td1772 =  Td1745 * Td1771;
	    int Tu25;
	    rotation[Ti1744].d = Td1772;
	    int Ti1773;
	    Ti1773 = 1;
	    double Td1774;
	    Td1774 = 2.000000;
	    Value* Ta1775;

	    int Ti1776;
	    Ti1776 = 0;
	    double Td1777;
	    Td1777 = Ta1775[Ti1776].d;
	    double Td1778;
	    Td1778 =  ao * Td1777;
	    Value* Ta1779;

	    int Ti1780;
	    Ti1780 = 2;
	    double Td1781;
	    Td1781 = Ta1779[Ti1780].d;
	    double Td1782;
	    Td1782 =  Td1778 * Td1781;
	    Value* Ta1783;

	    int Ti1784;
	    Ti1784 = 3;
	    double Td1785;
	    Td1785 = Ta1783[Ti1784].d;
	    double Td1786;
	    Td1786 =  bo * Td1785;
	    Value* Ta1787;

	    int Ti1788;
	    Ti1788 = 5;
	    double Td1789;
	    Td1789 = Ta1787[Ti1788].d;
	    double Td1790;
	    Td1790 =  Td1786 * Td1789;
	    double Td1791;
	    Td1791 = Td1782 + Td1790;
	    Value* Ta1792;

	    int Ti1793;
	    Ti1793 = 6;
	    double Td1794;
	    Td1794 = Ta1792[Ti1793].d;
	    double Td1795;
	    Td1795 =  co * Td1794;
	    Value* Ta1796;

	    int Ti1797;
	    Ti1797 = 8;
	    double Td1798;
	    Td1798 = Ta1796[Ti1797].d;
	    double Td1799;
	    Td1799 =  Td1795 * Td1798;
	    double Td1800;
	    Td1800 = Td1791 + Td1799;
	    double Td1801;
	    Td1801 =  Td1774 * Td1800;
	    int Tu24;
	    rotation[Ti1773].d = Td1801;
	    int Ti1802;
	    Ti1802 = 2;
	    double Td1803;
	    Td1803 = 2.000000;
	    Value* Ta1804;

	    int Ti1805;
	    Ti1805 = 0;
	    double Td1806;
	    Td1806 = Ta1804[Ti1805].d;
	    double Td1807;
	    Td1807 =  ao * Td1806;
	    Value* Ta1808;

	    int Ti1809;
	    Ti1809 = 1;
	    double Td1810;
	    Td1810 = Ta1808[Ti1809].d;
	    double Td1811;
	    Td1811 =  Td1807 * Td1810;
	    Value* Ta1812;

	    int Ti1813;
	    Ti1813 = 3;
	    double Td1814;
	    Td1814 = Ta1812[Ti1813].d;
	    double Td1815;
	    Td1815 =  bo * Td1814;
	    Value* Ta1816;

	    int Ti1817;
	    Ti1817 = 4;
	    double Td1818;
	    Td1818 = Ta1816[Ti1817].d;
	    double Td1819;
	    Td1819 =  Td1815 * Td1818;
	    double Td1820;
	    Td1820 = Td1811 + Td1819;
	    Value* Ta1821;

	    int Ti1822;
	    Ti1822 = 6;
	    double Td1823;
	    Td1823 = Ta1821[Ti1822].d;
	    double Td1824;
	    Td1824 =  co * Td1823;
	    Value* Ta1825;

	    int Ti1826;
	    Ti1826 = 7;
	    double Td1827;
	    Td1827 = Ta1825[Ti1826].d;
	    double Td1828;
	    Td1828 =  Td1824 * Td1827;
	    double Td1829;
	    Td1829 = Td1820 + Td1828;
	    double Td1830;
	    Td1830 =  Td1803 * Td1829;
	    rotation[Ti1802].d = Td1830;
	}
	result = 1;
    }
    return result;
}

int read_object_fun(int n, Value *env){
    int result;
    int Ti1436;
    Ti1436 = 61;
    if(Ti1436 <= n){
	result = 1;
    }
    else{
	bool Tb1437;
	Tb1437 = read_nth_object_fun(n, NULL);
	int Ti1438;
	Ti1438 = 0;
	if(Tb1437 == Ti1438){
	    result = 1;
	}
	else{
	    int Ti1439;
	    Ti1439 = 1;
	    int Ti1440;
	    Ti1440 = n + Ti1439;
	    result = read_object_fun(Ti1440, NULL);
	}
    }
    return result;
}

int read_all_object_fun(int Tu59, Value *env){
    int result;
    int Ti1435;
    Ti1435 = 0;
    result = read_object_fun(Ti1435, NULL);
    return result;
}

Value* read_net_item_fun(int length, Value *env){
    Value* result;
    int Tu1426;
    Tu1426 = 1;
    int item;
    item = min_caml_read_int_fun(Tu1426, NULL);
    int Ti1427;
    Ti1427 = 1;
    int Ti1428;
    Ti1428 = -Ti1427;
    if(item == Ti1428){
	int Ti1429;
	Ti1429 = 1;
	int Ti1430;
	Ti1430 = length + Ti1429;
	int Ti1431;
	Ti1431 = 1;
	int Ti1432;
	Ti1432 = -Ti1431;
	make_int_array(&result, Ti1430, Ti1432);
    }
    else{
	int Ti1433;
	Ti1433 = 1;
	int Ti1434;
	Ti1434 = length + Ti1433;
	Value* v;
	v = read_net_item_fun(Ti1434, NULL);
	int Tu60;
	v[length].i = item;
	result = v;
    }
    return result;
}

Value* read_or_network_fun(int length, Value *env){
    Value* result;
    int Ti1417;
    Ti1417 = 0;
    Value* net;
    net = read_net_item_fun(Ti1417, NULL);
    int Ti1418;
    Ti1418 = 0;
    int Ti1419;
    Ti1419 = net[Ti1418].i;
    int Ti1420;
    Ti1420 = 1;
    int Ti1421;
    Ti1421 = -Ti1420;
    if(Ti1419 == Ti1421){
	int Ti1422;
	Ti1422 = 1;
	int Ti1423;
	Ti1423 = length + Ti1422;
	make_multi_array(&result, Ti1423, net);
    }
    else{
	int Ti1424;
	Ti1424 = 1;
	int Ti1425;
	Ti1425 = length + Ti1424;
	Value* v;
	v = read_or_network_fun(Ti1425, NULL);
	int Tu61;
	v[length].a = net;
	result = v;
    }
    return result;
}

int read_and_network_fun(int n, Value *env){
    int result;
    int Ti1409;
    Ti1409 = 0;
    Value* net;
    net = read_net_item_fun(Ti1409, NULL);
    int Ti1410;
    Ti1410 = 0;
    int Ti1411;
    Ti1411 = net[Ti1410].i;
    int Ti1412;
    Ti1412 = 1;
    int Ti1413;
    Ti1413 = -Ti1412;
    if(Ti1411 == Ti1413){
	result = 1;
    }
    else{
	Value* Ta1414;

	int Tu62;
	Ta1414[n].a = net;
	int Ti1415;
	Ti1415 = 1;
	int Ti1416;
	Ti1416 = n + Ti1415;
	result = read_and_network_fun(Ti1416, NULL);
    }
    return result;
}

int read_parameter_fun(int Tu63, Value *env){
    int result;
    int Tu1402;
    Tu1402 = 1;
    int Tu66;
    Tu66 = read_environ_fun(Tu1402, NULL);
    int Tu1403;
    Tu1403 = 1;
    int Tu65;
    Tu65 = read_all_object_fun(Tu1403, NULL);
    int Ti1404;
    Ti1404 = 0;
    int Tu64;
    Tu64 = read_and_network_fun(Ti1404, NULL);
    Value* Ta1405;

    int Ti1406;
    Ti1406 = 0;
    int Ti1407;
    Ti1407 = 0;
    Value* Ta1408;
    Ta1408 = read_or_network_fun(Ti1407, NULL);
    Ta1405[Ti1406].a = Ta1408;
    return result;
}

int solver_rect_fun(int* m, Value* l, Value *env){
    int result;
    double Td1288;
    Td1288 = 0.000000;
    int Ti1289;
    Ti1289 = 0;
    double Td1290;
    Td1290 = l[Ti1289].d;
    bool answera;
    if(Td1288 == Td1290){
	answera = 0;
    }
    else{
	bool Tb1291;
	Tb1291 = o_isinvert_fun(m, NULL);
	double Td1292;
	Td1292 = 0.000000;
	int Ti1293;
	Ti1293 = 0;
	double Td1294;
	Td1294 = l[Ti1293].d;
	int Ti1295;
	if(Td1292 <= Td1294){
	    Ti1295 = 0;
	}
	else{
	    Ti1295 = 1;
	}
	bool Tb1296;
	Tb1296 = xor_fun(Tb1291, Ti1295, NULL);
	int Ti1297;
	Ti1297 = 0;
	double d;
	if(Tb1296 == Ti1297){
	    double Td1298;
	    Td1298 = o_param_a_fun(m, NULL);
	    d = -Td1298;
	}
	else{
	    d = o_param_a_fun(m, NULL);
	}
	Value* Ta1299;

	int Ti1300;
	Ti1300 = 0;
	double Td1301;
	Td1301 = Ta1299[Ti1300].d;
	double Td1302;
	Td1302 = d - Td1301;
	int Ti1303;
	Ti1303 = 0;
	double Td1304;
	Td1304 = l[Ti1303].d;
	double d2;
	d2 = Td1302 / Td1304;
	double Td1305;
	Td1305 = o_param_b_fun(m, NULL);
	int Ti1306;
	Ti1306 = 1;
	double Td1307;
	Td1307 = l[Ti1306].d;
	double Td1308;
	Td1308 =  d2 * Td1307;
	Value* Ta1309;

	int Ti1310;
	Ti1310 = 1;
	double Td1311;
	Td1311 = Ta1309[Ti1310].d;
	double Td1312;
	Td1312 = Td1308 + Td1311;
	double Td1313;
	Td1313 = min_caml_abs_float_fun(Td1312, NULL);
	if(Td1305 <= Td1313){
	    answera = 0;
	}
	else{
	    double Td1314;
	    Td1314 = o_param_c_fun(m, NULL);
	    int Ti1315;
	    Ti1315 = 2;
	    double Td1316;
	    Td1316 = l[Ti1315].d;
	    double Td1317;
	    Td1317 =  d2 * Td1316;
	    Value* Ta1318;

	    int Ti1319;
	    Ti1319 = 2;
	    double Td1320;
	    Td1320 = Ta1318[Ti1319].d;
	    double Td1321;
	    Td1321 = Td1317 + Td1320;
	    double Td1322;
	    Td1322 = min_caml_abs_float_fun(Td1321, NULL);
	    if(Td1314 <= Td1322){
		answera = 0;
	    }
	    else{
		Value* Ta1323;

		int Ti1324;
		Ti1324 = 0;
		int Tu67;
		Ta1323[Ti1324].d = d2;
		answera = 1;
	    }
	}
    }
    int Ti1325;
    Ti1325 = 0;
    if(answera == Ti1325){
	double Td1326;
	Td1326 = 0.000000;
	int Ti1327;
	Ti1327 = 1;
	double Td1328;
	Td1328 = l[Ti1327].d;
	bool answerb;
	if(Td1326 == Td1328){
	    answerb = 0;
	}
	else{
	    bool Tb1329;
	    Tb1329 = o_isinvert_fun(m, NULL);
	    double Td1330;
	    Td1330 = 0.000000;
	    int Ti1331;
	    Ti1331 = 1;
	    double Td1332;
	    Td1332 = l[Ti1331].d;
	    int Ti1333;
	    if(Td1330 <= Td1332){
		Ti1333 = 0;
	    }
	    else{
		Ti1333 = 1;
	    }
	    bool Tb1334;
	    Tb1334 = xor_fun(Tb1329, Ti1333, NULL);
	    int Ti1335;
	    Ti1335 = 0;
	    double d;
	    if(Tb1334 == Ti1335){
		double Td1336;
		Td1336 = o_param_b_fun(m, NULL);
		d = -Td1336;
	    }
	    else{
		d = o_param_b_fun(m, NULL);
	    }
	    Value* Ta1337;

	    int Ti1338;
	    Ti1338 = 1;
	    double Td1339;
	    Td1339 = Ta1337[Ti1338].d;
	    double Td1340;
	    Td1340 = d - Td1339;
	    int Ti1341;
	    Ti1341 = 1;
	    double Td1342;
	    Td1342 = l[Ti1341].d;
	    double d2;
	    d2 = Td1340 / Td1342;
	    double Td1343;
	    Td1343 = o_param_c_fun(m, NULL);
	    int Ti1344;
	    Ti1344 = 2;
	    double Td1345;
	    Td1345 = l[Ti1344].d;
	    double Td1346;
	    Td1346 =  d2 * Td1345;
	    Value* Ta1347;

	    int Ti1348;
	    Ti1348 = 2;
	    double Td1349;
	    Td1349 = Ta1347[Ti1348].d;
	    double Td1350;
	    Td1350 = Td1346 + Td1349;
	    double Td1351;
	    Td1351 = min_caml_abs_float_fun(Td1350, NULL);
	    if(Td1343 <= Td1351){
		answerb = 0;
	    }
	    else{
		double Td1352;
		Td1352 = o_param_a_fun(m, NULL);
		int Ti1353;
		Ti1353 = 0;
		double Td1354;
		Td1354 = l[Ti1353].d;
		double Td1355;
		Td1355 =  d2 * Td1354;
		Value* Ta1356;

		int Ti1357;
		Ti1357 = 0;
		double Td1358;
		Td1358 = Ta1356[Ti1357].d;
		double Td1359;
		Td1359 = Td1355 + Td1358;
		double Td1360;
		Td1360 = min_caml_abs_float_fun(Td1359, NULL);
		if(Td1352 <= Td1360){
		    answerb = 0;
		}
		else{
		    Value* Ta1361;

		    int Ti1362;
		    Ti1362 = 0;
		    int Tu68;
		    Ta1361[Ti1362].d = d2;
		    answerb = 1;
		}
	    }
	}
	int Ti1363;
	Ti1363 = 0;
	if(answerb == Ti1363){
	    double Td1364;
	    Td1364 = 0.000000;
	    int Ti1365;
	    Ti1365 = 2;
	    double Td1366;
	    Td1366 = l[Ti1365].d;
	    bool answerc;
	    if(Td1364 == Td1366){
		answerc = 0;
	    }
	    else{
		bool Tb1367;
		Tb1367 = o_isinvert_fun(m, NULL);
		double Td1368;
		Td1368 = 0.000000;
		int Ti1369;
		Ti1369 = 2;
		double Td1370;
		Td1370 = l[Ti1369].d;
		int Ti1371;
		if(Td1368 <= Td1370){
		    Ti1371 = 0;
		}
		else{
		    Ti1371 = 1;
		}
		bool Tb1372;
		Tb1372 = xor_fun(Tb1367, Ti1371, NULL);
		int Ti1373;
		Ti1373 = 0;
		double d;
		if(Tb1372 == Ti1373){
		    double Td1374;
		    Td1374 = o_param_c_fun(m, NULL);
		    d = -Td1374;
		}
		else{
		    d = o_param_c_fun(m, NULL);
		}
		Value* Ta1375;

		int Ti1376;
		Ti1376 = 2;
		double Td1377;
		Td1377 = Ta1375[Ti1376].d;
		double Td1378;
		Td1378 = d - Td1377;
		int Ti1379;
		Ti1379 = 2;
		double Td1380;
		Td1380 = l[Ti1379].d;
		double d2;
		d2 = Td1378 / Td1380;
		double Td1381;
		Td1381 = o_param_a_fun(m, NULL);
		int Ti1382;
		Ti1382 = 0;
		double Td1383;
		Td1383 = l[Ti1382].d;
		double Td1384;
		Td1384 =  d2 * Td1383;
		Value* Ta1385;

		int Ti1386;
		Ti1386 = 0;
		double Td1387;
		Td1387 = Ta1385[Ti1386].d;
		double Td1388;
		Td1388 = Td1384 + Td1387;
		double Td1389;
		Td1389 = min_caml_abs_float_fun(Td1388, NULL);
		if(Td1381 <= Td1389){
		    answerc = 0;
		}
		else{
		    double Td1390;
		    Td1390 = o_param_b_fun(m, NULL);
		    int Ti1391;
		    Ti1391 = 1;
		    double Td1392;
		    Td1392 = l[Ti1391].d;
		    double Td1393;
		    Td1393 =  d2 * Td1392;
		    Value* Ta1394;

		    int Ti1395;
		    Ti1395 = 1;
		    double Td1396;
		    Td1396 = Ta1394[Ti1395].d;
		    double Td1397;
		    Td1397 = Td1393 + Td1396;
		    double Td1398;
		    Td1398 = min_caml_abs_float_fun(Td1397, NULL);
		    if(Td1390 <= Td1398){
			answerc = 0;
		    }
		    else{
			Value* Ta1399;

			int Ti1400;
			Ti1400 = 0;
			int Tu69;
			Ta1399[Ti1400].d = d2;
			answerc = 1;
		    }
		}
	    }
	    int Ti1401;
	    Ti1401 = 0;
	    if(answerc == Ti1401){
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
    int Ti1254;
    Ti1254 = 0;
    double Td1255;
    Td1255 = l[Ti1254].d;
    double Td1256;
    Td1256 = o_param_a_fun(m, NULL);
    double Td1257;
    Td1257 =  Td1255 * Td1256;
    int Ti1258;
    Ti1258 = 1;
    double Td1259;
    Td1259 = l[Ti1258].d;
    double Td1260;
    Td1260 = o_param_b_fun(m, NULL);
    double Td1261;
    Td1261 =  Td1259 * Td1260;
    double Td1262;
    Td1262 = Td1257 + Td1261;
    int Ti1263;
    Ti1263 = 2;
    double Td1264;
    Td1264 = l[Ti1263].d;
    double Td1265;
    Td1265 = o_param_c_fun(m, NULL);
    double Td1266;
    Td1266 =  Td1264 * Td1265;
    double q;
    q = Td1262 + Td1266;
    double Td1267;
    Td1267 = 0.000000;
    if(q <= Td1267){
	result = 0;
    }
    else{
	Value* Ta1268;

	int Ti1269;
	Ti1269 = 0;
	double Td1270;
	Td1270 = Ta1268[Ti1269].d;
	double Td1271;
	Td1271 = o_param_a_fun(m, NULL);
	double Td1272;
	Td1272 =  Td1270 * Td1271;
	Value* Ta1273;

	int Ti1274;
	Ti1274 = 1;
	double Td1275;
	Td1275 = Ta1273[Ti1274].d;
	double Td1276;
	Td1276 = o_param_b_fun(m, NULL);
	double Td1277;
	Td1277 =  Td1275 * Td1276;
	double Td1278;
	Td1278 = Td1272 + Td1277;
	Value* Ta1279;

	int Ti1280;
	Ti1280 = 2;
	double Td1281;
	Td1281 = Ta1279[Ti1280].d;
	double Td1282;
	Td1282 = o_param_c_fun(m, NULL);
	double Td1283;
	Td1283 =  Td1281 * Td1282;
	double Td1284;
	Td1284 = Td1278 + Td1283;
	double t;
	t = Td1284 / q;
	Value* Ta1285;

	int Ti1286;
	Ti1286 = 0;
	double Td1287;
	Td1287 = -t;
	int Tu70;
	Ta1285[Ti1286].d = Td1287;
	result = 1;
    }
    return result;
}

double in_prod_sqr_obj_fun(int* m, Value* v, Value *env){
    double result;
    int Ti1238;
    Ti1238 = 0;
    double Td1239;
    Td1239 = v[Ti1238].d;
    double Td1240;
    Td1240 = fsqr_fun(Td1239, NULL);
    double Td1241;
    Td1241 = o_param_a_fun(m, NULL);
    double Td1242;
    Td1242 =  Td1240 * Td1241;
    int Ti1243;
    Ti1243 = 1;
    double Td1244;
    Td1244 = v[Ti1243].d;
    double Td1245;
    Td1245 = fsqr_fun(Td1244, NULL);
    double Td1246;
    Td1246 = o_param_b_fun(m, NULL);
    double Td1247;
    Td1247 =  Td1245 * Td1246;
    double Td1248;
    Td1248 = Td1242 + Td1247;
    int Ti1249;
    Ti1249 = 2;
    double Td1250;
    Td1250 = v[Ti1249].d;
    double Td1251;
    Td1251 = fsqr_fun(Td1250, NULL);
    double Td1252;
    Td1252 = o_param_c_fun(m, NULL);
    double Td1253;
    Td1253 =  Td1251 * Td1252;
    result = Td1248 + Td1253;
    return result;
}

double in_prod_co_objrot_fun(int* m, Value* v, Value *env){
    double result;
    int Ti1216;
    Ti1216 = 1;
    double Td1217;
    Td1217 = v[Ti1216].d;
    int Ti1218;
    Ti1218 = 2;
    double Td1219;
    Td1219 = v[Ti1218].d;
    double Td1220;
    Td1220 =  Td1217 * Td1219;
    double Td1221;
    Td1221 = o_param_r1_fun(m, NULL);
    double Td1222;
    Td1222 =  Td1220 * Td1221;
    int Ti1223;
    Ti1223 = 0;
    double Td1224;
    Td1224 = v[Ti1223].d;
    int Ti1225;
    Ti1225 = 2;
    double Td1226;
    Td1226 = v[Ti1225].d;
    double Td1227;
    Td1227 =  Td1224 * Td1226;
    double Td1228;
    Td1228 = o_param_r2_fun(m, NULL);
    double Td1229;
    Td1229 =  Td1227 * Td1228;
    double Td1230;
    Td1230 = Td1222 + Td1229;
    int Ti1231;
    Ti1231 = 0;
    double Td1232;
    Td1232 = v[Ti1231].d;
    int Ti1233;
    Ti1233 = 1;
    double Td1234;
    Td1234 = v[Ti1233].d;
    double Td1235;
    Td1235 =  Td1232 * Td1234;
    double Td1236;
    Td1236 = o_param_r3_fun(m, NULL);
    double Td1237;
    Td1237 =  Td1235 * Td1236;
    result = Td1230 + Td1237;
    return result;
}

double solver2nd_mul_b_fun(int* m, Value* l, Value *env){
    double result;
    Value* Ta1191;

    int Ti1192;
    Ti1192 = 0;
    double Td1193;
    Td1193 = Ta1191[Ti1192].d;
    int Ti1194;
    Ti1194 = 0;
    double Td1195;
    Td1195 = l[Ti1194].d;
    double Td1196;
    Td1196 =  Td1193 * Td1195;
    double Td1197;
    Td1197 = o_param_a_fun(m, NULL);
    double Td1198;
    Td1198 =  Td1196 * Td1197;
    Value* Ta1199;

    int Ti1200;
    Ti1200 = 1;
    double Td1201;
    Td1201 = Ta1199[Ti1200].d;
    int Ti1202;
    Ti1202 = 1;
    double Td1203;
    Td1203 = l[Ti1202].d;
    double Td1204;
    Td1204 =  Td1201 * Td1203;
    double Td1205;
    Td1205 = o_param_b_fun(m, NULL);
    double Td1206;
    Td1206 =  Td1204 * Td1205;
    double Td1207;
    Td1207 = Td1198 + Td1206;
    Value* Ta1208;

    int Ti1209;
    Ti1209 = 2;
    double Td1210;
    Td1210 = Ta1208[Ti1209].d;
    int Ti1211;
    Ti1211 = 2;
    double Td1212;
    Td1212 = l[Ti1211].d;
    double Td1213;
    Td1213 =  Td1210 * Td1212;
    double Td1214;
    Td1214 = o_param_c_fun(m, NULL);
    double Td1215;
    Td1215 =  Td1213 * Td1214;
    result = Td1207 + Td1215;
    return result;
}

double solver2nd_rot_b_fun(int* m, Value* l, Value *env){
    double result;
    Value* Ta1145;

    int Ti1146;
    Ti1146 = 2;
    double Td1147;
    Td1147 = Ta1145[Ti1146].d;
    int Ti1148;
    Ti1148 = 1;
    double Td1149;
    Td1149 = l[Ti1148].d;
    double Td1150;
    Td1150 =  Td1147 * Td1149;
    Value* Ta1151;

    int Ti1152;
    Ti1152 = 1;
    double Td1153;
    Td1153 = Ta1151[Ti1152].d;
    int Ti1154;
    Ti1154 = 2;
    double Td1155;
    Td1155 = l[Ti1154].d;
    double Td1156;
    Td1156 =  Td1153 * Td1155;
    double Td1157;
    Td1157 = Td1150 + Td1156;
    double Td1158;
    Td1158 = o_param_r1_fun(m, NULL);
    double Td1159;
    Td1159 =  Td1157 * Td1158;
    Value* Ta1160;

    int Ti1161;
    Ti1161 = 0;
    double Td1162;
    Td1162 = Ta1160[Ti1161].d;
    int Ti1163;
    Ti1163 = 2;
    double Td1164;
    Td1164 = l[Ti1163].d;
    double Td1165;
    Td1165 =  Td1162 * Td1164;
    Value* Ta1166;

    int Ti1167;
    Ti1167 = 2;
    double Td1168;
    Td1168 = Ta1166[Ti1167].d;
    int Ti1169;
    Ti1169 = 0;
    double Td1170;
    Td1170 = l[Ti1169].d;
    double Td1171;
    Td1171 =  Td1168 * Td1170;
    double Td1172;
    Td1172 = Td1165 + Td1171;
    double Td1173;
    Td1173 = o_param_r2_fun(m, NULL);
    double Td1174;
    Td1174 =  Td1172 * Td1173;
    double Td1175;
    Td1175 = Td1159 + Td1174;
    Value* Ta1176;

    int Ti1177;
    Ti1177 = 0;
    double Td1178;
    Td1178 = Ta1176[Ti1177].d;
    int Ti1179;
    Ti1179 = 1;
    double Td1180;
    Td1180 = l[Ti1179].d;
    double Td1181;
    Td1181 =  Td1178 * Td1180;
    Value* Ta1182;

    int Ti1183;
    Ti1183 = 1;
    double Td1184;
    Td1184 = Ta1182[Ti1183].d;
    int Ti1185;
    Ti1185 = 0;
    double Td1186;
    Td1186 = l[Ti1185].d;
    double Td1187;
    Td1187 =  Td1184 * Td1186;
    double Td1188;
    Td1188 = Td1181 + Td1187;
    double Td1189;
    Td1189 = o_param_r3_fun(m, NULL);
    double Td1190;
    Td1190 =  Td1188 * Td1189;
    result = Td1175 + Td1190;
    return result;
}

int solver_second_fun(int* m, Value* l, Value *env){
    int result;
    double aa0;
    aa0 = in_prod_sqr_obj_fun(m, l, NULL);
    int Ti1116;
    Ti1116 = o_isrot_fun(m, NULL);
    int Ti1117;
    Ti1117 = 0;
    double aa;
    if(Ti1116 == Ti1117){
	aa = aa0;
    }
    else{
	double Td1118;
	Td1118 = in_prod_co_objrot_fun(m, l, NULL);
	aa = aa0 + Td1118;
    }
    double Td1119;
    Td1119 = 0.000000;
    if(Td1119 == aa){
	result = 0;
    }
    else{
	double Td1120;
	Td1120 = 2.000000;
	double Td1121;
	Td1121 = solver2nd_mul_b_fun(m, l, NULL);
	double bb0;
	bb0 =  Td1120 * Td1121;
	int Ti1122;
	Ti1122 = o_isrot_fun(m, NULL);
	int Ti1123;
	Ti1123 = 0;
	double bb;
	if(Ti1122 == Ti1123){
	    bb = bb0;
	}
	else{
	    double Td1124;
	    Td1124 = solver2nd_rot_b_fun(m, l, NULL);
	    bb = bb0 + Td1124;
	}
	Value* Ta1125;

	double cc0;
	cc0 = in_prod_sqr_obj_fun(m, Ta1125, NULL);
	int Ti1126;
	Ti1126 = o_isrot_fun(m, NULL);
	int Ti1127;
	Ti1127 = 0;
	double cc1;
	if(Ti1126 == Ti1127){
	    cc1 = cc0;
	}
	else{
	    Value* Ta1128;

	    double Td1129;
	    Td1129 = in_prod_co_objrot_fun(m, Ta1128, NULL);
	    cc1 = cc0 + Td1129;
	}
	int Ti1130;
	Ti1130 = o_form_fun(m, NULL);
	int Ti1131;
	Ti1131 = 3;
	double cc;
	if(Ti1130 == Ti1131){
	    double Td1132;
	    Td1132 = 1.000000;
	    cc = cc1 - Td1132;
	}
	else{
	    cc = cc1;
	}
	double Td1133;
	Td1133 = 4.000000;
	double Td1134;
	Td1134 =  Td1133 * aa;
	double d2;
	d2 =  Td1134 * cc;
	double Td1135;
	Td1135 = fsqr_fun(bb, NULL);
	double d;
	d = Td1135 - d2;
	double Td1136;
	Td1136 = 0.000000;
	if(d <= Td1136){
	    result = 0;
	}
	else{
	    double sd;
	    sd = min_caml_sqrt_fun(d, NULL);
	    bool Tb1137;
	    Tb1137 = o_isinvert_fun(m, NULL);
	    int Ti1138;
	    Ti1138 = 0;
	    double t1;
	    if(Tb1137 == Ti1138){
		t1 = -sd;
	    }
	    else{
		t1 = sd;
	    }
	    Value* Ta1139;

	    int Ti1140;
	    Ti1140 = 0;
	    double Td1141;
	    Td1141 = t1 - bb;
	    double Td1142;
	    Td1142 = 2.000000;
	    double Td1143;
	    Td1143 = Td1141 / Td1142;
	    double Td1144;
	    Td1144 = Td1143 / aa;
	    int Tu71;
	    Ta1139[Ti1140].d = Td1144;
	    result = 1;
	}
    }
    return result;
}

int solver_fun(int index, Value* l, Value* p, Value *env){
    int result;
    Value* Ta1095;

    int* m;
    m = Ta1095[index].ip;
    Value* Ta1096;

    int Ti1097;
    Ti1097 = 0;
    int Ti1098;
    Ti1098 = 0;
    double Td1099;
    Td1099 = p[Ti1098].d;
    double Td1100;
    Td1100 = o_param_x_fun(m, NULL);
    double Td1101;
    Td1101 = Td1099 - Td1100;
    int Tu74;
    Ta1096[Ti1097].d = Td1101;
    Value* Ta1102;

    int Ti1103;
    Ti1103 = 1;
    int Ti1104;
    Ti1104 = 1;
    double Td1105;
    Td1105 = p[Ti1104].d;
    double Td1106;
    Td1106 = o_param_y_fun(m, NULL);
    double Td1107;
    Td1107 = Td1105 - Td1106;
    int Tu73;
    Ta1102[Ti1103].d = Td1107;
    Value* Ta1108;

    int Ti1109;
    Ti1109 = 2;
    int Ti1110;
    Ti1110 = 2;
    double Td1111;
    Td1111 = p[Ti1110].d;
    double Td1112;
    Td1112 = o_param_z_fun(m, NULL);
    double Td1113;
    Td1113 = Td1111 - Td1112;
    int Tu72;
    Ta1108[Ti1109].d = Td1113;
    int m_shape;
    m_shape = o_form_fun(m, NULL);
    int Ti1114;
    Ti1114 = 1;
    if(m_shape == Ti1114){
	result = solver_rect_fun(m, l, NULL);
    }
    else{
	int Ti1115;
	Ti1115 = 2;
	if(m_shape == Ti1115){
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
    double Td1076;
    Td1076 = o_param_a_fun(m, NULL);
    Value* Ta1077;

    int Ti1078;
    Ti1078 = 0;
    double Td1079;
    Td1079 = Ta1077[Ti1078].d;
    double Td1080;
    Td1080 = min_caml_abs_float_fun(Td1079, NULL);
    int Ti1091;
    if(Td1076 <= Td1080){
	Ti1091 = 0;
    }
    else{
	double Td1081;
	Td1081 = o_param_b_fun(m, NULL);
	Value* Ta1082;

	int Ti1083;
	Ti1083 = 1;
	double Td1084;
	Td1084 = Ta1082[Ti1083].d;
	double Td1085;
	Td1085 = min_caml_abs_float_fun(Td1084, NULL);
	if(Td1081 <= Td1085){
	    Ti1091 = 0;
	}
	else{
	    double Td1086;
	    Td1086 = o_param_c_fun(m, NULL);
	    Value* Ta1087;

	    int Ti1088;
	    Ti1088 = 2;
	    double Td1089;
	    Td1089 = Ta1087[Ti1088].d;
	    double Td1090;
	    Td1090 = min_caml_abs_float_fun(Td1089, NULL);
	    if(Td1086 <= Td1090){
		Ti1091 = 0;
	    }
	    else{
		Ti1091 = 1;
	    }
	}
    }
    int Ti1092;
    Ti1092 = 0;
    if(Ti1091 == Ti1092){
	bool Tb1093;
	Tb1093 = o_isinvert_fun(m, NULL);
	int Ti1094;
	Ti1094 = 0;
	if(Tb1093 == Ti1094){
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
    double Td1056;
    Td1056 = o_param_a_fun(m, NULL);
    Value* Ta1057;

    int Ti1058;
    Ti1058 = 0;
    double Td1059;
    Td1059 = Ta1057[Ti1058].d;
    double Td1060;
    Td1060 =  Td1056 * Td1059;
    double Td1061;
    Td1061 = o_param_b_fun(m, NULL);
    Value* Ta1062;

    int Ti1063;
    Ti1063 = 1;
    double Td1064;
    Td1064 = Ta1062[Ti1063].d;
    double Td1065;
    Td1065 =  Td1061 * Td1064;
    double Td1066;
    Td1066 = Td1060 + Td1065;
    double Td1067;
    Td1067 = o_param_c_fun(m, NULL);
    Value* Ta1068;

    int Ti1069;
    Ti1069 = 2;
    double Td1070;
    Td1070 = Ta1068[Ti1069].d;
    double Td1071;
    Td1071 =  Td1067 * Td1070;
    double w;
    w = Td1066 + Td1071;
    double Td1072;
    Td1072 = 0.000000;
    bool s;
    if(Td1072 <= w){
	s = 0;
    }
    else{
	s = 1;
    }
    bool Tb1073;
    Tb1073 = o_isinvert_fun(m, NULL);
    bool Tb1074;
    Tb1074 = xor_fun(Tb1073, s, NULL);
    int Ti1075;
    Ti1075 = 0;
    if(Tb1074 == Ti1075){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_second_outside_fun(int* m, Value *env){
    bool result;
    Value* Ta1044;

    double w;
    w = in_prod_sqr_obj_fun(m, Ta1044, NULL);
    int Ti1045;
    Ti1045 = o_form_fun(m, NULL);
    int Ti1046;
    Ti1046 = 3;
    double w2;
    if(Ti1045 == Ti1046){
	double Td1047;
	Td1047 = 1.000000;
	w2 = w - Td1047;
    }
    else{
	w2 = w;
    }
    int Ti1048;
    Ti1048 = o_isrot_fun(m, NULL);
    int Ti1049;
    Ti1049 = 0;
    double w3;
    if(Ti1048 == Ti1049){
	w3 = w2;
    }
    else{
	Value* Ta1050;

	double Td1051;
	Td1051 = in_prod_co_objrot_fun(m, Ta1050, NULL);
	w3 = w2 + Td1051;
    }
    double Td1052;
    Td1052 = 0.000000;
    bool s;
    if(Td1052 <= w3){
	s = 0;
    }
    else{
	s = 1;
    }
    bool Tb1053;
    Tb1053 = o_isinvert_fun(m, NULL);
    bool Tb1054;
    Tb1054 = xor_fun(Tb1053, s, NULL);
    int Ti1055;
    Ti1055 = 0;
    if(Tb1054 == Ti1055){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_outside_fun(int* m, Value *env){
    bool result;
    Value* Ta1021;

    int Ti1022;
    Ti1022 = 0;
    Value* Ta1023;

    int Ti1024;
    Ti1024 = 0;
    double Td1025;
    Td1025 = Ta1023[Ti1024].d;
    double Td1026;
    Td1026 = o_param_x_fun(m, NULL);
    double Td1027;
    Td1027 = Td1025 - Td1026;
    int Tu77;
    Ta1021[Ti1022].d = Td1027;
    Value* Ta1028;

    int Ti1029;
    Ti1029 = 1;
    Value* Ta1030;

    int Ti1031;
    Ti1031 = 1;
    double Td1032;
    Td1032 = Ta1030[Ti1031].d;
    double Td1033;
    Td1033 = o_param_y_fun(m, NULL);
    double Td1034;
    Td1034 = Td1032 - Td1033;
    int Tu76;
    Ta1028[Ti1029].d = Td1034;
    Value* Ta1035;

    int Ti1036;
    Ti1036 = 2;
    Value* Ta1037;

    int Ti1038;
    Ti1038 = 2;
    double Td1039;
    Td1039 = Ta1037[Ti1038].d;
    double Td1040;
    Td1040 = o_param_z_fun(m, NULL);
    double Td1041;
    Td1041 = Td1039 - Td1040;
    int Tu75;
    Ta1035[Ti1036].d = Td1041;
    int m_shape;
    m_shape = o_form_fun(m, NULL);
    int Ti1042;
    Ti1042 = 1;
    if(m_shape == Ti1042){
	result = is_rect_outside_fun(m, NULL);
    }
    else{
	int Ti1043;
	Ti1043 = 2;
	if(m_shape == Ti1043){
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
    int Ti1013;
    Ti1013 = 1;
    int Ti1014;
    Ti1014 = -Ti1013;
    if(head == Ti1014){
	result = 1;
    }
    else{
	Value* Ta1015;

	int* Tt1016;
	Tt1016 = Ta1015[head].ip;
	bool Tb1017;
	Tb1017 = is_outside_fun(Tt1016, NULL);
	int Ti1018;
	Ti1018 = 0;
	if(Tb1017 == Ti1018){
	    int Ti1019;
	    Ti1019 = 1;
	    int Ti1020;
	    Ti1020 = ofs + Ti1019;
	    result = check_all_inside_fun(Ti1020, iand, NULL);
	}
	else{
	    result = 0;
	}
    }
    return result;
}

bool shadow_check_and_group_fun(int iand_ofs, Value* and_group, Value* p, Value *env){
    bool result;
    int Ti964;
    Ti964 = and_group[iand_ofs].i;
    int Ti965;
    Ti965 = 1;
    int Ti966;
    Ti966 = -Ti965;
    if(Ti964 == Ti966){
	result = 0;
    }
    else{
	int obj;
	obj = and_group[iand_ofs].i;
	Value* Ta967;

	int t0;
	t0 = solver_fun(obj, Ta967, p, NULL);
	Value* Ta968;

	int Ti969;
	Ti969 = 0;
	double t0p;
	t0p = Ta968[Ti969].d;
	int Ti970;
	Ti970 = 0;
	int Ti972;
	if(t0 == Ti970){
	    Ti972 = 0;
	}
	else{
	    double Td971;
	    Td971 = -0.200000;
	    if(Td971 <= t0p){
		Ti972 = 0;
	    }
	    else{
		Ti972 = 1;
	    }
	}
	int Ti973;
	Ti973 = 0;
	if(Ti972 == Ti973){
	    Value* Ta974;

	    int* Tt975;
	    Tt975 = Ta974[obj].ip;
	    bool Tb976;
	    Tb976 = o_isinvert_fun(Tt975, NULL);
	    int Ti977;
	    Ti977 = 0;
	    if(Tb976 == Ti977){
		result = 0;
	    }
	    else{
		int Ti978;
		Ti978 = 1;
		int Ti979;
		Ti979 = iand_ofs + Ti978;
		result = shadow_check_and_group_fun(Ti979, and_group, p, NULL);
	    }
	}
	else{
	    double Td980;
	    Td980 = 0.010000;
	    double t;
	    t = t0p + Td980;
	    Value* Ta981;

	    int Ti982;
	    Ti982 = 0;
	    Value* Ta983;

	    int Ti984;
	    Ti984 = 0;
	    double Td985;
	    Td985 = Ta983[Ti984].d;
	    double Td986;
	    Td986 =  Td985 * t;
	    int Ti987;
	    Ti987 = 0;
	    double Td988;
	    Td988 = p[Ti987].d;
	    double Td989;
	    Td989 = Td986 + Td988;
	    int Tu80;
	    Ta981[Ti982].d = Td989;
	    Value* Ta990;

	    int Ti991;
	    Ti991 = 1;
	    Value* Ta992;

	    int Ti993;
	    Ti993 = 1;
	    double Td994;
	    Td994 = Ta992[Ti993].d;
	    double Td995;
	    Td995 =  Td994 * t;
	    int Ti996;
	    Ti996 = 1;
	    double Td997;
	    Td997 = p[Ti996].d;
	    double Td998;
	    Td998 = Td995 + Td997;
	    int Tu79;
	    Ta990[Ti991].d = Td998;
	    Value* Ta999;

	    int Ti1000;
	    Ti1000 = 2;
	    Value* Ta1001;

	    int Ti1002;
	    Ti1002 = 2;
	    double Td1003;
	    Td1003 = Ta1001[Ti1002].d;
	    double Td1004;
	    Td1004 =  Td1003 * t;
	    int Ti1005;
	    Ti1005 = 2;
	    double Td1006;
	    Td1006 = p[Ti1005].d;
	    double Td1007;
	    Td1007 = Td1004 + Td1006;
	    int Tu78;
	    Ta999[Ti1000].d = Td1007;
	    int Ti1008;
	    Ti1008 = 0;
	    bool Tb1009;
	    Tb1009 = check_all_inside_fun(Ti1008, and_group, NULL);
	    int Ti1010;
	    Ti1010 = 0;
	    if(Tb1009 == Ti1010){
		int Ti1011;
		Ti1011 = 1;
		int Ti1012;
		Ti1012 = iand_ofs + Ti1011;
		result = shadow_check_and_group_fun(Ti1012, and_group, p, NULL);
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
    int Ti957;
    Ti957 = 1;
    int Ti958;
    Ti958 = -Ti957;
    if(head == Ti958){
	result = 0;
    }
    else{
	Value* Ta959;

	Value* and_group;
	and_group = Ta959[head].a;
	int Ti960;
	Ti960 = 0;
	bool shadow_p;
	shadow_p = shadow_check_and_group_fun(Ti960, and_group, p, NULL);
	int Ti961;
	Ti961 = 0;
	if(shadow_p == Ti961){
	    int Ti962;
	    Ti962 = 1;
	    int Ti963;
	    Ti963 = ofs + Ti962;
	    result = shadow_check_one_or_group_fun(Ti963, or_group, p, NULL);
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
    int Ti933;
    Ti933 = 0;
    int range_primitive;
    range_primitive = head[Ti933].i;
    int Ti934;
    Ti934 = 1;
    int Ti935;
    Ti935 = -Ti934;
    if(range_primitive == Ti935){
	result = 0;
    }
    else{
	int Ti936;
	Ti936 = 99;
	if(range_primitive == Ti936){
	    int Ti937;
	    Ti937 = 1;
	    bool Tb938;
	    Tb938 = shadow_check_one_or_group_fun(Ti937, head, p, NULL);
	    int Ti939;
	    Ti939 = 0;
	    if(Tb938 == Ti939){
		int Ti940;
		Ti940 = 1;
		int Ti941;
		Ti941 = ofs + Ti940;
		result = shadow_check_one_or_matrix_fun(Ti941, or_matrix, p, NULL);
	    }
	    else{
		result = 1;
	    }
	}
	else{
	    Value* Ta942;

	    int t;
	    t = solver_fun(range_primitive, Ta942, p, NULL);
	    int Ti943;
	    Ti943 = 0;
	    if(t == Ti943){
		int Ti944;
		Ti944 = 1;
		int Ti945;
		Ti945 = ofs + Ti944;
		result = shadow_check_one_or_matrix_fun(Ti945, or_matrix, p, NULL);
	    }
	    else{
		double Td946;
		Td946 = -0.100000;
		Value* Ta947;

		int Ti948;
		Ti948 = 0;
		double Td949;
		Td949 = Ta947[Ti948].d;
		if(Td946 <= Td949){
		    int Ti950;
		    Ti950 = 1;
		    int Ti951;
		    Ti951 = ofs + Ti950;
		    result = shadow_check_one_or_matrix_fun(Ti951, or_matrix, p, NULL);
		}
		else{
		    int Ti952;
		    Ti952 = 1;
		    bool Tb953;
		    Tb953 = shadow_check_one_or_group_fun(Ti952, head, p, NULL);
		    int Ti954;
		    Ti954 = 0;
		    if(Tb953 == Ti954){
			int Ti955;
			Ti955 = 1;
			int Ti956;
			Ti956 = ofs + Ti955;
			result = shadow_check_one_or_matrix_fun(Ti956, or_matrix, p, NULL);
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
    int Ti854;
    Ti854 = 1;
    int Ti855;
    Ti855 = -Ti854;
    if(iobj == Ti855){
	result = 1;
    }
    else{
	Value* Ta856;

	Value* Ta857;

	int t0;
	t0 = solver_fun(iobj, Ta856, Ta857, NULL);
	int Ti858;
	Ti858 = 0;
	int Tu89;
	if(t0 == Ti858){
	    Value* Ta859;

	    int* Tt860;
	    Tt860 = Ta859[iobj].ip;
	    bool Tb861;
	    Tb861 = o_isinvert_fun(Tt860, NULL);
	    int Ti862;
	    Ti862 = 0;
	    if(Tb861 == Ti862){
		Value* Ta863;

		int Ti864;
		Ti864 = 0;
		int Ti865;
		Ti865 = 1;
		Ta863[Ti864].i = Ti865;
	    }
	    else{
		Tu89 = 1;
	    }
	}
	else{
	    Value* Ta866;

	    int Ti867;
	    Ti867 = 0;
	    double t0p;
	    t0p = Ta866[Ti867].d;
	    double Td868;
	    Td868 = -0.100000;
	    if(t0p <= Td868){
		Tu89 = 1;
	    }
	    else{
		Value* Ta869;

		int Ti870;
		Ti870 = 0;
		double Td871;
		Td871 = Ta869[Ti870].d;
		if(Td871 <= t0p){
		    Tu89 = 1;
		}
		else{
		    double Td872;
		    Td872 = 0.010000;
		    double t;
		    t = t0p + Td872;
		    Value* Ta873;

		    int Ti874;
		    Ti874 = 0;
		    Value* Ta875;

		    int Ti876;
		    Ti876 = 0;
		    double Td877;
		    Td877 = Ta875[Ti876].d;
		    double Td878;
		    Td878 =  Td877 * t;
		    Value* Ta879;

		    int Ti880;
		    Ti880 = 0;
		    double Td881;
		    Td881 = Ta879[Ti880].d;
		    double Td882;
		    Td882 = Td878 + Td881;
		    int Tu88;
		    Ta873[Ti874].d = Td882;
		    Value* Ta883;

		    int Ti884;
		    Ti884 = 1;
		    Value* Ta885;

		    int Ti886;
		    Ti886 = 1;
		    double Td887;
		    Td887 = Ta885[Ti886].d;
		    double Td888;
		    Td888 =  Td887 * t;
		    Value* Ta889;

		    int Ti890;
		    Ti890 = 1;
		    double Td891;
		    Td891 = Ta889[Ti890].d;
		    double Td892;
		    Td892 = Td888 + Td891;
		    int Tu87;
		    Ta883[Ti884].d = Td892;
		    Value* Ta893;

		    int Ti894;
		    Ti894 = 2;
		    Value* Ta895;

		    int Ti896;
		    Ti896 = 2;
		    double Td897;
		    Td897 = Ta895[Ti896].d;
		    double Td898;
		    Td898 =  Td897 * t;
		    Value* Ta899;

		    int Ti900;
		    Ti900 = 2;
		    double Td901;
		    Td901 = Ta899[Ti900].d;
		    double Td902;
		    Td902 = Td898 + Td901;
		    int Tu86;
		    Ta893[Ti894].d = Td902;
		    int Ti903;
		    Ti903 = 0;
		    bool Tb904;
		    Tb904 = check_all_inside_fun(Ti903, and_group, NULL);
		    int Ti905;
		    Ti905 = 0;
		    if(Tb904 == Ti905){
			Tu89 = 1;
		    }
		    else{
			Value* Ta906;

			int Ti907;
			Ti907 = 0;
			int Tu85;
			Ta906[Ti907].d = t;
			Value* Ta908;

			int Ti909;
			Ti909 = 0;
			Value* Ta910;

			int Ti911;
			Ti911 = 0;
			double Td912;
			Td912 = Ta910[Ti911].d;
			int Tu84;
			Ta908[Ti909].d = Td912;
			Value* Ta913;

			int Ti914;
			Ti914 = 1;
			Value* Ta915;

			int Ti916;
			Ti916 = 1;
			double Td917;
			Td917 = Ta915[Ti916].d;
			int Tu83;
			Ta913[Ti914].d = Td917;
			Value* Ta918;

			int Ti919;
			Ti919 = 2;
			Value* Ta920;

			int Ti921;
			Ti921 = 2;
			double Td922;
			Td922 = Ta920[Ti921].d;
			int Tu82;
			Ta918[Ti919].d = Td922;
			Value* Ta923;

			int Ti924;
			Ti924 = 0;
			int Tu81;
			Ta923[Ti924].i = t0;
			Value* Ta925;

			int Ti926;
			Ti926 = 0;
			Ta925[Ti926].i = iobj;
		    }
		}
	    }
	}
	Value* Ta927;

	int Ti928;
	Ti928 = 0;
	bool Tb929;
	Tb929 = Ta927[Ti928].;
	int Ti930;
	Ti930 = 0;
	if(Tb929 == Ti930){
	    int Ti931;
	    Ti931 = 1;
	    int Ti932;
	    Ti932 = iand_ofs + Ti931;
	    result = solve_each_element_fun(Ti932, and_group, NULL);
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
    int Ti845;
    Ti845 = 1;
    int Ti846;
    Ti846 = -Ti845;
    if(head == Ti846){
	result = 1;
    }
    else{
	Value* Ta847;

	Value* and_group;
	and_group = Ta847[head].a;
	Value* Ta848;

	int Ti849;
	Ti849 = 0;
	int Ti850;
	Ti850 = 0;
	int Tu91;
	Ta848[Ti849].i = Ti850;
	int Ti851;
	Ti851 = 0;
	int Tu90;
	Tu90 = solve_each_element_fun(Ti851, and_group, NULL);
	int Ti852;
	Ti852 = 1;
	int Ti853;
	Ti853 = ofs + Ti852;
	result = solve_one_or_network_fun(Ti853, or_group, NULL);
    }
    return result;
}

int trace_or_matrix_fun(int ofs, Value* or_network, Value *env){
    int result;
    Value* head;
    head = or_network[ofs].a;
    int Ti829;
    Ti829 = 0;
    int range_primitive;
    range_primitive = head[Ti829].i;
    int Ti830;
    Ti830 = 1;
    int Ti831;
    Ti831 = -Ti830;
    if(range_primitive == Ti831){
	result = 1;
    }
    else{
	int Ti832;
	Ti832 = 99;
	int Tu92;
	if(range_primitive == Ti832){
	    int Ti833;
	    Ti833 = 1;
	    Tu92 = solve_one_or_network_fun(Ti833, head, NULL);
	}
	else{
	    Value* Ta834;

	    Value* Ta835;

	    int t;
	    t = solver_fun(range_primitive, Ta834, Ta835, NULL);
	    int Ti836;
	    Ti836 = 0;
	    if(t == Ti836){
		Tu92 = 1;
	    }
	    else{
		Value* Ta837;

		int Ti838;
		Ti838 = 0;
		double tp;
		tp = Ta837[Ti838].d;
		Value* Ta839;

		int Ti840;
		Ti840 = 0;
		double Td841;
		Td841 = Ta839[Ti840].d;
		if(Td841 <= tp){
		    Tu92 = 1;
		}
		else{
		    int Ti842;
		    Ti842 = 1;
		    Tu92 = solve_one_or_network_fun(Ti842, head, NULL);
		}
	    }
	}
	int Ti843;
	Ti843 = 1;
	int Ti844;
	Ti844 = ofs + Ti843;
	result = trace_or_matrix_fun(Ti844, or_network, NULL);
    }
    return result;
}

bool tracer_fun(Value* viewpoint, Value* vscan, Value *env){
    bool result;
    Value* Ta818;

    int Ti819;
    Ti819 = 0;
    double Td820;
    Td820 = 1000000000.000000;
    int Tu94;
    Ta818[Ti819].d = Td820;
    int Ti821;
    Ti821 = 0;
    Value* Ta822;

    int Ti823;
    Ti823 = 0;
    Value* Ta824;
    Ta824 = Ta822[Ti823].a;
    int Tu93;
    Tu93 = trace_or_matrix_fun(Ti821, Ta824, NULL);
    Value* Ta825;

    int Ti826;
    Ti826 = 0;
    double t;
    t = Ta825[Ti826].d;
    double Td827;
    Td827 = -0.100000;
    if(t <= Td827){
	result = 0;
    }
    else{
	double Td828;
	Td828 = 100000000.000000;
	if(Td828 <= t){
	    result = 0;
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int get_nvector_rect_fun(int Tu95, Value *env){
    int result;
    Value* Ta774;

    int Ti775;
    Ti775 = 0;
    int rectside;
    rectside = Ta774[Ti775].i;
    int Ti776;
    Ti776 = 1;
    if(rectside == Ti776){
	Value* Ta777;

	int Ti778;
	Ti778 = 0;
	Value* Ta779;

	int Ti780;
	Ti780 = 0;
	double Td781;
	Td781 = Ta779[Ti780].d;
	double Td782;
	Td782 = sgn_fun(Td781, NULL);
	double Td783;
	Td783 = -Td782;
	int Tu97;
	Ta777[Ti778].d = Td783;
	Value* Ta784;

	int Ti785;
	Ti785 = 1;
	double Td786;
	Td786 = 0.000000;
	int Tu96;
	Ta784[Ti785].d = Td786;
	Value* Ta787;

	int Ti788;
	Ti788 = 2;
	double Td789;
	Td789 = 0.000000;
	Ta787[Ti788].d = Td789;
    }
    else{
	int Ti790;
	Ti790 = 2;
	if(rectside == Ti790){
	    Value* Ta791;

	    int Ti792;
	    Ti792 = 0;
	    double Td793;
	    Td793 = 0.000000;
	    int Tu99;
	    Ta791[Ti792].d = Td793;
	    Value* Ta794;

	    int Ti795;
	    Ti795 = 1;
	    Value* Ta796;

	    int Ti797;
	    Ti797 = 1;
	    double Td798;
	    Td798 = Ta796[Ti797].d;
	    double Td799;
	    Td799 = sgn_fun(Td798, NULL);
	    double Td800;
	    Td800 = -Td799;
	    int Tu98;
	    Ta794[Ti795].d = Td800;
	    Value* Ta801;

	    int Ti802;
	    Ti802 = 2;
	    double Td803;
	    Td803 = 0.000000;
	    Ta801[Ti802].d = Td803;
	}
	else{
	    int Ti804;
	    Ti804 = 3;
	    if(rectside == Ti804){
		Value* Ta805;

		int Ti806;
		Ti806 = 0;
		double Td807;
		Td807 = 0.000000;
		int Tu101;
		Ta805[Ti806].d = Td807;
		Value* Ta808;

		int Ti809;
		Ti809 = 1;
		double Td810;
		Td810 = 0.000000;
		int Tu100;
		Ta808[Ti809].d = Td810;
		Value* Ta811;

		int Ti812;
		Ti812 = 2;
		Value* Ta813;

		int Ti814;
		Ti814 = 2;
		double Td815;
		Td815 = Ta813[Ti814].d;
		double Td816;
		Td816 = sgn_fun(Td815, NULL);
		double Td817;
		Td817 = -Td816;
		Ta811[Ti812].d = Td817;
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
    Value* Ta762;

    int Ti763;
    Ti763 = 0;
    double Td764;
    Td764 = o_param_a_fun(m, NULL);
    double Td765;
    Td765 = -Td764;
    int Tu103;
    Ta762[Ti763].d = Td765;
    Value* Ta766;

    int Ti767;
    Ti767 = 1;
    double Td768;
    Td768 = o_param_b_fun(m, NULL);
    double Td769;
    Td769 = -Td768;
    int Tu102;
    Ta766[Ti767].d = Td769;
    Value* Ta770;

    int Ti771;
    Ti771 = 2;
    double Td772;
    Td772 = o_param_c_fun(m, NULL);
    double Td773;
    Td773 = -Td772;
    Ta770[Ti771].d = Td773;
    return result;
}

int get_nvector_second_norot_fun(int* m, Value* p, Value *env){
    int result;
    Value* Ta736;

    int Ti737;
    Ti737 = 0;
    int Ti738;
    Ti738 = 0;
    double Td739;
    Td739 = p[Ti738].d;
    double Td740;
    Td740 = o_param_x_fun(m, NULL);
    double Td741;
    Td741 = Td739 - Td740;
    double Td742;
    Td742 = o_param_a_fun(m, NULL);
    double Td743;
    Td743 =  Td741 * Td742;
    int Tu106;
    Ta736[Ti737].d = Td743;
    Value* Ta744;

    int Ti745;
    Ti745 = 1;
    int Ti746;
    Ti746 = 1;
    double Td747;
    Td747 = p[Ti746].d;
    double Td748;
    Td748 = o_param_y_fun(m, NULL);
    double Td749;
    Td749 = Td747 - Td748;
    double Td750;
    Td750 = o_param_b_fun(m, NULL);
    double Td751;
    Td751 =  Td749 * Td750;
    int Tu105;
    Ta744[Ti745].d = Td751;
    Value* Ta752;

    int Ti753;
    Ti753 = 2;
    int Ti754;
    Ti754 = 2;
    double Td755;
    Td755 = p[Ti754].d;
    double Td756;
    Td756 = o_param_z_fun(m, NULL);
    double Td757;
    Td757 = Td755 - Td756;
    double Td758;
    Td758 = o_param_c_fun(m, NULL);
    double Td759;
    Td759 =  Td757 * Td758;
    int Tu104;
    Ta752[Ti753].d = Td759;
    Value* Ta760;

    bool Tb761;
    Tb761 = o_isinvert_fun(m, NULL);
    result = normalize_vector_fun(Ta760, Tb761, NULL);
    return result;
}

int get_nvector_second_rot_fun(int* m, Value* p, Value *env){
    int result;
    Value* Ta656;

    int Ti657;
    Ti657 = 0;
    int Ti658;
    Ti658 = 0;
    double Td659;
    Td659 = p[Ti658].d;
    double Td660;
    Td660 = o_param_x_fun(m, NULL);
    double Td661;
    Td661 = Td659 - Td660;
    int Tu112;
    Ta656[Ti657].d = Td661;
    Value* Ta662;

    int Ti663;
    Ti663 = 1;
    int Ti664;
    Ti664 = 1;
    double Td665;
    Td665 = p[Ti664].d;
    double Td666;
    Td666 = o_param_y_fun(m, NULL);
    double Td667;
    Td667 = Td665 - Td666;
    int Tu111;
    Ta662[Ti663].d = Td667;
    Value* Ta668;

    int Ti669;
    Ti669 = 2;
    int Ti670;
    Ti670 = 2;
    double Td671;
    Td671 = p[Ti670].d;
    double Td672;
    Td672 = o_param_z_fun(m, NULL);
    double Td673;
    Td673 = Td671 - Td672;
    int Tu110;
    Ta668[Ti669].d = Td673;
    Value* Ta674;

    int Ti675;
    Ti675 = 0;
    Value* Ta676;

    int Ti677;
    Ti677 = 0;
    double Td678;
    Td678 = Ta676[Ti677].d;
    double Td679;
    Td679 = o_param_a_fun(m, NULL);
    double Td680;
    Td680 =  Td678 * Td679;
    Value* Ta681;

    int Ti682;
    Ti682 = 1;
    double Td683;
    Td683 = Ta681[Ti682].d;
    double Td684;
    Td684 = o_param_r3_fun(m, NULL);
    double Td685;
    Td685 =  Td683 * Td684;
    Value* Ta686;

    int Ti687;
    Ti687 = 2;
    double Td688;
    Td688 = Ta686[Ti687].d;
    double Td689;
    Td689 = o_param_r2_fun(m, NULL);
    double Td690;
    Td690 =  Td688 * Td689;
    double Td691;
    Td691 = Td685 + Td690;
    double Td692;
    Td692 = fhalf_fun(Td691, NULL);
    double Td693;
    Td693 = Td680 + Td692;
    int Tu109;
    Ta674[Ti675].d = Td693;
    Value* Ta694;

    int Ti695;
    Ti695 = 1;
    Value* Ta696;

    int Ti697;
    Ti697 = 1;
    double Td698;
    Td698 = Ta696[Ti697].d;
    double Td699;
    Td699 = o_param_b_fun(m, NULL);
    double Td700;
    Td700 =  Td698 * Td699;
    Value* Ta701;

    int Ti702;
    Ti702 = 0;
    double Td703;
    Td703 = Ta701[Ti702].d;
    double Td704;
    Td704 = o_param_r3_fun(m, NULL);
    double Td705;
    Td705 =  Td703 * Td704;
    Value* Ta706;

    int Ti707;
    Ti707 = 2;
    double Td708;
    Td708 = Ta706[Ti707].d;
    double Td709;
    Td709 = o_param_r1_fun(m, NULL);
    double Td710;
    Td710 =  Td708 * Td709;
    double Td711;
    Td711 = Td705 + Td710;
    double Td712;
    Td712 = fhalf_fun(Td711, NULL);
    double Td713;
    Td713 = Td700 + Td712;
    int Tu108;
    Ta694[Ti695].d = Td713;
    Value* Ta714;

    int Ti715;
    Ti715 = 2;
    Value* Ta716;

    int Ti717;
    Ti717 = 2;
    double Td718;
    Td718 = Ta716[Ti717].d;
    double Td719;
    Td719 = o_param_c_fun(m, NULL);
    double Td720;
    Td720 =  Td718 * Td719;
    Value* Ta721;

    int Ti722;
    Ti722 = 0;
    double Td723;
    Td723 = Ta721[Ti722].d;
    double Td724;
    Td724 = o_param_r2_fun(m, NULL);
    double Td725;
    Td725 =  Td723 * Td724;
    Value* Ta726;

    int Ti727;
    Ti727 = 1;
    double Td728;
    Td728 = Ta726[Ti727].d;
    double Td729;
    Td729 = o_param_r1_fun(m, NULL);
    double Td730;
    Td730 =  Td728 * Td729;
    double Td731;
    Td731 = Td725 + Td730;
    double Td732;
    Td732 = fhalf_fun(Td731, NULL);
    double Td733;
    Td733 = Td720 + Td732;
    int Tu107;
    Ta714[Ti715].d = Td733;
    Value* Ta734;

    bool Tb735;
    Tb735 = o_isinvert_fun(m, NULL);
    result = normalize_vector_fun(Ta734, Tb735, NULL);
    return result;
}

int get_nvector_fun(int* m, Value* p, Value *env){
    int result;
    int m_shape;
    m_shape = o_form_fun(m, NULL);
    int Ti651;
    Ti651 = 1;
    if(m_shape == Ti651){
	int Tu652;
	Tu652 = 1;
	result = get_nvector_rect_fun(Tu652, NULL);
    }
    else{
	int Ti653;
	Ti653 = 2;
	if(m_shape == Ti653){
	    result = get_nvector_plane_fun(m, NULL);
	}
	else{
	    int Ti654;
	    Ti654 = o_isrot_fun(m, NULL);
	    int Ti655;
	    Ti655 = 0;
	    if(Ti654 == Ti655){
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
    Value* Ta522;

    int Ti523;
    Ti523 = 0;
    double Td524;
    Td524 = o_color_red_fun(m, NULL);
    int Tu117;
    Ta522[Ti523].d = Td524;
    Value* Ta525;

    int Ti526;
    Ti526 = 1;
    double Td527;
    Td527 = o_color_green_fun(m, NULL);
    int Tu116;
    Ta525[Ti526].d = Td527;
    Value* Ta528;

    int Ti529;
    Ti529 = 2;
    double Td530;
    Td530 = o_color_blue_fun(m, NULL);
    int Tu115;
    Ta528[Ti529].d = Td530;
    int Ti531;
    Ti531 = 1;
    if(m_tex == Ti531){
	int Ti532;
	Ti532 = 0;
	double Td533;
	Td533 = p[Ti532].d;
	double Td534;
	Td534 = o_param_x_fun(m, NULL);
	double w1;
	w1 = Td533 - Td534;
	double Td535;
	Td535 = 0.050000;
	double Td536;
	Td536 =  w1 * Td535;
	double Td537;
	Td537 = min_caml_floor_fun(Td536, NULL);
	double Td538;
	Td538 = 20.000000;
	double d1;
	d1 =  Td537 * Td538;
	double Td539;
	Td539 = 10.000000;
	double Td540;
	Td540 = w1 - d1;
	bool flag1;
	if(Td539 <= Td540){
	    flag1 = 0;
	}
	else{
	    flag1 = 1;
	}
	int Ti541;
	Ti541 = 2;
	double Td542;
	Td542 = p[Ti541].d;
	double Td543;
	Td543 = o_param_z_fun(m, NULL);
	double w3;
	w3 = Td542 - Td543;
	double Td544;
	Td544 = 0.050000;
	double Td545;
	Td545 =  w3 * Td544;
	double Td546;
	Td546 = min_caml_floor_fun(Td545, NULL);
	double Td547;
	Td547 = 20.000000;
	double d2;
	d2 =  Td546 * Td547;
	double Td548;
	Td548 = 10.000000;
	double Td549;
	Td549 = w3 - d2;
	bool flag2;
	if(Td548 <= Td549){
	    flag2 = 0;
	}
	else{
	    flag2 = 1;
	}
	Value* Ta550;

	int Ti551;
	Ti551 = 1;
	int Ti552;
	Ti552 = 0;
	double Td555;
	if(flag1 == Ti552){
	    int Ti553;
	    Ti553 = 0;
	    if(flag2 == Ti553){
		Td555 = 255.000000;
	    }
	    else{
		Td555 = 0.000000;
	    }
	}
	else{
	    int Ti554;
	    Ti554 = 0;
	    if(flag2 == Ti554){
		Td555 = 0.000000;
	    }
	    else{
		Td555 = 255.000000;
	    }
	}
	Ta550[Ti551].d = Td555;
    }
    else{
	int Ti556;
	Ti556 = 2;
	if(m_tex == Ti556){
	    int Ti557;
	    Ti557 = 1;
	    double Td558;
	    Td558 = p[Ti557].d;
	    double Td559;
	    Td559 = 0.250000;
	    double Td560;
	    Td560 =  Td558 * Td559;
	    double Td561;
	    Td561 = min_caml_sin_fun(Td560, NULL);
	    double w2;
	    w2 = fsqr_fun(Td561, NULL);
	    Value* Ta562;

	    int Ti563;
	    Ti563 = 0;
	    double Td564;
	    Td564 = 255.000000;
	    double Td565;
	    Td565 =  Td564 * w2;
	    int Tu113;
	    Ta562[Ti563].d = Td565;
	    Value* Ta566;

	    int Ti567;
	    Ti567 = 1;
	    double Td568;
	    Td568 = 255.000000;
	    double Td569;
	    Td569 = 1.000000;
	    double Td570;
	    Td570 = Td569 - w2;
	    double Td571;
	    Td571 =  Td568 * Td570;
	    Ta566[Ti567].d = Td571;
	}
	else{
	    int Ti572;
	    Ti572 = 3;
	    if(m_tex == Ti572){
		int Ti573;
		Ti573 = 0;
		double Td574;
		Td574 = p[Ti573].d;
		double Td575;
		Td575 = o_param_x_fun(m, NULL);
		double w1;
		w1 = Td574 - Td575;
		int Ti576;
		Ti576 = 2;
		double Td577;
		Td577 = p[Ti576].d;
		double Td578;
		Td578 = o_param_z_fun(m, NULL);
		double w3;
		w3 = Td577 - Td578;
		double Td579;
		Td579 = fsqr_fun(w1, NULL);
		double Td580;
		Td580 = fsqr_fun(w3, NULL);
		double Td581;
		Td581 = Td579 + Td580;
		double Td582;
		Td582 = min_caml_sqrt_fun(Td581, NULL);
		double Td583;
		Td583 = 10.000000;
		double w2;
		w2 = Td582 / Td583;
		double Td584;
		Td584 = min_caml_floor_fun(w2, NULL);
		double Td585;
		Td585 = w2 - Td584;
		double Td586;
		Td586 = 3.141593;
		double w4;
		w4 =  Td585 * Td586;
		double Td587;
		Td587 = min_caml_cos_fun(w4, NULL);
		double cws;
		cws = fsqr_fun(Td587, NULL);
		Value* Ta588;

		int Ti589;
		Ti589 = 1;
		double Td590;
		Td590 = 255.000000;
		double Td591;
		Td591 =  cws * Td590;
		int Tu114;
		Ta588[Ti589].d = Td591;
		Value* Ta592;

		int Ti593;
		Ti593 = 2;
		double Td594;
		Td594 = 1.000000;
		double Td595;
		Td595 = Td594 - cws;
		double Td596;
		Td596 = 255.000000;
		double Td597;
		Td597 =  Td595 * Td596;
		Ta592[Ti593].d = Td597;
	    }
	    else{
		int Ti598;
		Ti598 = 4;
		if(m_tex == Ti598){
		    int Ti599;
		    Ti599 = 0;
		    double Td600;
		    Td600 = p[Ti599].d;
		    double Td601;
		    Td601 = o_param_x_fun(m, NULL);
		    double Td602;
		    Td602 = Td600 - Td601;
		    double Td603;
		    Td603 = o_param_a_fun(m, NULL);
		    double Td604;
		    Td604 = min_caml_sqrt_fun(Td603, NULL);
		    double w1;
		    w1 =  Td602 * Td604;
		    int Ti605;
		    Ti605 = 2;
		    double Td606;
		    Td606 = p[Ti605].d;
		    double Td607;
		    Td607 = o_param_z_fun(m, NULL);
		    double Td608;
		    Td608 = Td606 - Td607;
		    double Td609;
		    Td609 = o_param_c_fun(m, NULL);
		    double Td610;
		    Td610 = min_caml_sqrt_fun(Td609, NULL);
		    double w3;
		    w3 =  Td608 * Td610;
		    double Td611;
		    Td611 = fsqr_fun(w1, NULL);
		    double Td612;
		    Td612 = fsqr_fun(w3, NULL);
		    double Td613;
		    Td613 = Td611 + Td612;
		    double w4;
		    w4 = min_caml_sqrt_fun(Td613, NULL);
		    double Td614;
		    Td614 = 0.000100;
		    double Td615;
		    Td615 = min_caml_abs_float_fun(w1, NULL);
		    double w7;
		    if(Td614 <= Td615){
			double Td616;
			Td616 = w3 / w1;
			double w5;
			w5 = min_caml_abs_float_fun(Td616, NULL);
			double Td617;
			Td617 = min_caml_atan_fun(w5, NULL);
			double Td618;
			Td618 = 30.000000;
			double Td619;
			Td619 = 3.141593;
			double Td620;
			Td620 = Td618 / Td619;
			w7 =  Td617 * Td620;
		    }
		    else{
			w7 = 15.000000;
		    }
		    double Td621;
		    Td621 = min_caml_floor_fun(w7, NULL);
		    double w9;
		    w9 = w7 - Td621;
		    int Ti622;
		    Ti622 = 1;
		    double Td623;
		    Td623 = p[Ti622].d;
		    double Td624;
		    Td624 = o_param_y_fun(m, NULL);
		    double Td625;
		    Td625 = Td623 - Td624;
		    double Td626;
		    Td626 = o_param_b_fun(m, NULL);
		    double Td627;
		    Td627 = min_caml_sqrt_fun(Td626, NULL);
		    double w2;
		    w2 =  Td625 * Td627;
		    double Td628;
		    Td628 = 0.000100;
		    double Td629;
		    Td629 = min_caml_abs_float_fun(w7, NULL);
		    double w8;
		    if(Td628 <= Td629){
			double Td630;
			Td630 = w2 / w4;
			double w6;
			w6 = min_caml_abs_float_fun(Td630, NULL);
			double Td631;
			Td631 = min_caml_atan_fun(w6, NULL);
			double Td632;
			Td632 = 30.000000;
			double Td633;
			Td633 = 3.141593;
			double Td634;
			Td634 = Td632 / Td633;
			w8 =  Td631 * Td634;
		    }
		    else{
			w8 = 15.000000;
		    }
		    double Td635;
		    Td635 = min_caml_floor_fun(w8, NULL);
		    double w10;
		    w10 = w8 - Td635;
		    double Td636;
		    Td636 = 0.150000;
		    double Td637;
		    Td637 = 0.500000;
		    double Td638;
		    Td638 = Td637 - w9;
		    double Td639;
		    Td639 = fsqr_fun(Td638, NULL);
		    double Td640;
		    Td640 = Td636 - Td639;
		    double Td641;
		    Td641 = 0.500000;
		    double Td642;
		    Td642 = Td641 - w10;
		    double Td643;
		    Td643 = fsqr_fun(Td642, NULL);
		    double w11;
		    w11 = Td640 - Td643;
		    Value* Ta644;

		    int Ti645;
		    Ti645 = 2;
		    double Td646;
		    Td646 = 0.000000;
		    double Td650;
		    if(w11 <= Td646){
			Td650 = 0.000000;
		    }
		    else{
			double Td647;
			Td647 = 255.000000;
			double Td648;
			Td648 = 0.300000;
			double Td649;
			Td649 = Td647 / Td648;
			Td650 =  w11 * Td649;
		    }
		    Ta644[Ti645].d = Td650;
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
    int Ti506;
    Ti506 = 0;
    double Td507;
    Td507 = v1[Ti506].d;
    int Ti508;
    Ti508 = 0;
    double Td509;
    Td509 = v2[Ti508].d;
    double Td510;
    Td510 =  Td507 * Td509;
    int Ti511;
    Ti511 = 1;
    double Td512;
    Td512 = v1[Ti511].d;
    int Ti513;
    Ti513 = 1;
    double Td514;
    Td514 = v2[Ti513].d;
    double Td515;
    Td515 =  Td512 * Td514;
    double Td516;
    Td516 = Td510 + Td515;
    int Ti517;
    Ti517 = 2;
    double Td518;
    Td518 = v1[Ti517].d;
    int Ti519;
    Ti519 = 2;
    double Td520;
    Td520 = v2[Ti519].d;
    double Td521;
    Td521 =  Td518 * Td520;
    result = Td516 + Td521;
    return result;
}

int accumulate_vec_mul_fun(Value* v1, Value* v2, double w, Value *env){
    int result;
    int Ti485;
    Ti485 = 0;
    int Ti486;
    Ti486 = 0;
    double Td487;
    Td487 = v1[Ti486].d;
    int Ti488;
    Ti488 = 0;
    double Td489;
    Td489 = v2[Ti488].d;
    double Td490;
    Td490 =  w * Td489;
    double Td491;
    Td491 = Td487 + Td490;
    int Tu119;
    v1[Ti485].d = Td491;
    int Ti492;
    Ti492 = 1;
    int Ti493;
    Ti493 = 1;
    double Td494;
    Td494 = v1[Ti493].d;
    int Ti495;
    Ti495 = 1;
    double Td496;
    Td496 = v2[Ti495].d;
    double Td497;
    Td497 =  w * Td496;
    double Td498;
    Td498 = Td494 + Td497;
    int Tu118;
    v1[Ti492].d = Td498;
    int Ti499;
    Ti499 = 2;
    int Ti500;
    Ti500 = 2;
    double Td501;
    Td501 = v1[Ti500].d;
    int Ti502;
    Ti502 = 2;
    double Td503;
    Td503 = v2[Ti502].d;
    double Td504;
    Td504 =  w * Td503;
    double Td505;
    Td505 = Td501 + Td504;
    v1[Ti499].d = Td505;
    return result;
}

int raytracing_fun(int nref, double energy, Value *env){
    int result;
    Value* Ta371;

    Value* Ta372;

    bool crashed_p;
    crashed_p = tracer_fun(Ta371, Ta372, NULL);
    int Ti373;
    Ti373 = 0;
    int Tu131;
    if(crashed_p == Ti373){
	int Ti374;
	Ti374 = 0;
	if(nref == Ti374){
	    Tu131 = 1;
	}
	else{
	    Value* Ta375;

	    Value* Ta376;

	    double Td377;
	    Td377 = in_prod_fun(Ta375, Ta376, NULL);
	    double hl;
	    hl = -Td377;
	    double Td378;
	    Td378 = 0.000000;
	    if(hl <= Td378){
		Tu131 = 1;
	    }
	    else{
		double Td379;
		Td379 = fsqr_fun(hl, NULL);
		double Td380;
		Td380 =  Td379 * hl;
		double Td381;
		Td381 =  Td380 * energy;
		Value* Ta382;

		int Ti383;
		Ti383 = 0;
		double Td384;
		Td384 = Ta382[Ti383].d;
		double ihl;
		ihl =  Td381 * Td384;
		Value* Ta385;

		int Ti386;
		Ti386 = 0;
		Value* Ta387;

		int Ti388;
		Ti388 = 0;
		double Td389;
		Td389 = Ta387[Ti388].d;
		double Td390;
		Td390 = Td389 + ihl;
		int Tu121;
		Ta385[Ti386].d = Td390;
		Value* Ta391;

		int Ti392;
		Ti392 = 1;
		Value* Ta393;

		int Ti394;
		Ti394 = 1;
		double Td395;
		Td395 = Ta393[Ti394].d;
		double Td396;
		Td396 = Td395 + ihl;
		int Tu120;
		Ta391[Ti392].d = Td396;
		Value* Ta397;

		int Ti398;
		Ti398 = 2;
		Value* Ta399;

		int Ti400;
		Ti400 = 2;
		double Td401;
		Td401 = Ta399[Ti400].d;
		double Td402;
		Td402 = Td401 + ihl;
		Ta397[Ti398].d = Td402;
	    }
	}
    }
    else{
	Tu131 = 1;
    }
    int Ti403;
    Ti403 = 0;
    if(crashed_p == Ti403){
	result = 1;
    }
    else{
	Value* Ta404;

	Value* Ta405;

	int Ti406;
	Ti406 = 0;
	int Ti407;
	Ti407 = Ta405[Ti406].i;
	int* cobj;
	cobj = Ta404[Ti407].ip;
	Value* Ta408;

	int Tu130;
	Tu130 = get_nvector_fun(cobj, Ta408, NULL);
	int Ti409;
	Ti409 = 0;
	Value* Ta410;

	int Ti411;
	Ti411 = 0;
	Value* Ta412;
	Ta412 = Ta410[Ti411].a;
	Value* Ta413;

	bool Tb414;
	Tb414 = shadow_check_one_or_matrix_fun(Ti409, Ta412, Ta413, NULL);
	int Ti415;
	Ti415 = 0;
	double bright;
	if(Tb414 == Ti415){
	    Value* Ta416;

	    Value* Ta417;

	    double Td418;
	    Td418 = in_prod_fun(Ta416, Ta417, NULL);
	    double br;
	    br = -Td418;
	    double Td419;
	    Td419 = 0.000000;
	    double br1;
	    if(Td419 <= br){
		double Td420;
		Td420 = 0.200000;
		br1 = br + Td420;
	    }
	    else{
		br1 = 0.200000;
	    }
	    double Td421;
	    Td421 =  br1 * energy;
	    double Td422;
	    Td422 = o_diffuse_fun(cobj, NULL);
	    bright =  Td421 * Td422;
	}
	else{
	    bright = 0.000000;
	}
	Value* Ta423;

	int Tu129;
	Tu129 = utexture_fun(cobj, Ta423, NULL);
	Value* Ta424;

	Value* Ta425;

	int Tu128;
	Tu128 = accumulate_vec_mul_fun(Ta424, Ta425, bright, NULL);
	int Ti426;
	Ti426 = 4;
	if(nref <= Ti426){
	    double Td427;
	    Td427 = 0.100000;
	    if(energy <= Td427){
		result = 1;
	    }
	    else{
		double Td428;
		Td428 = -2.000000;
		Value* Ta429;

		Value* Ta430;

		double Td431;
		Td431 = in_prod_fun(Ta429, Ta430, NULL);
		double w;
		w =  Td428 * Td431;
		Value* Ta432;

		Value* Ta433;

		int Tu127;
		Tu127 = accumulate_vec_mul_fun(Ta432, Ta433, w, NULL);
		int m_surface;
		m_surface = o_reflectiontype_fun(cobj, NULL);
		int Ti434;
		Ti434 = 1;
		if(m_surface == Ti434){
		    double Td435;
		    Td435 = 0.000000;
		    double Td436;
		    Td436 = o_hilight_fun(cobj, NULL);
		    if(Td435 == Td436){
			result = 1;
		    }
		    else{
			Value* Ta437;

			Value* Ta438;

			double Td439;
			Td439 = in_prod_fun(Ta437, Ta438, NULL);
			double hl;
			hl = -Td439;
			double Td440;
			Td440 = 0.000000;
			if(hl <= Td440){
			    result = 1;
			}
			else{
			    double Td441;
			    Td441 = fsqr_fun(hl, NULL);
			    double Td442;
			    Td442 = fsqr_fun(Td441, NULL);
			    double Td443;
			    Td443 =  Td442 * energy;
			    double Td444;
			    Td444 =  Td443 * bright;
			    double Td445;
			    Td445 = o_hilight_fun(cobj, NULL);
			    double ihl;
			    ihl =  Td444 * Td445;
			    Value* Ta446;

			    int Ti447;
			    Ti447 = 0;
			    Value* Ta448;

			    int Ti449;
			    Ti449 = 0;
			    double Td450;
			    Td450 = Ta448[Ti449].d;
			    double Td451;
			    Td451 = Td450 + ihl;
			    int Tu123;
			    Ta446[Ti447].d = Td451;
			    Value* Ta452;

			    int Ti453;
			    Ti453 = 1;
			    Value* Ta454;

			    int Ti455;
			    Ti455 = 1;
			    double Td456;
			    Td456 = Ta454[Ti455].d;
			    double Td457;
			    Td457 = Td456 + ihl;
			    int Tu122;
			    Ta452[Ti453].d = Td457;
			    Value* Ta458;

			    int Ti459;
			    Ti459 = 2;
			    Value* Ta460;

			    int Ti461;
			    Ti461 = 2;
			    double Td462;
			    Td462 = Ta460[Ti461].d;
			    double Td463;
			    Td463 = Td462 + ihl;
			    Ta458[Ti459].d = Td463;
			}
		    }
		}
		else{
		    int Ti464;
		    Ti464 = 2;
		    if(m_surface == Ti464){
			Value* Ta465;

			int Ti466;
			Ti466 = 0;
			Value* Ta467;

			int Ti468;
			Ti468 = 0;
			double Td469;
			Td469 = Ta467[Ti468].d;
			int Tu126;
			Ta465[Ti466].d = Td469;
			Value* Ta470;

			int Ti471;
			Ti471 = 1;
			Value* Ta472;

			int Ti473;
			Ti473 = 1;
			double Td474;
			Td474 = Ta472[Ti473].d;
			int Tu125;
			Ta470[Ti471].d = Td474;
			Value* Ta475;

			int Ti476;
			Ti476 = 2;
			Value* Ta477;

			int Ti478;
			Ti478 = 2;
			double Td479;
			Td479 = Ta477[Ti478].d;
			int Tu124;
			Ta475[Ti476].d = Td479;
			double Td480;
			Td480 = 1.000000;
			double Td481;
			Td481 = o_diffuse_fun(cobj, NULL);
			double Td482;
			Td482 = Td480 - Td481;
			double energy2;
			energy2 =  energy * Td482;
			int Ti483;
			Ti483 = 1;
			int Ti484;
			Ti484 = nref + Ti483;
			result = raytracing_fun(Ti484, energy2, NULL);
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

int write_rgb_fun(int Tu132, Value *env){
    int result;
    Value* Ta359;

    int Ti360;
    Ti360 = 0;
    double Td361;
    Td361 = Ta359[Ti360].d;
    int red;
    red = min_caml_int_of_float_fun(Td361, NULL);
    int Ti362;
    Ti362 = 255;
    int red;
    if(red <= Ti362){
	red = red;
    }
    else{
	red = 255;
    }
    int Tu134;
    Tu134 = min_caml_print_byte_fun(red, NULL);
    Value* Ta363;

    int Ti364;
    Ti364 = 1;
    double Td365;
    Td365 = Ta363[Ti364].d;
    int green;
    green = min_caml_int_of_float_fun(Td365, NULL);
    int Ti366;
    Ti366 = 255;
    int green;
    if(green <= Ti366){
	green = green;
    }
    else{
	green = 255;
    }
    int Tu133;
    Tu133 = min_caml_print_byte_fun(green, NULL);
    Value* Ta367;

    int Ti368;
    Ti368 = 2;
    double Td369;
    Td369 = Ta367[Ti368].d;
    int blue;
    blue = min_caml_int_of_float_fun(Td369, NULL);
    int Ti370;
    Ti370 = 255;
    int blue;
    if(blue <= Ti370){
	blue = blue;
    }
    else{
	blue = 255;
    }
    result = min_caml_print_byte_fun(blue, NULL);
    return result;
}

int write_ppm_header_fun(int Tu135, Value *env){
    int result;
    int Ti344;
    Ti344 = 80;
    int Tu143;
    Tu143 = min_caml_print_byte_fun(Ti344, NULL);
    int Ti345;
    Ti345 = 48;
    int Ti346;
    Ti346 = 6;
    int Ti347;
    Ti347 = Ti345 + Ti346;
    int Tu142;
    Tu142 = min_caml_print_byte_fun(Ti347, NULL);
    int Ti348;
    Ti348 = 10;
    int Tu141;
    Tu141 = min_caml_print_byte_fun(Ti348, NULL);
    Value* Ta349;

    int Ti350;
    Ti350 = 0;
    int Ti351;
    Ti351 = Ta349[Ti350].i;
    int Tu140;
    printf("%d", Ti351);
    int Ti352;
    Ti352 = 32;
    int Tu139;
    Tu139 = min_caml_print_byte_fun(Ti352, NULL);
    Value* Ta353;

    int Ti354;
    Ti354 = 1;
    int Ti355;
    Ti355 = Ta353[Ti354].i;
    int Tu138;
    printf("%d", Ti355);
    int Ti356;
    Ti356 = 10;
    int Tu137;
    Tu137 = min_caml_print_byte_fun(Ti356, NULL);
    int Ti357;
    Ti357 = 255;
    int Tu136;
    printf("%d", Ti357);
    int Ti358;
    Ti358 = 10;
    result = min_caml_print_byte_fun(Ti358, NULL);
    return result;
}

int scan_point_fun(int scanx, Value *env){
    int result;
    Value* Ta247;

    int Ti248;
    Ti248 = 0;
    int Ti249;
    Ti249 = Ta247[Ti248].i;
    if(Ti249 <= scanx){
	result = 1;
    }
    else{
	double Td250;
	Td250 = min_caml_float_of_int_fun(scanx, NULL);
	Value* Ta251;

	int Ti252;
	Ti252 = 0;
	double Td253;
	Td253 = Ta251[Ti252].d;
	double Td254;
	Td254 = Td250 - Td253;
	Value* Ta255;

	int Ti256;
	Ti256 = 0;
	double Td257;
	Td257 = Ta255[Ti256].d;
	double sscanx;
	sscanx =  Td254 * Td257;
	Value* Ta258;

	int Ti259;
	Ti259 = 0;
	Value* Ta260;

	int Ti261;
	Ti261 = 1;
	double Td262;
	Td262 = Ta260[Ti261].d;
	double Td263;
	Td263 =  sscanx * Td262;
	Value* Ta264;

	int Ti265;
	Ti265 = 0;
	double Td266;
	Td266 = Ta264[Ti265].d;
	double Td267;
	Td267 = Td263 + Td266;
	int Tu157;
	Ta258[Ti259].d = Td267;
	Value* Ta268;

	int Ti269;
	Ti269 = 1;
	Value* Ta270;

	int Ti271;
	Ti271 = 0;
	double Td272;
	Td272 = Ta270[Ti271].d;
	Value* Ta273;

	int Ti274;
	Ti274 = 0;
	double Td275;
	Td275 = Ta273[Ti274].d;
	double Td276;
	Td276 =  Td272 * Td275;
	Value* Ta277;

	int Ti278;
	Ti278 = 1;
	double Td279;
	Td279 = Ta277[Ti278].d;
	double Td280;
	Td280 = Td276 - Td279;
	int Tu156;
	Ta268[Ti269].d = Td280;
	Value* Ta281;

	int Ti282;
	Ti282 = 2;
	double Td283;
	Td283 = -sscanx;
	Value* Ta284;

	int Ti285;
	Ti285 = 1;
	double Td286;
	Td286 = Ta284[Ti285].d;
	double Td287;
	Td287 =  Td283 * Td286;
	Value* Ta288;

	int Ti289;
	Ti289 = 2;
	double Td290;
	Td290 = Ta288[Ti289].d;
	double Td291;
	Td291 = Td287 + Td290;
	int Tu155;
	Ta281[Ti282].d = Td291;
	double Td292;
	Td292 = fsqr_fun(sscanx, NULL);
	Value* Ta293;

	int Ti294;
	Ti294 = 0;
	double Td295;
	Td295 = Ta293[Ti294].d;
	double Td296;
	Td296 = Td292 + Td295;
	double metric;
	metric = min_caml_sqrt_fun(Td296, NULL);
	Value* Ta297;

	int Ti298;
	Ti298 = 0;
	Value* Ta299;

	int Ti300;
	Ti300 = 0;
	double Td301;
	Td301 = Ta299[Ti300].d;
	double Td302;
	Td302 = Td301 / metric;
	int Tu154;
	Ta297[Ti298].d = Td302;
	Value* Ta303;

	int Ti304;
	Ti304 = 1;
	Value* Ta305;

	int Ti306;
	Ti306 = 1;
	double Td307;
	Td307 = Ta305[Ti306].d;
	double Td308;
	Td308 = Td307 / metric;
	int Tu153;
	Ta303[Ti304].d = Td308;
	Value* Ta309;

	int Ti310;
	Ti310 = 2;
	Value* Ta311;

	int Ti312;
	Ti312 = 2;
	double Td313;
	Td313 = Ta311[Ti312].d;
	double Td314;
	Td314 = Td313 / metric;
	int Tu152;
	Ta309[Ti310].d = Td314;
	Value* Ta315;

	int Ti316;
	Ti316 = 0;
	Value* Ta317;

	int Ti318;
	Ti318 = 0;
	double Td319;
	Td319 = Ta317[Ti318].d;
	int Tu151;
	Ta315[Ti316].d = Td319;
	Value* Ta320;

	int Ti321;
	Ti321 = 1;
	Value* Ta322;

	int Ti323;
	Ti323 = 1;
	double Td324;
	Td324 = Ta322[Ti323].d;
	int Tu150;
	Ta320[Ti321].d = Td324;
	Value* Ta325;

	int Ti326;
	Ti326 = 2;
	Value* Ta327;

	int Ti328;
	Ti328 = 2;
	double Td329;
	Td329 = Ta327[Ti328].d;
	int Tu149;
	Ta325[Ti326].d = Td329;
	Value* Ta330;

	int Ti331;
	Ti331 = 0;
	double Td332;
	Td332 = 0.000000;
	int Tu148;
	Ta330[Ti331].d = Td332;
	Value* Ta333;

	int Ti334;
	Ti334 = 1;
	double Td335;
	Td335 = 0.000000;
	int Tu147;
	Ta333[Ti334].d = Td335;
	Value* Ta336;

	int Ti337;
	Ti337 = 2;
	double Td338;
	Td338 = 0.000000;
	int Tu146;
	Ta336[Ti337].d = Td338;
	int Ti339;
	Ti339 = 0;
	double Td340;
	Td340 = 1.000000;
	int Tu145;
	Tu145 = raytracing_fun(Ti339, Td340, NULL);
	int Tu341;
	Tu341 = 1;
	int Tu144;
	Tu144 = write_rgb_fun(Tu341, NULL);
	int Ti342;
	Ti342 = 1;
	int Ti343;
	Ti343 = scanx + Ti342;
	result = scan_point_fun(Ti343, NULL);
    }
    return result;
}

int scan_line_fun(int scany, Value *env){
    int result;
    Value* Ta195;

    int Ti196;
    Ti196 = 0;
    int Ti197;
    Ti197 = Ta195[Ti196].i;
    if(Ti197 <= scany){
	result = 1;
    }
    else{
	Value* Ta198;

	int Ti199;
	Ti199 = 0;
	Value* Ta200;

	int Ti201;
	Ti201 = 0;
	double Td202;
	Td202 = Ta200[Ti201].d;
	double Td203;
	Td203 = 1.000000;
	double Td204;
	Td204 = Td202 - Td203;
	double Td205;
	Td205 = min_caml_float_of_int_fun(scany, NULL);
	double t;
	t = Td204 - Td205;
	Value* Ta206;

	int Ti207;
	Ti207 = 0;
	double Td208;
	Td208 = Ta206[Ti207].d;
	double Td209;
	Td209 =  Td208 * t;
	int Tu162;
	Ta198[Ti199].d = Td209;
	Value* Ta210;

	int Ti211;
	Ti211 = 0;
	Value* Ta212;

	int Ti213;
	Ti213 = 0;
	double Td214;
	Td214 = Ta212[Ti213].d;
	double Td215;
	Td215 = fsqr_fun(Td214, NULL);
	double Td216;
	Td216 = 40000.000000;
	double Td217;
	Td217 = Td215 + Td216;
	int Tu161;
	Ta210[Ti211].d = Td217;
	Value* Ta218;

	int Ti219;
	Ti219 = 0;
	double Td220;
	Td220 = Ta218[Ti219].d;
	Value* Ta221;

	int Ti222;
	Ti222 = 0;
	double Td223;
	Td223 = Ta221[Ti222].d;
	double t1;
	t1 =  Td220 * Td223;
	Value* Ta224;

	int Ti225;
	Ti225 = 0;
	Value* Ta226;

	int Ti227;
	Ti227 = 1;
	double Td228;
	Td228 = Ta226[Ti227].d;
	double Td229;
	Td229 =  t1 * Td228;
	Value* Ta230;

	int Ti231;
	Ti231 = 0;
	double Td232;
	Td232 = Ta230[Ti231].d;
	double Td233;
	Td233 = Td229 - Td232;
	int Tu160;
	Ta224[Ti225].d = Td233;
	Value* Ta234;

	int Ti235;
	Ti235 = 2;
	Value* Ta236;

	int Ti237;
	Ti237 = 1;
	double Td238;
	Td238 = Ta236[Ti237].d;
	double Td239;
	Td239 =  t1 * Td238;
	Value* Ta240;

	int Ti241;
	Ti241 = 2;
	double Td242;
	Td242 = Ta240[Ti241].d;
	double Td243;
	Td243 = Td239 - Td242;
	int Tu159;
	Ta234[Ti235].d = Td243;
	int Ti244;
	Ti244 = 0;
	int Tu158;
	Tu158 = scan_point_fun(Ti244, NULL);
	int Ti245;
	Ti245 = 1;
	int Ti246;
	Ti246 = scany + Ti245;
	result = scan_line_fun(Ti246, NULL);
    }
    return result;
}

int scan_start_fun(int Tu163, Value *env){
    int result;
    int Tu182;
    Tu182 = 1;
    int Tu166;
    Tu166 = write_ppm_header_fun(Tu182, NULL);
    Value* Ta183;

    int Ti184;
    Ti184 = 0;
    int Ti185;
    Ti185 = Ta183[Ti184].i;
    double sizex;
    sizex = min_caml_float_of_int_fun(Ti185, NULL);
    Value* Ta186;

    int Ti187;
    Ti187 = 0;
    double Td188;
    Td188 = 128.000000;
    double Td189;
    Td189 = Td188 / sizex;
    int Tu165;
    Ta186[Ti187].d = Td189;
    Value* Ta190;

    int Ti191;
    Ti191 = 0;
    double Td192;
    Td192 = 2.000000;
    double Td193;
    Td193 = sizex / Td192;
    int Tu164;
    Ta190[Ti191].d = Td193;
    int Ti194;
    Ti194 = 0;
    result = scan_line_fun(Ti194, NULL);
    return result;
}

int rt_fun(int size_x, int size_y, bool debug_p, Value *env){
    int result;
    Value* Ta174;

    int Ti175;
    Ti175 = 0;
    int Tu170;
    Ta174[Ti175].i = size_x;
    Value* Ta176;

    int Ti177;
    Ti177 = 1;
    int Tu169;
    Ta176[Ti177].i = size_y;
    Value* Ta178;

    int Ti179;
    Ti179 = 0;
    int Tu168;
    Ta178[Ti179]. = debug_p;
    int Tu180;
    Tu180 = 1;
    int Tu167;
    Tu167 = read_parameter_fun(Tu180, NULL);
    int Tu181;
    Tu181 = 1;
    result = scan_start_fun(Tu181, NULL);
    return result;
}

int main(){
    int ans = 1;
    int Ti171;
    Ti171 = 768;
    int Ti172;
    Ti172 = 768;
    int Ti173;
    Ti173 = 0;
    ans = rt_fun(Ti171, Ti172, Ti173, NULL);
    return ans;
}
