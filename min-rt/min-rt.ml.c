#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x6581, int size_y6582, bool debug_p6583, Value *env);
typedef int fun_int_int_double_Value(int nref6568, double energy6569, Value *env);
typedef int fun_int_array_array_double_Value(Value* v16564, Value* v26565, double w6566, Value *env);
typedef double fun_double_array_array_Value(Value* v16561, Value* v26562, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint6542, Value* vscan6543, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs6533, Value* and_group6534, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs6521, Value* and_group6522, Value* p6523, Value *env);
typedef bool fun_bool_int_array_Value(int ofs6518, Value* iand6519, Value *env);
typedef int fun_int_int_array_array_Value(int index6506, Value* l6507, Value* p6508, Value *env);
typedef double fun_double_tuple_array_Value(int* m6491, Value* v6492, Value *env);
typedef int fun_int_tuple_array_Value(int* m6485, Value* l6486, Value *env);
typedef Value* fun_array_int_Value(int length6479, Value *env);
typedef bool fun_bool_int_Value(int n6471, Value *env);
typedef int fun_int_int_Value(int Tu44426469, Value *env);
typedef int fun_int_array_bool_Value(Value* v6462, bool inv6463, Value *env);
typedef double fun_double_tuple_Value(int* m6434, Value *env);
typedef bool fun_bool_tuple_Value(int* m6430, Value *env);
typedef int fun_int_tuple_Value(int* m6424, Value *env);
typedef double fun_double_double_Value(double x6420, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x6417, bool y6418, Value *env);

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

bool xor6416_fun(bool x6417, bool y6418, Value *env){
bool result;
int Ti64148877;
Ti64148877 = 0;
if(x6417 == Ti64148877){
result = y6418;
}
else{
int Ti64158878;
Ti64158878 = 0;
if(y6418 == Ti64158878){
result = 1;
}
else{
result = 0;
}
}
return result;
}

double fsqr6419_fun(double x6420, Value *env){
double result;
result =  x6420 * x6420;
return result;
}

double fhalf6421_fun(double x6422, Value *env){
double result;
double Td64138876;
Td64138876 = 2.000000;
result = x6422 / Td64138876;
return result;
}

int o_texturetype6423_fun(int* m6424, Value *env){
int result;
int m_tex8866 = m6424[0];
int xm_shape8867 = m6424[1];
int xm_surface8868 = m6424[2];
int xm_isrot8869 = m6424[3];
Value* xm_abc8870 = m6424[4];
Value* xm_xyz8871 = m6424[5];
bool xm_invert8872 = m6424[6];
Value* xm_surfparams8873 = m6424[7];
Value* xm_color8874 = m6424[8];
Value* xm_rot1238875 = m6424[9];
result = m_tex8866;
return result;
}

int o_form6425_fun(int* m6426, Value *env){
int result;
int xm_tex8856 = m6426[0];
int m_shape8857 = m6426[1];
int xm_surface8858 = m6426[2];
int xm_isrot8859 = m6426[3];
Value* xm_abc8860 = m6426[4];
Value* xm_xyz8861 = m6426[5];
bool xm_invert8862 = m6426[6];
Value* xm_surfparams8863 = m6426[7];
Value* xm_color8864 = m6426[8];
Value* xm_rot1238865 = m6426[9];
result = m_shape8857;
return result;
}

int o_reflectiontype6427_fun(int* m6428, Value *env){
int result;
int xm_tex8846 = m6428[0];
int xm_shape8847 = m6428[1];
int m_surface8848 = m6428[2];
int xm_isrot8849 = m6428[3];
Value* xm_abc8850 = m6428[4];
Value* xm_xyz8851 = m6428[5];
bool xm_invert8852 = m6428[6];
Value* xm_surfparams8853 = m6428[7];
Value* xm_color8854 = m6428[8];
Value* xm_rot1238855 = m6428[9];
result = m_surface8848;
return result;
}

bool o_isinvert6429_fun(int* m6430, Value *env){
bool result;
int m_tex8836 = m6430[0];
int m_shape8837 = m6430[1];
int m_surface8838 = m6430[2];
int m_isrot8839 = m6430[3];
Value* xm_abc8840 = m6430[4];
Value* xm_xyz8841 = m6430[5];
bool m_invert8842 = m6430[6];
Value* xm_surfparams8843 = m6430[7];
Value* xm_color8844 = m6430[8];
Value* xm_rot1238845 = m6430[9];
result = m_invert8842;
return result;
}

int o_isrot6431_fun(int* m6432, Value *env){
int result;
int xm_tex8826 = m6432[0];
int xm_shape8827 = m6432[1];
int xm_surface8828 = m6432[2];
int m_isrot8829 = m6432[3];
Value* xm_abc8830 = m6432[4];
Value* xm_xyz8831 = m6432[5];
bool xm_invert8832 = m6432[6];
Value* xm_surfparams8833 = m6432[7];
Value* xm_color8834 = m6432[8];
Value* xm_rot1238835 = m6432[9];
result = m_isrot8829;
return result;
}

double o_param_a6433_fun(int* m6434, Value *env){
double result;
int xm_tex8815 = m6434[0];
int xm_shape8816 = m6434[1];
int xm_surface8817 = m6434[2];
int xm_isrot8818 = m6434[3];
Value* m_abc8819 = m6434[4];
Value* xm_xyz8820 = m6434[5];
bool xm_invert8821 = m6434[6];
Value* xm_surfparams8822 = m6434[7];
Value* xm_color8823 = m6434[8];
Value* xm_rot1238824 = m6434[9];
int Ti64128825;
Ti64128825 = 0;
result = m_abc8819[Ti64128825].d;
return result;
}

double o_param_b6435_fun(int* m6436, Value *env){
double result;
int xm_tex8804 = m6436[0];
int xm_shape8805 = m6436[1];
int xm_surface8806 = m6436[2];
int xm_isrot8807 = m6436[3];
Value* m_abc8808 = m6436[4];
Value* xm_xyz8809 = m6436[5];
bool xm_invert8810 = m6436[6];
Value* xm_surfparams8811 = m6436[7];
Value* xm_color8812 = m6436[8];
Value* xm_rot1238813 = m6436[9];
int Ti64118814;
Ti64118814 = 1;
result = m_abc8808[Ti64118814].d;
return result;
}

double o_param_c6437_fun(int* m6438, Value *env){
double result;
int xm_tex8793 = m6438[0];
int xm_shape8794 = m6438[1];
int xm_surface8795 = m6438[2];
int xm_isrot8796 = m6438[3];
Value* m_abc8797 = m6438[4];
Value* xm_xyz8798 = m6438[5];
bool xm_invert8799 = m6438[6];
Value* xm_surfparams8800 = m6438[7];
Value* xm_color8801 = m6438[8];
Value* xm_rot1238802 = m6438[9];
int Ti64108803;
Ti64108803 = 2;
result = m_abc8797[Ti64108803].d;
return result;
}

double o_param_x6439_fun(int* m6440, Value *env){
double result;
int xm_tex8782 = m6440[0];
int xm_shape8783 = m6440[1];
int xm_surface8784 = m6440[2];
int xm_isrot8785 = m6440[3];
Value* xm_abc8786 = m6440[4];
Value* m_xyz8787 = m6440[5];
bool xm_invert8788 = m6440[6];
Value* xm_surfparams8789 = m6440[7];
Value* xm_color8790 = m6440[8];
Value* xm_rot1238791 = m6440[9];
int Ti64098792;
Ti64098792 = 0;
result = m_xyz8787[Ti64098792].d;
return result;
}

double o_param_y6441_fun(int* m6442, Value *env){
double result;
int xm_tex8771 = m6442[0];
int xm_shape8772 = m6442[1];
int xm_surface8773 = m6442[2];
int xm_isrot8774 = m6442[3];
Value* xm_abc8775 = m6442[4];
Value* m_xyz8776 = m6442[5];
bool xm_invert8777 = m6442[6];
Value* xm_surfparams8778 = m6442[7];
Value* xm_color8779 = m6442[8];
Value* xm_rot1238780 = m6442[9];
int Ti64088781;
Ti64088781 = 1;
result = m_xyz8776[Ti64088781].d;
return result;
}

double o_param_z6443_fun(int* m6444, Value *env){
double result;
int xm_tex8760 = m6444[0];
int xm_shape8761 = m6444[1];
int xm_surface8762 = m6444[2];
int xm_isrot8763 = m6444[3];
Value* xm_abc8764 = m6444[4];
Value* m_xyz8765 = m6444[5];
bool xm_invert8766 = m6444[6];
Value* xm_surfparams8767 = m6444[7];
Value* xm_color8768 = m6444[8];
Value* xm_rot1238769 = m6444[9];
int Ti64078770;
Ti64078770 = 2;
result = m_xyz8765[Ti64078770].d;
return result;
}

double o_diffuse6445_fun(int* m6446, Value *env){
double result;
int xm_tex8749 = m6446[0];
int xm_shape8750 = m6446[1];
int xm_surface8751 = m6446[2];
int xm_isrot8752 = m6446[3];
Value* xm_abc8753 = m6446[4];
Value* xm_xyz8754 = m6446[5];
bool xm_invert8755 = m6446[6];
Value* m_surfparams8756 = m6446[7];
Value* xm_color8757 = m6446[8];
Value* xm_rot1238758 = m6446[9];
int Ti64068759;
Ti64068759 = 0;
result = m_surfparams8756[Ti64068759].d;
return result;
}

double o_hilight6447_fun(int* m6448, Value *env){
double result;
int xm_tex8738 = m6448[0];
int xm_shape8739 = m6448[1];
int xm_surface8740 = m6448[2];
int xm_isrot8741 = m6448[3];
Value* xm_abc8742 = m6448[4];
Value* xm_xyz8743 = m6448[5];
bool xm_invert8744 = m6448[6];
Value* m_surfparams8745 = m6448[7];
Value* xm_color8746 = m6448[8];
Value* xm_rot1238747 = m6448[9];
int Ti64058748;
Ti64058748 = 1;
result = m_surfparams8745[Ti64058748].d;
return result;
}

double o_color_red6449_fun(int* m6450, Value *env){
double result;
int xm_tex8727 = m6450[0];
int xm_shape8728 = m6450[1];
int m_surface8729 = m6450[2];
int xm_isrot8730 = m6450[3];
Value* xm_abc8731 = m6450[4];
Value* xm_xyz8732 = m6450[5];
bool xm_invert8733 = m6450[6];
Value* xm_surfparams8734 = m6450[7];
Value* m_color8735 = m6450[8];
Value* xm_rot1238736 = m6450[9];
int Ti64048737;
Ti64048737 = 0;
result = m_color8735[Ti64048737].d;
return result;
}

double o_color_green6451_fun(int* m6452, Value *env){
double result;
int xm_tex8716 = m6452[0];
int xm_shape8717 = m6452[1];
int m_surface8718 = m6452[2];
int xm_isrot8719 = m6452[3];
Value* xm_abc8720 = m6452[4];
Value* xm_xyz8721 = m6452[5];
bool xm_invert8722 = m6452[6];
Value* xm_surfparams8723 = m6452[7];
Value* m_color8724 = m6452[8];
Value* xm_rot1238725 = m6452[9];
int Ti64038726;
Ti64038726 = 1;
result = m_color8724[Ti64038726].d;
return result;
}

double o_color_blue6453_fun(int* m6454, Value *env){
double result;
int xm_tex8705 = m6454[0];
int xm_shape8706 = m6454[1];
int m_surface8707 = m6454[2];
int xm_isrot8708 = m6454[3];
Value* xm_abc8709 = m6454[4];
Value* xm_xyz8710 = m6454[5];
bool xm_invert8711 = m6454[6];
Value* xm_surfparams8712 = m6454[7];
Value* m_color8713 = m6454[8];
Value* xm_rot1238714 = m6454[9];
int Ti64028715;
Ti64028715 = 2;
result = m_color8713[Ti64028715].d;
return result;
}

double o_param_r16455_fun(int* m6456, Value *env){
double result;
int xm_tex8694 = m6456[0];
int xm_shape8695 = m6456[1];
int xm_surface8696 = m6456[2];
int xm_isrot8697 = m6456[3];
Value* xm_abc8698 = m6456[4];
Value* xm_xyz8699 = m6456[5];
bool xm_invert8700 = m6456[6];
Value* xm_surfparams8701 = m6456[7];
Value* xm_color8702 = m6456[8];
Value* m_rot1238703 = m6456[9];
int Ti64018704;
Ti64018704 = 0;
result = m_rot1238703[Ti64018704].d;
return result;
}

double o_param_r26457_fun(int* m6458, Value *env){
double result;
int xm_tex8683 = m6458[0];
int xm_shape8684 = m6458[1];
int xm_surface8685 = m6458[2];
int xm_isrot8686 = m6458[3];
Value* xm_abc8687 = m6458[4];
Value* xm_xyz8688 = m6458[5];
bool xm_invert8689 = m6458[6];
Value* xm_surfparams8690 = m6458[7];
Value* xm_color8691 = m6458[8];
Value* m_rot1238692 = m6458[9];
int Ti64008693;
Ti64008693 = 1;
result = m_rot1238692[Ti64008693].d;
return result;
}

double o_param_r36459_fun(int* m6460, Value *env){
double result;
int xm_tex8672 = m6460[0];
int xm_shape8673 = m6460[1];
int xm_surface8674 = m6460[2];
int xm_isrot8675 = m6460[3];
Value* xm_abc8676 = m6460[4];
Value* xm_xyz8677 = m6460[5];
bool xm_invert8678 = m6460[6];
Value* xm_surfparams8679 = m6460[7];
Value* xm_color8680 = m6460[8];
Value* m_rot1238681 = m6460[9];
int Ti63998682;
Ti63998682 = 2;
result = m_rot1238681[Ti63998682].d;
return result;
}

int normalize_vector6461_fun(Value* v6462, bool inv6463, Value *env){
int result;
int Ti63758671;
Ti63758671 = 0;
double Td63768670;
Td63768670 = v6462[Ti63758671].d;
double Td63778666;
Td63778666 = fsqr6419_fun(Td63768670, NULL);
int Ti63788669;
Ti63788669 = 1;
double Td63798668;
Td63798668 = v6462[Ti63788669].d;
double Td63808667;
Td63808667 = fsqr6419_fun(Td63798668, NULL);
double Td63818662;
Td63818662 = Td63778666 + Td63808667;
int Ti63828665;
Ti63828665 = 2;
double Td63838664;
Td63838664 = v6462[Ti63828665].d;
double Td63848663;
Td63848663 = fsqr6419_fun(Td63838664, NULL);
double Td63858661;
Td63858661 = Td63818662 + Td63848663;
double n08644;
n08644 = sqrt(Td63858661);
int Ti63868660;
Ti63868660 = 0;
double n8645;
if(inv6463 == Ti63868660){
n8645 = n08644;
}
else{
n8645 = -n08644;
}
int Ti63878656;
Ti63878656 = 0;
int Ti63888659;
Ti63888659 = 0;
double Td63898658;
Td63898658 = v6462[Ti63888659].d;
double Td63908657;
Td63908657 = Td63898658 / n8645;
int Tu44418646;
v6462[Ti63878656].d = Td63908657;
int Ti63918652;
Ti63918652 = 1;
int Ti63928655;
Ti63928655 = 1;
double Td63938654;
Td63938654 = v6462[Ti63928655].d;
double Td63948653;
Td63948653 = Td63938654 / n8645;
int Tu44408647;
v6462[Ti63918652].d = Td63948653;
int Ti63958648;
Ti63958648 = 2;
int Ti63968651;
Ti63968651 = 2;
double Td63978650;
Td63978650 = v6462[Ti63968651].d;
double Td63988649;
Td63988649 = Td63978650 / n8645;
v6462[Ti63958648].d = Td63988649;
return result;
}

double sgn6464_fun(double x6465, Value *env){
double result;
double Td63748643;
Td63748643 = 0.000000;
if(x6465 <= Td63748643){
result = -1.000000;
}
else{
result = 1.000000;
}
return result;
}

double rad6466_fun(double x6467, Value *env){
double result;
double Td63738642;
Td63738642 = 0.017453;
result =  x6467 * Td63738642;
return result;
}

int read_environ6468_fun(int Tu44426469, Value *env){
int result;
Value* Ta62708638;
Ta62708638 = screen;
int Ti62718639;
Ti62718639 = 0;
int Tu62728641;
Tu62728641 = 1;
double Td62738640;
scanf("%f", &Td62738640);
int Tu44588514;
Ta62708638[Ti62718639].d = Td62738640;
Value* Ta62748634;
Ta62748634 = screen;
int Ti62758635;
Ti62758635 = 1;
int Tu62768637;
Tu62768637 = 1;
double Td62778636;
scanf("%f", &Td62778636);
int Tu44578515;
Ta62748634[Ti62758635].d = Td62778636;
Value* Ta62788630;
Ta62788630 = screen;
int Ti62798631;
Ti62798631 = 2;
int Tu62808633;
Tu62808633 = 1;
double Td62818632;
scanf("%f", &Td62818632);
int Tu44568516;
Ta62788630[Ti62798631].d = Td62818632;
int Tu62828629;
Tu62828629 = 1;
double Td62838628;
scanf("%f", &Td62838628);
double v18517;
v18517 = rad6466_fun(Td62838628, NULL);
Value* Ta62848625;
Ta62848625 = cos_v;
int Ti62858626;
Ti62858626 = 0;
double Td62868627;
Td62868627 = cos(v18517);
int Tu44558518;
Ta62848625[Ti62858626].d = Td62868627;
Value* Ta62878622;
Ta62878622 = sin_v;
int Ti62888623;
Ti62888623 = 0;
double Td62898624;
Td62898624 = sin(v18517);
int Tu44548519;
Ta62878622[Ti62888623].d = Td62898624;
int Tu62908621;
Tu62908621 = 1;
double Td62918620;
scanf("%f", &Td62918620);
double v28520;
v28520 = rad6466_fun(Td62918620, NULL);
Value* Ta62928617;
Ta62928617 = cos_v;
int Ti62938618;
Ti62938618 = 1;
double Td62948619;
Td62948619 = cos(v28520);
int Tu44538521;
Ta62928617[Ti62938618].d = Td62948619;
Value* Ta62958614;
Ta62958614 = sin_v;
int Ti62968615;
Ti62968615 = 1;
double Td62978616;
Td62978616 = sin(v28520);
int Tu44528522;
Ta62958614[Ti62968615].d = Td62978616;
int Tu62988613;
Tu62988613 = 1;
double nl8523;
scanf("%f", &nl8523);
int Tu62998612;
Tu62998612 = 1;
double Td63008611;
scanf("%f", &Td63008611);
double l18524;
l18524 = rad6466_fun(Td63008611, NULL);
double sl18525;
sl18525 = sin(l18524);
Value* Ta63018608;
Ta63018608 = light;
int Ti63028609;
Ti63028609 = 1;
double Td63038610;
Td63038610 = -sl18525;
int Tu44518526;
Ta63018608[Ti63028609].d = Td63038610;
int Tu63048607;
Tu63048607 = 1;
double Td63058606;
scanf("%f", &Td63058606);
double l28527;
l28527 = rad6466_fun(Td63058606, NULL);
double cl18528;
cl18528 = cos(l18524);
double sl28529;
sl28529 = sin(l28527);
Value* Ta63068603;
Ta63068603 = light;
int Ti63078604;
Ti63078604 = 0;
double Td63088605;
Td63088605 =  cl18528 * sl28529;
int Tu44508530;
Ta63068603[Ti63078604].d = Td63088605;
double cl28531;
cl28531 = cos(l28527);
Value* Ta63098600;
Ta63098600 = light;
int Ti63108601;
Ti63108601 = 2;
double Td63118602;
Td63118602 =  cl18528 * cl28531;
int Tu44498532;
Ta63098600[Ti63108601].d = Td63118602;
Value* Ta63128596;
Ta63128596 = beam;
int Ti63138597;
Ti63138597 = 0;
int Tu63148599;
Tu63148599 = 1;
double Td63158598;
scanf("%f", &Td63158598);
int Tu44488533;
Ta63128596[Ti63138597].d = Td63158598;
Value* Ta63168585;
Ta63168585 = vp;
int Ti63178586;
Ti63178586 = 0;
Value* Ta63188594;
Ta63188594 = cos_v;
int Ti63198595;
Ti63198595 = 0;
double Td63208590;
Td63208590 = Ta63188594[Ti63198595].d;
Value* Ta63218592;
Ta63218592 = sin_v;
int Ti63228593;
Ti63228593 = 1;
double Td63238591;
Td63238591 = Ta63218592[Ti63228593].d;
double Td63248588;
Td63248588 =  Td63208590 * Td63238591;
double Td63258589;
Td63258589 = -200.000000;
double Td63268587;
Td63268587 =  Td63248588 * Td63258589;
int Tu44478534;
Ta63168585[Ti63178586].d = Td63268587;
Value* Ta63278577;
Ta63278577 = vp;
int Ti63288578;
Ti63288578 = 1;
Value* Ta63298583;
Ta63298583 = sin_v;
int Ti63308584;
Ti63308584 = 0;
double Td63318582;
Td63318582 = Ta63298583[Ti63308584].d;
double Td63328580;
Td63328580 = -Td63318582;
double Td63338581;
Td63338581 = -200.000000;
double Td63348579;
Td63348579 =  Td63328580 * Td63338581;
int Tu44468535;
Ta63278577[Ti63288578].d = Td63348579;
Value* Ta63358566;
Ta63358566 = vp;
int Ti63368567;
Ti63368567 = 2;
Value* Ta63378575;
Ta63378575 = cos_v;
int Ti63388576;
Ti63388576 = 0;
double Td63398571;
Td63398571 = Ta63378575[Ti63388576].d;
Value* Ta63408573;
Ta63408573 = cos_v;
int Ti63418574;
Ti63418574 = 1;
double Td63428572;
Td63428572 = Ta63408573[Ti63418574].d;
double Td63438569;
Td63438569 =  Td63398571 * Td63428572;
double Td63448570;
Td63448570 = -200.000000;
double Td63458568;
Td63458568 =  Td63438569 * Td63448570;
int Tu44458536;
Ta63358566[Ti63368567].d = Td63458568;
Value* Ta63468557;
Ta63468557 = view;
int Ti63478558;
Ti63478558 = 0;
Value* Ta63488564;
Ta63488564 = vp;
int Ti63498565;
Ti63498565 = 0;
double Td63508560;
Td63508560 = Ta63488564[Ti63498565].d;
Value* Ta63518562;
Ta63518562 = screen;
int Ti63528563;
Ti63528563 = 0;
double Td63538561;
Td63538561 = Ta63518562[Ti63528563].d;
double Td63548559;
Td63548559 = Td63508560 + Td63538561;
int Tu44448537;
Ta63468557[Ti63478558].d = Td63548559;
Value* Ta63558548;
Ta63558548 = view;
int Ti63568549;
Ti63568549 = 1;
Value* Ta63578555;
Ta63578555 = vp;
int Ti63588556;
Ti63588556 = 1;
double Td63598551;
Td63598551 = Ta63578555[Ti63588556].d;
Value* Ta63608553;
Ta63608553 = screen;
int Ti63618554;
Ti63618554 = 1;
double Td63628552;
Td63628552 = Ta63608553[Ti63618554].d;
double Td63638550;
Td63638550 = Td63598551 + Td63628552;
int Tu44438538;
Ta63558548[Ti63568549].d = Td63638550;
Value* Ta63648539;
Ta63648539 = view;
int Ti63658540;
Ti63658540 = 2;
Value* Ta63668546;
Ta63668546 = vp;
int Ti63678547;
Ti63678547 = 2;
double Td63688542;
Td63688542 = Ta63668546[Ti63678547].d;
Value* Ta63698544;
Ta63698544 = screen;
int Ti63708545;
Ti63708545 = 2;
double Td63718543;
Td63718543 = Ta63698544[Ti63708545].d;
double Td63728541;
Td63728541 = Td63688542 + Td63718543;
Ta63648539[Ti63658540].d = Td63728541;
return result;
}

bool read_nth_object6470_fun(int n6471, Value *env){
bool result;
int Tu58808513;
Tu58808513 = 1;
int texture8067;
scanf("%d", &texture8067);
int Ti58818512;
Ti58818512 = 1;
int Ti58828068;
Ti58828068 = -Ti58818512;
if(texture8067 == Ti58828068){
result = 0;
}
else{
int Tu58838511;
Tu58838511 = 1;
int form8069;
scanf("%d", &form8069);
int Tu58848510;
Tu58848510 = 1;
int refltype8070;
scanf("%d", &refltype8070);
int Tu58858509;
Tu58858509 = 1;
int isrot_p8071;
scanf("%d", &isrot_p8071);
int Ti58868507;
Ti58868507 = 3;
double Td58878508;
Td58878508 = 0.000000;
Value* abc8072;
make_double_array(&abc8072, Ti58868507, Td58878508);
int Ti58888504;
Ti58888504 = 0;
int Tu58898506;
Tu58898506 = 1;
double Td58908505;
scanf("%f", &Td58908505);
int Tu44978073;
abc8072[Ti58888504].d = Td58908505;
int Ti58918501;
Ti58918501 = 1;
int Tu58928503;
Tu58928503 = 1;
double Td58938502;
scanf("%f", &Td58938502);
int Tu44968074;
abc8072[Ti58918501].d = Td58938502;
int Ti58948498;
Ti58948498 = 2;
int Tu58958500;
Tu58958500 = 1;
double Td58968499;
scanf("%f", &Td58968499);
int Tu44958075;
abc8072[Ti58948498].d = Td58968499;
int Ti58978496;
Ti58978496 = 3;
double Td58988497;
Td58988497 = 0.000000;
Value* xyz8076;
make_double_array(&xyz8076, Ti58978496, Td58988497);
int Ti58998493;
Ti58998493 = 0;
int Tu59008495;
Tu59008495 = 1;
double Td59018494;
scanf("%f", &Td59018494);
int Tu44948077;
xyz8076[Ti58998493].d = Td59018494;
int Ti59028490;
Ti59028490 = 1;
int Tu59038492;
Tu59038492 = 1;
double Td59048491;
scanf("%f", &Td59048491);
int Tu44938078;
xyz8076[Ti59028490].d = Td59048491;
int Ti59058487;
Ti59058487 = 2;
int Tu59068489;
Tu59068489 = 1;
double Td59078488;
scanf("%f", &Td59078488);
int Tu44928079;
xyz8076[Ti59058487].d = Td59078488;
double Td59088484;
Td59088484 = 0.000000;
int Tu59098486;
Tu59098486 = 1;
double Td59108485;
scanf("%f", &Td59108485);
bool m_invert8080;
if(Td59088484 <= Td59108485){
m_invert8080 = 0;
}
else{
m_invert8080 = 1;
}
int Ti59118482;
Ti59118482 = 2;
double Td59128483;
Td59128483 = 0.000000;
Value* reflparam8081;
make_double_array(&reflparam8081, Ti59118482, Td59128483);
int Ti59138479;
Ti59138479 = 0;
int Tu59148481;
Tu59148481 = 1;
double Td59158480;
scanf("%f", &Td59158480);
int Tu44918082;
reflparam8081[Ti59138479].d = Td59158480;
int Ti59168476;
Ti59168476 = 1;
int Tu59178478;
Tu59178478 = 1;
double Td59188477;
scanf("%f", &Td59188477);
int Tu44908083;
reflparam8081[Ti59168476].d = Td59188477;
int Ti59198474;
Ti59198474 = 3;
double Td59208475;
Td59208475 = 0.000000;
Value* color8084;
make_double_array(&color8084, Ti59198474, Td59208475);
int Ti59218471;
Ti59218471 = 0;
int Tu59228473;
Tu59228473 = 1;
double Td59238472;
scanf("%f", &Td59238472);
int Tu44898085;
color8084[Ti59218471].d = Td59238472;
int Ti59248468;
Ti59248468 = 1;
int Tu59258470;
Tu59258470 = 1;
double Td59268469;
scanf("%f", &Td59268469);
int Tu44888086;
color8084[Ti59248468].d = Td59268469;
int Ti59278465;
Ti59278465 = 2;
int Tu59288467;
Tu59288467 = 1;
double Td59298466;
scanf("%f", &Td59298466);
int Tu44878087;
color8084[Ti59278465].d = Td59298466;
int Ti59308463;
Ti59308463 = 3;
double Td59318464;
Td59318464 = 0.000000;
Value* rotation8088;
make_double_array(&rotation8088, Ti59308463, Td59318464);
int Ti59328448;
Ti59328448 = 0;
int Tu44868089;
if(isrot_p8071 == Ti59328448){
Tu44868089 = 1;
}
else{
int Ti59338459;
Ti59338459 = 0;
int Tu59348462;
Tu59348462 = 1;
double Td59358461;
scanf("%f", &Td59358461);
double Td59368460;
Td59368460 = rad6466_fun(Td59358461, NULL);
int Tu44608449;
rotation8088[Ti59338459].d = Td59368460;
int Ti59378455;
Ti59378455 = 1;
int Tu59388458;
Tu59388458 = 1;
double Td59398457;
scanf("%f", &Td59398457);
double Td59408456;
Td59408456 = rad6466_fun(Td59398457, NULL);
int Tu44598450;
rotation8088[Ti59378455].d = Td59408456;
int Ti59418451;
Ti59418451 = 2;
int Tu59428454;
Tu59428454 = 1;
double Td59438453;
scanf("%f", &Td59438453);
double Td59448452;
Td59448452 = rad6466_fun(Td59438453, NULL);
rotation8088[Ti59418451].d = Td59448452;
}
int Ti59458447;
Ti59458447 = 2;
bool m_invert28090;
if(form8069 == Ti59458447){
m_invert28090 = 1;
}
else{
m_invert28090 = m_invert8080;
}
int* obj8091;
obj8091 = malloc(10 * sizeof(int));
obj8091[0] = texture8067;
obj8091[1] = form8069;
obj8091[2] = refltype8070;
obj8091[3] = isrot_p8071;
obj8091[4] = abc8072;
obj8091[5] = xyz8076;
obj8091[6] = m_invert28090;
obj8091[7] = reflparam8081;
obj8091[8] = color8084;
obj8091[9] = rotation8088;

Value* Ta59468446;
Ta59468446 = objects;
int Tu44858092;
Ta59468446[n6471].a = obj8091;
int Ti59478419;
Ti59478419 = 3;
int Tu44848093;
if(form8069 == Ti59478419){
int Ti59488445;
Ti59488445 = 0;
double a8423;
a8423 = abc8072[Ti59488445].d;
int Ti59498440;
Ti59498440 = 0;
double Td59508442;
Td59508442 = 0.000000;
double Td59538441;
if(Td59508442 == a8423){
Td59538441 = 0.000000;
}
else{
double Td59518443;
Td59518443 = sgn6464_fun(a8423, NULL);
double Td59528444;
Td59528444 = fsqr6419_fun(a8423, NULL);
Td59538441 = Td59518443 / Td59528444;
}
int Tu44628424;
abc8072[Ti59498440].d = Td59538441;
int Ti59548439;
Ti59548439 = 1;
double b8425;
b8425 = abc8072[Ti59548439].d;
int Ti59558434;
Ti59558434 = 1;
double Td59568436;
Td59568436 = 0.000000;
double Td59598435;
if(Td59568436 == b8425){
Td59598435 = 0.000000;
}
else{
double Td59578437;
Td59578437 = sgn6464_fun(b8425, NULL);
double Td59588438;
Td59588438 = fsqr6419_fun(b8425, NULL);
Td59598435 = Td59578437 / Td59588438;
}
int Tu44618426;
abc8072[Ti59558434].d = Td59598435;
int Ti59608433;
Ti59608433 = 2;
double c8427;
c8427 = abc8072[Ti59608433].d;
int Ti59618428;
Ti59618428 = 2;
double Td59628430;
Td59628430 = 0.000000;
double Td59658429;
if(Td59628430 == c8427){
Td59658429 = 0.000000;
}
else{
double Td59638431;
Td59638431 = sgn6464_fun(c8427, NULL);
double Td59648432;
Td59648432 = fsqr6419_fun(c8427, NULL);
Td59658429 = Td59638431 / Td59648432;
}
abc8072[Ti59618428].d = Td59658429;
}
else{
int Ti59668420;
Ti59668420 = 2;
if(form8069 == Ti59668420){
int Ti59678422;
Ti59678422 = 0;
int Ti59688421;
if(m_invert8080 == Ti59678422){
Ti59688421 = 1;
}
else{
Ti59688421 = 0;
}
Tu44848093 = normalize_vector6461_fun(abc8072, Ti59688421, NULL);
}
else{
Tu44848093 = 1;
}
}
int Ti59698095;
Ti59698095 = 0;
int Tu44838094;
if(isrot_p8071 == Ti59698095){
Tu44838094 = 1;
}
else{
Value* Ta59708414;
Ta59708414 = cs_temp;
int Ti59718415;
Ti59718415 = 10;
int Ti59728418;
Ti59728418 = 0;
double Td59738417;
Td59738417 = rotation8088[Ti59728418].d;
double Td59748416;
Td59748416 = cos(Td59738417);
int Tu44828096;
Ta59708414[Ti59718415].d = Td59748416;
Value* Ta59758409;
Ta59758409 = cs_temp;
int Ti59768410;
Ti59768410 = 11;
int Ti59778413;
Ti59778413 = 0;
double Td59788412;
Td59788412 = rotation8088[Ti59778413].d;
double Td59798411;
Td59798411 = sin(Td59788412);
int Tu44818097;
Ta59758409[Ti59768410].d = Td59798411;
Value* Ta59808404;
Ta59808404 = cs_temp;
int Ti59818405;
Ti59818405 = 12;
int Ti59828408;
Ti59828408 = 1;
double Td59838407;
Td59838407 = rotation8088[Ti59828408].d;
double Td59848406;
Td59848406 = cos(Td59838407);
int Tu44808098;
Ta59808404[Ti59818405].d = Td59848406;
Value* Ta59858399;
Ta59858399 = cs_temp;
int Ti59868400;
Ti59868400 = 13;
int Ti59878403;
Ti59878403 = 1;
double Td59888402;
Td59888402 = rotation8088[Ti59878403].d;
double Td59898401;
Td59898401 = sin(Td59888402);
int Tu44798099;
Ta59858399[Ti59868400].d = Td59898401;
Value* Ta59908394;
Ta59908394 = cs_temp;
int Ti59918395;
Ti59918395 = 14;
int Ti59928398;
Ti59928398 = 2;
double Td59938397;
Td59938397 = rotation8088[Ti59928398].d;
double Td59948396;
Td59948396 = cos(Td59938397);
int Tu44788100;
Ta59908394[Ti59918395].d = Td59948396;
Value* Ta59958389;
Ta59958389 = cs_temp;
int Ti59968390;
Ti59968390 = 15;
int Ti59978393;
Ti59978393 = 2;
double Td59988392;
Td59988392 = rotation8088[Ti59978393].d;
double Td59998391;
Td59998391 = sin(Td59988392);
int Tu44778101;
Ta59958389[Ti59968390].d = Td59998391;
Value* Ta60008380;
Ta60008380 = cs_temp;
int Ti60018381;
Ti60018381 = 0;
Value* Ta60028387;
Ta60028387 = cs_temp;
int Ti60038388;
Ti60038388 = 12;
double Td60048383;
Td60048383 = Ta60028387[Ti60038388].d;
Value* Ta60058385;
Ta60058385 = cs_temp;
int Ti60068386;
Ti60068386 = 14;
double Td60078384;
Td60078384 = Ta60058385[Ti60068386].d;
double Td60088382;
Td60088382 =  Td60048383 * Td60078384;
int Tu44768102;
Ta60008380[Ti60018381].d = Td60088382;
Value* Ta60098359;
Ta60098359 = cs_temp;
int Ti60108360;
Ti60108360 = 1;
Value* Ta60118378;
Ta60118378 = cs_temp;
int Ti60128379;
Ti60128379 = 11;
double Td60138374;
Td60138374 = Ta60118378[Ti60128379].d;
Value* Ta60148376;
Ta60148376 = cs_temp;
int Ti60158377;
Ti60158377 = 13;
double Td60168375;
Td60168375 = Ta60148376[Ti60158377].d;
double Td60178370;
Td60178370 =  Td60138374 * Td60168375;
Value* Ta60188372;
Ta60188372 = cs_temp;
int Ti60198373;
Ti60198373 = 14;
double Td60208371;
Td60208371 = Ta60188372[Ti60198373].d;
double Td60218362;
Td60218362 =  Td60178370 * Td60208371;
Value* Ta60228368;
Ta60228368 = cs_temp;
int Ti60238369;
Ti60238369 = 10;
double Td60248364;
Td60248364 = Ta60228368[Ti60238369].d;
Value* Ta60258366;
Ta60258366 = cs_temp;
int Ti60268367;
Ti60268367 = 15;
double Td60278365;
Td60278365 = Ta60258366[Ti60268367].d;
double Td60288363;
Td60288363 =  Td60248364 * Td60278365;
double Td60298361;
Td60298361 = Td60218362 - Td60288363;
int Tu44758103;
Ta60098359[Ti60108360].d = Td60298361;
Value* Ta60308338;
Ta60308338 = cs_temp;
int Ti60318339;
Ti60318339 = 2;
Value* Ta60328357;
Ta60328357 = cs_temp;
int Ti60338358;
Ti60338358 = 10;
double Td60348353;
Td60348353 = Ta60328357[Ti60338358].d;
Value* Ta60358355;
Ta60358355 = cs_temp;
int Ti60368356;
Ti60368356 = 13;
double Td60378354;
Td60378354 = Ta60358355[Ti60368356].d;
double Td60388349;
Td60388349 =  Td60348353 * Td60378354;
Value* Ta60398351;
Ta60398351 = cs_temp;
int Ti60408352;
Ti60408352 = 14;
double Td60418350;
Td60418350 = Ta60398351[Ti60408352].d;
double Td60428341;
Td60428341 =  Td60388349 * Td60418350;
Value* Ta60438347;
Ta60438347 = cs_temp;
int Ti60448348;
Ti60448348 = 11;
double Td60458343;
Td60458343 = Ta60438347[Ti60448348].d;
Value* Ta60468345;
Ta60468345 = cs_temp;
int Ti60478346;
Ti60478346 = 15;
double Td60488344;
Td60488344 = Ta60468345[Ti60478346].d;
double Td60498342;
Td60498342 =  Td60458343 * Td60488344;
double Td60508340;
Td60508340 = Td60428341 + Td60498342;
int Tu44748104;
Ta60308338[Ti60318339].d = Td60508340;
Value* Ta60518329;
Ta60518329 = cs_temp;
int Ti60528330;
Ti60528330 = 3;
Value* Ta60538336;
Ta60538336 = cs_temp;
int Ti60548337;
Ti60548337 = 12;
double Td60558332;
Td60558332 = Ta60538336[Ti60548337].d;
Value* Ta60568334;
Ta60568334 = cs_temp;
int Ti60578335;
Ti60578335 = 15;
double Td60588333;
Td60588333 = Ta60568334[Ti60578335].d;
double Td60598331;
Td60598331 =  Td60558332 * Td60588333;
int Tu44738105;
Ta60518329[Ti60528330].d = Td60598331;
Value* Ta60608308;
Ta60608308 = cs_temp;
int Ti60618309;
Ti60618309 = 4;
Value* Ta60628327;
Ta60628327 = cs_temp;
int Ti60638328;
Ti60638328 = 11;
double Td60648323;
Td60648323 = Ta60628327[Ti60638328].d;
Value* Ta60658325;
Ta60658325 = cs_temp;
int Ti60668326;
Ti60668326 = 13;
double Td60678324;
Td60678324 = Ta60658325[Ti60668326].d;
double Td60688319;
Td60688319 =  Td60648323 * Td60678324;
Value* Ta60698321;
Ta60698321 = cs_temp;
int Ti60708322;
Ti60708322 = 15;
double Td60718320;
Td60718320 = Ta60698321[Ti60708322].d;
double Td60728311;
Td60728311 =  Td60688319 * Td60718320;
Value* Ta60738317;
Ta60738317 = cs_temp;
int Ti60748318;
Ti60748318 = 10;
double Td60758313;
Td60758313 = Ta60738317[Ti60748318].d;
Value* Ta60768315;
Ta60768315 = cs_temp;
int Ti60778316;
Ti60778316 = 14;
double Td60788314;
Td60788314 = Ta60768315[Ti60778316].d;
double Td60798312;
Td60798312 =  Td60758313 * Td60788314;
double Td60808310;
Td60808310 = Td60728311 + Td60798312;
int Tu44728106;
Ta60608308[Ti60618309].d = Td60808310;
Value* Ta60818287;
Ta60818287 = cs_temp;
int Ti60828288;
Ti60828288 = 5;
Value* Ta60838306;
Ta60838306 = cs_temp;
int Ti60848307;
Ti60848307 = 10;
double Td60858302;
Td60858302 = Ta60838306[Ti60848307].d;
Value* Ta60868304;
Ta60868304 = cs_temp;
int Ti60878305;
Ti60878305 = 13;
double Td60888303;
Td60888303 = Ta60868304[Ti60878305].d;
double Td60898298;
Td60898298 =  Td60858302 * Td60888303;
Value* Ta60908300;
Ta60908300 = cs_temp;
int Ti60918301;
Ti60918301 = 15;
double Td60928299;
Td60928299 = Ta60908300[Ti60918301].d;
double Td60938290;
Td60938290 =  Td60898298 * Td60928299;
Value* Ta60948296;
Ta60948296 = cs_temp;
int Ti60958297;
Ti60958297 = 11;
double Td60968292;
Td60968292 = Ta60948296[Ti60958297].d;
Value* Ta60978294;
Ta60978294 = cs_temp;
int Ti60988295;
Ti60988295 = 14;
double Td60998293;
Td60998293 = Ta60978294[Ti60988295].d;
double Td61008291;
Td61008291 =  Td60968292 * Td60998293;
double Td61018289;
Td61018289 = Td60938290 - Td61008291;
int Tu44718107;
Ta60818287[Ti60828288].d = Td61018289;
Value* Ta61028281;
Ta61028281 = cs_temp;
int Ti61038282;
Ti61038282 = 6;
Value* Ta61048285;
Ta61048285 = cs_temp;
int Ti61058286;
Ti61058286 = 13;
double Td61068284;
Td61068284 = Ta61048285[Ti61058286].d;
double Td61078283;
Td61078283 = -Td61068284;
int Tu44708108;
Ta61028281[Ti61038282].d = Td61078283;
Value* Ta61088272;
Ta61088272 = cs_temp;
int Ti61098273;
Ti61098273 = 7;
Value* Ta61108279;
Ta61108279 = cs_temp;
int Ti61118280;
Ti61118280 = 11;
double Td61128275;
Td61128275 = Ta61108279[Ti61118280].d;
Value* Ta61138277;
Ta61138277 = cs_temp;
int Ti61148278;
Ti61148278 = 12;
double Td61158276;
Td61158276 = Ta61138277[Ti61148278].d;
double Td61168274;
Td61168274 =  Td61128275 * Td61158276;
int Tu44698109;
Ta61088272[Ti61098273].d = Td61168274;
Value* Ta61178263;
Ta61178263 = cs_temp;
int Ti61188264;
Ti61188264 = 8;
Value* Ta61198270;
Ta61198270 = cs_temp;
int Ti61208271;
Ti61208271 = 10;
double Td61218266;
Td61218266 = Ta61198270[Ti61208271].d;
Value* Ta61228268;
Ta61228268 = cs_temp;
int Ti61238269;
Ti61238269 = 12;
double Td61248267;
Td61248267 = Ta61228268[Ti61238269].d;
double Td61258265;
Td61258265 =  Td61218266 * Td61248267;
int Tu44688110;
Ta61178263[Ti61188264].d = Td61258265;
int Ti61268262;
Ti61268262 = 0;
double ao8111;
ao8111 = abc8072[Ti61268262].d;
int Ti61278261;
Ti61278261 = 1;
double bo8112;
bo8112 = abc8072[Ti61278261].d;
int Ti61288260;
Ti61288260 = 2;
double co8113;
co8113 = abc8072[Ti61288260].d;
int Ti61298242;
Ti61298242 = 0;
Value* Ta61308258;
Ta61308258 = cs_temp;
int Ti61318259;
Ti61318259 = 0;
double Td61328257;
Td61328257 = Ta61308258[Ti61318259].d;
double Td61338256;
Td61338256 = fsqr6419_fun(Td61328257, NULL);
double Td61348250;
Td61348250 =  ao8111 * Td61338256;
Value* Ta61358254;
Ta61358254 = cs_temp;
int Ti61368255;
Ti61368255 = 3;
double Td61378253;
Td61378253 = Ta61358254[Ti61368255].d;
double Td61388252;
Td61388252 = fsqr6419_fun(Td61378253, NULL);
double Td61398251;
Td61398251 =  bo8112 * Td61388252;
double Td61408244;
Td61408244 = Td61348250 + Td61398251;
Value* Ta61418248;
Ta61418248 = cs_temp;
int Ti61428249;
Ti61428249 = 6;
double Td61438247;
Td61438247 = Ta61418248[Ti61428249].d;
double Td61448246;
Td61448246 = fsqr6419_fun(Td61438247, NULL);
double Td61458245;
Td61458245 =  co8113 * Td61448246;
double Td61468243;
Td61468243 = Td61408244 + Td61458245;
int Tu44678114;
abc8072[Ti61298242].d = Td61468243;
int Ti61478224;
Ti61478224 = 1;
Value* Ta61488240;
Ta61488240 = cs_temp;
int Ti61498241;
Ti61498241 = 1;
double Td61508239;
Td61508239 = Ta61488240[Ti61498241].d;
double Td61518238;
Td61518238 = fsqr6419_fun(Td61508239, NULL);
double Td61528232;
Td61528232 =  ao8111 * Td61518238;
Value* Ta61538236;
Ta61538236 = cs_temp;
int Ti61548237;
Ti61548237 = 4;
double Td61558235;
Td61558235 = Ta61538236[Ti61548237].d;
double Td61568234;
Td61568234 = fsqr6419_fun(Td61558235, NULL);
double Td61578233;
Td61578233 =  bo8112 * Td61568234;
double Td61588226;
Td61588226 = Td61528232 + Td61578233;
Value* Ta61598230;
Ta61598230 = cs_temp;
int Ti61608231;
Ti61608231 = 7;
double Td61618229;
Td61618229 = Ta61598230[Ti61608231].d;
double Td61628228;
Td61628228 = fsqr6419_fun(Td61618229, NULL);
double Td61638227;
Td61638227 =  co8113 * Td61628228;
double Td61648225;
Td61648225 = Td61588226 + Td61638227;
int Tu44668115;
abc8072[Ti61478224].d = Td61648225;
int Ti61658206;
Ti61658206 = 2;
Value* Ta61668222;
Ta61668222 = cs_temp;
int Ti61678223;
Ti61678223 = 2;
double Td61688221;
Td61688221 = Ta61668222[Ti61678223].d;
double Td61698220;
Td61698220 = fsqr6419_fun(Td61688221, NULL);
double Td61708214;
Td61708214 =  ao8111 * Td61698220;
Value* Ta61718218;
Ta61718218 = cs_temp;
int Ti61728219;
Ti61728219 = 5;
double Td61738217;
Td61738217 = Ta61718218[Ti61728219].d;
double Td61748216;
Td61748216 = fsqr6419_fun(Td61738217, NULL);
double Td61758215;
Td61758215 =  bo8112 * Td61748216;
double Td61768208;
Td61768208 = Td61708214 + Td61758215;
Value* Ta61778212;
Ta61778212 = cs_temp;
int Ti61788213;
Ti61788213 = 8;
double Td61798211;
Td61798211 = Ta61778212[Ti61788213].d;
double Td61808210;
Td61808210 = fsqr6419_fun(Td61798211, NULL);
double Td61818209;
Td61818209 =  co8113 * Td61808210;
double Td61828207;
Td61828207 = Td61768208 + Td61818209;
int Tu44658116;
abc8072[Ti61658206].d = Td61828207;
int Ti61838177;
Ti61838177 = 0;
double Td61848179;
Td61848179 = 2.000000;
Value* Ta61858204;
Ta61858204 = cs_temp;
int Ti61868205;
Ti61868205 = 1;
double Td61878203;
Td61878203 = Ta61858204[Ti61868205].d;
double Td61888199;
Td61888199 =  ao8111 * Td61878203;
Value* Ta61898201;
Ta61898201 = cs_temp;
int Ti61908202;
Ti61908202 = 2;
double Td61918200;
Td61918200 = Ta61898201[Ti61908202].d;
double Td61928190;
Td61928190 =  Td61888199 * Td61918200;
Value* Ta61938197;
Ta61938197 = cs_temp;
int Ti61948198;
Ti61948198 = 4;
double Td61958196;
Td61958196 = Ta61938197[Ti61948198].d;
double Td61968192;
Td61968192 =  bo8112 * Td61958196;
Value* Ta61978194;
Ta61978194 = cs_temp;
int Ti61988195;
Ti61988195 = 5;
double Td61998193;
Td61998193 = Ta61978194[Ti61988195].d;
double Td62008191;
Td62008191 =  Td61968192 * Td61998193;
double Td62018181;
Td62018181 = Td61928190 + Td62008191;
Value* Ta62028188;
Ta62028188 = cs_temp;
int Ti62038189;
Ti62038189 = 7;
double Td62048187;
Td62048187 = Ta62028188[Ti62038189].d;
double Td62058183;
Td62058183 =  co8113 * Td62048187;
Value* Ta62068185;
Ta62068185 = cs_temp;
int Ti62078186;
Ti62078186 = 8;
double Td62088184;
Td62088184 = Ta62068185[Ti62078186].d;
double Td62098182;
Td62098182 =  Td62058183 * Td62088184;
double Td62108180;
Td62108180 = Td62018181 + Td62098182;
double Td62118178;
Td62118178 =  Td61848179 * Td62108180;
int Tu44648117;
rotation8088[Ti61838177].d = Td62118178;
int Ti62128148;
Ti62128148 = 1;
double Td62138150;
Td62138150 = 2.000000;
Value* Ta62148175;
Ta62148175 = cs_temp;
int Ti62158176;
Ti62158176 = 0;
double Td62168174;
Td62168174 = Ta62148175[Ti62158176].d;
double Td62178170;
Td62178170 =  ao8111 * Td62168174;
Value* Ta62188172;
Ta62188172 = cs_temp;
int Ti62198173;
Ti62198173 = 2;
double Td62208171;
Td62208171 = Ta62188172[Ti62198173].d;
double Td62218161;
Td62218161 =  Td62178170 * Td62208171;
Value* Ta62228168;
Ta62228168 = cs_temp;
int Ti62238169;
Ti62238169 = 3;
double Td62248167;
Td62248167 = Ta62228168[Ti62238169].d;
double Td62258163;
Td62258163 =  bo8112 * Td62248167;
Value* Ta62268165;
Ta62268165 = cs_temp;
int Ti62278166;
Ti62278166 = 5;
double Td62288164;
Td62288164 = Ta62268165[Ti62278166].d;
double Td62298162;
Td62298162 =  Td62258163 * Td62288164;
double Td62308152;
Td62308152 = Td62218161 + Td62298162;
Value* Ta62318159;
Ta62318159 = cs_temp;
int Ti62328160;
Ti62328160 = 6;
double Td62338158;
Td62338158 = Ta62318159[Ti62328160].d;
double Td62348154;
Td62348154 =  co8113 * Td62338158;
Value* Ta62358156;
Ta62358156 = cs_temp;
int Ti62368157;
Ti62368157 = 8;
double Td62378155;
Td62378155 = Ta62358156[Ti62368157].d;
double Td62388153;
Td62388153 =  Td62348154 * Td62378155;
double Td62398151;
Td62398151 = Td62308152 + Td62388153;
double Td62408149;
Td62408149 =  Td62138150 * Td62398151;
int Tu44638118;
rotation8088[Ti62128148].d = Td62408149;
int Ti62418119;
Ti62418119 = 2;
double Td62428121;
Td62428121 = 2.000000;
Value* Ta62438146;
Ta62438146 = cs_temp;
int Ti62448147;
Ti62448147 = 0;
double Td62458145;
Td62458145 = Ta62438146[Ti62448147].d;
double Td62468141;
Td62468141 =  ao8111 * Td62458145;
Value* Ta62478143;
Ta62478143 = cs_temp;
int Ti62488144;
Ti62488144 = 1;
double Td62498142;
Td62498142 = Ta62478143[Ti62488144].d;
double Td62508132;
Td62508132 =  Td62468141 * Td62498142;
Value* Ta62518139;
Ta62518139 = cs_temp;
int Ti62528140;
Ti62528140 = 3;
double Td62538138;
Td62538138 = Ta62518139[Ti62528140].d;
double Td62548134;
Td62548134 =  bo8112 * Td62538138;
Value* Ta62558136;
Ta62558136 = cs_temp;
int Ti62568137;
Ti62568137 = 4;
double Td62578135;
Td62578135 = Ta62558136[Ti62568137].d;
double Td62588133;
Td62588133 =  Td62548134 * Td62578135;
double Td62598123;
Td62598123 = Td62508132 + Td62588133;
Value* Ta62608130;
Ta62608130 = cs_temp;
int Ti62618131;
Ti62618131 = 6;
double Td62628129;
Td62628129 = Ta62608130[Ti62618131].d;
double Td62638125;
Td62638125 =  co8113 * Td62628129;
Value* Ta62648127;
Ta62648127 = cs_temp;
int Ti62658128;
Ti62658128 = 7;
double Td62668126;
Td62668126 = Ta62648127[Ti62658128].d;
double Td62678124;
Td62678124 =  Td62638125 * Td62668126;
double Td62688122;
Td62688122 = Td62598123 + Td62678124;
double Td62698120;
Td62698120 =  Td62428121 * Td62688122;
rotation8088[Ti62418119].d = Td62698120;
}
result = 1;
}
return result;
}

int read_object6472_fun(int n6473, Value *env){
int result;
int Ti58758062;
Ti58758062 = 61;
if(Ti58758062 <= n6473){
result = 1;
}
else{
bool Tb58768063;
Tb58768063 = read_nth_object6470_fun(n6473, NULL);
int Ti58778064;
Ti58778064 = 0;
if(Tb58768063 == Ti58778064){
result = 1;
}
else{
int Ti58788066;
Ti58788066 = 1;
int Ti58798065;
Ti58798065 = n6473 + Ti58788066;
result = read_object6472_fun(Ti58798065, NULL);
}
}
return result;
}

int read_all_object6474_fun(int Tu44986475, Value *env){
int result;
int Ti58748061;
Ti58748061 = 0;
result = read_object6472_fun(Ti58748061, NULL);
return result;
}

Value* read_net_item6476_fun(int length6477, Value *env){
Value* result;
int Tu58658060;
Tu58658060 = 1;
int item8049;
scanf("%d", &item8049);
int Ti58668059;
Ti58668059 = 1;
int Ti58678050;
Ti58678050 = -Ti58668059;
if(item8049 == Ti58678050){
int Ti58688058;
Ti58688058 = 1;
int Ti58698055;
Ti58698055 = length6477 + Ti58688058;
int Ti58708057;
Ti58708057 = 1;
int Ti58718056;
Ti58718056 = -Ti58708057;
make_int_array(&result, Ti58698055, Ti58718056);
}
else{
int Ti58728054;
Ti58728054 = 1;
int Ti58738053;
Ti58738053 = length6477 + Ti58728054;
Value* v8051;
v8051 = read_net_item6476_fun(Ti58738053, NULL);
int Tu44998052;
v8051[length6477].i = item8049;
result = v8051;
}
return result;
}

Value* read_or_network6478_fun(int length6479, Value *env){
Value* result;
int Ti58568048;
Ti58568048 = 0;
Value* net8037;
net8037 = read_net_item6476_fun(Ti58568048, NULL);
int Ti58578047;
Ti58578047 = 0;
int Ti58588038;
Ti58588038 = net8037[Ti58578047].i;
int Ti58598046;
Ti58598046 = 1;
int Ti58608039;
Ti58608039 = -Ti58598046;
if(Ti58588038 == Ti58608039){
int Ti58618045;
Ti58618045 = 1;
int Ti58628044;
Ti58628044 = length6479 + Ti58618045;
make_multi_array(&result, Ti58628044, net8037);
}
else{
int Ti58638043;
Ti58638043 = 1;
int Ti58648042;
Ti58648042 = length6479 + Ti58638043;
Value* v8040;
v8040 = read_or_network6478_fun(Ti58648042, NULL);
int Tu45008041;
v8040[length6479].a = net8037;
result = v8040;
}
return result;
}

int read_and_network6480_fun(int n6481, Value *env){
int result;
int Ti58488036;
Ti58488036 = 0;
Value* net8027;
net8027 = read_net_item6476_fun(Ti58488036, NULL);
int Ti58498035;
Ti58498035 = 0;
int Ti58508028;
Ti58508028 = net8027[Ti58498035].i;
int Ti58518034;
Ti58518034 = 1;
int Ti58528029;
Ti58528029 = -Ti58518034;
if(Ti58508028 == Ti58528029){
result = 1;
}
else{
Value* Ta58538033;
Ta58538033 = and_net;
int Tu45018030;
Ta58538033[n6481].a = net8027;
int Ti58548032;
Ti58548032 = 1;
int Ti58558031;
Ti58558031 = n6481 + Ti58548032;
result = read_and_network6480_fun(Ti58558031, NULL);
}
return result;
}

int read_parameter6482_fun(int Tu45026483, Value *env){
int result;
int Tu58418026;
Tu58418026 = 1;
int Tu45058017;
Tu45058017 = read_environ6468_fun(Tu58418026, NULL);
int Tu58428025;
Tu58428025 = 1;
int Tu45048018;
Tu45048018 = read_all_object6474_fun(Tu58428025, NULL);
int Ti58438024;
Ti58438024 = 0;
int Tu45038019;
Tu45038019 = read_and_network6480_fun(Ti58438024, NULL);
Value* Ta58448020;
Ta58448020 = or_net;
int Ti58458021;
Ti58458021 = 0;
int Ti58468023;
Ti58468023 = 0;
Value* Ta58478022;
Ta58478022 = read_or_network6478_fun(Ti58468023, NULL);
Ta58448020[Ti58458021].a = Ta58478022;
return result;
}

int solver_rect6484_fun(int* m6485, Value* l6486, Value *env){
int result;
double Td57277977;
Td57277977 = 0.000000;
int Ti57288016;
Ti57288016 = 0;
double Td57297978;
Td57297978 = l6486[Ti57288016].d;
bool answera7891;
if(Td57277977 == Td57297978){
answera7891 = 0;
}
else{
bool Tb57308011;
Tb57308011 = o_isinvert6429_fun(m6485, NULL);
double Td57318013;
Td57318013 = 0.000000;
int Ti57328015;
Ti57328015 = 0;
double Td57338014;
Td57338014 = l6486[Ti57328015].d;
int Ti57348012;
if(Td57318013 <= Td57338014){
Ti57348012 = 0;
}
else{
Ti57348012 = 1;
}
bool Tb57358008;
Tb57358008 = xor6416_fun(Tb57308011, Ti57348012, NULL);
int Ti57368009;
Ti57368009 = 0;
double d7979;
if(Tb57358008 == Ti57368009){
double Td57378010;
Td57378010 = o_param_a6433_fun(m6485, NULL);
d7979 = -Td57378010;
}
else{
d7979 = o_param_a6433_fun(m6485, NULL);
}
Value* Ta57388006;
Ta57388006 = solver_w_vec;
int Ti57398007;
Ti57398007 = 0;
double Td57408005;
Td57408005 = Ta57388006[Ti57398007].d;
double Td57418002;
Td57418002 = d7979 - Td57408005;
int Ti57428004;
Ti57428004 = 0;
double Td57438003;
Td57438003 = l6486[Ti57428004].d;
double d27980;
d27980 = Td57418002 / Td57438003;
double Td57447981;
Td57447981 = o_param_b6435_fun(m6485, NULL);
int Ti57458001;
Ti57458001 = 1;
double Td57468000;
Td57468000 = l6486[Ti57458001].d;
double Td57477996;
Td57477996 =  d27980 * Td57468000;
Value* Ta57487998;
Ta57487998 = solver_w_vec;
int Ti57497999;
Ti57497999 = 1;
double Td57507997;
Td57507997 = Ta57487998[Ti57497999].d;
double Td57517995;
Td57517995 = Td57477996 + Td57507997;
double Td57527982;
Td57527982 = fabs(Td57517995);
if(Td57447981 <= Td57527982){
answera7891 = 0;
}
else{
double Td57537983;
Td57537983 = o_param_c6437_fun(m6485, NULL);
int Ti57547994;
Ti57547994 = 2;
double Td57557993;
Td57557993 = l6486[Ti57547994].d;
double Td57567989;
Td57567989 =  d27980 * Td57557993;
Value* Ta57577991;
Ta57577991 = solver_w_vec;
int Ti57587992;
Ti57587992 = 2;
double Td57597990;
Td57597990 = Ta57577991[Ti57587992].d;
double Td57607988;
Td57607988 = Td57567989 + Td57597990;
double Td57617984;
Td57617984 = fabs(Td57607988);
if(Td57537983 <= Td57617984){
answera7891 = 0;
}
else{
Value* Ta57627986;
Ta57627986 = solver_dist;
int Ti57637987;
Ti57637987 = 0;
int Tu45067985;
Ta57627986[Ti57637987].d = d27980;
answera7891 = 1;
}
}
}
int Ti57647892;
Ti57647892 = 0;
if(answera7891 == Ti57647892){
double Td57657937;
Td57657937 = 0.000000;
int Ti57667976;
Ti57667976 = 1;
double Td57677938;
Td57677938 = l6486[Ti57667976].d;
bool answerb7893;
if(Td57657937 == Td57677938){
answerb7893 = 0;
}
else{
bool Tb57687971;
Tb57687971 = o_isinvert6429_fun(m6485, NULL);
double Td57697973;
Td57697973 = 0.000000;
int Ti57707975;
Ti57707975 = 1;
double Td57717974;
Td57717974 = l6486[Ti57707975].d;
int Ti57727972;
if(Td57697973 <= Td57717974){
Ti57727972 = 0;
}
else{
Ti57727972 = 1;
}
bool Tb57737968;
Tb57737968 = xor6416_fun(Tb57687971, Ti57727972, NULL);
int Ti57747969;
Ti57747969 = 0;
double d7939;
if(Tb57737968 == Ti57747969){
double Td57757970;
Td57757970 = o_param_b6435_fun(m6485, NULL);
d7939 = -Td57757970;
}
else{
d7939 = o_param_b6435_fun(m6485, NULL);
}
Value* Ta57767966;
Ta57767966 = solver_w_vec;
int Ti57777967;
Ti57777967 = 1;
double Td57787965;
Td57787965 = Ta57767966[Ti57777967].d;
double Td57797962;
Td57797962 = d7939 - Td57787965;
int Ti57807964;
Ti57807964 = 1;
double Td57817963;
Td57817963 = l6486[Ti57807964].d;
double d27940;
d27940 = Td57797962 / Td57817963;
double Td57827941;
Td57827941 = o_param_c6437_fun(m6485, NULL);
int Ti57837961;
Ti57837961 = 2;
double Td57847960;
Td57847960 = l6486[Ti57837961].d;
double Td57857956;
Td57857956 =  d27940 * Td57847960;
Value* Ta57867958;
Ta57867958 = solver_w_vec;
int Ti57877959;
Ti57877959 = 2;
double Td57887957;
Td57887957 = Ta57867958[Ti57877959].d;
double Td57897955;
Td57897955 = Td57857956 + Td57887957;
double Td57907942;
Td57907942 = fabs(Td57897955);
if(Td57827941 <= Td57907942){
answerb7893 = 0;
}
else{
double Td57917943;
Td57917943 = o_param_a6433_fun(m6485, NULL);
int Ti57927954;
Ti57927954 = 0;
double Td57937953;
Td57937953 = l6486[Ti57927954].d;
double Td57947949;
Td57947949 =  d27940 * Td57937953;
Value* Ta57957951;
Ta57957951 = solver_w_vec;
int Ti57967952;
Ti57967952 = 0;
double Td57977950;
Td57977950 = Ta57957951[Ti57967952].d;
double Td57987948;
Td57987948 = Td57947949 + Td57977950;
double Td57997944;
Td57997944 = fabs(Td57987948);
if(Td57917943 <= Td57997944){
answerb7893 = 0;
}
else{
Value* Ta58007946;
Ta58007946 = solver_dist;
int Ti58017947;
Ti58017947 = 0;
int Tu45077945;
Ta58007946[Ti58017947].d = d27940;
answerb7893 = 1;
}
}
}
int Ti58027894;
Ti58027894 = 0;
if(answerb7893 == Ti58027894){
double Td58037897;
Td58037897 = 0.000000;
int Ti58047936;
Ti58047936 = 2;
double Td58057898;
Td58057898 = l6486[Ti58047936].d;
bool answerc7895;
if(Td58037897 == Td58057898){
answerc7895 = 0;
}
else{
bool Tb58067931;
Tb58067931 = o_isinvert6429_fun(m6485, NULL);
double Td58077933;
Td58077933 = 0.000000;
int Ti58087935;
Ti58087935 = 2;
double Td58097934;
Td58097934 = l6486[Ti58087935].d;
int Ti58107932;
if(Td58077933 <= Td58097934){
Ti58107932 = 0;
}
else{
Ti58107932 = 1;
}
bool Tb58117928;
Tb58117928 = xor6416_fun(Tb58067931, Ti58107932, NULL);
int Ti58127929;
Ti58127929 = 0;
double d7899;
if(Tb58117928 == Ti58127929){
double Td58137930;
Td58137930 = o_param_c6437_fun(m6485, NULL);
d7899 = -Td58137930;
}
else{
d7899 = o_param_c6437_fun(m6485, NULL);
}
Value* Ta58147926;
Ta58147926 = solver_w_vec;
int Ti58157927;
Ti58157927 = 2;
double Td58167925;
Td58167925 = Ta58147926[Ti58157927].d;
double Td58177922;
Td58177922 = d7899 - Td58167925;
int Ti58187924;
Ti58187924 = 2;
double Td58197923;
Td58197923 = l6486[Ti58187924].d;
double d27900;
d27900 = Td58177922 / Td58197923;
double Td58207901;
Td58207901 = o_param_a6433_fun(m6485, NULL);
int Ti58217921;
Ti58217921 = 0;
double Td58227920;
Td58227920 = l6486[Ti58217921].d;
double Td58237916;
Td58237916 =  d27900 * Td58227920;
Value* Ta58247918;
Ta58247918 = solver_w_vec;
int Ti58257919;
Ti58257919 = 0;
double Td58267917;
Td58267917 = Ta58247918[Ti58257919].d;
double Td58277915;
Td58277915 = Td58237916 + Td58267917;
double Td58287902;
Td58287902 = fabs(Td58277915);
if(Td58207901 <= Td58287902){
answerc7895 = 0;
}
else{
double Td58297903;
Td58297903 = o_param_b6435_fun(m6485, NULL);
int Ti58307914;
Ti58307914 = 1;
double Td58317913;
Td58317913 = l6486[Ti58307914].d;
double Td58327909;
Td58327909 =  d27900 * Td58317913;
Value* Ta58337911;
Ta58337911 = solver_w_vec;
int Ti58347912;
Ti58347912 = 1;
double Td58357910;
Td58357910 = Ta58337911[Ti58347912].d;
double Td58367908;
Td58367908 = Td58327909 + Td58357910;
double Td58377904;
Td58377904 = fabs(Td58367908);
if(Td58297903 <= Td58377904){
answerc7895 = 0;
}
else{
Value* Ta58387906;
Ta58387906 = solver_dist;
int Ti58397907;
Ti58397907 = 0;
int Tu45087905;
Ta58387906[Ti58397907].d = d27900;
answerc7895 = 1;
}
}
}
int Ti58407896;
Ti58407896 = 0;
if(answerc7895 == Ti58407896){
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

int solver_surface6487_fun(int* m6488, Value* l6489, Value *env){
int result;
int Ti56937890;
Ti56937890 = 0;
double Td56947888;
Td56947888 = l6489[Ti56937890].d;
double Td56957889;
Td56957889 = o_param_a6433_fun(m6488, NULL);
double Td56967883;
Td56967883 =  Td56947888 * Td56957889;
int Ti56977887;
Ti56977887 = 1;
double Td56987885;
Td56987885 = l6489[Ti56977887].d;
double Td56997886;
Td56997886 = o_param_b6435_fun(m6488, NULL);
double Td57007884;
Td57007884 =  Td56987885 * Td56997886;
double Td57017878;
Td57017878 = Td56967883 + Td57007884;
int Ti57027882;
Ti57027882 = 2;
double Td57037880;
Td57037880 = l6489[Ti57027882].d;
double Td57047881;
Td57047881 = o_param_c6437_fun(m6488, NULL);
double Td57057879;
Td57057879 =  Td57037880 * Td57047881;
double q7854;
q7854 = Td57017878 + Td57057879;
double Td57067855;
Td57067855 = 0.000000;
if(q7854 <= Td57067855){
result = 0;
}
else{
Value* Ta57077876;
Ta57077876 = solver_w_vec;
int Ti57087877;
Ti57087877 = 0;
double Td57097874;
Td57097874 = Ta57077876[Ti57087877].d;
double Td57107875;
Td57107875 = o_param_a6433_fun(m6488, NULL);
double Td57117868;
Td57117868 =  Td57097874 * Td57107875;
Value* Ta57127872;
Ta57127872 = solver_w_vec;
int Ti57137873;
Ti57137873 = 1;
double Td57147870;
Td57147870 = Ta57127872[Ti57137873].d;
double Td57157871;
Td57157871 = o_param_b6435_fun(m6488, NULL);
double Td57167869;
Td57167869 =  Td57147870 * Td57157871;
double Td57177862;
Td57177862 = Td57117868 + Td57167869;
Value* Ta57187866;
Ta57187866 = solver_w_vec;
int Ti57197867;
Ti57197867 = 2;
double Td57207864;
Td57207864 = Ta57187866[Ti57197867].d;
double Td57217865;
Td57217865 = o_param_c6437_fun(m6488, NULL);
double Td57227863;
Td57227863 =  Td57207864 * Td57217865;
double Td57237861;
Td57237861 = Td57177862 + Td57227863;
double t7856;
t7856 = Td57237861 / q7854;
Value* Ta57247858;
Ta57247858 = solver_dist;
int Ti57257859;
Ti57257859 = 0;
double Td57267860;
Td57267860 = -t7856;
int Tu45097857;
Ta57247858[Ti57257859].d = Td57267860;
result = 1;
}
return result;
}

double in_prod_sqr_obj6490_fun(int* m6491, Value* v6492, Value *env){
double result;
int Ti56777853;
Ti56777853 = 0;
double Td56787852;
Td56787852 = v6492[Ti56777853].d;
double Td56797850;
Td56797850 = fsqr6419_fun(Td56787852, NULL);
double Td56807851;
Td56807851 = o_param_a6433_fun(m6491, NULL);
double Td56817844;
Td56817844 =  Td56797850 * Td56807851;
int Ti56827849;
Ti56827849 = 1;
double Td56837848;
Td56837848 = v6492[Ti56827849].d;
double Td56847846;
Td56847846 = fsqr6419_fun(Td56837848, NULL);
double Td56857847;
Td56857847 = o_param_b6435_fun(m6491, NULL);
double Td56867845;
Td56867845 =  Td56847846 * Td56857847;
double Td56877838;
Td56877838 = Td56817844 + Td56867845;
int Ti56887843;
Ti56887843 = 2;
double Td56897842;
Td56897842 = v6492[Ti56887843].d;
double Td56907840;
Td56907840 = fsqr6419_fun(Td56897842, NULL);
double Td56917841;
Td56917841 = o_param_c6437_fun(m6491, NULL);
double Td56927839;
Td56927839 =  Td56907840 * Td56917841;
result = Td56877838 + Td56927839;
return result;
}

double in_prod_co_objrot6493_fun(int* m6494, Value* v6495, Value *env){
double result;
int Ti56557837;
Ti56557837 = 1;
double Td56567834;
Td56567834 = v6495[Ti56557837].d;
int Ti56577836;
Ti56577836 = 2;
double Td56587835;
Td56587835 = v6495[Ti56577836].d;
double Td56597832;
Td56597832 =  Td56567834 * Td56587835;
double Td56607833;
Td56607833 = o_param_r16455_fun(m6494, NULL);
double Td56617824;
Td56617824 =  Td56597832 * Td56607833;
int Ti56627831;
Ti56627831 = 0;
double Td56637828;
Td56637828 = v6495[Ti56627831].d;
int Ti56647830;
Ti56647830 = 2;
double Td56657829;
Td56657829 = v6495[Ti56647830].d;
double Td56667826;
Td56667826 =  Td56637828 * Td56657829;
double Td56677827;
Td56677827 = o_param_r26457_fun(m6494, NULL);
double Td56687825;
Td56687825 =  Td56667826 * Td56677827;
double Td56697816;
Td56697816 = Td56617824 + Td56687825;
int Ti56707823;
Ti56707823 = 0;
double Td56717820;
Td56717820 = v6495[Ti56707823].d;
int Ti56727822;
Ti56727822 = 1;
double Td56737821;
Td56737821 = v6495[Ti56727822].d;
double Td56747818;
Td56747818 =  Td56717820 * Td56737821;
double Td56757819;
Td56757819 = o_param_r36459_fun(m6494, NULL);
double Td56767817;
Td56767817 =  Td56747818 * Td56757819;
result = Td56697816 + Td56767817;
return result;
}

double solver2nd_mul_b6496_fun(int* m6497, Value* l6498, Value *env){
double result;
Value* Ta56307814;
Ta56307814 = solver_w_vec;
int Ti56317815;
Ti56317815 = 0;
double Td56327811;
Td56327811 = Ta56307814[Ti56317815].d;
int Ti56337813;
Ti56337813 = 0;
double Td56347812;
Td56347812 = l6498[Ti56337813].d;
double Td56357809;
Td56357809 =  Td56327811 * Td56347812;
double Td56367810;
Td56367810 = o_param_a6433_fun(m6497, NULL);
double Td56377800;
Td56377800 =  Td56357809 * Td56367810;
Value* Ta56387807;
Ta56387807 = solver_w_vec;
int Ti56397808;
Ti56397808 = 1;
double Td56407804;
Td56407804 = Ta56387807[Ti56397808].d;
int Ti56417806;
Ti56417806 = 1;
double Td56427805;
Td56427805 = l6498[Ti56417806].d;
double Td56437802;
Td56437802 =  Td56407804 * Td56427805;
double Td56447803;
Td56447803 = o_param_b6435_fun(m6497, NULL);
double Td56457801;
Td56457801 =  Td56437802 * Td56447803;
double Td56467791;
Td56467791 = Td56377800 + Td56457801;
Value* Ta56477798;
Ta56477798 = solver_w_vec;
int Ti56487799;
Ti56487799 = 2;
double Td56497795;
Td56497795 = Ta56477798[Ti56487799].d;
int Ti56507797;
Ti56507797 = 2;
double Td56517796;
Td56517796 = l6498[Ti56507797].d;
double Td56527793;
Td56527793 =  Td56497795 * Td56517796;
double Td56537794;
Td56537794 = o_param_c6437_fun(m6497, NULL);
double Td56547792;
Td56547792 =  Td56527793 * Td56537794;
result = Td56467791 + Td56547792;
return result;
}

double solver2nd_rot_b6499_fun(int* m6500, Value* l6501, Value *env){
double result;
Value* Ta55847789;
Ta55847789 = solver_w_vec;
int Ti55857790;
Ti55857790 = 2;
double Td55867786;
Td55867786 = Ta55847789[Ti55857790].d;
int Ti55877788;
Ti55877788 = 1;
double Td55887787;
Td55887787 = l6501[Ti55877788].d;
double Td55897779;
Td55897779 =  Td55867786 * Td55887787;
Value* Ta55907784;
Ta55907784 = solver_w_vec;
int Ti55917785;
Ti55917785 = 1;
double Td55927781;
Td55927781 = Ta55907784[Ti55917785].d;
int Ti55937783;
Ti55937783 = 2;
double Td55947782;
Td55947782 = l6501[Ti55937783].d;
double Td55957780;
Td55957780 =  Td55927781 * Td55947782;
double Td55967777;
Td55967777 = Td55897779 + Td55957780;
double Td55977778;
Td55977778 = o_param_r16455_fun(m6500, NULL);
double Td55987761;
Td55987761 =  Td55967777 * Td55977778;
Value* Ta55997775;
Ta55997775 = solver_w_vec;
int Ti56007776;
Ti56007776 = 0;
double Td56017772;
Td56017772 = Ta55997775[Ti56007776].d;
int Ti56027774;
Ti56027774 = 2;
double Td56037773;
Td56037773 = l6501[Ti56027774].d;
double Td56047765;
Td56047765 =  Td56017772 * Td56037773;
Value* Ta56057770;
Ta56057770 = solver_w_vec;
int Ti56067771;
Ti56067771 = 2;
double Td56077767;
Td56077767 = Ta56057770[Ti56067771].d;
int Ti56087769;
Ti56087769 = 0;
double Td56097768;
Td56097768 = l6501[Ti56087769].d;
double Td56107766;
Td56107766 =  Td56077767 * Td56097768;
double Td56117763;
Td56117763 = Td56047765 + Td56107766;
double Td56127764;
Td56127764 = o_param_r26457_fun(m6500, NULL);
double Td56137762;
Td56137762 =  Td56117763 * Td56127764;
double Td56147745;
Td56147745 = Td55987761 + Td56137762;
Value* Ta56157759;
Ta56157759 = solver_w_vec;
int Ti56167760;
Ti56167760 = 0;
double Td56177756;
Td56177756 = Ta56157759[Ti56167760].d;
int Ti56187758;
Ti56187758 = 1;
double Td56197757;
Td56197757 = l6501[Ti56187758].d;
double Td56207749;
Td56207749 =  Td56177756 * Td56197757;
Value* Ta56217754;
Ta56217754 = solver_w_vec;
int Ti56227755;
Ti56227755 = 1;
double Td56237751;
Td56237751 = Ta56217754[Ti56227755].d;
int Ti56247753;
Ti56247753 = 0;
double Td56257752;
Td56257752 = l6501[Ti56247753].d;
double Td56267750;
Td56267750 =  Td56237751 * Td56257752;
double Td56277747;
Td56277747 = Td56207749 + Td56267750;
double Td56287748;
Td56287748 = o_param_r36459_fun(m6500, NULL);
double Td56297746;
Td56297746 =  Td56277747 * Td56287748;
result = Td56147745 + Td56297746;
return result;
}

int solver_second6502_fun(int* m6503, Value* l6504, Value *env){
int result;
double aa07704;
aa07704 = in_prod_sqr_obj6490_fun(m6503, l6504, NULL);
int Ti55557742;
Ti55557742 = o_isrot6431_fun(m6503, NULL);
int Ti55567743;
Ti55567743 = 0;
double aa7705;
if(Ti55557742 == Ti55567743){
aa7705 = aa07704;
}
else{
double Td55577744;
Td55577744 = in_prod_co_objrot6493_fun(m6503, l6504, NULL);
aa7705 = aa07704 + Td55577744;
}
double Td55587706;
Td55587706 = 0.000000;
if(Td55587706 == aa7705){
result = 0;
}
else{
double Td55597740;
Td55597740 = 2.000000;
double Td55607741;
Td55607741 = solver2nd_mul_b6496_fun(m6503, l6504, NULL);
double bb07707;
bb07707 =  Td55597740 * Td55607741;
int Ti55617737;
Ti55617737 = o_isrot6431_fun(m6503, NULL);
int Ti55627738;
Ti55627738 = 0;
double bb7708;
if(Ti55617737 == Ti55627738){
bb7708 = bb07707;
}
else{
double Td55637739;
Td55637739 = solver2nd_rot_b6499_fun(m6503, l6504, NULL);
bb7708 = bb07707 + Td55637739;
}
Value* Ta55647736;
Ta55647736 = solver_w_vec;
double cc07709;
cc07709 = in_prod_sqr_obj6490_fun(m6503, Ta55647736, NULL);
int Ti55657732;
Ti55657732 = o_isrot6431_fun(m6503, NULL);
int Ti55667733;
Ti55667733 = 0;
double cc17710;
if(Ti55657732 == Ti55667733){
cc17710 = cc07709;
}
else{
Value* Ta55677735;
Ta55677735 = solver_w_vec;
double Td55687734;
Td55687734 = in_prod_co_objrot6493_fun(m6503, Ta55677735, NULL);
cc17710 = cc07709 + Td55687734;
}
int Ti55697729;
Ti55697729 = o_form6425_fun(m6503, NULL);
int Ti55707730;
Ti55707730 = 3;
double cc7711;
if(Ti55697729 == Ti55707730){
double Td55717731;
Td55717731 = 1.000000;
cc7711 = cc17710 - Td55717731;
}
else{
cc7711 = cc17710;
}
double Td55727728;
Td55727728 = 4.000000;
double Td55737727;
Td55737727 =  Td55727728 * aa7705;
double d27725;
d27725 =  Td55737727 * cc7711;
double Td55747726;
Td55747726 = fsqr6419_fun(bb7708, NULL);
double d7712;
d7712 = Td55747726 - d27725;
double Td55757713;
Td55757713 = 0.000000;
if(d7712 <= Td55757713){
result = 0;
}
else{
double sd7714;
sd7714 = sqrt(d7712);
bool Tb55767723;
Tb55767723 = o_isinvert6429_fun(m6503, NULL);
int Ti55777724;
Ti55777724 = 0;
double t17715;
if(Tb55767723 == Ti55777724){
t17715 = -sd7714;
}
else{
t17715 = sd7714;
}
Value* Ta55787717;
Ta55787717 = solver_dist;
int Ti55797718;
Ti55797718 = 0;
double Td55807721;
Td55807721 = t17715 - bb7708;
double Td55817722;
Td55817722 = 2.000000;
double Td55827720;
Td55827720 = Td55807721 / Td55817722;
double Td55837719;
Td55837719 = Td55827720 / aa7705;
int Tu45107716;
Ta55787717[Ti55797718].d = Td55837719;
result = 1;
}
}
return result;
}

int solver6505_fun(int index6506, Value* l6507, Value* p6508, Value *env){
int result;
Value* Ta55347703;
Ta55347703 = objects;
int* m7678;
m7678 = Ta55347703[index6506].a;
Value* Ta55357697;
Ta55357697 = solver_w_vec;
int Ti55367698;
Ti55367698 = 0;
int Ti55377702;
Ti55377702 = 0;
double Td55387700;
Td55387700 = p6508[Ti55377702].d;
double Td55397701;
Td55397701 = o_param_x6439_fun(m7678, NULL);
double Td55407699;
Td55407699 = Td55387700 - Td55397701;
int Tu45137679;
Ta55357697[Ti55367698].d = Td55407699;
Value* Ta55417691;
Ta55417691 = solver_w_vec;
int Ti55427692;
Ti55427692 = 1;
int Ti55437696;
Ti55437696 = 1;
double Td55447694;
Td55447694 = p6508[Ti55437696].d;
double Td55457695;
Td55457695 = o_param_y6441_fun(m7678, NULL);
double Td55467693;
Td55467693 = Td55447694 - Td55457695;
int Tu45127680;
Ta55417691[Ti55427692].d = Td55467693;
Value* Ta55477685;
Ta55477685 = solver_w_vec;
int Ti55487686;
Ti55487686 = 2;
int Ti55497690;
Ti55497690 = 2;
double Td55507688;
Td55507688 = p6508[Ti55497690].d;
double Td55517689;
Td55517689 = o_param_z6443_fun(m7678, NULL);
double Td55527687;
Td55527687 = Td55507688 - Td55517689;
int Tu45117681;
Ta55477685[Ti55487686].d = Td55527687;
int m_shape7682;
m_shape7682 = o_form6425_fun(m7678, NULL);
int Ti55537683;
Ti55537683 = 1;
if(m_shape7682 == Ti55537683){
result = solver_rect6484_fun(m7678, l6507, NULL);
}
else{
int Ti55547684;
Ti55547684 = 2;
if(m_shape7682 == Ti55547684){
result = solver_surface6487_fun(m7678, l6507, NULL);
}
else{
result = solver_second6502_fun(m7678, l6507, NULL);
}
}
return result;
}

bool is_rect_outside6509_fun(int* m6510, Value *env){
bool result;
double Td55157663;
Td55157663 = o_param_a6433_fun(m6510, NULL);
Value* Ta55167676;
Ta55167676 = isoutside_q;
int Ti55177677;
Ti55177677 = 0;
double Td55187675;
Td55187675 = Ta55167676[Ti55177677].d;
double Td55197664;
Td55197664 = fabs(Td55187675);
int Ti55307659;
if(Td55157663 <= Td55197664){
Ti55307659 = 0;
}
else{
double Td55207665;
Td55207665 = o_param_b6435_fun(m6510, NULL);
Value* Ta55217673;
Ta55217673 = isoutside_q;
int Ti55227674;
Ti55227674 = 1;
double Td55237672;
Td55237672 = Ta55217673[Ti55227674].d;
double Td55247666;
Td55247666 = fabs(Td55237672);
if(Td55207665 <= Td55247666){
Ti55307659 = 0;
}
else{
double Td55257667;
Td55257667 = o_param_c6437_fun(m6510, NULL);
Value* Ta55267670;
Ta55267670 = isoutside_q;
int Ti55277671;
Ti55277671 = 2;
double Td55287669;
Td55287669 = Ta55267670[Ti55277671].d;
double Td55297668;
Td55297668 = fabs(Td55287669);
if(Td55257667 <= Td55297668){
Ti55307659 = 0;
}
else{
Ti55307659 = 1;
}
}
}
int Ti55317660;
Ti55317660 = 0;
if(Ti55307659 == Ti55317660){
bool Tb55327661;
Tb55327661 = o_isinvert6429_fun(m6510, NULL);
int Ti55337662;
Ti55337662 = 0;
if(Tb55327661 == Ti55337662){
result = 1;
}
else{
result = 0;
}
}
else{
result = o_isinvert6429_fun(m6510, NULL);
}
return result;
}

bool is_plane_outside6511_fun(int* m6512, Value *env){
bool result;
double Td54957655;
Td54957655 = o_param_a6433_fun(m6512, NULL);
Value* Ta54967657;
Ta54967657 = isoutside_q;
int Ti54977658;
Ti54977658 = 0;
double Td54987656;
Td54987656 = Ta54967657[Ti54977658].d;
double Td54997649;
Td54997649 =  Td54957655 * Td54987656;
double Td55007651;
Td55007651 = o_param_b6435_fun(m6512, NULL);
Value* Ta55017653;
Ta55017653 = isoutside_q;
int Ti55027654;
Ti55027654 = 1;
double Td55037652;
Td55037652 = Ta55017653[Ti55027654].d;
double Td55047650;
Td55047650 =  Td55007651 * Td55037652;
double Td55057643;
Td55057643 = Td54997649 + Td55047650;
double Td55067645;
Td55067645 = o_param_c6437_fun(m6512, NULL);
Value* Ta55077647;
Ta55077647 = isoutside_q;
int Ti55087648;
Ti55087648 = 2;
double Td55097646;
Td55097646 = Ta55077647[Ti55087648].d;
double Td55107644;
Td55107644 =  Td55067645 * Td55097646;
double w7637;
w7637 = Td55057643 + Td55107644;
double Td55117642;
Td55117642 = 0.000000;
bool s7638;
if(Td55117642 <= w7637){
s7638 = 0;
}
else{
s7638 = 1;
}
bool Tb55127641;
Tb55127641 = o_isinvert6429_fun(m6512, NULL);
bool Tb55137639;
Tb55137639 = xor6416_fun(Tb55127641, s7638, NULL);
int Ti55147640;
Ti55147640 = 0;
if(Tb55137639 == Ti55147640){
result = 1;
}
else{
result = 0;
}
return result;
}

bool is_second_outside6513_fun(int* m6514, Value *env){
bool result;
Value* Ta54837636;
Ta54837636 = isoutside_q;
double w7621;
w7621 = in_prod_sqr_obj6490_fun(m6514, Ta54837636, NULL);
int Ti54847633;
Ti54847633 = o_form6425_fun(m6514, NULL);
int Ti54857634;
Ti54857634 = 3;
double w27622;
if(Ti54847633 == Ti54857634){
double Td54867635;
Td54867635 = 1.000000;
w27622 = w7621 - Td54867635;
}
else{
w27622 = w7621;
}
int Ti54877629;
Ti54877629 = o_isrot6431_fun(m6514, NULL);
int Ti54887630;
Ti54887630 = 0;
double w37623;
if(Ti54877629 == Ti54887630){
w37623 = w27622;
}
else{
Value* Ta54897632;
Ta54897632 = isoutside_q;
double Td54907631;
Td54907631 = in_prod_co_objrot6493_fun(m6514, Ta54897632, NULL);
w37623 = w27622 + Td54907631;
}
double Td54917628;
Td54917628 = 0.000000;
bool s7624;
if(Td54917628 <= w37623){
s7624 = 0;
}
else{
s7624 = 1;
}
bool Tb54927627;
Tb54927627 = o_isinvert6429_fun(m6514, NULL);
bool Tb54937625;
Tb54937625 = xor6416_fun(Tb54927627, s7624, NULL);
int Ti54947626;
Ti54947626 = 0;
if(Tb54937625 == Ti54947626){
result = 1;
}
else{
result = 0;
}
return result;
}

bool is_outside6515_fun(int* m6516, Value *env){
bool result;
Value* Ta54607614;
Ta54607614 = isoutside_q;
int Ti54617615;
Ti54617615 = 0;
Value* Ta54627619;
Ta54627619 = chkinside_p;
int Ti54637620;
Ti54637620 = 0;
double Td54647617;
Td54647617 = Ta54627619[Ti54637620].d;
double Td54657618;
Td54657618 = o_param_x6439_fun(m6516, NULL);
double Td54667616;
Td54667616 = Td54647617 - Td54657618;
int Tu45167594;
Ta54607614[Ti54617615].d = Td54667616;
Value* Ta54677607;
Ta54677607 = isoutside_q;
int Ti54687608;
Ti54687608 = 1;
Value* Ta54697612;
Ta54697612 = chkinside_p;
int Ti54707613;
Ti54707613 = 1;
double Td54717610;
Td54717610 = Ta54697612[Ti54707613].d;
double Td54727611;
Td54727611 = o_param_y6441_fun(m6516, NULL);
double Td54737609;
Td54737609 = Td54717610 - Td54727611;
int Tu45157595;
Ta54677607[Ti54687608].d = Td54737609;
Value* Ta54747600;
Ta54747600 = isoutside_q;
int Ti54757601;
Ti54757601 = 2;
Value* Ta54767605;
Ta54767605 = chkinside_p;
int Ti54777606;
Ti54777606 = 2;
double Td54787603;
Td54787603 = Ta54767605[Ti54777606].d;
double Td54797604;
Td54797604 = o_param_z6443_fun(m6516, NULL);
double Td54807602;
Td54807602 = Td54787603 - Td54797604;
int Tu45147596;
Ta54747600[Ti54757601].d = Td54807602;
int m_shape7597;
m_shape7597 = o_form6425_fun(m6516, NULL);
int Ti54817598;
Ti54817598 = 1;
if(m_shape7597 == Ti54817598){
result = is_rect_outside6509_fun(m6516, NULL);
}
else{
int Ti54827599;
Ti54827599 = 2;
if(m_shape7597 == Ti54827599){
result = is_plane_outside6511_fun(m6516, NULL);
}
else{
result = is_second_outside6513_fun(m6516, NULL);
}
}
return result;
}

bool check_all_inside6517_fun(int ofs6518, Value* iand6519, Value *env){
bool result;
int head7585;
head7585 = iand6519[ofs6518].i;
int Ti54527593;
Ti54527593 = 1;
int Ti54537586;
Ti54537586 = -Ti54527593;
if(head7585 == Ti54537586){
result = 1;
}
else{
Value* Ta54547592;
Ta54547592 = objects;
int* Tt54557591;
Tt54557591 = Ta54547592[head7585].a;
bool Tb54567587;
Tb54567587 = is_outside6515_fun(Tt54557591, NULL);
int Ti54577588;
Ti54577588 = 0;
if(Tb54567587 == Ti54577588){
int Ti54587590;
Ti54587590 = 1;
int Ti54597589;
Ti54597589 = ofs6518 + Ti54587590;
result = check_all_inside6517_fun(Ti54597589, iand6519, NULL);
}
else{
result = 0;
}
}
return result;
}

bool shadow_check_and_group6520_fun(int iand_ofs6521, Value* and_group6522, Value* p6523, Value *env){
bool result;
int Ti54037529;
Ti54037529 = and_group6522[iand_ofs6521].i;
int Ti54047584;
Ti54047584 = 1;
int Ti54057530;
Ti54057530 = -Ti54047584;
if(Ti54037529 == Ti54057530){
result = 0;
}
else{
int obj7531;
obj7531 = and_group6522[iand_ofs6521].i;
Value* Ta54067583;
Ta54067583 = light;
int t07532;
t07532 = solver6505_fun(obj7531, Ta54067583, p6523, NULL);
Value* Ta54077581;
Ta54077581 = solver_dist;
int Ti54087582;
Ti54087582 = 0;
double t0p7533;
t0p7533 = Ta54077581[Ti54087582].d;
int Ti54097579;
Ti54097579 = 0;
int Ti54117534;
if(t07532 == Ti54097579){
Ti54117534 = 0;
}
else{
double Td54107580;
Td54107580 = -0.200000;
if(Td54107580 <= t0p7533){
Ti54117534 = 0;
}
else{
Ti54117534 = 1;
}
}
int Ti54127535;
Ti54127535 = 0;
if(Ti54117534 == Ti54127535){
Value* Ta54137578;
Ta54137578 = objects;
int* Tt54147577;
Tt54147577 = Ta54137578[obj7531].a;
bool Tb54157573;
Tb54157573 = o_isinvert6429_fun(Tt54147577, NULL);
int Ti54167574;
Ti54167574 = 0;
if(Tb54157573 == Ti54167574){
result = 0;
}
else{
int Ti54177576;
Ti54177576 = 1;
int Ti54187575;
Ti54187575 = iand_ofs6521 + Ti54177576;
result = shadow_check_and_group6520_fun(Ti54187575, and_group6522, p6523, NULL);
}
}
else{
double Td54197572;
Td54197572 = 0.010000;
double t7536;
t7536 = t0p7533 + Td54197572;
Value* Ta54207563;
Ta54207563 = chkinside_p;
int Ti54217564;
Ti54217564 = 0;
Value* Ta54227570;
Ta54227570 = light;
int Ti54237571;
Ti54237571 = 0;
double Td54247569;
Td54247569 = Ta54227570[Ti54237571].d;
double Td54257566;
Td54257566 =  Td54247569 * t7536;
int Ti54267568;
Ti54267568 = 0;
double Td54277567;
Td54277567 = p6523[Ti54267568].d;
double Td54287565;
Td54287565 = Td54257566 + Td54277567;
int Tu45197537;
Ta54207563[Ti54217564].d = Td54287565;
Value* Ta54297554;
Ta54297554 = chkinside_p;
int Ti54307555;
Ti54307555 = 1;
Value* Ta54317561;
Ta54317561 = light;
int Ti54327562;
Ti54327562 = 1;
double Td54337560;
Td54337560 = Ta54317561[Ti54327562].d;
double Td54347557;
Td54347557 =  Td54337560 * t7536;
int Ti54357559;
Ti54357559 = 1;
double Td54367558;
Td54367558 = p6523[Ti54357559].d;
double Td54377556;
Td54377556 = Td54347557 + Td54367558;
int Tu45187538;
Ta54297554[Ti54307555].d = Td54377556;
Value* Ta54387545;
Ta54387545 = chkinside_p;
int Ti54397546;
Ti54397546 = 2;
Value* Ta54407552;
Ta54407552 = light;
int Ti54417553;
Ti54417553 = 2;
double Td54427551;
Td54427551 = Ta54407552[Ti54417553].d;
double Td54437548;
Td54437548 =  Td54427551 * t7536;
int Ti54447550;
Ti54447550 = 2;
double Td54457549;
Td54457549 = p6523[Ti54447550].d;
double Td54467547;
Td54467547 = Td54437548 + Td54457549;
int Tu45177539;
Ta54387545[Ti54397546].d = Td54467547;
int Ti54477544;
Ti54477544 = 0;
bool Tb54487540;
Tb54487540 = check_all_inside6517_fun(Ti54477544, and_group6522, NULL);
int Ti54497541;
Ti54497541 = 0;
if(Tb54487540 == Ti54497541){
int Ti54507543;
Ti54507543 = 1;
int Ti54517542;
Ti54517542 = iand_ofs6521 + Ti54507543;
result = shadow_check_and_group6520_fun(Ti54517542, and_group6522, p6523, NULL);
}
else{
result = 1;
}
}
}
return result;
}

bool shadow_check_one_or_group6524_fun(int ofs6525, Value* or_group6526, Value* p6527, Value *env){
bool result;
int head7519;
head7519 = or_group6526[ofs6525].i;
int Ti53967528;
Ti53967528 = 1;
int Ti53977520;
Ti53977520 = -Ti53967528;
if(head7519 == Ti53977520){
result = 0;
}
else{
Value* Ta53987527;
Ta53987527 = and_net;
Value* and_group7521;
and_group7521 = Ta53987527[head7519].a;
int Ti53997526;
Ti53997526 = 0;
bool shadow_p7522;
shadow_p7522 = shadow_check_and_group6520_fun(Ti53997526, and_group7521, p6527, NULL);
int Ti54007523;
Ti54007523 = 0;
if(shadow_p7522 == Ti54007523){
int Ti54017525;
Ti54017525 = 1;
int Ti54027524;
Ti54027524 = ofs6525 + Ti54017525;
result = shadow_check_one_or_group6524_fun(Ti54027524, or_group6526, p6527, NULL);
}
else{
result = 1;
}
}
return result;
}

bool shadow_check_one_or_matrix6528_fun(int ofs6529, Value* or_matrix6530, Value* p6531, Value *env){
bool result;
Value* head7492;
head7492 = or_matrix6530[ofs6529].a;
int Ti53727518;
Ti53727518 = 0;
int range_primitive7493;
range_primitive7493 = head7492[Ti53727518].i;
int Ti53737517;
Ti53737517 = 1;
int Ti53747494;
Ti53747494 = -Ti53737517;
if(range_primitive7493 == Ti53747494){
result = 0;
}
else{
int Ti53757495;
Ti53757495 = 99;
if(range_primitive7493 == Ti53757495){
int Ti53767516;
Ti53767516 = 1;
bool Tb53777512;
Tb53777512 = shadow_check_one_or_group6524_fun(Ti53767516, head7492, p6531, NULL);
int Ti53787513;
Ti53787513 = 0;
if(Tb53777512 == Ti53787513){
int Ti53797515;
Ti53797515 = 1;
int Ti53807514;
Ti53807514 = ofs6529 + Ti53797515;
result = shadow_check_one_or_matrix6528_fun(Ti53807514, or_matrix6530, p6531, NULL);
}
else{
result = 1;
}
}
else{
Value* Ta53817511;
Ta53817511 = light;
int t7496;
t7496 = solver6505_fun(range_primitive7493, Ta53817511, p6531, NULL);
int Ti53827497;
Ti53827497 = 0;
if(t7496 == Ti53827497){
int Ti53837510;
Ti53837510 = 1;
int Ti53847509;
Ti53847509 = ofs6529 + Ti53837510;
result = shadow_check_one_or_matrix6528_fun(Ti53847509, or_matrix6530, p6531, NULL);
}
else{
double Td53857498;
Td53857498 = -0.100000;
Value* Ta53867507;
Ta53867507 = solver_dist;
int Ti53877508;
Ti53877508 = 0;
double Td53887499;
Td53887499 = Ta53867507[Ti53877508].d;
if(Td53857498 <= Td53887499){
int Ti53897506;
Ti53897506 = 1;
int Ti53907505;
Ti53907505 = ofs6529 + Ti53897506;
result = shadow_check_one_or_matrix6528_fun(Ti53907505, or_matrix6530, p6531, NULL);
}
else{
int Ti53917504;
Ti53917504 = 1;
bool Tb53927500;
Tb53927500 = shadow_check_one_or_group6524_fun(Ti53917504, head7492, p6531, NULL);
int Ti53937501;
Ti53937501 = 0;
if(Tb53927500 == Ti53937501){
int Ti53947503;
Ti53947503 = 1;
int Ti53957502;
Ti53957502 = ofs6529 + Ti53947503;
result = shadow_check_one_or_matrix6528_fun(Ti53957502, or_matrix6530, p6531, NULL);
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

int solve_each_element6532_fun(int iand_ofs6533, Value* and_group6534, Value *env){
int result;
int iobj7400;
iobj7400 = and_group6534[iand_ofs6533].i;
int Ti52937491;
Ti52937491 = 1;
int Ti52947401;
Ti52947401 = -Ti52937491;
if(iobj7400 == Ti52947401){
result = 1;
}
else{
Value* Ta52957489;
Ta52957489 = vscan;
Value* Ta52967490;
Ta52967490 = viewpoint;
int t07402;
t07402 = solver6505_fun(iobj7400, Ta52957489, Ta52967490, NULL);
int Ti52977410;
Ti52977410 = 0;
int Tu45287403;
if(t07402 == Ti52977410){
Value* Ta52987488;
Ta52987488 = objects;
int* Tt52997487;
Tt52997487 = Ta52987488[iobj7400].a;
bool Tb53007482;
Tb53007482 = o_isinvert6429_fun(Tt52997487, NULL);
int Ti53017483;
Ti53017483 = 0;
if(Tb53007482 == Ti53017483){
Value* Ta53027484;
Ta53027484 = end_flag;
int Ti53037485;
Ti53037485 = 0;
int Ti53047486;
Ti53047486 = 1;
Ta53027484[Ti53037485].i = Ti53047486;
}
else{
Tu45287403 = 1;
}
}
else{
Value* Ta53057480;
Ta53057480 = solver_dist;
int Ti53067481;
Ti53067481 = 0;
double t0p7411;
t0p7411 = Ta53057480[Ti53067481].d;
double Td53077412;
Td53077412 = -0.100000;
if(t0p7411 <= Td53077412){
Tu45287403 = 1;
}
else{
Value* Ta53087478;
Ta53087478 = tmin;
int Ti53097479;
Ti53097479 = 0;
double Td53107413;
Td53107413 = Ta53087478[Ti53097479].d;
if(Td53107413 <= t0p7411){
Tu45287403 = 1;
}
else{
double Td53117477;
Td53117477 = 0.010000;
double t7414;
t7414 = t0p7411 + Td53117477;
Value* Ta53127467;
Ta53127467 = chkinside_p;
int Ti53137468;
Ti53137468 = 0;
Value* Ta53147475;
Ta53147475 = vscan;
int Ti53157476;
Ti53157476 = 0;
double Td53167474;
Td53167474 = Ta53147475[Ti53157476].d;
double Td53177470;
Td53177470 =  Td53167474 * t7414;
Value* Ta53187472;
Ta53187472 = viewpoint;
int Ti53197473;
Ti53197473 = 0;
double Td53207471;
Td53207471 = Ta53187472[Ti53197473].d;
double Td53217469;
Td53217469 = Td53177470 + Td53207471;
int Tu45277415;
Ta53127467[Ti53137468].d = Td53217469;
Value* Ta53227457;
Ta53227457 = chkinside_p;
int Ti53237458;
Ti53237458 = 1;
Value* Ta53247465;
Ta53247465 = vscan;
int Ti53257466;
Ti53257466 = 1;
double Td53267464;
Td53267464 = Ta53247465[Ti53257466].d;
double Td53277460;
Td53277460 =  Td53267464 * t7414;
Value* Ta53287462;
Ta53287462 = viewpoint;
int Ti53297463;
Ti53297463 = 1;
double Td53307461;
Td53307461 = Ta53287462[Ti53297463].d;
double Td53317459;
Td53317459 = Td53277460 + Td53307461;
int Tu45267416;
Ta53227457[Ti53237458].d = Td53317459;
Value* Ta53327447;
Ta53327447 = chkinside_p;
int Ti53337448;
Ti53337448 = 2;
Value* Ta53347455;
Ta53347455 = vscan;
int Ti53357456;
Ti53357456 = 2;
double Td53367454;
Td53367454 = Ta53347455[Ti53357456].d;
double Td53377450;
Td53377450 =  Td53367454 * t7414;
Value* Ta53387452;
Ta53387452 = viewpoint;
int Ti53397453;
Ti53397453 = 2;
double Td53407451;
Td53407451 = Ta53387452[Ti53397453].d;
double Td53417449;
Td53417449 = Td53377450 + Td53407451;
int Tu45257417;
Ta53327447[Ti53337448].d = Td53417449;
int Ti53427446;
Ti53427446 = 0;
bool Tb53437418;
Tb53437418 = check_all_inside6517_fun(Ti53427446, and_group6534, NULL);
int Ti53447419;
Ti53447419 = 0;
if(Tb53437418 == Ti53447419){
Tu45287403 = 1;
}
else{
Value* Ta53457444;
Ta53457444 = tmin;
int Ti53467445;
Ti53467445 = 0;
int Tu45247420;
Ta53457444[Ti53467445].d = t7414;
Value* Ta53477439;
Ta53477439 = crashed_point;
int Ti53487440;
Ti53487440 = 0;
Value* Ta53497442;
Ta53497442 = chkinside_p;
int Ti53507443;
Ti53507443 = 0;
double Td53517441;
Td53517441 = Ta53497442[Ti53507443].d;
int Tu45237421;
Ta53477439[Ti53487440].d = Td53517441;
Value* Ta53527434;
Ta53527434 = crashed_point;
int Ti53537435;
Ti53537435 = 1;
Value* Ta53547437;
Ta53547437 = chkinside_p;
int Ti53557438;
Ti53557438 = 1;
double Td53567436;
Td53567436 = Ta53547437[Ti53557438].d;
int Tu45227422;
Ta53527434[Ti53537435].d = Td53567436;
Value* Ta53577429;
Ta53577429 = crashed_point;
int Ti53587430;
Ti53587430 = 2;
Value* Ta53597432;
Ta53597432 = chkinside_p;
int Ti53607433;
Ti53607433 = 2;
double Td53617431;
Td53617431 = Ta53597432[Ti53607433].d;
int Tu45217423;
Ta53577429[Ti53587430].d = Td53617431;
Value* Ta53627427;
Ta53627427 = intsec_rectside;
int Ti53637428;
Ti53637428 = 0;
int Tu45207424;
Ta53627427[Ti53637428].i = t07402;
Value* Ta53647425;
Ta53647425 = crashed_object;
int Ti53657426;
Ti53657426 = 0;
Ta53647425[Ti53657426].i = iobj7400;
}
}
}
}
Value* Ta53667408;
Ta53667408 = end_flag;
int Ti53677409;
Ti53677409 = 0;
bool Tb53687404;
Tb53687404 = Ta53667408[Ti53677409].b;
int Ti53697405;
Ti53697405 = 0;
if(Tb53687404 == Ti53697405){
int Ti53707407;
Ti53707407 = 1;
int Ti53717406;
Ti53717406 = iand_ofs6533 + Ti53707407;
result = solve_each_element6532_fun(Ti53717406, and_group6534, NULL);
}
else{
result = 1;
}
}
return result;
}

int solve_one_or_network6535_fun(int ofs6536, Value* or_group6537, Value *env){
int result;
int head7387;
head7387 = or_group6537[ofs6536].i;
int Ti52847399;
Ti52847399 = 1;
int Ti52857388;
Ti52857388 = -Ti52847399;
if(head7387 == Ti52857388){
result = 1;
}
else{
Value* Ta52867398;
Ta52867398 = and_net;
Value* and_group7389;
and_group7389 = Ta52867398[head7387].a;
Value* Ta52877395;
Ta52877395 = end_flag;
int Ti52887396;
Ti52887396 = 0;
int Ti52897397;
Ti52897397 = 0;
int Tu45307390;
Ta52877395[Ti52887396].i = Ti52897397;
int Ti52907394;
Ti52907394 = 0;
int Tu45297391;
Tu45297391 = solve_each_element6532_fun(Ti52907394, and_group7389, NULL);
int Ti52917393;
Ti52917393 = 1;
int Ti52927392;
Ti52927392 = ofs6536 + Ti52917393;
result = solve_one_or_network6535_fun(Ti52927392, or_group6537, NULL);
}
return result;
}

int trace_or_matrix6538_fun(int ofs6539, Value* or_network6540, Value *env){
int result;
Value* head7366;
head7366 = or_network6540[ofs6539].a;
int Ti52687386;
Ti52687386 = 0;
int range_primitive7367;
range_primitive7367 = head7366[Ti52687386].i;
int Ti52697385;
Ti52697385 = 1;
int Ti52707368;
Ti52707368 = -Ti52697385;
if(range_primitive7367 == Ti52707368){
result = 1;
}
else{
int Ti52717372;
Ti52717372 = 99;
int Tu45317369;
if(range_primitive7367 == Ti52717372){
int Ti52727384;
Ti52727384 = 1;
Tu45317369 = solve_one_or_network6535_fun(Ti52727384, head7366, NULL);
}
else{
Value* Ta52737382;
Ta52737382 = vscan;
Value* Ta52747383;
Ta52747383 = viewpoint;
int t7373;
t7373 = solver6505_fun(range_primitive7367, Ta52737382, Ta52747383, NULL);
int Ti52757374;
Ti52757374 = 0;
if(t7373 == Ti52757374){
Tu45317369 = 1;
}
else{
Value* Ta52767380;
Ta52767380 = solver_dist;
int Ti52777381;
Ti52777381 = 0;
double tp7375;
tp7375 = Ta52767380[Ti52777381].d;
Value* Ta52787378;
Ta52787378 = tmin;
int Ti52797379;
Ti52797379 = 0;
double Td52807376;
Td52807376 = Ta52787378[Ti52797379].d;
if(Td52807376 <= tp7375){
Tu45317369 = 1;
}
else{
int Ti52817377;
Ti52817377 = 1;
Tu45317369 = solve_one_or_network6535_fun(Ti52817377, head7366, NULL);
}
}
}
int Ti52827371;
Ti52827371 = 1;
int Ti52837370;
Ti52837370 = ofs6539 + Ti52827371;
result = trace_or_matrix6538_fun(Ti52837370, or_network6540, NULL);
}
return result;
}

bool tracer6541_fun(Value* viewpoint6542, Value* vscan6543, Value *env){
bool result;
Value* Ta52577363;
Ta52577363 = tmin;
int Ti52587364;
Ti52587364 = 0;
double Td52597365;
Td52597365 = 1000000000.000000;
int Tu45337352;
Ta52577363[Ti52587364].d = Td52597365;
int Ti52607359;
Ti52607359 = 0;
Value* Ta52617361;
Ta52617361 = or_net;
int Ti52627362;
Ti52627362 = 0;
Value* Ta52637360;
Ta52637360 = Ta52617361[Ti52627362].a;
int Tu45327353;
Tu45327353 = trace_or_matrix6538_fun(Ti52607359, Ta52637360, NULL);
Value* Ta52647357;
Ta52647357 = tmin;
int Ti52657358;
Ti52657358 = 0;
double t7354;
t7354 = Ta52647357[Ti52657358].d;
double Td52667355;
Td52667355 = -0.100000;
if(t7354 <= Td52667355){
result = 0;
}
else{
double Td52677356;
Td52677356 = 100000000.000000;
if(Td52677356 <= t7354){
result = 0;
}
else{
result = 1;
}
}
return result;
}

int get_nvector_rect6544_fun(int Tu45346545, Value *env){
int result;
Value* Ta52137350;
Ta52137350 = intsec_rectside;
int Ti52147351;
Ti52147351 = 0;
int rectside7301;
rectside7301 = Ta52137350[Ti52147351].i;
int Ti52157302;
Ti52157302 = 1;
if(rectside7301 == Ti52157302){
Value* Ta52167343;
Ta52167343 = nvector;
int Ti52177344;
Ti52177344 = 0;
Value* Ta52187348;
Ta52187348 = vscan;
int Ti52197349;
Ti52197349 = 0;
double Td52207347;
Td52207347 = Ta52187348[Ti52197349].d;
double Td52217346;
Td52217346 = sgn6464_fun(Td52207347, NULL);
double Td52227345;
Td52227345 = -Td52217346;
int Tu45367335;
Ta52167343[Ti52177344].d = Td52227345;
Value* Ta52237340;
Ta52237340 = nvector;
int Ti52247341;
Ti52247341 = 1;
double Td52257342;
Td52257342 = 0.000000;
int Tu45357336;
Ta52237340[Ti52247341].d = Td52257342;
Value* Ta52267337;
Ta52267337 = nvector;
int Ti52277338;
Ti52277338 = 2;
double Td52287339;
Td52287339 = 0.000000;
Ta52267337[Ti52277338].d = Td52287339;
}
else{
int Ti52297303;
Ti52297303 = 2;
if(rectside7301 == Ti52297303){
Value* Ta52307332;
Ta52307332 = nvector;
int Ti52317333;
Ti52317333 = 0;
double Td52327334;
Td52327334 = 0.000000;
int Tu45387320;
Ta52307332[Ti52317333].d = Td52327334;
Value* Ta52337325;
Ta52337325 = nvector;
int Ti52347326;
Ti52347326 = 1;
Value* Ta52357330;
Ta52357330 = vscan;
int Ti52367331;
Ti52367331 = 1;
double Td52377329;
Td52377329 = Ta52357330[Ti52367331].d;
double Td52387328;
Td52387328 = sgn6464_fun(Td52377329, NULL);
double Td52397327;
Td52397327 = -Td52387328;
int Tu45377321;
Ta52337325[Ti52347326].d = Td52397327;
Value* Ta52407322;
Ta52407322 = nvector;
int Ti52417323;
Ti52417323 = 2;
double Td52427324;
Td52427324 = 0.000000;
Ta52407322[Ti52417323].d = Td52427324;
}
else{
int Ti52437304;
Ti52437304 = 3;
if(rectside7301 == Ti52437304){
Value* Ta52447317;
Ta52447317 = nvector;
int Ti52457318;
Ti52457318 = 0;
double Td52467319;
Td52467319 = 0.000000;
int Tu45407305;
Ta52447317[Ti52457318].d = Td52467319;
Value* Ta52477314;
Ta52477314 = nvector;
int Ti52487315;
Ti52487315 = 1;
double Td52497316;
Td52497316 = 0.000000;
int Tu45397306;
Ta52477314[Ti52487315].d = Td52497316;
Value* Ta52507307;
Ta52507307 = nvector;
int Ti52517308;
Ti52517308 = 2;
Value* Ta52527312;
Ta52527312 = vscan;
int Ti52537313;
Ti52537313 = 2;
double Td52547311;
Td52547311 = Ta52527312[Ti52537313].d;
double Td52557310;
Td52557310 = sgn6464_fun(Td52547311, NULL);
double Td52567309;
Td52567309 = -Td52557310;
Ta52507307[Ti52517308].d = Td52567309;
}
else{
result = 1;
}
}
}
return result;
}

int get_nvector_plane6546_fun(int* m6547, Value *env){
int result;
Value* Ta52017297;
Ta52017297 = nvector;
int Ti52027298;
Ti52027298 = 0;
double Td52037300;
Td52037300 = o_param_a6433_fun(m6547, NULL);
double Td52047299;
Td52047299 = -Td52037300;
int Tu45427287;
Ta52017297[Ti52027298].d = Td52047299;
Value* Ta52057293;
Ta52057293 = nvector;
int Ti52067294;
Ti52067294 = 1;
double Td52077296;
Td52077296 = o_param_b6435_fun(m6547, NULL);
double Td52087295;
Td52087295 = -Td52077296;
int Tu45417288;
Ta52057293[Ti52067294].d = Td52087295;
Value* Ta52097289;
Ta52097289 = nvector;
int Ti52107290;
Ti52107290 = 2;
double Td52117292;
Td52117292 = o_param_c6437_fun(m6547, NULL);
double Td52127291;
Td52127291 = -Td52117292;
Ta52097289[Ti52107290].d = Td52127291;
return result;
}

int get_nvector_second_norot6548_fun(int* m6549, Value* p6550, Value *env){
int result;
Value* Ta51757279;
Ta51757279 = nvector;
int Ti51767280;
Ti51767280 = 0;
int Ti51777286;
Ti51777286 = 0;
double Td51787284;
Td51787284 = p6550[Ti51777286].d;
double Td51797285;
Td51797285 = o_param_x6439_fun(m6549, NULL);
double Td51807282;
Td51807282 = Td51787284 - Td51797285;
double Td51817283;
Td51817283 = o_param_a6433_fun(m6549, NULL);
double Td51827281;
Td51827281 =  Td51807282 * Td51817283;
int Tu45457258;
Ta51757279[Ti51767280].d = Td51827281;
Value* Ta51837271;
Ta51837271 = nvector;
int Ti51847272;
Ti51847272 = 1;
int Ti51857278;
Ti51857278 = 1;
double Td51867276;
Td51867276 = p6550[Ti51857278].d;
double Td51877277;
Td51877277 = o_param_y6441_fun(m6549, NULL);
double Td51887274;
Td51887274 = Td51867276 - Td51877277;
double Td51897275;
Td51897275 = o_param_b6435_fun(m6549, NULL);
double Td51907273;
Td51907273 =  Td51887274 * Td51897275;
int Tu45447259;
Ta51837271[Ti51847272].d = Td51907273;
Value* Ta51917263;
Ta51917263 = nvector;
int Ti51927264;
Ti51927264 = 2;
int Ti51937270;
Ti51937270 = 2;
double Td51947268;
Td51947268 = p6550[Ti51937270].d;
double Td51957269;
Td51957269 = o_param_z6443_fun(m6549, NULL);
double Td51967266;
Td51967266 = Td51947268 - Td51957269;
double Td51977267;
Td51977267 = o_param_c6437_fun(m6549, NULL);
double Td51987265;
Td51987265 =  Td51967266 * Td51977267;
int Tu45437260;
Ta51917263[Ti51927264].d = Td51987265;
Value* Ta51997261;
Ta51997261 = nvector;
bool Tb52007262;
Tb52007262 = o_isinvert6429_fun(m6549, NULL);
result = normalize_vector6461_fun(Ta51997261, Tb52007262, NULL);
return result;
}

int get_nvector_second_rot6551_fun(int* m6552, Value* p6553, Value *env){
int result;
Value* Ta50957252;
Ta50957252 = nvector_w;
int Ti50967253;
Ti50967253 = 0;
int Ti50977257;
Ti50977257 = 0;
double Td50987255;
Td50987255 = p6553[Ti50977257].d;
double Td50997256;
Td50997256 = o_param_x6439_fun(m6552, NULL);
double Td51007254;
Td51007254 = Td50987255 - Td50997256;
int Tu45517172;
Ta50957252[Ti50967253].d = Td51007254;
Value* Ta51017246;
Ta51017246 = nvector_w;
int Ti51027247;
Ti51027247 = 1;
int Ti51037251;
Ti51037251 = 1;
double Td51047249;
Td51047249 = p6553[Ti51037251].d;
double Td51057250;
Td51057250 = o_param_y6441_fun(m6552, NULL);
double Td51067248;
Td51067248 = Td51047249 - Td51057250;
int Tu45507173;
Ta51017246[Ti51027247].d = Td51067248;
Value* Ta51077240;
Ta51077240 = nvector_w;
int Ti51087241;
Ti51087241 = 2;
int Ti51097245;
Ti51097245 = 2;
double Td51107243;
Td51107243 = p6553[Ti51097245].d;
double Td51117244;
Td51117244 = o_param_z6443_fun(m6552, NULL);
double Td51127242;
Td51127242 = Td51107243 - Td51117244;
int Tu45497174;
Ta51077240[Ti51087241].d = Td51127242;
Value* Ta51137220;
Ta51137220 = nvector;
int Ti51147221;
Ti51147221 = 0;
Value* Ta51157238;
Ta51157238 = nvector_w;
int Ti51167239;
Ti51167239 = 0;
double Td51177236;
Td51177236 = Ta51157238[Ti51167239].d;
double Td51187237;
Td51187237 = o_param_a6433_fun(m6552, NULL);
double Td51197223;
Td51197223 =  Td51177236 * Td51187237;
Value* Ta51207234;
Ta51207234 = nvector_w;
int Ti51217235;
Ti51217235 = 1;
double Td51227232;
Td51227232 = Ta51207234[Ti51217235].d;
double Td51237233;
Td51237233 = o_param_r36459_fun(m6552, NULL);
double Td51247226;
Td51247226 =  Td51227232 * Td51237233;
Value* Ta51257230;
Ta51257230 = nvector_w;
int Ti51267231;
Ti51267231 = 2;
double Td51277228;
Td51277228 = Ta51257230[Ti51267231].d;
double Td51287229;
Td51287229 = o_param_r26457_fun(m6552, NULL);
double Td51297227;
Td51297227 =  Td51277228 * Td51287229;
double Td51307225;
Td51307225 = Td51247226 + Td51297227;
double Td51317224;
Td51317224 = fhalf6421_fun(Td51307225, NULL);
double Td51327222;
Td51327222 = Td51197223 + Td51317224;
int Tu45487175;
Ta51137220[Ti51147221].d = Td51327222;
Value* Ta51337200;
Ta51337200 = nvector;
int Ti51347201;
Ti51347201 = 1;
Value* Ta51357218;
Ta51357218 = nvector_w;
int Ti51367219;
Ti51367219 = 1;
double Td51377216;
Td51377216 = Ta51357218[Ti51367219].d;
double Td51387217;
Td51387217 = o_param_b6435_fun(m6552, NULL);
double Td51397203;
Td51397203 =  Td51377216 * Td51387217;
Value* Ta51407214;
Ta51407214 = nvector_w;
int Ti51417215;
Ti51417215 = 0;
double Td51427212;
Td51427212 = Ta51407214[Ti51417215].d;
double Td51437213;
Td51437213 = o_param_r36459_fun(m6552, NULL);
double Td51447206;
Td51447206 =  Td51427212 * Td51437213;
Value* Ta51457210;
Ta51457210 = nvector_w;
int Ti51467211;
Ti51467211 = 2;
double Td51477208;
Td51477208 = Ta51457210[Ti51467211].d;
double Td51487209;
Td51487209 = o_param_r16455_fun(m6552, NULL);
double Td51497207;
Td51497207 =  Td51477208 * Td51487209;
double Td51507205;
Td51507205 = Td51447206 + Td51497207;
double Td51517204;
Td51517204 = fhalf6421_fun(Td51507205, NULL);
double Td51527202;
Td51527202 = Td51397203 + Td51517204;
int Tu45477176;
Ta51337200[Ti51347201].d = Td51527202;
Value* Ta51537180;
Ta51537180 = nvector;
int Ti51547181;
Ti51547181 = 2;
Value* Ta51557198;
Ta51557198 = nvector_w;
int Ti51567199;
Ti51567199 = 2;
double Td51577196;
Td51577196 = Ta51557198[Ti51567199].d;
double Td51587197;
Td51587197 = o_param_c6437_fun(m6552, NULL);
double Td51597183;
Td51597183 =  Td51577196 * Td51587197;
Value* Ta51607194;
Ta51607194 = nvector_w;
int Ti51617195;
Ti51617195 = 0;
double Td51627192;
Td51627192 = Ta51607194[Ti51617195].d;
double Td51637193;
Td51637193 = o_param_r26457_fun(m6552, NULL);
double Td51647186;
Td51647186 =  Td51627192 * Td51637193;
Value* Ta51657190;
Ta51657190 = nvector_w;
int Ti51667191;
Ti51667191 = 1;
double Td51677188;
Td51677188 = Ta51657190[Ti51667191].d;
double Td51687189;
Td51687189 = o_param_r16455_fun(m6552, NULL);
double Td51697187;
Td51697187 =  Td51677188 * Td51687189;
double Td51707185;
Td51707185 = Td51647186 + Td51697187;
double Td51717184;
Td51717184 = fhalf6421_fun(Td51707185, NULL);
double Td51727182;
Td51727182 = Td51597183 + Td51717184;
int Tu45467177;
Ta51537180[Ti51547181].d = Td51727182;
Value* Ta51737178;
Ta51737178 = nvector;
bool Tb51747179;
Tb51747179 = o_isinvert6429_fun(m6552, NULL);
result = normalize_vector6461_fun(Ta51737178, Tb51747179, NULL);
return result;
}

int get_nvector6554_fun(int* m6555, Value* p6556, Value *env){
int result;
int m_shape7166;
m_shape7166 = o_form6425_fun(m6555, NULL);
int Ti50907167;
Ti50907167 = 1;
if(m_shape7166 == Ti50907167){
int Tu50917171;
Tu50917171 = 1;
result = get_nvector_rect6544_fun(Tu50917171, NULL);
}
else{
int Ti50927168;
Ti50927168 = 2;
if(m_shape7166 == Ti50927168){
result = get_nvector_plane6546_fun(m6555, NULL);
}
else{
int Ti50937169;
Ti50937169 = o_isrot6431_fun(m6555, NULL);
int Ti50947170;
Ti50947170 = 0;
if(Ti50937169 == Ti50947170){
result = get_nvector_second_norot6548_fun(m6555, p6556, NULL);
}
else{
result = get_nvector_second_rot6551_fun(m6555, p6556, NULL);
}
}
}
return result;
}

int utexture6557_fun(int* m6558, Value* p6559, Value *env){
int result;
int m_tex7008;
m_tex7008 = o_texturetype6423_fun(m6558, NULL);
Value* Ta49617163;
Ta49617163 = texture_color;
int Ti49627164;
Ti49627164 = 0;
double Td49637165;
Td49637165 = o_color_red6449_fun(m6558, NULL);
int Tu45567009;
Ta49617163[Ti49627164].d = Td49637165;
Value* Ta49647160;
Ta49647160 = texture_color;
int Ti49657161;
Ti49657161 = 1;
double Td49667162;
Td49667162 = o_color_green6451_fun(m6558, NULL);
int Tu45557010;
Ta49647160[Ti49657161].d = Td49667162;
Value* Ta49677157;
Ta49677157 = texture_color;
int Ti49687158;
Ti49687158 = 2;
double Td49697159;
Td49697159 = o_color_blue6453_fun(m6558, NULL);
int Tu45547011;
Ta49677157[Ti49687158].d = Td49697159;
int Ti49707012;
Ti49707012 = 1;
if(m_tex7008 == Ti49707012){
int Ti49717156;
Ti49717156 = 0;
double Td49727154;
Td49727154 = p6559[Ti49717156].d;
double Td49737155;
Td49737155 = o_param_x6439_fun(m6558, NULL);
double w17127;
w17127 = Td49727154 - Td49737155;
double Td49747153;
Td49747153 = 0.050000;
double Td49757152;
Td49757152 =  w17127 * Td49747153;
double Td49767150;
Td49767150 = floor(Td49757152);
double Td49777151;
Td49777151 = 20.000000;
double d17147;
d17147 =  Td49767150 * Td49777151;
double Td49787148;
Td49787148 = 10.000000;
double Td49797149;
Td49797149 = w17127 - d17147;
bool flag17128;
if(Td49787148 <= Td49797149){
flag17128 = 0;
}
else{
flag17128 = 1;
}
int Ti49807146;
Ti49807146 = 2;
double Td49817144;
Td49817144 = p6559[Ti49807146].d;
double Td49827145;
Td49827145 = o_param_z6443_fun(m6558, NULL);
double w37129;
w37129 = Td49817144 - Td49827145;
double Td49837143;
Td49837143 = 0.050000;
double Td49847142;
Td49847142 =  w37129 * Td49837143;
double Td49857140;
Td49857140 = floor(Td49847142);
double Td49867141;
Td49867141 = 20.000000;
double d27137;
d27137 =  Td49857140 * Td49867141;
double Td49877138;
Td49877138 = 10.000000;
double Td49887139;
Td49887139 = w37129 - d27137;
bool flag27130;
if(Td49877138 <= Td49887139){
flag27130 = 0;
}
else{
flag27130 = 1;
}
Value* Ta49897131;
Ta49897131 = texture_color;
int Ti49907132;
Ti49907132 = 1;
int Ti49917134;
Ti49917134 = 0;
double Td49947133;
if(flag17128 == Ti49917134){
int Ti49927136;
Ti49927136 = 0;
if(flag27130 == Ti49927136){
Td49947133 = 255.000000;
}
else{
Td49947133 = 0.000000;
}
}
else{
int Ti49937135;
Ti49937135 = 0;
if(flag27130 == Ti49937135){
Td49947133 = 0.000000;
}
else{
Td49947133 = 255.000000;
}
}
Ta49897131[Ti49907132].d = Td49947133;
}
else{
int Ti49957013;
Ti49957013 = 2;
if(m_tex7008 == Ti49957013){
int Ti49967126;
Ti49967126 = 1;
double Td49977124;
Td49977124 = p6559[Ti49967126].d;
double Td49987125;
Td49987125 = 0.250000;
double Td49997123;
Td49997123 =  Td49977124 * Td49987125;
double Td50007122;
Td50007122 = sin(Td49997123);
double w27110;
w27110 = fsqr6419_fun(Td50007122, NULL);
Value* Ta50017118;
Ta50017118 = texture_color;
int Ti50027119;
Ti50027119 = 0;
double Td50037121;
Td50037121 = 255.000000;
double Td50047120;
Td50047120 =  Td50037121 * w27110;
int Tu45527111;
Ta50017118[Ti50027119].d = Td50047120;
Value* Ta50057112;
Ta50057112 = texture_color;
int Ti50067113;
Ti50067113 = 1;
double Td50077115;
Td50077115 = 255.000000;
double Td50087117;
Td50087117 = 1.000000;
double Td50097116;
Td50097116 = Td50087117 - w27110;
double Td50107114;
Td50107114 =  Td50077115 * Td50097116;
Ta50057112[Ti50067113].d = Td50107114;
}
else{
int Ti50117014;
Ti50117014 = 3;
if(m_tex7008 == Ti50117014){
int Ti50127109;
Ti50127109 = 0;
double Td50137107;
Td50137107 = p6559[Ti50127109].d;
double Td50147108;
Td50147108 = o_param_x6439_fun(m6558, NULL);
double w17079;
w17079 = Td50137107 - Td50147108;
int Ti50157106;
Ti50157106 = 2;
double Td50167104;
Td50167104 = p6559[Ti50157106].d;
double Td50177105;
Td50177105 = o_param_z6443_fun(m6558, NULL);
double w37080;
w37080 = Td50167104 - Td50177105;
double Td50187102;
Td50187102 = fsqr6419_fun(w17079, NULL);
double Td50197103;
Td50197103 = fsqr6419_fun(w37080, NULL);
double Td50207101;
Td50207101 = Td50187102 + Td50197103;
double Td50217099;
Td50217099 = sqrt(Td50207101);
double Td50227100;
Td50227100 = 10.000000;
double w27081;
w27081 = Td50217099 / Td50227100;
double Td50237098;
Td50237098 = floor(w27081);
double Td50247096;
Td50247096 = w27081 - Td50237098;
double Td50257097;
Td50257097 = 3.141593;
double w47082;
w47082 =  Td50247096 * Td50257097;
double Td50267095;
Td50267095 = cos(w47082);
double cws7083;
cws7083 = fsqr6419_fun(Td50267095, NULL);
Value* Ta50277091;
Ta50277091 = texture_color;
int Ti50287092;
Ti50287092 = 1;
double Td50297094;
Td50297094 = 255.000000;
double Td50307093;
Td50307093 =  cws7083 * Td50297094;
int Tu45537084;
Ta50277091[Ti50287092].d = Td50307093;
Value* Ta50317085;
Ta50317085 = texture_color;
int Ti50327086;
Ti50327086 = 2;
double Td50337090;
Td50337090 = 1.000000;
double Td50347088;
Td50347088 = Td50337090 - cws7083;
double Td50357089;
Td50357089 = 255.000000;
double Td50367087;
Td50367087 =  Td50347088 * Td50357089;
Ta50317085[Ti50327086].d = Td50367087;
}
else{
int Ti50377015;
Ti50377015 = 4;
if(m_tex7008 == Ti50377015){
int Ti50387078;
Ti50387078 = 0;
double Td50397076;
Td50397076 = p6559[Ti50387078].d;
double Td50407077;
Td50407077 = o_param_x6439_fun(m6558, NULL);
double Td50417073;
Td50417073 = Td50397076 - Td50407077;
double Td50427075;
Td50427075 = o_param_a6433_fun(m6558, NULL);
double Td50437074;
Td50437074 = sqrt(Td50427075);
double w17016;
w17016 =  Td50417073 * Td50437074;
int Ti50447072;
Ti50447072 = 2;
double Td50457070;
Td50457070 = p6559[Ti50447072].d;
double Td50467071;
Td50467071 = o_param_z6443_fun(m6558, NULL);
double Td50477067;
Td50477067 = Td50457070 - Td50467071;
double Td50487069;
Td50487069 = o_param_c6437_fun(m6558, NULL);
double Td50497068;
Td50497068 = sqrt(Td50487069);
double w37017;
w37017 =  Td50477067 * Td50497068;
double Td50507065;
Td50507065 = fsqr6419_fun(w17016, NULL);
double Td50517066;
Td50517066 = fsqr6419_fun(w37017, NULL);
double Td50527064;
Td50527064 = Td50507065 + Td50517066;
double w47018;
w47018 = sqrt(Td50527064);
double Td50537056;
Td50537056 = 0.000100;
double Td50547057;
Td50547057 = fabs(w17016);
double w77019;
if(Td50537056 <= Td50547057){
double Td50557063;
Td50557063 = w37017 / w17016;
double w57058;
w57058 = fabs(Td50557063);
double Td50567059;
Td50567059 = atan(w57058);
double Td50577061;
Td50577061 = 30.000000;
double Td50587062;
Td50587062 = 3.141593;
double Td50597060;
Td50597060 = Td50577061 / Td50587062;
w77019 =  Td50567059 * Td50597060;
}
else{
w77019 = 15.000000;
}
double Td50607055;
Td50607055 = floor(w77019);
double w97020;
w97020 = w77019 - Td50607055;
int Ti50617054;
Ti50617054 = 1;
double Td50627052;
Td50627052 = p6559[Ti50617054].d;
double Td50637053;
Td50637053 = o_param_y6441_fun(m6558, NULL);
double Td50647049;
Td50647049 = Td50627052 - Td50637053;
double Td50657051;
Td50657051 = o_param_b6435_fun(m6558, NULL);
double Td50667050;
Td50667050 = sqrt(Td50657051);
double w27021;
w27021 =  Td50647049 * Td50667050;
double Td50677041;
Td50677041 = 0.000100;
double Td50687042;
Td50687042 = fabs(w77019);
double w87022;
if(Td50677041 <= Td50687042){
double Td50697048;
Td50697048 = w27021 / w47018;
double w67043;
w67043 = fabs(Td50697048);
double Td50707044;
Td50707044 = atan(w67043);
double Td50717046;
Td50717046 = 30.000000;
double Td50727047;
Td50727047 = 3.141593;
double Td50737045;
Td50737045 = Td50717046 / Td50727047;
w87022 =  Td50707044 * Td50737045;
}
else{
w87022 = 15.000000;
}
double Td50747040;
Td50747040 = floor(w87022);
double w107023;
w107023 = w87022 - Td50747040;
double Td50757036;
Td50757036 = 0.150000;
double Td50767039;
Td50767039 = 0.500000;
double Td50777038;
Td50777038 = Td50767039 - w97020;
double Td50787037;
Td50787037 = fsqr6419_fun(Td50777038, NULL);
double Td50797032;
Td50797032 = Td50757036 - Td50787037;
double Td50807035;
Td50807035 = 0.500000;
double Td50817034;
Td50817034 = Td50807035 - w107023;
double Td50827033;
Td50827033 = fsqr6419_fun(Td50817034, NULL);
double w117024;
w117024 = Td50797032 - Td50827033;
Value* Ta50837025;
Ta50837025 = texture_color;
int Ti50847026;
Ti50847026 = 2;
double Td50857028;
Td50857028 = 0.000000;
double Td50897027;
if(w117024 <= Td50857028){
Td50897027 = 0.000000;
}
else{
double Td50867030;
Td50867030 = 255.000000;
double Td50877031;
Td50877031 = 0.300000;
double Td50887029;
Td50887029 = Td50867030 / Td50877031;
Td50897027 =  w117024 * Td50887029;
}
Ta50837025[Ti50847026].d = Td50897027;
}
else{
result = 1;
}
}
}
}
return result;
}

double in_prod6560_fun(Value* v16561, Value* v26562, Value *env){
double result;
int Ti49457007;
Ti49457007 = 0;
double Td49467004;
Td49467004 = v16561[Ti49457007].d;
int Ti49477006;
Ti49477006 = 0;
double Td49487005;
Td49487005 = v26562[Ti49477006].d;
double Td49496998;
Td49496998 =  Td49467004 * Td49487005;
int Ti49507003;
Ti49507003 = 1;
double Td49517000;
Td49517000 = v16561[Ti49507003].d;
int Ti49527002;
Ti49527002 = 1;
double Td49537001;
Td49537001 = v26562[Ti49527002].d;
double Td49546999;
Td49546999 =  Td49517000 * Td49537001;
double Td49556992;
Td49556992 = Td49496998 + Td49546999;
int Ti49566997;
Ti49566997 = 2;
double Td49576994;
Td49576994 = v16561[Ti49566997].d;
int Ti49586996;
Ti49586996 = 2;
double Td49596995;
Td49596995 = v26562[Ti49586996].d;
double Td49606993;
Td49606993 =  Td49576994 * Td49596995;
result = Td49556992 + Td49606993;
return result;
}

int accumulate_vec_mul6563_fun(Value* v16564, Value* v26565, double w6566, Value *env){
int result;
int Ti49246985;
Ti49246985 = 0;
int Ti49256991;
Ti49256991 = 0;
double Td49266987;
Td49266987 = v16564[Ti49256991].d;
int Ti49276990;
Ti49276990 = 0;
double Td49286989;
Td49286989 = v26565[Ti49276990].d;
double Td49296988;
Td49296988 =  w6566 * Td49286989;
double Td49306986;
Td49306986 = Td49266987 + Td49296988;
int Tu45586969;
v16564[Ti49246985].d = Td49306986;
int Ti49316978;
Ti49316978 = 1;
int Ti49326984;
Ti49326984 = 1;
double Td49336980;
Td49336980 = v16564[Ti49326984].d;
int Ti49346983;
Ti49346983 = 1;
double Td49356982;
Td49356982 = v26565[Ti49346983].d;
double Td49366981;
Td49366981 =  w6566 * Td49356982;
double Td49376979;
Td49376979 = Td49336980 + Td49366981;
int Tu45576970;
v16564[Ti49316978].d = Td49376979;
int Ti49386971;
Ti49386971 = 2;
int Ti49396977;
Ti49396977 = 2;
double Td49406973;
Td49406973 = v16564[Ti49396977].d;
int Ti49416976;
Ti49416976 = 2;
double Td49426975;
Td49426975 = v26565[Ti49416976].d;
double Td49436974;
Td49436974 =  w6566 * Td49426975;
double Td49446972;
Td49446972 = Td49406973 + Td49436974;
v16564[Ti49386971].d = Td49446972;
return result;
}

int raytracing6567_fun(int nref6568, double energy6569, Value *env){
int result;
Value* Ta48106967;
Ta48106967 = viewpoint;
Value* Ta48116968;
Ta48116968 = vscan;
bool crashed_p6831;
crashed_p6831 = tracer6541_fun(Ta48106967, Ta48116968, NULL);
int Ti48126933;
Ti48126933 = 0;
int Tu45706832;
if(crashed_p6831 == Ti48126933){
int Ti48136934;
Ti48136934 = 0;
if(nref6568 == Ti48136934){
Tu45706832 = 1;
}
else{
Value* Ta48146965;
Ta48146965 = vscan;
Value* Ta48156966;
Ta48156966 = light;
double Td48166964;
Td48166964 = in_prod6560_fun(Ta48146965, Ta48156966, NULL);
double hl6935;
hl6935 = -Td48166964;
double Td48176936;
Td48176936 = 0.000000;
if(hl6935 <= Td48176936){
Tu45706832 = 1;
}
else{
double Td48186963;
Td48186963 = fsqr6419_fun(hl6935, NULL);
double Td48196962;
Td48196962 =  Td48186963 * hl6935;
double Td48206958;
Td48206958 =  Td48196962 * energy6569;
Value* Ta48216960;
Ta48216960 = beam;
int Ti48226961;
Ti48226961 = 0;
double Td48236959;
Td48236959 = Ta48216960[Ti48226961].d;
double ihl6937;
ihl6937 =  Td48206958 * Td48236959;
Value* Ta48246952;
Ta48246952 = rgb;
int Ti48256953;
Ti48256953 = 0;
Value* Ta48266956;
Ta48266956 = rgb;
int Ti48276957;
Ti48276957 = 0;
double Td48286955;
Td48286955 = Ta48266956[Ti48276957].d;
double Td48296954;
Td48296954 = Td48286955 + ihl6937;
int Tu45606938;
Ta48246952[Ti48256953].d = Td48296954;
Value* Ta48306946;
Ta48306946 = rgb;
int Ti48316947;
Ti48316947 = 1;
Value* Ta48326950;
Ta48326950 = rgb;
int Ti48336951;
Ti48336951 = 1;
double Td48346949;
Td48346949 = Ta48326950[Ti48336951].d;
double Td48356948;
Td48356948 = Td48346949 + ihl6937;
int Tu45596939;
Ta48306946[Ti48316947].d = Td48356948;
Value* Ta48366940;
Ta48366940 = rgb;
int Ti48376941;
Ti48376941 = 2;
Value* Ta48386944;
Ta48386944 = rgb;
int Ti48396945;
Ti48396945 = 2;
double Td48406943;
Td48406943 = Ta48386944[Ti48396945].d;
double Td48416942;
Td48416942 = Td48406943 + ihl6937;
Ta48366940[Ti48376941].d = Td48416942;
}
}
}
else{
Tu45706832 = 1;
}
int Ti48426833;
Ti48426833 = 0;
if(crashed_p6831 == Ti48426833){
result = 1;
}
else{
Value* Ta48436929;
Ta48436929 = objects;
Value* Ta48446931;
Ta48446931 = crashed_object;
int Ti48456932;
Ti48456932 = 0;
int Ti48466930;
Ti48466930 = Ta48446931[Ti48456932].i;
int* cobj6834;
cobj6834 = Ta48436929[Ti48466930].a;
Value* Ta48476928;
Ta48476928 = crashed_point;
int Tu45696835;
Tu45696835 = get_nvector6554_fun(cobj6834, Ta48476928, NULL);
int Ti48486923;
Ti48486923 = 0;
Value* Ta48496926;
Ta48496926 = or_net;
int Ti48506927;
Ti48506927 = 0;
Value* Ta48516924;
Ta48516924 = Ta48496926[Ti48506927].a;
Value* Ta48526925;
Ta48526925 = crashed_point;
bool Tb48536912;
Tb48536912 = shadow_check_one_or_matrix6528_fun(Ti48486923, Ta48516924, Ta48526925, NULL);
int Ti48546913;
Ti48546913 = 0;
double bright6836;
if(Tb48536912 == Ti48546913){
Value* Ta48556921;
Ta48556921 = nvector;
Value* Ta48566922;
Ta48566922 = light;
double Td48576920;
Td48576920 = in_prod6560_fun(Ta48556921, Ta48566922, NULL);
double br6914;
br6914 = -Td48576920;
double Td48586918;
Td48586918 = 0.000000;
double br16915;
if(Td48586918 <= br6914){
double Td48596919;
Td48596919 = 0.200000;
br16915 = br6914 + Td48596919;
}
else{
br16915 = 0.200000;
}
double Td48606916;
Td48606916 =  br16915 * energy6569;
double Td48616917;
Td48616917 = o_diffuse6445_fun(cobj6834, NULL);
bright6836 =  Td48606916 * Td48616917;
}
else{
bright6836 = 0.000000;
}
Value* Ta48626911;
Ta48626911 = crashed_point;
int Tu45686837;
Tu45686837 = utexture6557_fun(cobj6834, Ta48626911, NULL);
Value* Ta48636909;
Ta48636909 = rgb;
Value* Ta48646910;
Ta48646910 = texture_color;
int Tu45676838;
Tu45676838 = accumulate_vec_mul6563_fun(Ta48636909, Ta48646910, bright6836, NULL);
int Ti48656839;
Ti48656839 = 4;
if(nref6568 <= Ti48656839){
double Td48666840;
Td48666840 = 0.100000;
if(energy6569 <= Td48666840){
result = 1;
}
else{
double Td48676905;
Td48676905 = -2.000000;
Value* Ta48686907;
Ta48686907 = vscan;
Value* Ta48696908;
Ta48696908 = nvector;
double Td48706906;
Td48706906 = in_prod6560_fun(Ta48686907, Ta48696908, NULL);
double w6841;
w6841 =  Td48676905 * Td48706906;
Value* Ta48716903;
Ta48716903 = vscan;
Value* Ta48726904;
Ta48726904 = nvector;
int Tu45666842;
Tu45666842 = accumulate_vec_mul6563_fun(Ta48716903, Ta48726904, w6841, NULL);
int m_surface6843;
m_surface6843 = o_reflectiontype6427_fun(cobj6834, NULL);
int Ti48736844;
Ti48736844 = 1;
if(m_surface6843 == Ti48736844){
double Td48746870;
Td48746870 = 0.000000;
double Td48756871;
Td48756871 = o_hilight6447_fun(cobj6834, NULL);
if(Td48746870 == Td48756871){
result = 1;
}
else{
Value* Ta48766901;
Ta48766901 = vscan;
Value* Ta48776902;
Ta48776902 = light;
double Td48786900;
Td48786900 = in_prod6560_fun(Ta48766901, Ta48776902, NULL);
double hl6872;
hl6872 = -Td48786900;
double Td48796873;
Td48796873 = 0.000000;
if(hl6872 <= Td48796873){
result = 1;
}
else{
double Td48806899;
Td48806899 = fsqr6419_fun(hl6872, NULL);
double Td48816898;
Td48816898 = fsqr6419_fun(Td48806899, NULL);
double Td48826897;
Td48826897 =  Td48816898 * energy6569;
double Td48836895;
Td48836895 =  Td48826897 * bright6836;
double Td48846896;
Td48846896 = o_hilight6447_fun(cobj6834, NULL);
double ihl6874;
ihl6874 =  Td48836895 * Td48846896;
Value* Ta48856889;
Ta48856889 = rgb;
int Ti48866890;
Ti48866890 = 0;
Value* Ta48876893;
Ta48876893 = rgb;
int Ti48886894;
Ti48886894 = 0;
double Td48896892;
Td48896892 = Ta48876893[Ti48886894].d;
double Td48906891;
Td48906891 = Td48896892 + ihl6874;
int Tu45626875;
Ta48856889[Ti48866890].d = Td48906891;
Value* Ta48916883;
Ta48916883 = rgb;
int Ti48926884;
Ti48926884 = 1;
Value* Ta48936887;
Ta48936887 = rgb;
int Ti48946888;
Ti48946888 = 1;
double Td48956886;
Td48956886 = Ta48936887[Ti48946888].d;
double Td48966885;
Td48966885 = Td48956886 + ihl6874;
int Tu45616876;
Ta48916883[Ti48926884].d = Td48966885;
Value* Ta48976877;
Ta48976877 = rgb;
int Ti48986878;
Ti48986878 = 2;
Value* Ta48996881;
Ta48996881 = rgb;
int Ti49006882;
Ti49006882 = 2;
double Td49016880;
Td49016880 = Ta48996881[Ti49006882].d;
double Td49026879;
Td49026879 = Td49016880 + ihl6874;
Ta48976877[Ti48986878].d = Td49026879;
}
}
}
else{
int Ti49036845;
Ti49036845 = 2;
if(m_surface6843 == Ti49036845){
Value* Ta49046865;
Ta49046865 = viewpoint;
int Ti49056866;
Ti49056866 = 0;
Value* Ta49066868;
Ta49066868 = crashed_point;
int Ti49076869;
Ti49076869 = 0;
double Td49086867;
Td49086867 = Ta49066868[Ti49076869].d;
int Tu45656846;
Ta49046865[Ti49056866].d = Td49086867;
Value* Ta49096860;
Ta49096860 = viewpoint;
int Ti49106861;
Ti49106861 = 1;
Value* Ta49116863;
Ta49116863 = crashed_point;
int Ti49126864;
Ti49126864 = 1;
double Td49136862;
Td49136862 = Ta49116863[Ti49126864].d;
int Tu45646847;
Ta49096860[Ti49106861].d = Td49136862;
Value* Ta49146855;
Ta49146855 = viewpoint;
int Ti49156856;
Ti49156856 = 2;
Value* Ta49166858;
Ta49166858 = crashed_point;
int Ti49176859;
Ti49176859 = 2;
double Td49186857;
Td49186857 = Ta49166858[Ti49176859].d;
int Tu45636848;
Ta49146855[Ti49156856].d = Td49186857;
double Td49196853;
Td49196853 = 1.000000;
double Td49206854;
Td49206854 = o_diffuse6445_fun(cobj6834, NULL);
double Td49216852;
Td49216852 = Td49196853 - Td49206854;
double energy26849;
energy26849 =  energy6569 * Td49216852;
int Ti49226851;
Ti49226851 = 1;
int Ti49236850;
Ti49236850 = nref6568 + Ti49226851;
result = raytracing6567_fun(Ti49236850, energy26849, NULL);
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

int write_rgb6570_fun(int Tu45716571, Value *env){
int result;
Value* Ta47986829;
Ta47986829 = rgb;
int Ti47996830;
Ti47996830 = 0;
double Td48006828;
Td48006828 = Ta47986829[Ti47996830].d;
int red6811;
red6811 = (int) Td48006828;
int Ti48016827;
Ti48016827 = 255;
int red6812;
if(red6811 <= Ti48016827){
red6812 = red6811;
}
else{
red6812 = 255;
}
int Tu45736813;
putchar(red6812);
Value* Ta48026825;
Ta48026825 = rgb;
int Ti48036826;
Ti48036826 = 1;
double Td48046824;
Td48046824 = Ta48026825[Ti48036826].d;
int green6814;
green6814 = (int) Td48046824;
int Ti48056823;
Ti48056823 = 255;
int green6815;
if(green6814 <= Ti48056823){
green6815 = green6814;
}
else{
green6815 = 255;
}
int Tu45726816;
putchar(green6815);
Value* Ta48066821;
Ta48066821 = rgb;
int Ti48076822;
Ti48076822 = 2;
double Td48086820;
Td48086820 = Ta48066821[Ti48076822].d;
int blue6817;
blue6817 = (int) Td48086820;
int Ti48096819;
Ti48096819 = 255;
int blue6818;
if(blue6817 <= Ti48096819){
blue6818 = blue6817;
}
else{
blue6818 = 255;
}
putchar(blue6818);
return result;
}

int write_ppm_header6572_fun(int Tu45746573, Value *env){
int result;
int Ti47836810;
Ti47836810 = 80;
int Tu45826788;
putchar(Ti47836810);
int Ti47846808;
Ti47846808 = 48;
int Ti47856809;
Ti47856809 = 6;
int Ti47866807;
Ti47866807 = Ti47846808 + Ti47856809;
int Tu45816789;
putchar(Ti47866807);
int Ti47876806;
Ti47876806 = 10;
int Tu45806790;
putchar(Ti47876806);
Value* Ta47886804;
Ta47886804 = size;
int Ti47896805;
Ti47896805 = 0;
int Ti47906803;
Ti47906803 = Ta47886804[Ti47896805].i;
int Tu45796791;
printf("%d", Ti47906803);
int Ti47916802;
Ti47916802 = 32;
int Tu45786792;
putchar(Ti47916802);
Value* Ta47926800;
Ta47926800 = size;
int Ti47936801;
Ti47936801 = 1;
int Ti47946799;
Ti47946799 = Ta47926800[Ti47936801].i;
int Tu45776793;
printf("%d", Ti47946799);
int Ti47956798;
Ti47956798 = 10;
int Tu45766794;
putchar(Ti47956798);
int Ti47966797;
Ti47966797 = 255;
int Tu45756795;
printf("%d", Ti47966797);
int Ti47976796;
Ti47976796 = 10;
putchar(Ti47976796);
return result;
}

int scan_point6574_fun(int scanx6575, Value *env){
int result;
Value* Ta46866786;
Ta46866786 = size;
int Ti46876787;
Ti46876787 = 0;
int Ti46886675;
Ti46886675 = Ta46866786[Ti46876787].i;
if(Ti46886675 <= scanx6575){
result = 1;
}
else{
double Td46896782;
Td46896782 = (double) scanx6575;
Value* Ta46906784;
Ta46906784 = scan_offset;
int Ti46916785;
Ti46916785 = 0;
double Td46926783;
Td46926783 = Ta46906784[Ti46916785].d;
double Td46936778;
Td46936778 = Td46896782 - Td46926783;
Value* Ta46946780;
Ta46946780 = scan_d;
int Ti46956781;
Ti46956781 = 0;
double Td46966779;
Td46966779 = Ta46946780[Ti46956781].d;
double sscanx6676;
sscanx6676 =  Td46936778 * Td46966779;
Value* Ta46976768;
Ta46976768 = vscan;
int Ti46986769;
Ti46986769 = 0;
Value* Ta46996776;
Ta46996776 = cos_v;
int Ti47006777;
Ti47006777 = 1;
double Td47016775;
Td47016775 = Ta46996776[Ti47006777].d;
double Td47026771;
Td47026771 =  sscanx6676 * Td47016775;
Value* Ta47036773;
Ta47036773 = wscan;
int Ti47046774;
Ti47046774 = 0;
double Td47056772;
Td47056772 = Ta47036773[Ti47046774].d;
double Td47066770;
Td47066770 = Td47026771 + Td47056772;
int Tu45966677;
Ta46976768[Ti46986769].d = Td47066770;
Value* Ta47076755;
Ta47076755 = vscan;
int Ti47086756;
Ti47086756 = 1;
Value* Ta47096766;
Ta47096766 = scan_sscany;
int Ti47106767;
Ti47106767 = 0;
double Td47116762;
Td47116762 = Ta47096766[Ti47106767].d;
Value* Ta47126764;
Ta47126764 = cos_v;
int Ti47136765;
Ti47136765 = 0;
double Td47146763;
Td47146763 = Ta47126764[Ti47136765].d;
double Td47156758;
Td47156758 =  Td47116762 * Td47146763;
Value* Ta47166760;
Ta47166760 = vp;
int Ti47176761;
Ti47176761 = 1;
double Td47186759;
Td47186759 = Ta47166760[Ti47176761].d;
double Td47196757;
Td47196757 = Td47156758 - Td47186759;
int Tu45956678;
Ta47076755[Ti47086756].d = Td47196757;
Value* Ta47206744;
Ta47206744 = vscan;
int Ti47216745;
Ti47216745 = 2;
double Td47226751;
Td47226751 = -sscanx6676;
Value* Ta47236753;
Ta47236753 = sin_v;
int Ti47246754;
Ti47246754 = 1;
double Td47256752;
Td47256752 = Ta47236753[Ti47246754].d;
double Td47266747;
Td47266747 =  Td47226751 * Td47256752;
Value* Ta47276749;
Ta47276749 = wscan;
int Ti47286750;
Ti47286750 = 2;
double Td47296748;
Td47296748 = Ta47276749[Ti47286750].d;
double Td47306746;
Td47306746 = Td47266747 + Td47296748;
int Tu45946679;
Ta47206744[Ti47216745].d = Td47306746;
double Td47316740;
Td47316740 = fsqr6419_fun(sscanx6676, NULL);
Value* Ta47326742;
Ta47326742 = scan_met1;
int Ti47336743;
Ti47336743 = 0;
double Td47346741;
Td47346741 = Ta47326742[Ti47336743].d;
double Td47356739;
Td47356739 = Td47316740 + Td47346741;
double metric6680;
metric6680 = sqrt(Td47356739);
Value* Ta47366733;
Ta47366733 = vscan;
int Ti47376734;
Ti47376734 = 0;
Value* Ta47386737;
Ta47386737 = vscan;
int Ti47396738;
Ti47396738 = 0;
double Td47406736;
Td47406736 = Ta47386737[Ti47396738].d;
double Td47416735;
Td47416735 = Td47406736 / metric6680;
int Tu45936681;
Ta47366733[Ti47376734].d = Td47416735;
Value* Ta47426727;
Ta47426727 = vscan;
int Ti47436728;
Ti47436728 = 1;
Value* Ta47446731;
Ta47446731 = vscan;
int Ti47456732;
Ti47456732 = 1;
double Td47466730;
Td47466730 = Ta47446731[Ti47456732].d;
double Td47476729;
Td47476729 = Td47466730 / metric6680;
int Tu45926682;
Ta47426727[Ti47436728].d = Td47476729;
Value* Ta47486721;
Ta47486721 = vscan;
int Ti47496722;
Ti47496722 = 2;
Value* Ta47506725;
Ta47506725 = vscan;
int Ti47516726;
Ti47516726 = 2;
double Td47526724;
Td47526724 = Ta47506725[Ti47516726].d;
double Td47536723;
Td47536723 = Td47526724 / metric6680;
int Tu45916683;
Ta47486721[Ti47496722].d = Td47536723;
Value* Ta47546716;
Ta47546716 = viewpoint;
int Ti47556717;
Ti47556717 = 0;
Value* Ta47566719;
Ta47566719 = view;
int Ti47576720;
Ti47576720 = 0;
double Td47586718;
Td47586718 = Ta47566719[Ti47576720].d;
int Tu45906684;
Ta47546716[Ti47556717].d = Td47586718;
Value* Ta47596711;
Ta47596711 = viewpoint;
int Ti47606712;
Ti47606712 = 1;
Value* Ta47616714;
Ta47616714 = view;
int Ti47626715;
Ti47626715 = 1;
double Td47636713;
Td47636713 = Ta47616714[Ti47626715].d;
int Tu45896685;
Ta47596711[Ti47606712].d = Td47636713;
Value* Ta47646706;
Ta47646706 = viewpoint;
int Ti47656707;
Ti47656707 = 2;
Value* Ta47666709;
Ta47666709 = view;
int Ti47676710;
Ti47676710 = 2;
double Td47686708;
Td47686708 = Ta47666709[Ti47676710].d;
int Tu45886686;
Ta47646706[Ti47656707].d = Td47686708;
Value* Ta47696703;
Ta47696703 = rgb;
int Ti47706704;
Ti47706704 = 0;
double Td47716705;
Td47716705 = 0.000000;
int Tu45876687;
Ta47696703[Ti47706704].d = Td47716705;
Value* Ta47726700;
Ta47726700 = rgb;
int Ti47736701;
Ti47736701 = 1;
double Td47746702;
Td47746702 = 0.000000;
int Tu45866688;
Ta47726700[Ti47736701].d = Td47746702;
Value* Ta47756697;
Ta47756697 = rgb;
int Ti47766698;
Ti47766698 = 2;
double Td47776699;
Td47776699 = 0.000000;
int Tu45856689;
Ta47756697[Ti47766698].d = Td47776699;
int Ti47786695;
Ti47786695 = 0;
double Td47796696;
Td47796696 = 1.000000;
int Tu45846690;
Tu45846690 = raytracing6567_fun(Ti47786695, Td47796696, NULL);
int Tu47806694;
Tu47806694 = 1;
int Tu45836691;
Tu45836691 = write_rgb6570_fun(Tu47806694, NULL);
int Ti47816693;
Ti47816693 = 1;
int Ti47826692;
Ti47826692 = scanx6575 + Ti47816693;
result = scan_point6574_fun(Ti47826692, NULL);
}
return result;
}

int scan_line6576_fun(int scany6577, Value *env){
int result;
Value* Ta46346673;
Ta46346673 = size;
int Ti46356674;
Ti46356674 = 0;
int Ti46366616;
Ti46366616 = Ta46346673[Ti46356674].i;
if(Ti46366616 <= scany6577){
result = 1;
}
else{
Value* Ta46376660;
Ta46376660 = scan_sscany;
int Ti46386661;
Ti46386661 = 0;
Value* Ta46396671;
Ta46396671 = scan_offset;
int Ti46406672;
Ti46406672 = 0;
double Td46416669;
Td46416669 = Ta46396671[Ti46406672].d;
double Td46426670;
Td46426670 = 1.000000;
double Td46436667;
Td46436667 = Td46416669 - Td46426670;
double Td46446668;
Td46446668 = (double) scany6577;
double t6663;
t6663 = Td46436667 - Td46446668;
Value* Ta46456665;
Ta46456665 = scan_d;
int Ti46466666;
Ti46466666 = 0;
double Td46476664;
Td46476664 = Ta46456665[Ti46466666].d;
double Td46486662;
Td46486662 =  Td46476664 * t6663;
int Tu46016617;
Ta46376660[Ti46386661].d = Td46486662;
Value* Ta46496652;
Ta46496652 = scan_met1;
int Ti46506653;
Ti46506653 = 0;
Value* Ta46516658;
Ta46516658 = scan_sscany;
int Ti46526659;
Ti46526659 = 0;
double Td46536657;
Td46536657 = Ta46516658[Ti46526659].d;
double Td46546655;
Td46546655 = fsqr6419_fun(Td46536657, NULL);
double Td46556656;
Td46556656 = 40000.000000;
double Td46566654;
Td46566654 = Td46546655 + Td46556656;
int Tu46006618;
Ta46496652[Ti46506653].d = Td46566654;
Value* Ta46576650;
Ta46576650 = scan_sscany;
int Ti46586651;
Ti46586651 = 0;
double Td46596646;
Td46596646 = Ta46576650[Ti46586651].d;
Value* Ta46606648;
Ta46606648 = sin_v;
int Ti46616649;
Ti46616649 = 0;
double Td46626647;
Td46626647 = Ta46606648[Ti46616649].d;
double t16619;
t16619 =  Td46596646 * Td46626647;
Value* Ta46636636;
Ta46636636 = wscan;
int Ti46646637;
Ti46646637 = 0;
Value* Ta46656644;
Ta46656644 = sin_v;
int Ti46666645;
Ti46666645 = 1;
double Td46676643;
Td46676643 = Ta46656644[Ti46666645].d;
double Td46686639;
Td46686639 =  t16619 * Td46676643;
Value* Ta46696641;
Ta46696641 = vp;
int Ti46706642;
Ti46706642 = 0;
double Td46716640;
Td46716640 = Ta46696641[Ti46706642].d;
double Td46726638;
Td46726638 = Td46686639 - Td46716640;
int Tu45996620;
Ta46636636[Ti46646637].d = Td46726638;
Value* Ta46736626;
Ta46736626 = wscan;
int Ti46746627;
Ti46746627 = 2;
Value* Ta46756634;
Ta46756634 = cos_v;
int Ti46766635;
Ti46766635 = 1;
double Td46776633;
Td46776633 = Ta46756634[Ti46766635].d;
double Td46786629;
Td46786629 =  t16619 * Td46776633;
Value* Ta46796631;
Ta46796631 = vp;
int Ti46806632;
Ti46806632 = 2;
double Td46816630;
Td46816630 = Ta46796631[Ti46806632].d;
double Td46826628;
Td46826628 = Td46786629 - Td46816630;
int Tu45986621;
Ta46736626[Ti46746627].d = Td46826628;
int Ti46836625;
Ti46836625 = 0;
int Tu45976622;
Tu45976622 = scan_point6574_fun(Ti46836625, NULL);
int Ti46846624;
Ti46846624 = 1;
int Ti46856623;
Ti46856623 = scany6577 + Ti46846624;
result = scan_line6576_fun(Ti46856623, NULL);
}
return result;
}

int scan_start6578_fun(int Tu46026579, Value *env){
int result;
int Tu46216615;
Tu46216615 = 1;
int Tu46056599;
Tu46056599 = write_ppm_header6572_fun(Tu46216615, NULL);
Value* Ta46226613;
Ta46226613 = size;
int Ti46236614;
Ti46236614 = 0;
int Ti46246612;
Ti46246612 = Ta46226613[Ti46236614].i;
double sizex6600;
sizex6600 = (double) Ti46246612;
Value* Ta46256608;
Ta46256608 = scan_d;
int Ti46266609;
Ti46266609 = 0;
double Td46276611;
Td46276611 = 128.000000;
double Td46286610;
Td46286610 = Td46276611 / sizex6600;
int Tu46046601;
Ta46256608[Ti46266609].d = Td46286610;
Value* Ta46296604;
Ta46296604 = scan_offset;
int Ti46306605;
Ti46306605 = 0;
double Td46316607;
Td46316607 = 2.000000;
double Td46326606;
Td46326606 = sizex6600 / Td46316607;
int Tu46036602;
Ta46296604[Ti46306605].d = Td46326606;
int Ti46336603;
Ti46336603 = 0;
result = scan_line6576_fun(Ti46336603, NULL);
return result;
}

int rt6580_fun(int size_x6581, int size_y6582, bool debug_p6583, Value *env){
int result;
Value* Ta46136597;
Ta46136597 = size;
int Ti46146598;
Ti46146598 = 0;
int Tu46096587;
Ta46136597[Ti46146598].i = size_x6581;
Value* Ta46156595;
Ta46156595 = size;
int Ti46166596;
Ti46166596 = 1;
int Tu46086588;
Ta46156595[Ti46166596].i = size_y6582;
Value* Ta46176593;
Ta46176593 = dbg;
int Ti46186594;
Ti46186594 = 0;
int Tu46076589;
Ta46176593[Ti46186594].b = debug_p6583;
int Tu46196592;
Tu46196592 = 1;
int Tu46066590;
Tu46066590 = read_parameter6482_fun(Tu46196592, NULL);
int Tu46206591;
Tu46206591 = 1;
result = scan_start6578_fun(Tu46206591, NULL);
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
int Ti46106584;
Ti46106584 = 768;
int Ti46116585;
Ti46116585 = 768;
int Ti46126586;
Ti46126586 = 0;
ans = rt6580_fun(Ti46106584, Ti46116585, Ti46126586, NULL);
return ans;
}
