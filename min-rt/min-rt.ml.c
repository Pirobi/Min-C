#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x77605, int size_y77606, bool debug_p77607, Value *env);
typedef int fun_int_int_double_Value(int nref77592, double energy77593, Value *env);
typedef int fun_int_array_array_double_Value(Value* v177588, Value* v277589, double w77590, Value *env);
typedef double fun_double_array_array_Value(Value* v177585, Value* v277586, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint77566, Value* vscan77567, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs77557, Value* and_group77558, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs77545, Value* and_group77546, Value* p77547, Value *env);
typedef bool fun_bool_int_array_Value(int ofs77542, Value* iand77543, Value *env);
typedef int fun_int_int_array_array_Value(int index77530, Value* l77531, Value* p77532, Value *env);
typedef double fun_double_tuple_array_Value(int* m77515, Value* v77516, Value *env);
typedef int fun_int_tuple_array_Value(int* m77509, Value* l77510, Value *env);
typedef Value* fun_array_int_Value(int length77503, Value *env);
typedef bool fun_bool_int_Value(int n77495, Value *env);
typedef int fun_int_int_Value(int Tu7546677493, Value *env);
typedef int fun_int_array_bool_Value(Value* v77486, bool inv77487, Value *env);
typedef double fun_double_tuple_Value(int* m77458, Value *env);
typedef bool fun_bool_tuple_Value(int* m77454, Value *env);
typedef int fun_int_tuple_Value(int* m77448, Value *env);
typedef double fun_double_double_Value(double x77444, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x77441, bool y77442, Value *env);

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

bool xor77440_fun(bool x77441, bool y77442, Value *env){
bool result;
int Ti7743879901;
Ti7743879901 = 0;
if(x77441 == Ti7743879901){
result = y77442;
}
else{
int Ti7743979902;
Ti7743979902 = 0;
if(y77442 == Ti7743979902){
result = 1;
}
else{
result = 0;
}
}
return result;
}

double fsqr77443_fun(double x77444, Value *env){
double result;
result =  x77444 * x77444;
return result;
}

double fhalf77445_fun(double x77446, Value *env){
double result;
double Td7743779900;
Td7743779900 = 2.000000;
result = x77446 / Td7743779900;
return result;
}

int o_texturetype77447_fun(int* m77448, Value *env){
int result;
int m_tex79890 = m77448[0];
int xm_shape79891 = m77448[1];
int xm_surface79892 = m77448[2];
int xm_isrot79893 = m77448[3];
Value* xm_abc79894 = m77448[4];
Value* xm_xyz79895 = m77448[5];
bool xm_invert79896 = m77448[6];
Value* xm_surfparams79897 = m77448[7];
Value* xm_color79898 = m77448[8];
Value* xm_rot12379899 = m77448[9];
result = m_tex79890;
return result;
}

int o_form77449_fun(int* m77450, Value *env){
int result;
int xm_tex79880 = m77450[0];
int m_shape79881 = m77450[1];
int xm_surface79882 = m77450[2];
int xm_isrot79883 = m77450[3];
Value* xm_abc79884 = m77450[4];
Value* xm_xyz79885 = m77450[5];
bool xm_invert79886 = m77450[6];
Value* xm_surfparams79887 = m77450[7];
Value* xm_color79888 = m77450[8];
Value* xm_rot12379889 = m77450[9];
result = m_shape79881;
return result;
}

int o_reflectiontype77451_fun(int* m77452, Value *env){
int result;
int xm_tex79870 = m77452[0];
int xm_shape79871 = m77452[1];
int m_surface79872 = m77452[2];
int xm_isrot79873 = m77452[3];
Value* xm_abc79874 = m77452[4];
Value* xm_xyz79875 = m77452[5];
bool xm_invert79876 = m77452[6];
Value* xm_surfparams79877 = m77452[7];
Value* xm_color79878 = m77452[8];
Value* xm_rot12379879 = m77452[9];
result = m_surface79872;
return result;
}

bool o_isinvert77453_fun(int* m77454, Value *env){
bool result;
int m_tex79860 = m77454[0];
int m_shape79861 = m77454[1];
int m_surface79862 = m77454[2];
int m_isrot79863 = m77454[3];
Value* xm_abc79864 = m77454[4];
Value* xm_xyz79865 = m77454[5];
bool m_invert79866 = m77454[6];
Value* xm_surfparams79867 = m77454[7];
Value* xm_color79868 = m77454[8];
Value* xm_rot12379869 = m77454[9];
result = m_invert79866;
return result;
}

int o_isrot77455_fun(int* m77456, Value *env){
int result;
int xm_tex79850 = m77456[0];
int xm_shape79851 = m77456[1];
int xm_surface79852 = m77456[2];
int m_isrot79853 = m77456[3];
Value* xm_abc79854 = m77456[4];
Value* xm_xyz79855 = m77456[5];
bool xm_invert79856 = m77456[6];
Value* xm_surfparams79857 = m77456[7];
Value* xm_color79858 = m77456[8];
Value* xm_rot12379859 = m77456[9];
result = m_isrot79853;
return result;
}

double o_param_a77457_fun(int* m77458, Value *env){
double result;
int xm_tex79839 = m77458[0];
int xm_shape79840 = m77458[1];
int xm_surface79841 = m77458[2];
int xm_isrot79842 = m77458[3];
Value* m_abc79843 = m77458[4];
Value* xm_xyz79844 = m77458[5];
bool xm_invert79845 = m77458[6];
Value* xm_surfparams79846 = m77458[7];
Value* xm_color79847 = m77458[8];
Value* xm_rot12379848 = m77458[9];
int Ti7743679849;
Ti7743679849 = 0;
result = m_abc79843[Ti7743679849].d;
return result;
}

double o_param_b77459_fun(int* m77460, Value *env){
double result;
int xm_tex79828 = m77460[0];
int xm_shape79829 = m77460[1];
int xm_surface79830 = m77460[2];
int xm_isrot79831 = m77460[3];
Value* m_abc79832 = m77460[4];
Value* xm_xyz79833 = m77460[5];
bool xm_invert79834 = m77460[6];
Value* xm_surfparams79835 = m77460[7];
Value* xm_color79836 = m77460[8];
Value* xm_rot12379837 = m77460[9];
int Ti7743579838;
Ti7743579838 = 1;
result = m_abc79832[Ti7743579838].d;
return result;
}

double o_param_c77461_fun(int* m77462, Value *env){
double result;
int xm_tex79817 = m77462[0];
int xm_shape79818 = m77462[1];
int xm_surface79819 = m77462[2];
int xm_isrot79820 = m77462[3];
Value* m_abc79821 = m77462[4];
Value* xm_xyz79822 = m77462[5];
bool xm_invert79823 = m77462[6];
Value* xm_surfparams79824 = m77462[7];
Value* xm_color79825 = m77462[8];
Value* xm_rot12379826 = m77462[9];
int Ti7743479827;
Ti7743479827 = 2;
result = m_abc79821[Ti7743479827].d;
return result;
}

double o_param_x77463_fun(int* m77464, Value *env){
double result;
int xm_tex79806 = m77464[0];
int xm_shape79807 = m77464[1];
int xm_surface79808 = m77464[2];
int xm_isrot79809 = m77464[3];
Value* xm_abc79810 = m77464[4];
Value* m_xyz79811 = m77464[5];
bool xm_invert79812 = m77464[6];
Value* xm_surfparams79813 = m77464[7];
Value* xm_color79814 = m77464[8];
Value* xm_rot12379815 = m77464[9];
int Ti7743379816;
Ti7743379816 = 0;
result = m_xyz79811[Ti7743379816].d;
return result;
}

double o_param_y77465_fun(int* m77466, Value *env){
double result;
int xm_tex79795 = m77466[0];
int xm_shape79796 = m77466[1];
int xm_surface79797 = m77466[2];
int xm_isrot79798 = m77466[3];
Value* xm_abc79799 = m77466[4];
Value* m_xyz79800 = m77466[5];
bool xm_invert79801 = m77466[6];
Value* xm_surfparams79802 = m77466[7];
Value* xm_color79803 = m77466[8];
Value* xm_rot12379804 = m77466[9];
int Ti7743279805;
Ti7743279805 = 1;
result = m_xyz79800[Ti7743279805].d;
return result;
}

double o_param_z77467_fun(int* m77468, Value *env){
double result;
int xm_tex79784 = m77468[0];
int xm_shape79785 = m77468[1];
int xm_surface79786 = m77468[2];
int xm_isrot79787 = m77468[3];
Value* xm_abc79788 = m77468[4];
Value* m_xyz79789 = m77468[5];
bool xm_invert79790 = m77468[6];
Value* xm_surfparams79791 = m77468[7];
Value* xm_color79792 = m77468[8];
Value* xm_rot12379793 = m77468[9];
int Ti7743179794;
Ti7743179794 = 2;
result = m_xyz79789[Ti7743179794].d;
return result;
}

double o_diffuse77469_fun(int* m77470, Value *env){
double result;
int xm_tex79773 = m77470[0];
int xm_shape79774 = m77470[1];
int xm_surface79775 = m77470[2];
int xm_isrot79776 = m77470[3];
Value* xm_abc79777 = m77470[4];
Value* xm_xyz79778 = m77470[5];
bool xm_invert79779 = m77470[6];
Value* m_surfparams79780 = m77470[7];
Value* xm_color79781 = m77470[8];
Value* xm_rot12379782 = m77470[9];
int Ti7743079783;
Ti7743079783 = 0;
result = m_surfparams79780[Ti7743079783].d;
return result;
}

double o_hilight77471_fun(int* m77472, Value *env){
double result;
int xm_tex79762 = m77472[0];
int xm_shape79763 = m77472[1];
int xm_surface79764 = m77472[2];
int xm_isrot79765 = m77472[3];
Value* xm_abc79766 = m77472[4];
Value* xm_xyz79767 = m77472[5];
bool xm_invert79768 = m77472[6];
Value* m_surfparams79769 = m77472[7];
Value* xm_color79770 = m77472[8];
Value* xm_rot12379771 = m77472[9];
int Ti7742979772;
Ti7742979772 = 1;
result = m_surfparams79769[Ti7742979772].d;
return result;
}

double o_color_red77473_fun(int* m77474, Value *env){
double result;
int xm_tex79751 = m77474[0];
int xm_shape79752 = m77474[1];
int m_surface79753 = m77474[2];
int xm_isrot79754 = m77474[3];
Value* xm_abc79755 = m77474[4];
Value* xm_xyz79756 = m77474[5];
bool xm_invert79757 = m77474[6];
Value* xm_surfparams79758 = m77474[7];
Value* m_color79759 = m77474[8];
Value* xm_rot12379760 = m77474[9];
int Ti7742879761;
Ti7742879761 = 0;
result = m_color79759[Ti7742879761].d;
return result;
}

double o_color_green77475_fun(int* m77476, Value *env){
double result;
int xm_tex79740 = m77476[0];
int xm_shape79741 = m77476[1];
int m_surface79742 = m77476[2];
int xm_isrot79743 = m77476[3];
Value* xm_abc79744 = m77476[4];
Value* xm_xyz79745 = m77476[5];
bool xm_invert79746 = m77476[6];
Value* xm_surfparams79747 = m77476[7];
Value* m_color79748 = m77476[8];
Value* xm_rot12379749 = m77476[9];
int Ti7742779750;
Ti7742779750 = 1;
result = m_color79748[Ti7742779750].d;
return result;
}

double o_color_blue77477_fun(int* m77478, Value *env){
double result;
int xm_tex79729 = m77478[0];
int xm_shape79730 = m77478[1];
int m_surface79731 = m77478[2];
int xm_isrot79732 = m77478[3];
Value* xm_abc79733 = m77478[4];
Value* xm_xyz79734 = m77478[5];
bool xm_invert79735 = m77478[6];
Value* xm_surfparams79736 = m77478[7];
Value* m_color79737 = m77478[8];
Value* xm_rot12379738 = m77478[9];
int Ti7742679739;
Ti7742679739 = 2;
result = m_color79737[Ti7742679739].d;
return result;
}

double o_param_r177479_fun(int* m77480, Value *env){
double result;
int xm_tex79718 = m77480[0];
int xm_shape79719 = m77480[1];
int xm_surface79720 = m77480[2];
int xm_isrot79721 = m77480[3];
Value* xm_abc79722 = m77480[4];
Value* xm_xyz79723 = m77480[5];
bool xm_invert79724 = m77480[6];
Value* xm_surfparams79725 = m77480[7];
Value* xm_color79726 = m77480[8];
Value* m_rot12379727 = m77480[9];
int Ti7742579728;
Ti7742579728 = 0;
result = m_rot12379727[Ti7742579728].d;
return result;
}

double o_param_r277481_fun(int* m77482, Value *env){
double result;
int xm_tex79707 = m77482[0];
int xm_shape79708 = m77482[1];
int xm_surface79709 = m77482[2];
int xm_isrot79710 = m77482[3];
Value* xm_abc79711 = m77482[4];
Value* xm_xyz79712 = m77482[5];
bool xm_invert79713 = m77482[6];
Value* xm_surfparams79714 = m77482[7];
Value* xm_color79715 = m77482[8];
Value* m_rot12379716 = m77482[9];
int Ti7742479717;
Ti7742479717 = 1;
result = m_rot12379716[Ti7742479717].d;
return result;
}

double o_param_r377483_fun(int* m77484, Value *env){
double result;
int xm_tex79696 = m77484[0];
int xm_shape79697 = m77484[1];
int xm_surface79698 = m77484[2];
int xm_isrot79699 = m77484[3];
Value* xm_abc79700 = m77484[4];
Value* xm_xyz79701 = m77484[5];
bool xm_invert79702 = m77484[6];
Value* xm_surfparams79703 = m77484[7];
Value* xm_color79704 = m77484[8];
Value* m_rot12379705 = m77484[9];
int Ti7742379706;
Ti7742379706 = 2;
result = m_rot12379705[Ti7742379706].d;
return result;
}

int normalize_vector77485_fun(Value* v77486, bool inv77487, Value *env){
int result;
int Ti7739979695;
Ti7739979695 = 0;
double Td7740079694;
Td7740079694 = v77486[Ti7739979695].d;
double Td7740179690;
Td7740179690 = fsqr77443_fun(Td7740079694, NULL);
int Ti7740279693;
Ti7740279693 = 1;
double Td7740379692;
Td7740379692 = v77486[Ti7740279693].d;
double Td7740479691;
Td7740479691 = fsqr77443_fun(Td7740379692, NULL);
double Td7740579686;
Td7740579686 = Td7740179690 + Td7740479691;
int Ti7740679689;
Ti7740679689 = 2;
double Td7740779688;
Td7740779688 = v77486[Ti7740679689].d;
double Td7740879687;
Td7740879687 = fsqr77443_fun(Td7740779688, NULL);
double Td7740979685;
Td7740979685 = Td7740579686 + Td7740879687;
double n079668;
n079668 = sqrt(Td7740979685);
int Ti7741079684;
Ti7741079684 = 0;
double n79669;
if(inv77487 == Ti7741079684){
n79669 = n079668;
}
else{
n79669 = -n079668;
}
int Ti7741179680;
Ti7741179680 = 0;
int Ti7741279683;
Ti7741279683 = 0;
double Td7741379682;
Td7741379682 = v77486[Ti7741279683].d;
double Td7741479681;
Td7741479681 = Td7741379682 / n79669;
int Tu7546579670;
v77486[Ti7741179680].d = Td7741479681;
int Ti7741579676;
Ti7741579676 = 1;
int Ti7741679679;
Ti7741679679 = 1;
double Td7741779678;
Td7741779678 = v77486[Ti7741679679].d;
double Td7741879677;
Td7741879677 = Td7741779678 / n79669;
int Tu7546479671;
v77486[Ti7741579676].d = Td7741879677;
int Ti7741979672;
Ti7741979672 = 2;
int Ti7742079675;
Ti7742079675 = 2;
double Td7742179674;
Td7742179674 = v77486[Ti7742079675].d;
double Td7742279673;
Td7742279673 = Td7742179674 / n79669;
v77486[Ti7741979672].d = Td7742279673;
return result;
}

double sgn77488_fun(double x77489, Value *env){
double result;
double Td7739879667;
Td7739879667 = 0.000000;
if(x77489 <= Td7739879667){
result = -1.000000;
}
else{
result = 1.000000;
}
return result;
}

double rad77490_fun(double x77491, Value *env){
double result;
double Td7739779666;
Td7739779666 = 0.017453;
result =  x77491 * Td7739779666;
return result;
}

int read_environ77492_fun(int Tu7546677493, Value *env){
int result;
Value* Ta7729479662;
Ta7729479662 = screen;
int Ti7729579663;
Ti7729579663 = 0;
int Tu7729679665;
Tu7729679665 = 1;
double Td7729779664;
Tu7729679665 = scanf("%lf", &Td7729779664);
fprintf(stderr, "debug %lf\n", Td7729779664);
int Tu7548279538;
Ta7729479662[Ti7729579663].d = Td7729779664;
Value* Ta7729879658;
Ta7729879658 = screen;
int Ti7729979659;
Ti7729979659 = 1;
int Tu7730079661;
Tu7730079661 = 1;
double Td7730179660;
Tu7730079661 = scanf("%lf", &Td7730179660);
fprintf(stderr, "debug %lf\n", Td7730179660);
int Tu7548179539;
Ta7729879658[Ti7729979659].d = Td7730179660;
Value* Ta7730279654;
Ta7730279654 = screen;
int Ti7730379655;
Ti7730379655 = 2;
int Tu7730479657;
Tu7730479657 = 1;
double Td7730579656;
Tu7730479657 = scanf("%lf", &Td7730579656);
fprintf(stderr, "debug %lf\n", Td7730579656);
int Tu7548079540;
Ta7730279654[Ti7730379655].d = Td7730579656;
int Tu7730679653;
Tu7730679653 = 1;
double Td7730779652;
Tu7730679653 = scanf("%lf", &Td7730779652);
fprintf(stderr, "debug %lf\n", Td7730779652);
double v179541;
v179541 = rad77490_fun(Td7730779652, NULL);
Value* Ta7730879649;
Ta7730879649 = cos_v;
int Ti7730979650;
Ti7730979650 = 0;
double Td7731079651;
Td7731079651 = cos(v179541);
int Tu7547979542;
Ta7730879649[Ti7730979650].d = Td7731079651;
Value* Ta7731179646;
Ta7731179646 = sin_v;
int Ti7731279647;
Ti7731279647 = 0;
double Td7731379648;
Td7731379648 = sin(v179541);
int Tu7547879543;
Ta7731179646[Ti7731279647].d = Td7731379648;
int Tu7731479645;
Tu7731479645 = 1;
double Td7731579644;
Tu7731479645 = scanf("%lf", &Td7731579644);
fprintf(stderr, "debug %lf\n", Td7731579644);
double v279544;
v279544 = rad77490_fun(Td7731579644, NULL);
Value* Ta7731679641;
Ta7731679641 = cos_v;
int Ti7731779642;
Ti7731779642 = 1;
double Td7731879643;
Td7731879643 = cos(v279544);
int Tu7547779545;
Ta7731679641[Ti7731779642].d = Td7731879643;
Value* Ta7731979638;
Ta7731979638 = sin_v;
int Ti7732079639;
Ti7732079639 = 1;
double Td7732179640;
Td7732179640 = sin(v279544);
int Tu7547679546;
Ta7731979638[Ti7732079639].d = Td7732179640;
int Tu7732279637;
Tu7732279637 = 1;
double nl79547;
Tu7732279637 = scanf("%lf", &nl79547);
fprintf(stderr, "debug %lf\n", nl79547);
int Tu7732379636;
Tu7732379636 = 1;
double Td7732479635;
Tu7732379636 = scanf("%lf", &Td7732479635);
fprintf(stderr, "debug %lf\n", Td7732479635);
double l179548;
l179548 = rad77490_fun(Td7732479635, NULL);
double sl179549;
sl179549 = sin(l179548);
Value* Ta7732579632;
Ta7732579632 = light;
int Ti7732679633;
Ti7732679633 = 1;
double Td7732779634;
Td7732779634 = -sl179549;
int Tu7547579550;
Ta7732579632[Ti7732679633].d = Td7732779634;
int Tu7732879631;
Tu7732879631 = 1;
double Td7732979630;
Tu7732879631 = scanf("%lf", &Td7732979630);
fprintf(stderr, "debug %lf\n", Td7732979630);
double l279551;
l279551 = rad77490_fun(Td7732979630, NULL);
double cl179552;
cl179552 = cos(l179548);
double sl279553;
sl279553 = sin(l279551);
Value* Ta7733079627;
Ta7733079627 = light;
int Ti7733179628;
Ti7733179628 = 0;
double Td7733279629;
Td7733279629 =  cl179552 * sl279553;
int Tu7547479554;
Ta7733079627[Ti7733179628].d = Td7733279629;
double cl279555;
cl279555 = cos(l279551);
Value* Ta7733379624;
Ta7733379624 = light;
int Ti7733479625;
Ti7733479625 = 2;
double Td7733579626;
Td7733579626 =  cl179552 * cl279555;
int Tu7547379556;
Ta7733379624[Ti7733479625].d = Td7733579626;
Value* Ta7733679620;
Ta7733679620 = beam;
int Ti7733779621;
Ti7733779621 = 0;
int Tu7733879623;
Tu7733879623 = 1;
double Td7733979622;
Tu7733879623 = scanf("%lf", &Td7733979622);
fprintf(stderr, "debug %lf\n", Td7733979622);
int Tu7547279557;
Ta7733679620[Ti7733779621].d = Td7733979622;
Value* Ta7734079609;
Ta7734079609 = vp;
int Ti7734179610;
Ti7734179610 = 0;
Value* Ta7734279618;
Ta7734279618 = cos_v;
int Ti7734379619;
Ti7734379619 = 0;
double Td7734479614;
Td7734479614 = Ta7734279618[Ti7734379619].d;
Value* Ta7734579616;
Ta7734579616 = sin_v;
int Ti7734679617;
Ti7734679617 = 1;
double Td7734779615;
Td7734779615 = Ta7734579616[Ti7734679617].d;
double Td7734879612;
Td7734879612 =  Td7734479614 * Td7734779615;
double Td7734979613;
Td7734979613 = -200.000000;
double Td7735079611;
Td7735079611 =  Td7734879612 * Td7734979613;
int Tu7547179558;
Ta7734079609[Ti7734179610].d = Td7735079611;
Value* Ta7735179601;
Ta7735179601 = vp;
int Ti7735279602;
Ti7735279602 = 1;
Value* Ta7735379607;
Ta7735379607 = sin_v;
int Ti7735479608;
Ti7735479608 = 0;
double Td7735579606;
Td7735579606 = Ta7735379607[Ti7735479608].d;
double Td7735679604;
Td7735679604 = -Td7735579606;
double Td7735779605;
Td7735779605 = -200.000000;
double Td7735879603;
Td7735879603 =  Td7735679604 * Td7735779605;
int Tu7547079559;
Ta7735179601[Ti7735279602].d = Td7735879603;
Value* Ta7735979590;
Ta7735979590 = vp;
int Ti7736079591;
Ti7736079591 = 2;
Value* Ta7736179599;
Ta7736179599 = cos_v;
int Ti7736279600;
Ti7736279600 = 0;
double Td7736379595;
Td7736379595 = Ta7736179599[Ti7736279600].d;
Value* Ta7736479597;
Ta7736479597 = cos_v;
int Ti7736579598;
Ti7736579598 = 1;
double Td7736679596;
Td7736679596 = Ta7736479597[Ti7736579598].d;
double Td7736779593;
Td7736779593 =  Td7736379595 * Td7736679596;
double Td7736879594;
Td7736879594 = -200.000000;
double Td7736979592;
Td7736979592 =  Td7736779593 * Td7736879594;
int Tu7546979560;
Ta7735979590[Ti7736079591].d = Td7736979592;
Value* Ta7737079581;
Ta7737079581 = view;
int Ti7737179582;
Ti7737179582 = 0;
Value* Ta7737279588;
Ta7737279588 = vp;
int Ti7737379589;
Ti7737379589 = 0;
double Td7737479584;
Td7737479584 = Ta7737279588[Ti7737379589].d;
Value* Ta7737579586;
Ta7737579586 = screen;
int Ti7737679587;
Ti7737679587 = 0;
double Td7737779585;
Td7737779585 = Ta7737579586[Ti7737679587].d;
double Td7737879583;
Td7737879583 = Td7737479584 + Td7737779585;
int Tu7546879561;
Ta7737079581[Ti7737179582].d = Td7737879583;
Value* Ta7737979572;
Ta7737979572 = view;
int Ti7738079573;
Ti7738079573 = 1;
Value* Ta7738179579;
Ta7738179579 = vp;
int Ti7738279580;
Ti7738279580 = 1;
double Td7738379575;
Td7738379575 = Ta7738179579[Ti7738279580].d;
Value* Ta7738479577;
Ta7738479577 = screen;
int Ti7738579578;
Ti7738579578 = 1;
double Td7738679576;
Td7738679576 = Ta7738479577[Ti7738579578].d;
double Td7738779574;
Td7738779574 = Td7738379575 + Td7738679576;
int Tu7546779562;
Ta7737979572[Ti7738079573].d = Td7738779574;
Value* Ta7738879563;
Ta7738879563 = view;
int Ti7738979564;
Ti7738979564 = 2;
Value* Ta7739079570;
Ta7739079570 = vp;
int Ti7739179571;
Ti7739179571 = 2;
double Td7739279566;
Td7739279566 = Ta7739079570[Ti7739179571].d;
Value* Ta7739379568;
Ta7739379568 = screen;
int Ti7739479569;
Ti7739479569 = 2;
double Td7739579567;
Td7739579567 = Ta7739379568[Ti7739479569].d;
double Td7739679565;
Td7739679565 = Td7739279566 + Td7739579567;
Ta7738879563[Ti7738979564].d = Td7739679565;
return result;
}

bool read_nth_object77494_fun(int n77495, Value *env){
bool result;
int Tu7690479537;
Tu7690479537 = 1;
int texture79091;
double dtexture79091;
Tu7690479537 = scanf("%lf", &dtexture79091);
 texture79091 = (int) dtexture79091;
fprintf(stderr, "debug %d\n", texture79091);
int Ti7690579536;
Ti7690579536 = 1;
int Ti7690679092;
Ti7690679092 = -Ti7690579536;
if(texture79091 == Ti7690679092){
result = 0;
}
else{
int Tu7690779535;
Tu7690779535 = 1;
int form79093;
double dform79093;
Tu7690779535 = scanf("%lf", &dform79093);
 form79093 = (int) dform79093;
fprintf(stderr, "debug %d\n", form79093);
int Tu7690879534;
Tu7690879534 = 1;
int refltype79094;
double drefltype79094;
Tu7690879534 = scanf("%lf", &drefltype79094);
 refltype79094 = (int) drefltype79094;
fprintf(stderr, "debug %d\n", refltype79094);
int Tu7690979533;
Tu7690979533 = 1;
int isrot_p79095;
double disrot_p79095;
Tu7690979533 = scanf("%lf", &disrot_p79095);
 isrot_p79095 = (int) disrot_p79095;
fprintf(stderr, "debug %d\n", isrot_p79095);
int Ti7691079531;
Ti7691079531 = 3;
double Td7691179532;
Td7691179532 = 0.000000;
Value* abc79096;
make_double_array(&abc79096, Ti7691079531, Td7691179532);
int Ti7691279528;
Ti7691279528 = 0;
int Tu7691379530;
Tu7691379530 = 1;
double Td7691479529;
Tu7691379530 = scanf("%lf", &Td7691479529);
fprintf(stderr, "debug %lf\n", Td7691479529);
int Tu7552179097;
abc79096[Ti7691279528].d = Td7691479529;
int Ti7691579525;
Ti7691579525 = 1;
int Tu7691679527;
Tu7691679527 = 1;
double Td7691779526;
Tu7691679527 = scanf("%lf", &Td7691779526);
fprintf(stderr, "debug %lf\n", Td7691779526);
int Tu7552079098;
abc79096[Ti7691579525].d = Td7691779526;
int Ti7691879522;
Ti7691879522 = 2;
int Tu7691979524;
Tu7691979524 = 1;
double Td7692079523;
Tu7691979524 = scanf("%lf", &Td7692079523);
fprintf(stderr, "debug %lf\n", Td7692079523);
int Tu7551979099;
abc79096[Ti7691879522].d = Td7692079523;
int Ti7692179520;
Ti7692179520 = 3;
double Td7692279521;
Td7692279521 = 0.000000;
Value* xyz79100;
make_double_array(&xyz79100, Ti7692179520, Td7692279521);
int Ti7692379517;
Ti7692379517 = 0;
int Tu7692479519;
Tu7692479519 = 1;
double Td7692579518;
Tu7692479519 = scanf("%lf", &Td7692579518);
fprintf(stderr, "debug %lf\n", Td7692579518);
int Tu7551879101;
xyz79100[Ti7692379517].d = Td7692579518;
int Ti7692679514;
Ti7692679514 = 1;
int Tu7692779516;
Tu7692779516 = 1;
double Td7692879515;
Tu7692779516 = scanf("%lf", &Td7692879515);
fprintf(stderr, "debug %lf\n", Td7692879515);
int Tu7551779102;
xyz79100[Ti7692679514].d = Td7692879515;
int Ti7692979511;
Ti7692979511 = 2;
int Tu7693079513;
Tu7693079513 = 1;
double Td7693179512;
Tu7693079513 = scanf("%lf", &Td7693179512);
fprintf(stderr, "debug %lf\n", Td7693179512);
int Tu7551679103;
xyz79100[Ti7692979511].d = Td7693179512;
double Td7693279508;
Td7693279508 = 0.000000;
int Tu7693379510;
Tu7693379510 = 1;
double Td7693479509;
Tu7693379510 = scanf("%lf", &Td7693479509);
fprintf(stderr, "debug %lf\n", Td7693479509);
bool m_invert79104;
if(Td7693279508 <= Td7693479509){
m_invert79104 = 0;
}
else{
m_invert79104 = 1;
}
int Ti7693579506;
Ti7693579506 = 2;
double Td7693679507;
Td7693679507 = 0.000000;
Value* reflparam79105;
make_double_array(&reflparam79105, Ti7693579506, Td7693679507);
int Ti7693779503;
Ti7693779503 = 0;
int Tu7693879505;
Tu7693879505 = 1;
double Td7693979504;
Tu7693879505 = scanf("%lf", &Td7693979504);
fprintf(stderr, "debug %lf\n", Td7693979504);
int Tu7551579106;
reflparam79105[Ti7693779503].d = Td7693979504;
int Ti7694079500;
Ti7694079500 = 1;
int Tu7694179502;
Tu7694179502 = 1;
double Td7694279501;
Tu7694179502 = scanf("%lf", &Td7694279501);
fprintf(stderr, "debug %lf\n", Td7694279501);
int Tu7551479107;
reflparam79105[Ti7694079500].d = Td7694279501;
int Ti7694379498;
Ti7694379498 = 3;
double Td7694479499;
Td7694479499 = 0.000000;
Value* color79108;
make_double_array(&color79108, Ti7694379498, Td7694479499);
int Ti7694579495;
Ti7694579495 = 0;
int Tu7694679497;
Tu7694679497 = 1;
double Td7694779496;
Tu7694679497 = scanf("%lf", &Td7694779496);
fprintf(stderr, "debug %lf\n", Td7694779496);
int Tu7551379109;
color79108[Ti7694579495].d = Td7694779496;
int Ti7694879492;
Ti7694879492 = 1;
int Tu7694979494;
Tu7694979494 = 1;
double Td7695079493;
Tu7694979494 = scanf("%lf", &Td7695079493);
fprintf(stderr, "debug %lf\n", Td7695079493);
int Tu7551279110;
color79108[Ti7694879492].d = Td7695079493;
int Ti7695179489;
Ti7695179489 = 2;
int Tu7695279491;
Tu7695279491 = 1;
double Td7695379490;
Tu7695279491 = scanf("%lf", &Td7695379490);
fprintf(stderr, "debug %lf\n", Td7695379490);
int Tu7551179111;
color79108[Ti7695179489].d = Td7695379490;
int Ti7695479487;
Ti7695479487 = 3;
double Td7695579488;
Td7695579488 = 0.000000;
Value* rotation79112;
make_double_array(&rotation79112, Ti7695479487, Td7695579488);
int Ti7695679472;
Ti7695679472 = 0;
int Tu7551079113;
if(isrot_p79095 == Ti7695679472){
Tu7551079113 = 1;
}
else{
int Ti7695779483;
Ti7695779483 = 0;
int Tu7695879486;
Tu7695879486 = 1;
double Td7695979485;
Tu7695879486 = scanf("%lf", &Td7695979485);
fprintf(stderr, "debug %lf\n", Td7695979485);
double Td7696079484;
Td7696079484 = rad77490_fun(Td7695979485, NULL);
int Tu7548479473;
rotation79112[Ti7695779483].d = Td7696079484;
int Ti7696179479;
Ti7696179479 = 1;
int Tu7696279482;
Tu7696279482 = 1;
double Td7696379481;
Tu7696279482 = scanf("%lf", &Td7696379481);
fprintf(stderr, "debug %lf\n", Td7696379481);
double Td7696479480;
Td7696479480 = rad77490_fun(Td7696379481, NULL);
int Tu7548379474;
rotation79112[Ti7696179479].d = Td7696479480;
int Ti7696579475;
Ti7696579475 = 2;
int Tu7696679478;
Tu7696679478 = 1;
double Td7696779477;
Tu7696679478 = scanf("%lf", &Td7696779477);
fprintf(stderr, "debug %lf\n", Td7696779477);
double Td7696879476;
Td7696879476 = rad77490_fun(Td7696779477, NULL);
rotation79112[Ti7696579475].d = Td7696879476;
}
int Ti7696979471;
Ti7696979471 = 2;
bool m_invert279114;
if(form79093 == Ti7696979471){
m_invert279114 = 1;
}
else{
m_invert279114 = m_invert79104;
}
int* obj79115;
obj79115 = malloc(10 * sizeof(int));
obj79115[0] = texture79091;
obj79115[1] = form79093;
obj79115[2] = refltype79094;
obj79115[3] = isrot_p79095;
obj79115[4] = abc79096;
obj79115[5] = xyz79100;
obj79115[6] = m_invert279114;
obj79115[7] = reflparam79105;
obj79115[8] = color79108;
obj79115[9] = rotation79112;

Value* Ta7697079470;
Ta7697079470 = objects;
int Tu7550979116;
Ta7697079470[n77495].a = obj79115;
int Ti7697179443;
Ti7697179443 = 3;
int Tu7550879117;
if(form79093 == Ti7697179443){
int Ti7697279469;
Ti7697279469 = 0;
double a79447;
a79447 = abc79096[Ti7697279469].d;
int Ti7697379464;
Ti7697379464 = 0;
double Td7697479466;
Td7697479466 = 0.000000;
double Td7697779465;
if(Td7697479466 == a79447){
Td7697779465 = 0.000000;
}
else{
double Td7697579467;
Td7697579467 = sgn77488_fun(a79447, NULL);
double Td7697679468;
Td7697679468 = fsqr77443_fun(a79447, NULL);
Td7697779465 = Td7697579467 / Td7697679468;
}
int Tu7548679448;
abc79096[Ti7697379464].d = Td7697779465;
int Ti7697879463;
Ti7697879463 = 1;
double b79449;
b79449 = abc79096[Ti7697879463].d;
int Ti7697979458;
Ti7697979458 = 1;
double Td7698079460;
Td7698079460 = 0.000000;
double Td7698379459;
if(Td7698079460 == b79449){
Td7698379459 = 0.000000;
}
else{
double Td7698179461;
Td7698179461 = sgn77488_fun(b79449, NULL);
double Td7698279462;
Td7698279462 = fsqr77443_fun(b79449, NULL);
Td7698379459 = Td7698179461 / Td7698279462;
}
int Tu7548579450;
abc79096[Ti7697979458].d = Td7698379459;
int Ti7698479457;
Ti7698479457 = 2;
double c79451;
c79451 = abc79096[Ti7698479457].d;
int Ti7698579452;
Ti7698579452 = 2;
double Td7698679454;
Td7698679454 = 0.000000;
double Td7698979453;
if(Td7698679454 == c79451){
Td7698979453 = 0.000000;
}
else{
double Td7698779455;
Td7698779455 = sgn77488_fun(c79451, NULL);
double Td7698879456;
Td7698879456 = fsqr77443_fun(c79451, NULL);
Td7698979453 = Td7698779455 / Td7698879456;
}
abc79096[Ti7698579452].d = Td7698979453;
}
else{
int Ti7699079444;
Ti7699079444 = 2;
if(form79093 == Ti7699079444){
int Ti7699179446;
Ti7699179446 = 0;
int Ti7699279445;
if(m_invert79104 == Ti7699179446){
Ti7699279445 = 1;
}
else{
Ti7699279445 = 0;
}
Tu7550879117 = normalize_vector77485_fun(abc79096, Ti7699279445, NULL);
}
else{
Tu7550879117 = 1;
}
}
int Ti7699379119;
Ti7699379119 = 0;
int Tu7550779118;
if(isrot_p79095 == Ti7699379119){
Tu7550779118 = 1;
}
else{
Value* Ta7699479438;
Ta7699479438 = cs_temp;
int Ti7699579439;
Ti7699579439 = 10;
int Ti7699679442;
Ti7699679442 = 0;
double Td7699779441;
Td7699779441 = rotation79112[Ti7699679442].d;
double Td7699879440;
Td7699879440 = cos(Td7699779441);
int Tu7550679120;
Ta7699479438[Ti7699579439].d = Td7699879440;
Value* Ta7699979433;
Ta7699979433 = cs_temp;
int Ti7700079434;
Ti7700079434 = 11;
int Ti7700179437;
Ti7700179437 = 0;
double Td7700279436;
Td7700279436 = rotation79112[Ti7700179437].d;
double Td7700379435;
Td7700379435 = sin(Td7700279436);
int Tu7550579121;
Ta7699979433[Ti7700079434].d = Td7700379435;
Value* Ta7700479428;
Ta7700479428 = cs_temp;
int Ti7700579429;
Ti7700579429 = 12;
int Ti7700679432;
Ti7700679432 = 1;
double Td7700779431;
Td7700779431 = rotation79112[Ti7700679432].d;
double Td7700879430;
Td7700879430 = cos(Td7700779431);
int Tu7550479122;
Ta7700479428[Ti7700579429].d = Td7700879430;
Value* Ta7700979423;
Ta7700979423 = cs_temp;
int Ti7701079424;
Ti7701079424 = 13;
int Ti7701179427;
Ti7701179427 = 1;
double Td7701279426;
Td7701279426 = rotation79112[Ti7701179427].d;
double Td7701379425;
Td7701379425 = sin(Td7701279426);
int Tu7550379123;
Ta7700979423[Ti7701079424].d = Td7701379425;
Value* Ta7701479418;
Ta7701479418 = cs_temp;
int Ti7701579419;
Ti7701579419 = 14;
int Ti7701679422;
Ti7701679422 = 2;
double Td7701779421;
Td7701779421 = rotation79112[Ti7701679422].d;
double Td7701879420;
Td7701879420 = cos(Td7701779421);
int Tu7550279124;
Ta7701479418[Ti7701579419].d = Td7701879420;
Value* Ta7701979413;
Ta7701979413 = cs_temp;
int Ti7702079414;
Ti7702079414 = 15;
int Ti7702179417;
Ti7702179417 = 2;
double Td7702279416;
Td7702279416 = rotation79112[Ti7702179417].d;
double Td7702379415;
Td7702379415 = sin(Td7702279416);
int Tu7550179125;
Ta7701979413[Ti7702079414].d = Td7702379415;
Value* Ta7702479404;
Ta7702479404 = cs_temp;
int Ti7702579405;
Ti7702579405 = 0;
Value* Ta7702679411;
Ta7702679411 = cs_temp;
int Ti7702779412;
Ti7702779412 = 12;
double Td7702879407;
Td7702879407 = Ta7702679411[Ti7702779412].d;
Value* Ta7702979409;
Ta7702979409 = cs_temp;
int Ti7703079410;
Ti7703079410 = 14;
double Td7703179408;
Td7703179408 = Ta7702979409[Ti7703079410].d;
double Td7703279406;
Td7703279406 =  Td7702879407 * Td7703179408;
int Tu7550079126;
Ta7702479404[Ti7702579405].d = Td7703279406;
Value* Ta7703379383;
Ta7703379383 = cs_temp;
int Ti7703479384;
Ti7703479384 = 1;
Value* Ta7703579402;
Ta7703579402 = cs_temp;
int Ti7703679403;
Ti7703679403 = 11;
double Td7703779398;
Td7703779398 = Ta7703579402[Ti7703679403].d;
Value* Ta7703879400;
Ta7703879400 = cs_temp;
int Ti7703979401;
Ti7703979401 = 13;
double Td7704079399;
Td7704079399 = Ta7703879400[Ti7703979401].d;
double Td7704179394;
Td7704179394 =  Td7703779398 * Td7704079399;
Value* Ta7704279396;
Ta7704279396 = cs_temp;
int Ti7704379397;
Ti7704379397 = 14;
double Td7704479395;
Td7704479395 = Ta7704279396[Ti7704379397].d;
double Td7704579386;
Td7704579386 =  Td7704179394 * Td7704479395;
Value* Ta7704679392;
Ta7704679392 = cs_temp;
int Ti7704779393;
Ti7704779393 = 10;
double Td7704879388;
Td7704879388 = Ta7704679392[Ti7704779393].d;
Value* Ta7704979390;
Ta7704979390 = cs_temp;
int Ti7705079391;
Ti7705079391 = 15;
double Td7705179389;
Td7705179389 = Ta7704979390[Ti7705079391].d;
double Td7705279387;
Td7705279387 =  Td7704879388 * Td7705179389;
double Td7705379385;
Td7705379385 = Td7704579386 - Td7705279387;
int Tu7549979127;
Ta7703379383[Ti7703479384].d = Td7705379385;
Value* Ta7705479362;
Ta7705479362 = cs_temp;
int Ti7705579363;
Ti7705579363 = 2;
Value* Ta7705679381;
Ta7705679381 = cs_temp;
int Ti7705779382;
Ti7705779382 = 10;
double Td7705879377;
Td7705879377 = Ta7705679381[Ti7705779382].d;
Value* Ta7705979379;
Ta7705979379 = cs_temp;
int Ti7706079380;
Ti7706079380 = 13;
double Td7706179378;
Td7706179378 = Ta7705979379[Ti7706079380].d;
double Td7706279373;
Td7706279373 =  Td7705879377 * Td7706179378;
Value* Ta7706379375;
Ta7706379375 = cs_temp;
int Ti7706479376;
Ti7706479376 = 14;
double Td7706579374;
Td7706579374 = Ta7706379375[Ti7706479376].d;
double Td7706679365;
Td7706679365 =  Td7706279373 * Td7706579374;
Value* Ta7706779371;
Ta7706779371 = cs_temp;
int Ti7706879372;
Ti7706879372 = 11;
double Td7706979367;
Td7706979367 = Ta7706779371[Ti7706879372].d;
Value* Ta7707079369;
Ta7707079369 = cs_temp;
int Ti7707179370;
Ti7707179370 = 15;
double Td7707279368;
Td7707279368 = Ta7707079369[Ti7707179370].d;
double Td7707379366;
Td7707379366 =  Td7706979367 * Td7707279368;
double Td7707479364;
Td7707479364 = Td7706679365 + Td7707379366;
int Tu7549879128;
Ta7705479362[Ti7705579363].d = Td7707479364;
Value* Ta7707579353;
Ta7707579353 = cs_temp;
int Ti7707679354;
Ti7707679354 = 3;
Value* Ta7707779360;
Ta7707779360 = cs_temp;
int Ti7707879361;
Ti7707879361 = 12;
double Td7707979356;
Td7707979356 = Ta7707779360[Ti7707879361].d;
Value* Ta7708079358;
Ta7708079358 = cs_temp;
int Ti7708179359;
Ti7708179359 = 15;
double Td7708279357;
Td7708279357 = Ta7708079358[Ti7708179359].d;
double Td7708379355;
Td7708379355 =  Td7707979356 * Td7708279357;
int Tu7549779129;
Ta7707579353[Ti7707679354].d = Td7708379355;
Value* Ta7708479332;
Ta7708479332 = cs_temp;
int Ti7708579333;
Ti7708579333 = 4;
Value* Ta7708679351;
Ta7708679351 = cs_temp;
int Ti7708779352;
Ti7708779352 = 11;
double Td7708879347;
Td7708879347 = Ta7708679351[Ti7708779352].d;
Value* Ta7708979349;
Ta7708979349 = cs_temp;
int Ti7709079350;
Ti7709079350 = 13;
double Td7709179348;
Td7709179348 = Ta7708979349[Ti7709079350].d;
double Td7709279343;
Td7709279343 =  Td7708879347 * Td7709179348;
Value* Ta7709379345;
Ta7709379345 = cs_temp;
int Ti7709479346;
Ti7709479346 = 15;
double Td7709579344;
Td7709579344 = Ta7709379345[Ti7709479346].d;
double Td7709679335;
Td7709679335 =  Td7709279343 * Td7709579344;
Value* Ta7709779341;
Ta7709779341 = cs_temp;
int Ti7709879342;
Ti7709879342 = 10;
double Td7709979337;
Td7709979337 = Ta7709779341[Ti7709879342].d;
Value* Ta7710079339;
Ta7710079339 = cs_temp;
int Ti7710179340;
Ti7710179340 = 14;
double Td7710279338;
Td7710279338 = Ta7710079339[Ti7710179340].d;
double Td7710379336;
Td7710379336 =  Td7709979337 * Td7710279338;
double Td7710479334;
Td7710479334 = Td7709679335 + Td7710379336;
int Tu7549679130;
Ta7708479332[Ti7708579333].d = Td7710479334;
Value* Ta7710579311;
Ta7710579311 = cs_temp;
int Ti7710679312;
Ti7710679312 = 5;
Value* Ta7710779330;
Ta7710779330 = cs_temp;
int Ti7710879331;
Ti7710879331 = 10;
double Td7710979326;
Td7710979326 = Ta7710779330[Ti7710879331].d;
Value* Ta7711079328;
Ta7711079328 = cs_temp;
int Ti7711179329;
Ti7711179329 = 13;
double Td7711279327;
Td7711279327 = Ta7711079328[Ti7711179329].d;
double Td7711379322;
Td7711379322 =  Td7710979326 * Td7711279327;
Value* Ta7711479324;
Ta7711479324 = cs_temp;
int Ti7711579325;
Ti7711579325 = 15;
double Td7711679323;
Td7711679323 = Ta7711479324[Ti7711579325].d;
double Td7711779314;
Td7711779314 =  Td7711379322 * Td7711679323;
Value* Ta7711879320;
Ta7711879320 = cs_temp;
int Ti7711979321;
Ti7711979321 = 11;
double Td7712079316;
Td7712079316 = Ta7711879320[Ti7711979321].d;
Value* Ta7712179318;
Ta7712179318 = cs_temp;
int Ti7712279319;
Ti7712279319 = 14;
double Td7712379317;
Td7712379317 = Ta7712179318[Ti7712279319].d;
double Td7712479315;
Td7712479315 =  Td7712079316 * Td7712379317;
double Td7712579313;
Td7712579313 = Td7711779314 - Td7712479315;
int Tu7549579131;
Ta7710579311[Ti7710679312].d = Td7712579313;
Value* Ta7712679305;
Ta7712679305 = cs_temp;
int Ti7712779306;
Ti7712779306 = 6;
Value* Ta7712879309;
Ta7712879309 = cs_temp;
int Ti7712979310;
Ti7712979310 = 13;
double Td7713079308;
Td7713079308 = Ta7712879309[Ti7712979310].d;
double Td7713179307;
Td7713179307 = -Td7713079308;
int Tu7549479132;
Ta7712679305[Ti7712779306].d = Td7713179307;
Value* Ta7713279296;
Ta7713279296 = cs_temp;
int Ti7713379297;
Ti7713379297 = 7;
Value* Ta7713479303;
Ta7713479303 = cs_temp;
int Ti7713579304;
Ti7713579304 = 11;
double Td7713679299;
Td7713679299 = Ta7713479303[Ti7713579304].d;
Value* Ta7713779301;
Ta7713779301 = cs_temp;
int Ti7713879302;
Ti7713879302 = 12;
double Td7713979300;
Td7713979300 = Ta7713779301[Ti7713879302].d;
double Td7714079298;
Td7714079298 =  Td7713679299 * Td7713979300;
int Tu7549379133;
Ta7713279296[Ti7713379297].d = Td7714079298;
Value* Ta7714179287;
Ta7714179287 = cs_temp;
int Ti7714279288;
Ti7714279288 = 8;
Value* Ta7714379294;
Ta7714379294 = cs_temp;
int Ti7714479295;
Ti7714479295 = 10;
double Td7714579290;
Td7714579290 = Ta7714379294[Ti7714479295].d;
Value* Ta7714679292;
Ta7714679292 = cs_temp;
int Ti7714779293;
Ti7714779293 = 12;
double Td7714879291;
Td7714879291 = Ta7714679292[Ti7714779293].d;
double Td7714979289;
Td7714979289 =  Td7714579290 * Td7714879291;
int Tu7549279134;
Ta7714179287[Ti7714279288].d = Td7714979289;
int Ti7715079286;
Ti7715079286 = 0;
double ao79135;
ao79135 = abc79096[Ti7715079286].d;
int Ti7715179285;
Ti7715179285 = 1;
double bo79136;
bo79136 = abc79096[Ti7715179285].d;
int Ti7715279284;
Ti7715279284 = 2;
double co79137;
co79137 = abc79096[Ti7715279284].d;
int Ti7715379266;
Ti7715379266 = 0;
Value* Ta7715479282;
Ta7715479282 = cs_temp;
int Ti7715579283;
Ti7715579283 = 0;
double Td7715679281;
Td7715679281 = Ta7715479282[Ti7715579283].d;
double Td7715779280;
Td7715779280 = fsqr77443_fun(Td7715679281, NULL);
double Td7715879274;
Td7715879274 =  ao79135 * Td7715779280;
Value* Ta7715979278;
Ta7715979278 = cs_temp;
int Ti7716079279;
Ti7716079279 = 3;
double Td7716179277;
Td7716179277 = Ta7715979278[Ti7716079279].d;
double Td7716279276;
Td7716279276 = fsqr77443_fun(Td7716179277, NULL);
double Td7716379275;
Td7716379275 =  bo79136 * Td7716279276;
double Td7716479268;
Td7716479268 = Td7715879274 + Td7716379275;
Value* Ta7716579272;
Ta7716579272 = cs_temp;
int Ti7716679273;
Ti7716679273 = 6;
double Td7716779271;
Td7716779271 = Ta7716579272[Ti7716679273].d;
double Td7716879270;
Td7716879270 = fsqr77443_fun(Td7716779271, NULL);
double Td7716979269;
Td7716979269 =  co79137 * Td7716879270;
double Td7717079267;
Td7717079267 = Td7716479268 + Td7716979269;
int Tu7549179138;
abc79096[Ti7715379266].d = Td7717079267;
int Ti7717179248;
Ti7717179248 = 1;
Value* Ta7717279264;
Ta7717279264 = cs_temp;
int Ti7717379265;
Ti7717379265 = 1;
double Td7717479263;
Td7717479263 = Ta7717279264[Ti7717379265].d;
double Td7717579262;
Td7717579262 = fsqr77443_fun(Td7717479263, NULL);
double Td7717679256;
Td7717679256 =  ao79135 * Td7717579262;
Value* Ta7717779260;
Ta7717779260 = cs_temp;
int Ti7717879261;
Ti7717879261 = 4;
double Td7717979259;
Td7717979259 = Ta7717779260[Ti7717879261].d;
double Td7718079258;
Td7718079258 = fsqr77443_fun(Td7717979259, NULL);
double Td7718179257;
Td7718179257 =  bo79136 * Td7718079258;
double Td7718279250;
Td7718279250 = Td7717679256 + Td7718179257;
Value* Ta7718379254;
Ta7718379254 = cs_temp;
int Ti7718479255;
Ti7718479255 = 7;
double Td7718579253;
Td7718579253 = Ta7718379254[Ti7718479255].d;
double Td7718679252;
Td7718679252 = fsqr77443_fun(Td7718579253, NULL);
double Td7718779251;
Td7718779251 =  co79137 * Td7718679252;
double Td7718879249;
Td7718879249 = Td7718279250 + Td7718779251;
int Tu7549079139;
abc79096[Ti7717179248].d = Td7718879249;
int Ti7718979230;
Ti7718979230 = 2;
Value* Ta7719079246;
Ta7719079246 = cs_temp;
int Ti7719179247;
Ti7719179247 = 2;
double Td7719279245;
Td7719279245 = Ta7719079246[Ti7719179247].d;
double Td7719379244;
Td7719379244 = fsqr77443_fun(Td7719279245, NULL);
double Td7719479238;
Td7719479238 =  ao79135 * Td7719379244;
Value* Ta7719579242;
Ta7719579242 = cs_temp;
int Ti7719679243;
Ti7719679243 = 5;
double Td7719779241;
Td7719779241 = Ta7719579242[Ti7719679243].d;
double Td7719879240;
Td7719879240 = fsqr77443_fun(Td7719779241, NULL);
double Td7719979239;
Td7719979239 =  bo79136 * Td7719879240;
double Td7720079232;
Td7720079232 = Td7719479238 + Td7719979239;
Value* Ta7720179236;
Ta7720179236 = cs_temp;
int Ti7720279237;
Ti7720279237 = 8;
double Td7720379235;
Td7720379235 = Ta7720179236[Ti7720279237].d;
double Td7720479234;
Td7720479234 = fsqr77443_fun(Td7720379235, NULL);
double Td7720579233;
Td7720579233 =  co79137 * Td7720479234;
double Td7720679231;
Td7720679231 = Td7720079232 + Td7720579233;
int Tu7548979140;
abc79096[Ti7718979230].d = Td7720679231;
int Ti7720779201;
Ti7720779201 = 0;
double Td7720879203;
Td7720879203 = 2.000000;
Value* Ta7720979228;
Ta7720979228 = cs_temp;
int Ti7721079229;
Ti7721079229 = 1;
double Td7721179227;
Td7721179227 = Ta7720979228[Ti7721079229].d;
double Td7721279223;
Td7721279223 =  ao79135 * Td7721179227;
Value* Ta7721379225;
Ta7721379225 = cs_temp;
int Ti7721479226;
Ti7721479226 = 2;
double Td7721579224;
Td7721579224 = Ta7721379225[Ti7721479226].d;
double Td7721679214;
Td7721679214 =  Td7721279223 * Td7721579224;
Value* Ta7721779221;
Ta7721779221 = cs_temp;
int Ti7721879222;
Ti7721879222 = 4;
double Td7721979220;
Td7721979220 = Ta7721779221[Ti7721879222].d;
double Td7722079216;
Td7722079216 =  bo79136 * Td7721979220;
Value* Ta7722179218;
Ta7722179218 = cs_temp;
int Ti7722279219;
Ti7722279219 = 5;
double Td7722379217;
Td7722379217 = Ta7722179218[Ti7722279219].d;
double Td7722479215;
Td7722479215 =  Td7722079216 * Td7722379217;
double Td7722579205;
Td7722579205 = Td7721679214 + Td7722479215;
Value* Ta7722679212;
Ta7722679212 = cs_temp;
int Ti7722779213;
Ti7722779213 = 7;
double Td7722879211;
Td7722879211 = Ta7722679212[Ti7722779213].d;
double Td7722979207;
Td7722979207 =  co79137 * Td7722879211;
Value* Ta7723079209;
Ta7723079209 = cs_temp;
int Ti7723179210;
Ti7723179210 = 8;
double Td7723279208;
Td7723279208 = Ta7723079209[Ti7723179210].d;
double Td7723379206;
Td7723379206 =  Td7722979207 * Td7723279208;
double Td7723479204;
Td7723479204 = Td7722579205 + Td7723379206;
double Td7723579202;
Td7723579202 =  Td7720879203 * Td7723479204;
int Tu7548879141;
rotation79112[Ti7720779201].d = Td7723579202;
int Ti7723679172;
Ti7723679172 = 1;
double Td7723779174;
Td7723779174 = 2.000000;
Value* Ta7723879199;
Ta7723879199 = cs_temp;
int Ti7723979200;
Ti7723979200 = 0;
double Td7724079198;
Td7724079198 = Ta7723879199[Ti7723979200].d;
double Td7724179194;
Td7724179194 =  ao79135 * Td7724079198;
Value* Ta7724279196;
Ta7724279196 = cs_temp;
int Ti7724379197;
Ti7724379197 = 2;
double Td7724479195;
Td7724479195 = Ta7724279196[Ti7724379197].d;
double Td7724579185;
Td7724579185 =  Td7724179194 * Td7724479195;
Value* Ta7724679192;
Ta7724679192 = cs_temp;
int Ti7724779193;
Ti7724779193 = 3;
double Td7724879191;
Td7724879191 = Ta7724679192[Ti7724779193].d;
double Td7724979187;
Td7724979187 =  bo79136 * Td7724879191;
Value* Ta7725079189;
Ta7725079189 = cs_temp;
int Ti7725179190;
Ti7725179190 = 5;
double Td7725279188;
Td7725279188 = Ta7725079189[Ti7725179190].d;
double Td7725379186;
Td7725379186 =  Td7724979187 * Td7725279188;
double Td7725479176;
Td7725479176 = Td7724579185 + Td7725379186;
Value* Ta7725579183;
Ta7725579183 = cs_temp;
int Ti7725679184;
Ti7725679184 = 6;
double Td7725779182;
Td7725779182 = Ta7725579183[Ti7725679184].d;
double Td7725879178;
Td7725879178 =  co79137 * Td7725779182;
Value* Ta7725979180;
Ta7725979180 = cs_temp;
int Ti7726079181;
Ti7726079181 = 8;
double Td7726179179;
Td7726179179 = Ta7725979180[Ti7726079181].d;
double Td7726279177;
Td7726279177 =  Td7725879178 * Td7726179179;
double Td7726379175;
Td7726379175 = Td7725479176 + Td7726279177;
double Td7726479173;
Td7726479173 =  Td7723779174 * Td7726379175;
int Tu7548779142;
rotation79112[Ti7723679172].d = Td7726479173;
int Ti7726579143;
Ti7726579143 = 2;
double Td7726679145;
Td7726679145 = 2.000000;
Value* Ta7726779170;
Ta7726779170 = cs_temp;
int Ti7726879171;
Ti7726879171 = 0;
double Td7726979169;
Td7726979169 = Ta7726779170[Ti7726879171].d;
double Td7727079165;
Td7727079165 =  ao79135 * Td7726979169;
Value* Ta7727179167;
Ta7727179167 = cs_temp;
int Ti7727279168;
Ti7727279168 = 1;
double Td7727379166;
Td7727379166 = Ta7727179167[Ti7727279168].d;
double Td7727479156;
Td7727479156 =  Td7727079165 * Td7727379166;
Value* Ta7727579163;
Ta7727579163 = cs_temp;
int Ti7727679164;
Ti7727679164 = 3;
double Td7727779162;
Td7727779162 = Ta7727579163[Ti7727679164].d;
double Td7727879158;
Td7727879158 =  bo79136 * Td7727779162;
Value* Ta7727979160;
Ta7727979160 = cs_temp;
int Ti7728079161;
Ti7728079161 = 4;
double Td7728179159;
Td7728179159 = Ta7727979160[Ti7728079161].d;
double Td7728279157;
Td7728279157 =  Td7727879158 * Td7728179159;
double Td7728379147;
Td7728379147 = Td7727479156 + Td7728279157;
Value* Ta7728479154;
Ta7728479154 = cs_temp;
int Ti7728579155;
Ti7728579155 = 6;
double Td7728679153;
Td7728679153 = Ta7728479154[Ti7728579155].d;
double Td7728779149;
Td7728779149 =  co79137 * Td7728679153;
Value* Ta7728879151;
Ta7728879151 = cs_temp;
int Ti7728979152;
Ti7728979152 = 7;
double Td7729079150;
Td7729079150 = Ta7728879151[Ti7728979152].d;
double Td7729179148;
Td7729179148 =  Td7728779149 * Td7729079150;
double Td7729279146;
Td7729279146 = Td7728379147 + Td7729179148;
double Td7729379144;
Td7729379144 =  Td7726679145 * Td7729279146;
rotation79112[Ti7726579143].d = Td7729379144;
}
result = 1;
}
return result;
}

int read_object77496_fun(int n77497, Value *env){
int result;
int Ti7689979086;
Ti7689979086 = 61;
if(Ti7689979086 <= n77497){
result = 1;
}
else{
bool Tb7690079087;
Tb7690079087 = read_nth_object77494_fun(n77497, NULL);
int Ti7690179088;
Ti7690179088 = 0;
if(Tb7690079087 == Ti7690179088){
result = 1;
}
else{
int Ti7690279090;
Ti7690279090 = 1;
int Ti7690379089;
Ti7690379089 = n77497 + Ti7690279090;
result = read_object77496_fun(Ti7690379089, NULL);
}
}
return result;
}

int read_all_object77498_fun(int Tu7552277499, Value *env){
int result;
int Ti7689879085;
Ti7689879085 = 0;
result = read_object77496_fun(Ti7689879085, NULL);
return result;
}

Value* read_net_item77500_fun(int length77501, Value *env){
Value* result;
int Tu7688979084;
Tu7688979084 = 1;
int item79073;
double ditem79073;
Tu7688979084 = scanf("%lf", &ditem79073);
 item79073 = (int) ditem79073;
fprintf(stderr, "debug %d\n", item79073);
int Ti7689079083;
Ti7689079083 = 1;
int Ti7689179074;
Ti7689179074 = -Ti7689079083;
if(item79073 == Ti7689179074){
int Ti7689279082;
Ti7689279082 = 1;
int Ti7689379079;
Ti7689379079 = length77501 + Ti7689279082;
int Ti7689479081;
Ti7689479081 = 1;
int Ti7689579080;
Ti7689579080 = -Ti7689479081;
make_int_array(&result, Ti7689379079, Ti7689579080);
}
else{
int Ti7689679078;
Ti7689679078 = 1;
int Ti7689779077;
Ti7689779077 = length77501 + Ti7689679078;
Value* v79075;
v79075 = read_net_item77500_fun(Ti7689779077, NULL);
int Tu7552379076;
v79075[length77501].i = item79073;
result = v79075;
}
return result;
}

Value* read_or_network77502_fun(int length77503, Value *env){
Value* result;
int Ti7688079072;
Ti7688079072 = 0;
Value* net79061;
net79061 = read_net_item77500_fun(Ti7688079072, NULL);
int Ti7688179071;
Ti7688179071 = 0;
int Ti7688279062;
Ti7688279062 = net79061[Ti7688179071].i;
int Ti7688379070;
Ti7688379070 = 1;
int Ti7688479063;
Ti7688479063 = -Ti7688379070;
if(Ti7688279062 == Ti7688479063){
int Ti7688579069;
Ti7688579069 = 1;
int Ti7688679068;
Ti7688679068 = length77503 + Ti7688579069;
make_multi_array(&result, Ti7688679068, net79061);
}
else{
int Ti7688779067;
Ti7688779067 = 1;
int Ti7688879066;
Ti7688879066 = length77503 + Ti7688779067;
Value* v79064;
v79064 = read_or_network77502_fun(Ti7688879066, NULL);
int Tu7552479065;
v79064[length77503].a = net79061;
result = v79064;
}
return result;
}

int read_and_network77504_fun(int n77505, Value *env){
int result;
int Ti7687279060;
Ti7687279060 = 0;
Value* net79051;
net79051 = read_net_item77500_fun(Ti7687279060, NULL);
int Ti7687379059;
Ti7687379059 = 0;
int Ti7687479052;
Ti7687479052 = net79051[Ti7687379059].i;
int Ti7687579058;
Ti7687579058 = 1;
int Ti7687679053;
Ti7687679053 = -Ti7687579058;
if(Ti7687479052 == Ti7687679053){
result = 1;
}
else{
Value* Ta7687779057;
Ta7687779057 = and_net;
int Tu7552579054;
Ta7687779057[n77505].a = net79051;
int Ti7687879056;
Ti7687879056 = 1;
int Ti7687979055;
Ti7687979055 = n77505 + Ti7687879056;
result = read_and_network77504_fun(Ti7687979055, NULL);
}
return result;
}

int read_parameter77506_fun(int Tu7552677507, Value *env){
int result;
int Tu7686579050;
Tu7686579050 = 1;
int Tu7552979041;
Tu7552979041 = read_environ77492_fun(Tu7686579050, NULL);
int Tu7686679049;
Tu7686679049 = 1;
int Tu7552879042;
Tu7552879042 = read_all_object77498_fun(Tu7686679049, NULL);
int Ti7686779048;
Ti7686779048 = 0;
int Tu7552779043;
Tu7552779043 = read_and_network77504_fun(Ti7686779048, NULL);
Value* Ta7686879044;
Ta7686879044 = or_net;
int Ti7686979045;
Ti7686979045 = 0;
int Ti7687079047;
Ti7687079047 = 0;
Value* Ta7687179046;
Ta7687179046 = read_or_network77502_fun(Ti7687079047, NULL);
Ta7686879044[Ti7686979045].a = Ta7687179046;
return result;
}

int solver_rect77508_fun(int* m77509, Value* l77510, Value *env){
int result;
double Td7675179001;
Td7675179001 = 0.000000;
int Ti7675279040;
Ti7675279040 = 0;
double Td7675379002;
Td7675379002 = l77510[Ti7675279040].d;
bool answera78915;
if(Td7675179001 == Td7675379002){
answera78915 = 0;
}
else{
bool Tb7675479035;
Tb7675479035 = o_isinvert77453_fun(m77509, NULL);
double Td7675579037;
Td7675579037 = 0.000000;
int Ti7675679039;
Ti7675679039 = 0;
double Td7675779038;
Td7675779038 = l77510[Ti7675679039].d;
int Ti7675879036;
if(Td7675579037 <= Td7675779038){
Ti7675879036 = 0;
}
else{
Ti7675879036 = 1;
}
bool Tb7675979032;
Tb7675979032 = xor77440_fun(Tb7675479035, Ti7675879036, NULL);
int Ti7676079033;
Ti7676079033 = 0;
double d79003;
if(Tb7675979032 == Ti7676079033){
double Td7676179034;
Td7676179034 = o_param_a77457_fun(m77509, NULL);
d79003 = -Td7676179034;
}
else{
d79003 = o_param_a77457_fun(m77509, NULL);
}
Value* Ta7676279030;
Ta7676279030 = solver_w_vec;
int Ti7676379031;
Ti7676379031 = 0;
double Td7676479029;
Td7676479029 = Ta7676279030[Ti7676379031].d;
double Td7676579026;
Td7676579026 = d79003 - Td7676479029;
int Ti7676679028;
Ti7676679028 = 0;
double Td7676779027;
Td7676779027 = l77510[Ti7676679028].d;
double d279004;
d279004 = Td7676579026 / Td7676779027;
double Td7676879005;
Td7676879005 = o_param_b77459_fun(m77509, NULL);
int Ti7676979025;
Ti7676979025 = 1;
double Td7677079024;
Td7677079024 = l77510[Ti7676979025].d;
double Td7677179020;
Td7677179020 =  d279004 * Td7677079024;
Value* Ta7677279022;
Ta7677279022 = solver_w_vec;
int Ti7677379023;
Ti7677379023 = 1;
double Td7677479021;
Td7677479021 = Ta7677279022[Ti7677379023].d;
double Td7677579019;
Td7677579019 = Td7677179020 + Td7677479021;
double Td7677679006;
Td7677679006 = fabs(Td7677579019);
if(Td7676879005 <= Td7677679006){
answera78915 = 0;
}
else{
double Td7677779007;
Td7677779007 = o_param_c77461_fun(m77509, NULL);
int Ti7677879018;
Ti7677879018 = 2;
double Td7677979017;
Td7677979017 = l77510[Ti7677879018].d;
double Td7678079013;
Td7678079013 =  d279004 * Td7677979017;
Value* Ta7678179015;
Ta7678179015 = solver_w_vec;
int Ti7678279016;
Ti7678279016 = 2;
double Td7678379014;
Td7678379014 = Ta7678179015[Ti7678279016].d;
double Td7678479012;
Td7678479012 = Td7678079013 + Td7678379014;
double Td7678579008;
Td7678579008 = fabs(Td7678479012);
if(Td7677779007 <= Td7678579008){
answera78915 = 0;
}
else{
Value* Ta7678679010;
Ta7678679010 = solver_dist;
int Ti7678779011;
Ti7678779011 = 0;
int Tu7553079009;
Ta7678679010[Ti7678779011].d = d279004;
answera78915 = 1;
}
}
}
int Ti7678878916;
Ti7678878916 = 0;
if(answera78915 == Ti7678878916){
double Td7678978961;
Td7678978961 = 0.000000;
int Ti7679079000;
Ti7679079000 = 1;
double Td7679178962;
Td7679178962 = l77510[Ti7679079000].d;
bool answerb78917;
if(Td7678978961 == Td7679178962){
answerb78917 = 0;
}
else{
bool Tb7679278995;
Tb7679278995 = o_isinvert77453_fun(m77509, NULL);
double Td7679378997;
Td7679378997 = 0.000000;
int Ti7679478999;
Ti7679478999 = 1;
double Td7679578998;
Td7679578998 = l77510[Ti7679478999].d;
int Ti7679678996;
if(Td7679378997 <= Td7679578998){
Ti7679678996 = 0;
}
else{
Ti7679678996 = 1;
}
bool Tb7679778992;
Tb7679778992 = xor77440_fun(Tb7679278995, Ti7679678996, NULL);
int Ti7679878993;
Ti7679878993 = 0;
double d78963;
if(Tb7679778992 == Ti7679878993){
double Td7679978994;
Td7679978994 = o_param_b77459_fun(m77509, NULL);
d78963 = -Td7679978994;
}
else{
d78963 = o_param_b77459_fun(m77509, NULL);
}
Value* Ta7680078990;
Ta7680078990 = solver_w_vec;
int Ti7680178991;
Ti7680178991 = 1;
double Td7680278989;
Td7680278989 = Ta7680078990[Ti7680178991].d;
double Td7680378986;
Td7680378986 = d78963 - Td7680278989;
int Ti7680478988;
Ti7680478988 = 1;
double Td7680578987;
Td7680578987 = l77510[Ti7680478988].d;
double d278964;
d278964 = Td7680378986 / Td7680578987;
double Td7680678965;
Td7680678965 = o_param_c77461_fun(m77509, NULL);
int Ti7680778985;
Ti7680778985 = 2;
double Td7680878984;
Td7680878984 = l77510[Ti7680778985].d;
double Td7680978980;
Td7680978980 =  d278964 * Td7680878984;
Value* Ta7681078982;
Ta7681078982 = solver_w_vec;
int Ti7681178983;
Ti7681178983 = 2;
double Td7681278981;
Td7681278981 = Ta7681078982[Ti7681178983].d;
double Td7681378979;
Td7681378979 = Td7680978980 + Td7681278981;
double Td7681478966;
Td7681478966 = fabs(Td7681378979);
if(Td7680678965 <= Td7681478966){
answerb78917 = 0;
}
else{
double Td7681578967;
Td7681578967 = o_param_a77457_fun(m77509, NULL);
int Ti7681678978;
Ti7681678978 = 0;
double Td7681778977;
Td7681778977 = l77510[Ti7681678978].d;
double Td7681878973;
Td7681878973 =  d278964 * Td7681778977;
Value* Ta7681978975;
Ta7681978975 = solver_w_vec;
int Ti7682078976;
Ti7682078976 = 0;
double Td7682178974;
Td7682178974 = Ta7681978975[Ti7682078976].d;
double Td7682278972;
Td7682278972 = Td7681878973 + Td7682178974;
double Td7682378968;
Td7682378968 = fabs(Td7682278972);
if(Td7681578967 <= Td7682378968){
answerb78917 = 0;
}
else{
Value* Ta7682478970;
Ta7682478970 = solver_dist;
int Ti7682578971;
Ti7682578971 = 0;
int Tu7553178969;
Ta7682478970[Ti7682578971].d = d278964;
answerb78917 = 1;
}
}
}
int Ti7682678918;
Ti7682678918 = 0;
if(answerb78917 == Ti7682678918){
double Td7682778921;
Td7682778921 = 0.000000;
int Ti7682878960;
Ti7682878960 = 2;
double Td7682978922;
Td7682978922 = l77510[Ti7682878960].d;
bool answerc78919;
if(Td7682778921 == Td7682978922){
answerc78919 = 0;
}
else{
bool Tb7683078955;
Tb7683078955 = o_isinvert77453_fun(m77509, NULL);
double Td7683178957;
Td7683178957 = 0.000000;
int Ti7683278959;
Ti7683278959 = 2;
double Td7683378958;
Td7683378958 = l77510[Ti7683278959].d;
int Ti7683478956;
if(Td7683178957 <= Td7683378958){
Ti7683478956 = 0;
}
else{
Ti7683478956 = 1;
}
bool Tb7683578952;
Tb7683578952 = xor77440_fun(Tb7683078955, Ti7683478956, NULL);
int Ti7683678953;
Ti7683678953 = 0;
double d78923;
if(Tb7683578952 == Ti7683678953){
double Td7683778954;
Td7683778954 = o_param_c77461_fun(m77509, NULL);
d78923 = -Td7683778954;
}
else{
d78923 = o_param_c77461_fun(m77509, NULL);
}
Value* Ta7683878950;
Ta7683878950 = solver_w_vec;
int Ti7683978951;
Ti7683978951 = 2;
double Td7684078949;
Td7684078949 = Ta7683878950[Ti7683978951].d;
double Td7684178946;
Td7684178946 = d78923 - Td7684078949;
int Ti7684278948;
Ti7684278948 = 2;
double Td7684378947;
Td7684378947 = l77510[Ti7684278948].d;
double d278924;
d278924 = Td7684178946 / Td7684378947;
double Td7684478925;
Td7684478925 = o_param_a77457_fun(m77509, NULL);
int Ti7684578945;
Ti7684578945 = 0;
double Td7684678944;
Td7684678944 = l77510[Ti7684578945].d;
double Td7684778940;
Td7684778940 =  d278924 * Td7684678944;
Value* Ta7684878942;
Ta7684878942 = solver_w_vec;
int Ti7684978943;
Ti7684978943 = 0;
double Td7685078941;
Td7685078941 = Ta7684878942[Ti7684978943].d;
double Td7685178939;
Td7685178939 = Td7684778940 + Td7685078941;
double Td7685278926;
Td7685278926 = fabs(Td7685178939);
if(Td7684478925 <= Td7685278926){
answerc78919 = 0;
}
else{
double Td7685378927;
Td7685378927 = o_param_b77459_fun(m77509, NULL);
int Ti7685478938;
Ti7685478938 = 1;
double Td7685578937;
Td7685578937 = l77510[Ti7685478938].d;
double Td7685678933;
Td7685678933 =  d278924 * Td7685578937;
Value* Ta7685778935;
Ta7685778935 = solver_w_vec;
int Ti7685878936;
Ti7685878936 = 1;
double Td7685978934;
Td7685978934 = Ta7685778935[Ti7685878936].d;
double Td7686078932;
Td7686078932 = Td7685678933 + Td7685978934;
double Td7686178928;
Td7686178928 = fabs(Td7686078932);
if(Td7685378927 <= Td7686178928){
answerc78919 = 0;
}
else{
Value* Ta7686278930;
Ta7686278930 = solver_dist;
int Ti7686378931;
Ti7686378931 = 0;
int Tu7553278929;
Ta7686278930[Ti7686378931].d = d278924;
answerc78919 = 1;
}
}
}
int Ti7686478920;
Ti7686478920 = 0;
if(answerc78919 == Ti7686478920){
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

int solver_surface77511_fun(int* m77512, Value* l77513, Value *env){
int result;
int Ti7671778914;
Ti7671778914 = 0;
double Td7671878912;
Td7671878912 = l77513[Ti7671778914].d;
double Td7671978913;
Td7671978913 = o_param_a77457_fun(m77512, NULL);
double Td7672078907;
Td7672078907 =  Td7671878912 * Td7671978913;
int Ti7672178911;
Ti7672178911 = 1;
double Td7672278909;
Td7672278909 = l77513[Ti7672178911].d;
double Td7672378910;
Td7672378910 = o_param_b77459_fun(m77512, NULL);
double Td7672478908;
Td7672478908 =  Td7672278909 * Td7672378910;
double Td7672578902;
Td7672578902 = Td7672078907 + Td7672478908;
int Ti7672678906;
Ti7672678906 = 2;
double Td7672778904;
Td7672778904 = l77513[Ti7672678906].d;
double Td7672878905;
Td7672878905 = o_param_c77461_fun(m77512, NULL);
double Td7672978903;
Td7672978903 =  Td7672778904 * Td7672878905;
double q78878;
q78878 = Td7672578902 + Td7672978903;
double Td7673078879;
Td7673078879 = 0.000000;
if(q78878 <= Td7673078879){
result = 0;
}
else{
Value* Ta7673178900;
Ta7673178900 = solver_w_vec;
int Ti7673278901;
Ti7673278901 = 0;
double Td7673378898;
Td7673378898 = Ta7673178900[Ti7673278901].d;
double Td7673478899;
Td7673478899 = o_param_a77457_fun(m77512, NULL);
double Td7673578892;
Td7673578892 =  Td7673378898 * Td7673478899;
Value* Ta7673678896;
Ta7673678896 = solver_w_vec;
int Ti7673778897;
Ti7673778897 = 1;
double Td7673878894;
Td7673878894 = Ta7673678896[Ti7673778897].d;
double Td7673978895;
Td7673978895 = o_param_b77459_fun(m77512, NULL);
double Td7674078893;
Td7674078893 =  Td7673878894 * Td7673978895;
double Td7674178886;
Td7674178886 = Td7673578892 + Td7674078893;
Value* Ta7674278890;
Ta7674278890 = solver_w_vec;
int Ti7674378891;
Ti7674378891 = 2;
double Td7674478888;
Td7674478888 = Ta7674278890[Ti7674378891].d;
double Td7674578889;
Td7674578889 = o_param_c77461_fun(m77512, NULL);
double Td7674678887;
Td7674678887 =  Td7674478888 * Td7674578889;
double Td7674778885;
Td7674778885 = Td7674178886 + Td7674678887;
double t78880;
t78880 = Td7674778885 / q78878;
Value* Ta7674878882;
Ta7674878882 = solver_dist;
int Ti7674978883;
Ti7674978883 = 0;
double Td7675078884;
Td7675078884 = -t78880;
int Tu7553378881;
Ta7674878882[Ti7674978883].d = Td7675078884;
result = 1;
}
return result;
}

double in_prod_sqr_obj77514_fun(int* m77515, Value* v77516, Value *env){
double result;
int Ti7670178877;
Ti7670178877 = 0;
double Td7670278876;
Td7670278876 = v77516[Ti7670178877].d;
double Td7670378874;
Td7670378874 = fsqr77443_fun(Td7670278876, NULL);
double Td7670478875;
Td7670478875 = o_param_a77457_fun(m77515, NULL);
double Td7670578868;
Td7670578868 =  Td7670378874 * Td7670478875;
int Ti7670678873;
Ti7670678873 = 1;
double Td7670778872;
Td7670778872 = v77516[Ti7670678873].d;
double Td7670878870;
Td7670878870 = fsqr77443_fun(Td7670778872, NULL);
double Td7670978871;
Td7670978871 = o_param_b77459_fun(m77515, NULL);
double Td7671078869;
Td7671078869 =  Td7670878870 * Td7670978871;
double Td7671178862;
Td7671178862 = Td7670578868 + Td7671078869;
int Ti7671278867;
Ti7671278867 = 2;
double Td7671378866;
Td7671378866 = v77516[Ti7671278867].d;
double Td7671478864;
Td7671478864 = fsqr77443_fun(Td7671378866, NULL);
double Td7671578865;
Td7671578865 = o_param_c77461_fun(m77515, NULL);
double Td7671678863;
Td7671678863 =  Td7671478864 * Td7671578865;
result = Td7671178862 + Td7671678863;
return result;
}

double in_prod_co_objrot77517_fun(int* m77518, Value* v77519, Value *env){
double result;
int Ti7667978861;
Ti7667978861 = 1;
double Td7668078858;
Td7668078858 = v77519[Ti7667978861].d;
int Ti7668178860;
Ti7668178860 = 2;
double Td7668278859;
Td7668278859 = v77519[Ti7668178860].d;
double Td7668378856;
Td7668378856 =  Td7668078858 * Td7668278859;
double Td7668478857;
Td7668478857 = o_param_r177479_fun(m77518, NULL);
double Td7668578848;
Td7668578848 =  Td7668378856 * Td7668478857;
int Ti7668678855;
Ti7668678855 = 0;
double Td7668778852;
Td7668778852 = v77519[Ti7668678855].d;
int Ti7668878854;
Ti7668878854 = 2;
double Td7668978853;
Td7668978853 = v77519[Ti7668878854].d;
double Td7669078850;
Td7669078850 =  Td7668778852 * Td7668978853;
double Td7669178851;
Td7669178851 = o_param_r277481_fun(m77518, NULL);
double Td7669278849;
Td7669278849 =  Td7669078850 * Td7669178851;
double Td7669378840;
Td7669378840 = Td7668578848 + Td7669278849;
int Ti7669478847;
Ti7669478847 = 0;
double Td7669578844;
Td7669578844 = v77519[Ti7669478847].d;
int Ti7669678846;
Ti7669678846 = 1;
double Td7669778845;
Td7669778845 = v77519[Ti7669678846].d;
double Td7669878842;
Td7669878842 =  Td7669578844 * Td7669778845;
double Td7669978843;
Td7669978843 = o_param_r377483_fun(m77518, NULL);
double Td7670078841;
Td7670078841 =  Td7669878842 * Td7669978843;
result = Td7669378840 + Td7670078841;
return result;
}

double solver2nd_mul_b77520_fun(int* m77521, Value* l77522, Value *env){
double result;
Value* Ta7665478838;
Ta7665478838 = solver_w_vec;
int Ti7665578839;
Ti7665578839 = 0;
double Td7665678835;
Td7665678835 = Ta7665478838[Ti7665578839].d;
int Ti7665778837;
Ti7665778837 = 0;
double Td7665878836;
Td7665878836 = l77522[Ti7665778837].d;
double Td7665978833;
Td7665978833 =  Td7665678835 * Td7665878836;
double Td7666078834;
Td7666078834 = o_param_a77457_fun(m77521, NULL);
double Td7666178824;
Td7666178824 =  Td7665978833 * Td7666078834;
Value* Ta7666278831;
Ta7666278831 = solver_w_vec;
int Ti7666378832;
Ti7666378832 = 1;
double Td7666478828;
Td7666478828 = Ta7666278831[Ti7666378832].d;
int Ti7666578830;
Ti7666578830 = 1;
double Td7666678829;
Td7666678829 = l77522[Ti7666578830].d;
double Td7666778826;
Td7666778826 =  Td7666478828 * Td7666678829;
double Td7666878827;
Td7666878827 = o_param_b77459_fun(m77521, NULL);
double Td7666978825;
Td7666978825 =  Td7666778826 * Td7666878827;
double Td7667078815;
Td7667078815 = Td7666178824 + Td7666978825;
Value* Ta7667178822;
Ta7667178822 = solver_w_vec;
int Ti7667278823;
Ti7667278823 = 2;
double Td7667378819;
Td7667378819 = Ta7667178822[Ti7667278823].d;
int Ti7667478821;
Ti7667478821 = 2;
double Td7667578820;
Td7667578820 = l77522[Ti7667478821].d;
double Td7667678817;
Td7667678817 =  Td7667378819 * Td7667578820;
double Td7667778818;
Td7667778818 = o_param_c77461_fun(m77521, NULL);
double Td7667878816;
Td7667878816 =  Td7667678817 * Td7667778818;
result = Td7667078815 + Td7667878816;
return result;
}

double solver2nd_rot_b77523_fun(int* m77524, Value* l77525, Value *env){
double result;
Value* Ta7660878813;
Ta7660878813 = solver_w_vec;
int Ti7660978814;
Ti7660978814 = 2;
double Td7661078810;
Td7661078810 = Ta7660878813[Ti7660978814].d;
int Ti7661178812;
Ti7661178812 = 1;
double Td7661278811;
Td7661278811 = l77525[Ti7661178812].d;
double Td7661378803;
Td7661378803 =  Td7661078810 * Td7661278811;
Value* Ta7661478808;
Ta7661478808 = solver_w_vec;
int Ti7661578809;
Ti7661578809 = 1;
double Td7661678805;
Td7661678805 = Ta7661478808[Ti7661578809].d;
int Ti7661778807;
Ti7661778807 = 2;
double Td7661878806;
Td7661878806 = l77525[Ti7661778807].d;
double Td7661978804;
Td7661978804 =  Td7661678805 * Td7661878806;
double Td7662078801;
Td7662078801 = Td7661378803 + Td7661978804;
double Td7662178802;
Td7662178802 = o_param_r177479_fun(m77524, NULL);
double Td7662278785;
Td7662278785 =  Td7662078801 * Td7662178802;
Value* Ta7662378799;
Ta7662378799 = solver_w_vec;
int Ti7662478800;
Ti7662478800 = 0;
double Td7662578796;
Td7662578796 = Ta7662378799[Ti7662478800].d;
int Ti7662678798;
Ti7662678798 = 2;
double Td7662778797;
Td7662778797 = l77525[Ti7662678798].d;
double Td7662878789;
Td7662878789 =  Td7662578796 * Td7662778797;
Value* Ta7662978794;
Ta7662978794 = solver_w_vec;
int Ti7663078795;
Ti7663078795 = 2;
double Td7663178791;
Td7663178791 = Ta7662978794[Ti7663078795].d;
int Ti7663278793;
Ti7663278793 = 0;
double Td7663378792;
Td7663378792 = l77525[Ti7663278793].d;
double Td7663478790;
Td7663478790 =  Td7663178791 * Td7663378792;
double Td7663578787;
Td7663578787 = Td7662878789 + Td7663478790;
double Td7663678788;
Td7663678788 = o_param_r277481_fun(m77524, NULL);
double Td7663778786;
Td7663778786 =  Td7663578787 * Td7663678788;
double Td7663878769;
Td7663878769 = Td7662278785 + Td7663778786;
Value* Ta7663978783;
Ta7663978783 = solver_w_vec;
int Ti7664078784;
Ti7664078784 = 0;
double Td7664178780;
Td7664178780 = Ta7663978783[Ti7664078784].d;
int Ti7664278782;
Ti7664278782 = 1;
double Td7664378781;
Td7664378781 = l77525[Ti7664278782].d;
double Td7664478773;
Td7664478773 =  Td7664178780 * Td7664378781;
Value* Ta7664578778;
Ta7664578778 = solver_w_vec;
int Ti7664678779;
Ti7664678779 = 1;
double Td7664778775;
Td7664778775 = Ta7664578778[Ti7664678779].d;
int Ti7664878777;
Ti7664878777 = 0;
double Td7664978776;
Td7664978776 = l77525[Ti7664878777].d;
double Td7665078774;
Td7665078774 =  Td7664778775 * Td7664978776;
double Td7665178771;
Td7665178771 = Td7664478773 + Td7665078774;
double Td7665278772;
Td7665278772 = o_param_r377483_fun(m77524, NULL);
double Td7665378770;
Td7665378770 =  Td7665178771 * Td7665278772;
result = Td7663878769 + Td7665378770;
return result;
}

int solver_second77526_fun(int* m77527, Value* l77528, Value *env){
int result;
double aa078728;
aa078728 = in_prod_sqr_obj77514_fun(m77527, l77528, NULL);
int Ti7657978766;
Ti7657978766 = o_isrot77455_fun(m77527, NULL);
int Ti7658078767;
Ti7658078767 = 0;
double aa78729;
if(Ti7657978766 == Ti7658078767){
aa78729 = aa078728;
}
else{
double Td7658178768;
Td7658178768 = in_prod_co_objrot77517_fun(m77527, l77528, NULL);
aa78729 = aa078728 + Td7658178768;
}
double Td7658278730;
Td7658278730 = 0.000000;
if(Td7658278730 == aa78729){
result = 0;
}
else{
double Td7658378764;
Td7658378764 = 2.000000;
double Td7658478765;
Td7658478765 = solver2nd_mul_b77520_fun(m77527, l77528, NULL);
double bb078731;
bb078731 =  Td7658378764 * Td7658478765;
int Ti7658578761;
Ti7658578761 = o_isrot77455_fun(m77527, NULL);
int Ti7658678762;
Ti7658678762 = 0;
double bb78732;
if(Ti7658578761 == Ti7658678762){
bb78732 = bb078731;
}
else{
double Td7658778763;
Td7658778763 = solver2nd_rot_b77523_fun(m77527, l77528, NULL);
bb78732 = bb078731 + Td7658778763;
}
Value* Ta7658878760;
Ta7658878760 = solver_w_vec;
double cc078733;
cc078733 = in_prod_sqr_obj77514_fun(m77527, Ta7658878760, NULL);
int Ti7658978756;
Ti7658978756 = o_isrot77455_fun(m77527, NULL);
int Ti7659078757;
Ti7659078757 = 0;
double cc178734;
if(Ti7658978756 == Ti7659078757){
cc178734 = cc078733;
}
else{
Value* Ta7659178759;
Ta7659178759 = solver_w_vec;
double Td7659278758;
Td7659278758 = in_prod_co_objrot77517_fun(m77527, Ta7659178759, NULL);
cc178734 = cc078733 + Td7659278758;
}
int Ti7659378753;
Ti7659378753 = o_form77449_fun(m77527, NULL);
int Ti7659478754;
Ti7659478754 = 3;
double cc78735;
if(Ti7659378753 == Ti7659478754){
double Td7659578755;
Td7659578755 = 1.000000;
cc78735 = cc178734 - Td7659578755;
}
else{
cc78735 = cc178734;
}
double Td7659678752;
Td7659678752 = 4.000000;
double Td7659778751;
Td7659778751 =  Td7659678752 * aa78729;
double d278749;
d278749 =  Td7659778751 * cc78735;
double Td7659878750;
Td7659878750 = fsqr77443_fun(bb78732, NULL);
double d78736;
d78736 = Td7659878750 - d278749;
double Td7659978737;
Td7659978737 = 0.000000;
if(d78736 <= Td7659978737){
result = 0;
}
else{
double sd78738;
sd78738 = sqrt(d78736);
bool Tb7660078747;
Tb7660078747 = o_isinvert77453_fun(m77527, NULL);
int Ti7660178748;
Ti7660178748 = 0;
double t178739;
if(Tb7660078747 == Ti7660178748){
t178739 = -sd78738;
}
else{
t178739 = sd78738;
}
Value* Ta7660278741;
Ta7660278741 = solver_dist;
int Ti7660378742;
Ti7660378742 = 0;
double Td7660478745;
Td7660478745 = t178739 - bb78732;
double Td7660578746;
Td7660578746 = 2.000000;
double Td7660678744;
Td7660678744 = Td7660478745 / Td7660578746;
double Td7660778743;
Td7660778743 = Td7660678744 / aa78729;
int Tu7553478740;
Ta7660278741[Ti7660378742].d = Td7660778743;
result = 1;
}
}
return result;
}

int solver77529_fun(int index77530, Value* l77531, Value* p77532, Value *env){
int result;
Value* Ta7655878727;
Ta7655878727 = objects;
int* m78702;
m78702 = Ta7655878727[index77530].a;
Value* Ta7655978721;
Ta7655978721 = solver_w_vec;
int Ti7656078722;
Ti7656078722 = 0;
int Ti7656178726;
Ti7656178726 = 0;
double Td7656278724;
Td7656278724 = p77532[Ti7656178726].d;
double Td7656378725;
Td7656378725 = o_param_x77463_fun(m78702, NULL);
double Td7656478723;
Td7656478723 = Td7656278724 - Td7656378725;
int Tu7553778703;
Ta7655978721[Ti7656078722].d = Td7656478723;
Value* Ta7656578715;
Ta7656578715 = solver_w_vec;
int Ti7656678716;
Ti7656678716 = 1;
int Ti7656778720;
Ti7656778720 = 1;
double Td7656878718;
Td7656878718 = p77532[Ti7656778720].d;
double Td7656978719;
Td7656978719 = o_param_y77465_fun(m78702, NULL);
double Td7657078717;
Td7657078717 = Td7656878718 - Td7656978719;
int Tu7553678704;
Ta7656578715[Ti7656678716].d = Td7657078717;
Value* Ta7657178709;
Ta7657178709 = solver_w_vec;
int Ti7657278710;
Ti7657278710 = 2;
int Ti7657378714;
Ti7657378714 = 2;
double Td7657478712;
Td7657478712 = p77532[Ti7657378714].d;
double Td7657578713;
Td7657578713 = o_param_z77467_fun(m78702, NULL);
double Td7657678711;
Td7657678711 = Td7657478712 - Td7657578713;
int Tu7553578705;
Ta7657178709[Ti7657278710].d = Td7657678711;
int m_shape78706;
m_shape78706 = o_form77449_fun(m78702, NULL);
int Ti7657778707;
Ti7657778707 = 1;
if(m_shape78706 == Ti7657778707){
result = solver_rect77508_fun(m78702, l77531, NULL);
}
else{
int Ti7657878708;
Ti7657878708 = 2;
if(m_shape78706 == Ti7657878708){
result = solver_surface77511_fun(m78702, l77531, NULL);
}
else{
result = solver_second77526_fun(m78702, l77531, NULL);
}
}
return result;
}

bool is_rect_outside77533_fun(int* m77534, Value *env){
bool result;
double Td7653978687;
Td7653978687 = o_param_a77457_fun(m77534, NULL);
Value* Ta7654078700;
Ta7654078700 = isoutside_q;
int Ti7654178701;
Ti7654178701 = 0;
double Td7654278699;
Td7654278699 = Ta7654078700[Ti7654178701].d;
double Td7654378688;
Td7654378688 = fabs(Td7654278699);
int Ti7655478683;
if(Td7653978687 <= Td7654378688){
Ti7655478683 = 0;
}
else{
double Td7654478689;
Td7654478689 = o_param_b77459_fun(m77534, NULL);
Value* Ta7654578697;
Ta7654578697 = isoutside_q;
int Ti7654678698;
Ti7654678698 = 1;
double Td7654778696;
Td7654778696 = Ta7654578697[Ti7654678698].d;
double Td7654878690;
Td7654878690 = fabs(Td7654778696);
if(Td7654478689 <= Td7654878690){
Ti7655478683 = 0;
}
else{
double Td7654978691;
Td7654978691 = o_param_c77461_fun(m77534, NULL);
Value* Ta7655078694;
Ta7655078694 = isoutside_q;
int Ti7655178695;
Ti7655178695 = 2;
double Td7655278693;
Td7655278693 = Ta7655078694[Ti7655178695].d;
double Td7655378692;
Td7655378692 = fabs(Td7655278693);
if(Td7654978691 <= Td7655378692){
Ti7655478683 = 0;
}
else{
Ti7655478683 = 1;
}
}
}
int Ti7655578684;
Ti7655578684 = 0;
if(Ti7655478683 == Ti7655578684){
bool Tb7655678685;
Tb7655678685 = o_isinvert77453_fun(m77534, NULL);
int Ti7655778686;
Ti7655778686 = 0;
if(Tb7655678685 == Ti7655778686){
result = 1;
}
else{
result = 0;
}
}
else{
result = o_isinvert77453_fun(m77534, NULL);
}
return result;
}

bool is_plane_outside77535_fun(int* m77536, Value *env){
bool result;
double Td7651978679;
Td7651978679 = o_param_a77457_fun(m77536, NULL);
Value* Ta7652078681;
Ta7652078681 = isoutside_q;
int Ti7652178682;
Ti7652178682 = 0;
double Td7652278680;
Td7652278680 = Ta7652078681[Ti7652178682].d;
double Td7652378673;
Td7652378673 =  Td7651978679 * Td7652278680;
double Td7652478675;
Td7652478675 = o_param_b77459_fun(m77536, NULL);
Value* Ta7652578677;
Ta7652578677 = isoutside_q;
int Ti7652678678;
Ti7652678678 = 1;
double Td7652778676;
Td7652778676 = Ta7652578677[Ti7652678678].d;
double Td7652878674;
Td7652878674 =  Td7652478675 * Td7652778676;
double Td7652978667;
Td7652978667 = Td7652378673 + Td7652878674;
double Td7653078669;
Td7653078669 = o_param_c77461_fun(m77536, NULL);
Value* Ta7653178671;
Ta7653178671 = isoutside_q;
int Ti7653278672;
Ti7653278672 = 2;
double Td7653378670;
Td7653378670 = Ta7653178671[Ti7653278672].d;
double Td7653478668;
Td7653478668 =  Td7653078669 * Td7653378670;
double w78661;
w78661 = Td7652978667 + Td7653478668;
double Td7653578666;
Td7653578666 = 0.000000;
bool s78662;
if(Td7653578666 <= w78661){
s78662 = 0;
}
else{
s78662 = 1;
}
bool Tb7653678665;
Tb7653678665 = o_isinvert77453_fun(m77536, NULL);
bool Tb7653778663;
Tb7653778663 = xor77440_fun(Tb7653678665, s78662, NULL);
int Ti7653878664;
Ti7653878664 = 0;
if(Tb7653778663 == Ti7653878664){
result = 1;
}
else{
result = 0;
}
return result;
}

bool is_second_outside77537_fun(int* m77538, Value *env){
bool result;
Value* Ta7650778660;
Ta7650778660 = isoutside_q;
double w78645;
w78645 = in_prod_sqr_obj77514_fun(m77538, Ta7650778660, NULL);
int Ti7650878657;
Ti7650878657 = o_form77449_fun(m77538, NULL);
int Ti7650978658;
Ti7650978658 = 3;
double w278646;
if(Ti7650878657 == Ti7650978658){
double Td7651078659;
Td7651078659 = 1.000000;
w278646 = w78645 - Td7651078659;
}
else{
w278646 = w78645;
}
int Ti7651178653;
Ti7651178653 = o_isrot77455_fun(m77538, NULL);
int Ti7651278654;
Ti7651278654 = 0;
double w378647;
if(Ti7651178653 == Ti7651278654){
w378647 = w278646;
}
else{
Value* Ta7651378656;
Ta7651378656 = isoutside_q;
double Td7651478655;
Td7651478655 = in_prod_co_objrot77517_fun(m77538, Ta7651378656, NULL);
w378647 = w278646 + Td7651478655;
}
double Td7651578652;
Td7651578652 = 0.000000;
bool s78648;
if(Td7651578652 <= w378647){
s78648 = 0;
}
else{
s78648 = 1;
}
bool Tb7651678651;
Tb7651678651 = o_isinvert77453_fun(m77538, NULL);
bool Tb7651778649;
Tb7651778649 = xor77440_fun(Tb7651678651, s78648, NULL);
int Ti7651878650;
Ti7651878650 = 0;
if(Tb7651778649 == Ti7651878650){
result = 1;
}
else{
result = 0;
}
return result;
}

bool is_outside77539_fun(int* m77540, Value *env){
bool result;
Value* Ta7648478638;
Ta7648478638 = isoutside_q;
int Ti7648578639;
Ti7648578639 = 0;
Value* Ta7648678643;
Ta7648678643 = chkinside_p;
int Ti7648778644;
Ti7648778644 = 0;
double Td7648878641;
Td7648878641 = Ta7648678643[Ti7648778644].d;
double Td7648978642;
Td7648978642 = o_param_x77463_fun(m77540, NULL);
double Td7649078640;
Td7649078640 = Td7648878641 - Td7648978642;
int Tu7554078618;
Ta7648478638[Ti7648578639].d = Td7649078640;
Value* Ta7649178631;
Ta7649178631 = isoutside_q;
int Ti7649278632;
Ti7649278632 = 1;
Value* Ta7649378636;
Ta7649378636 = chkinside_p;
int Ti7649478637;
Ti7649478637 = 1;
double Td7649578634;
Td7649578634 = Ta7649378636[Ti7649478637].d;
double Td7649678635;
Td7649678635 = o_param_y77465_fun(m77540, NULL);
double Td7649778633;
Td7649778633 = Td7649578634 - Td7649678635;
int Tu7553978619;
Ta7649178631[Ti7649278632].d = Td7649778633;
Value* Ta7649878624;
Ta7649878624 = isoutside_q;
int Ti7649978625;
Ti7649978625 = 2;
Value* Ta7650078629;
Ta7650078629 = chkinside_p;
int Ti7650178630;
Ti7650178630 = 2;
double Td7650278627;
Td7650278627 = Ta7650078629[Ti7650178630].d;
double Td7650378628;
Td7650378628 = o_param_z77467_fun(m77540, NULL);
double Td7650478626;
Td7650478626 = Td7650278627 - Td7650378628;
int Tu7553878620;
Ta7649878624[Ti7649978625].d = Td7650478626;
int m_shape78621;
m_shape78621 = o_form77449_fun(m77540, NULL);
int Ti7650578622;
Ti7650578622 = 1;
if(m_shape78621 == Ti7650578622){
result = is_rect_outside77533_fun(m77540, NULL);
}
else{
int Ti7650678623;
Ti7650678623 = 2;
if(m_shape78621 == Ti7650678623){
result = is_plane_outside77535_fun(m77540, NULL);
}
else{
result = is_second_outside77537_fun(m77540, NULL);
}
}
return result;
}

bool check_all_inside77541_fun(int ofs77542, Value* iand77543, Value *env){
bool result;
int head78609;
head78609 = iand77543[ofs77542].i;
int Ti7647678617;
Ti7647678617 = 1;
int Ti7647778610;
Ti7647778610 = -Ti7647678617;
if(head78609 == Ti7647778610){
result = 1;
}
else{
Value* Ta7647878616;
Ta7647878616 = objects;
int* Tt7647978615;
Tt7647978615 = Ta7647878616[head78609].a;
bool Tb7648078611;
Tb7648078611 = is_outside77539_fun(Tt7647978615, NULL);
int Ti7648178612;
Ti7648178612 = 0;
if(Tb7648078611 == Ti7648178612){
int Ti7648278614;
Ti7648278614 = 1;
int Ti7648378613;
Ti7648378613 = ofs77542 + Ti7648278614;
result = check_all_inside77541_fun(Ti7648378613, iand77543, NULL);
}
else{
result = 0;
}
}
return result;
}

bool shadow_check_and_group77544_fun(int iand_ofs77545, Value* and_group77546, Value* p77547, Value *env){
bool result;
int Ti7642778553;
Ti7642778553 = and_group77546[iand_ofs77545].i;
int Ti7642878608;
Ti7642878608 = 1;
int Ti7642978554;
Ti7642978554 = -Ti7642878608;
if(Ti7642778553 == Ti7642978554){
result = 0;
}
else{
int obj78555;
obj78555 = and_group77546[iand_ofs77545].i;
Value* Ta7643078607;
Ta7643078607 = light;
int t078556;
t078556 = solver77529_fun(obj78555, Ta7643078607, p77547, NULL);
Value* Ta7643178605;
Ta7643178605 = solver_dist;
int Ti7643278606;
Ti7643278606 = 0;
double t0p78557;
t0p78557 = Ta7643178605[Ti7643278606].d;
int Ti7643378603;
Ti7643378603 = 0;
int Ti7643578558;
if(t078556 == Ti7643378603){
Ti7643578558 = 0;
}
else{
double Td7643478604;
Td7643478604 = -0.200000;
if(Td7643478604 <= t0p78557){
Ti7643578558 = 0;
}
else{
Ti7643578558 = 1;
}
}
int Ti7643678559;
Ti7643678559 = 0;
if(Ti7643578558 == Ti7643678559){
Value* Ta7643778602;
Ta7643778602 = objects;
int* Tt7643878601;
Tt7643878601 = Ta7643778602[obj78555].a;
bool Tb7643978597;
Tb7643978597 = o_isinvert77453_fun(Tt7643878601, NULL);
int Ti7644078598;
Ti7644078598 = 0;
if(Tb7643978597 == Ti7644078598){
result = 0;
}
else{
int Ti7644178600;
Ti7644178600 = 1;
int Ti7644278599;
Ti7644278599 = iand_ofs77545 + Ti7644178600;
result = shadow_check_and_group77544_fun(Ti7644278599, and_group77546, p77547, NULL);
}
}
else{
double Td7644378596;
Td7644378596 = 0.010000;
double t78560;
t78560 = t0p78557 + Td7644378596;
Value* Ta7644478587;
Ta7644478587 = chkinside_p;
int Ti7644578588;
Ti7644578588 = 0;
Value* Ta7644678594;
Ta7644678594 = light;
int Ti7644778595;
Ti7644778595 = 0;
double Td7644878593;
Td7644878593 = Ta7644678594[Ti7644778595].d;
double Td7644978590;
Td7644978590 =  Td7644878593 * t78560;
int Ti7645078592;
Ti7645078592 = 0;
double Td7645178591;
Td7645178591 = p77547[Ti7645078592].d;
double Td7645278589;
Td7645278589 = Td7644978590 + Td7645178591;
int Tu7554378561;
Ta7644478587[Ti7644578588].d = Td7645278589;
Value* Ta7645378578;
Ta7645378578 = chkinside_p;
int Ti7645478579;
Ti7645478579 = 1;
Value* Ta7645578585;
Ta7645578585 = light;
int Ti7645678586;
Ti7645678586 = 1;
double Td7645778584;
Td7645778584 = Ta7645578585[Ti7645678586].d;
double Td7645878581;
Td7645878581 =  Td7645778584 * t78560;
int Ti7645978583;
Ti7645978583 = 1;
double Td7646078582;
Td7646078582 = p77547[Ti7645978583].d;
double Td7646178580;
Td7646178580 = Td7645878581 + Td7646078582;
int Tu7554278562;
Ta7645378578[Ti7645478579].d = Td7646178580;
Value* Ta7646278569;
Ta7646278569 = chkinside_p;
int Ti7646378570;
Ti7646378570 = 2;
Value* Ta7646478576;
Ta7646478576 = light;
int Ti7646578577;
Ti7646578577 = 2;
double Td7646678575;
Td7646678575 = Ta7646478576[Ti7646578577].d;
double Td7646778572;
Td7646778572 =  Td7646678575 * t78560;
int Ti7646878574;
Ti7646878574 = 2;
double Td7646978573;
Td7646978573 = p77547[Ti7646878574].d;
double Td7647078571;
Td7647078571 = Td7646778572 + Td7646978573;
int Tu7554178563;
Ta7646278569[Ti7646378570].d = Td7647078571;
int Ti7647178568;
Ti7647178568 = 0;
bool Tb7647278564;
Tb7647278564 = check_all_inside77541_fun(Ti7647178568, and_group77546, NULL);
int Ti7647378565;
Ti7647378565 = 0;
if(Tb7647278564 == Ti7647378565){
int Ti7647478567;
Ti7647478567 = 1;
int Ti7647578566;
Ti7647578566 = iand_ofs77545 + Ti7647478567;
result = shadow_check_and_group77544_fun(Ti7647578566, and_group77546, p77547, NULL);
}
else{
result = 1;
}
}
}
return result;
}

bool shadow_check_one_or_group77548_fun(int ofs77549, Value* or_group77550, Value* p77551, Value *env){
bool result;
int head78543;
head78543 = or_group77550[ofs77549].i;
int Ti7642078552;
Ti7642078552 = 1;
int Ti7642178544;
Ti7642178544 = -Ti7642078552;
if(head78543 == Ti7642178544){
result = 0;
}
else{
Value* Ta7642278551;
Ta7642278551 = and_net;
Value* and_group78545;
and_group78545 = Ta7642278551[head78543].a;
int Ti7642378550;
Ti7642378550 = 0;
bool shadow_p78546;
shadow_p78546 = shadow_check_and_group77544_fun(Ti7642378550, and_group78545, p77551, NULL);
int Ti7642478547;
Ti7642478547 = 0;
if(shadow_p78546 == Ti7642478547){
int Ti7642578549;
Ti7642578549 = 1;
int Ti7642678548;
Ti7642678548 = ofs77549 + Ti7642578549;
result = shadow_check_one_or_group77548_fun(Ti7642678548, or_group77550, p77551, NULL);
}
else{
result = 1;
}
}
return result;
}

bool shadow_check_one_or_matrix77552_fun(int ofs77553, Value* or_matrix77554, Value* p77555, Value *env){
bool result;
Value* head78516;
head78516 = or_matrix77554[ofs77553].a;
int Ti7639678542;
Ti7639678542 = 0;
int range_primitive78517;
range_primitive78517 = head78516[Ti7639678542].i;
int Ti7639778541;
Ti7639778541 = 1;
int Ti7639878518;
Ti7639878518 = -Ti7639778541;
if(range_primitive78517 == Ti7639878518){
result = 0;
}
else{
int Ti7639978519;
Ti7639978519 = 99;
if(range_primitive78517 == Ti7639978519){
int Ti7640078540;
Ti7640078540 = 1;
bool Tb7640178536;
Tb7640178536 = shadow_check_one_or_group77548_fun(Ti7640078540, head78516, p77555, NULL);
int Ti7640278537;
Ti7640278537 = 0;
if(Tb7640178536 == Ti7640278537){
int Ti7640378539;
Ti7640378539 = 1;
int Ti7640478538;
Ti7640478538 = ofs77553 + Ti7640378539;
result = shadow_check_one_or_matrix77552_fun(Ti7640478538, or_matrix77554, p77555, NULL);
}
else{
result = 1;
}
}
else{
Value* Ta7640578535;
Ta7640578535 = light;
int t78520;
t78520 = solver77529_fun(range_primitive78517, Ta7640578535, p77555, NULL);
int Ti7640678521;
Ti7640678521 = 0;
if(t78520 == Ti7640678521){
int Ti7640778534;
Ti7640778534 = 1;
int Ti7640878533;
Ti7640878533 = ofs77553 + Ti7640778534;
result = shadow_check_one_or_matrix77552_fun(Ti7640878533, or_matrix77554, p77555, NULL);
}
else{
double Td7640978522;
Td7640978522 = -0.100000;
Value* Ta7641078531;
Ta7641078531 = solver_dist;
int Ti7641178532;
Ti7641178532 = 0;
double Td7641278523;
Td7641278523 = Ta7641078531[Ti7641178532].d;
if(Td7640978522 <= Td7641278523){
int Ti7641378530;
Ti7641378530 = 1;
int Ti7641478529;
Ti7641478529 = ofs77553 + Ti7641378530;
result = shadow_check_one_or_matrix77552_fun(Ti7641478529, or_matrix77554, p77555, NULL);
}
else{
int Ti7641578528;
Ti7641578528 = 1;
bool Tb7641678524;
Tb7641678524 = shadow_check_one_or_group77548_fun(Ti7641578528, head78516, p77555, NULL);
int Ti7641778525;
Ti7641778525 = 0;
if(Tb7641678524 == Ti7641778525){
int Ti7641878527;
Ti7641878527 = 1;
int Ti7641978526;
Ti7641978526 = ofs77553 + Ti7641878527;
result = shadow_check_one_or_matrix77552_fun(Ti7641978526, or_matrix77554, p77555, NULL);
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

int solve_each_element77556_fun(int iand_ofs77557, Value* and_group77558, Value *env){
int result;
int iobj78424;
iobj78424 = and_group77558[iand_ofs77557].i;
int Ti7631778515;
Ti7631778515 = 1;
int Ti7631878425;
Ti7631878425 = -Ti7631778515;
if(iobj78424 == Ti7631878425){
result = 1;
}
else{
Value* Ta7631978513;
Ta7631978513 = vscan;
Value* Ta7632078514;
Ta7632078514 = viewpoint;
int t078426;
t078426 = solver77529_fun(iobj78424, Ta7631978513, Ta7632078514, NULL);
int Ti7632178434;
Ti7632178434 = 0;
int Tu7555278427;
if(t078426 == Ti7632178434){
Value* Ta7632278512;
Ta7632278512 = objects;
int* Tt7632378511;
Tt7632378511 = Ta7632278512[iobj78424].a;
bool Tb7632478506;
Tb7632478506 = o_isinvert77453_fun(Tt7632378511, NULL);
int Ti7632578507;
Ti7632578507 = 0;
if(Tb7632478506 == Ti7632578507){
Value* Ta7632678508;
Ta7632678508 = end_flag;
int Ti7632778509;
Ti7632778509 = 0;
int Ti7632878510;
Ti7632878510 = 1;
Ta7632678508[Ti7632778509].i = Ti7632878510;
}
else{
Tu7555278427 = 1;
}
}
else{
Value* Ta7632978504;
Ta7632978504 = solver_dist;
int Ti7633078505;
Ti7633078505 = 0;
double t0p78435;
t0p78435 = Ta7632978504[Ti7633078505].d;
double Td7633178436;
Td7633178436 = -0.100000;
if(t0p78435 <= Td7633178436){
Tu7555278427 = 1;
}
else{
Value* Ta7633278502;
Ta7633278502 = tmin;
int Ti7633378503;
Ti7633378503 = 0;
double Td7633478437;
Td7633478437 = Ta7633278502[Ti7633378503].d;
if(Td7633478437 <= t0p78435){
Tu7555278427 = 1;
}
else{
double Td7633578501;
Td7633578501 = 0.010000;
double t78438;
t78438 = t0p78435 + Td7633578501;
Value* Ta7633678491;
Ta7633678491 = chkinside_p;
int Ti7633778492;
Ti7633778492 = 0;
Value* Ta7633878499;
Ta7633878499 = vscan;
int Ti7633978500;
Ti7633978500 = 0;
double Td7634078498;
Td7634078498 = Ta7633878499[Ti7633978500].d;
double Td7634178494;
Td7634178494 =  Td7634078498 * t78438;
Value* Ta7634278496;
Ta7634278496 = viewpoint;
int Ti7634378497;
Ti7634378497 = 0;
double Td7634478495;
Td7634478495 = Ta7634278496[Ti7634378497].d;
double Td7634578493;
Td7634578493 = Td7634178494 + Td7634478495;
int Tu7555178439;
Ta7633678491[Ti7633778492].d = Td7634578493;
Value* Ta7634678481;
Ta7634678481 = chkinside_p;
int Ti7634778482;
Ti7634778482 = 1;
Value* Ta7634878489;
Ta7634878489 = vscan;
int Ti7634978490;
Ti7634978490 = 1;
double Td7635078488;
Td7635078488 = Ta7634878489[Ti7634978490].d;
double Td7635178484;
Td7635178484 =  Td7635078488 * t78438;
Value* Ta7635278486;
Ta7635278486 = viewpoint;
int Ti7635378487;
Ti7635378487 = 1;
double Td7635478485;
Td7635478485 = Ta7635278486[Ti7635378487].d;
double Td7635578483;
Td7635578483 = Td7635178484 + Td7635478485;
int Tu7555078440;
Ta7634678481[Ti7634778482].d = Td7635578483;
Value* Ta7635678471;
Ta7635678471 = chkinside_p;
int Ti7635778472;
Ti7635778472 = 2;
Value* Ta7635878479;
Ta7635878479 = vscan;
int Ti7635978480;
Ti7635978480 = 2;
double Td7636078478;
Td7636078478 = Ta7635878479[Ti7635978480].d;
double Td7636178474;
Td7636178474 =  Td7636078478 * t78438;
Value* Ta7636278476;
Ta7636278476 = viewpoint;
int Ti7636378477;
Ti7636378477 = 2;
double Td7636478475;
Td7636478475 = Ta7636278476[Ti7636378477].d;
double Td7636578473;
Td7636578473 = Td7636178474 + Td7636478475;
int Tu7554978441;
Ta7635678471[Ti7635778472].d = Td7636578473;
int Ti7636678470;
Ti7636678470 = 0;
bool Tb7636778442;
Tb7636778442 = check_all_inside77541_fun(Ti7636678470, and_group77558, NULL);
int Ti7636878443;
Ti7636878443 = 0;
if(Tb7636778442 == Ti7636878443){
Tu7555278427 = 1;
}
else{
Value* Ta7636978468;
Ta7636978468 = tmin;
int Ti7637078469;
Ti7637078469 = 0;
int Tu7554878444;
Ta7636978468[Ti7637078469].d = t78438;
Value* Ta7637178463;
Ta7637178463 = crashed_point;
int Ti7637278464;
Ti7637278464 = 0;
Value* Ta7637378466;
Ta7637378466 = chkinside_p;
int Ti7637478467;
Ti7637478467 = 0;
double Td7637578465;
Td7637578465 = Ta7637378466[Ti7637478467].d;
int Tu7554778445;
Ta7637178463[Ti7637278464].d = Td7637578465;
Value* Ta7637678458;
Ta7637678458 = crashed_point;
int Ti7637778459;
Ti7637778459 = 1;
Value* Ta7637878461;
Ta7637878461 = chkinside_p;
int Ti7637978462;
Ti7637978462 = 1;
double Td7638078460;
Td7638078460 = Ta7637878461[Ti7637978462].d;
int Tu7554678446;
Ta7637678458[Ti7637778459].d = Td7638078460;
Value* Ta7638178453;
Ta7638178453 = crashed_point;
int Ti7638278454;
Ti7638278454 = 2;
Value* Ta7638378456;
Ta7638378456 = chkinside_p;
int Ti7638478457;
Ti7638478457 = 2;
double Td7638578455;
Td7638578455 = Ta7638378456[Ti7638478457].d;
int Tu7554578447;
Ta7638178453[Ti7638278454].d = Td7638578455;
Value* Ta7638678451;
Ta7638678451 = intsec_rectside;
int Ti7638778452;
Ti7638778452 = 0;
int Tu7554478448;
Ta7638678451[Ti7638778452].i = t078426;
Value* Ta7638878449;
Ta7638878449 = crashed_object;
int Ti7638978450;
Ti7638978450 = 0;
Ta7638878449[Ti7638978450].i = iobj78424;
}
}
}
}
Value* Ta7639078432;
Ta7639078432 = end_flag;
int Ti7639178433;
Ti7639178433 = 0;
bool Tb7639278428;
Tb7639278428 = Ta7639078432[Ti7639178433].b;
int Ti7639378429;
Ti7639378429 = 0;
if(Tb7639278428 == Ti7639378429){
int Ti7639478431;
Ti7639478431 = 1;
int Ti7639578430;
Ti7639578430 = iand_ofs77557 + Ti7639478431;
result = solve_each_element77556_fun(Ti7639578430, and_group77558, NULL);
}
else{
result = 1;
}
}
return result;
}

int solve_one_or_network77559_fun(int ofs77560, Value* or_group77561, Value *env){
int result;
int head78411;
head78411 = or_group77561[ofs77560].i;
int Ti7630878423;
Ti7630878423 = 1;
int Ti7630978412;
Ti7630978412 = -Ti7630878423;
if(head78411 == Ti7630978412){
result = 1;
}
else{
Value* Ta7631078422;
Ta7631078422 = and_net;
Value* and_group78413;
and_group78413 = Ta7631078422[head78411].a;
Value* Ta7631178419;
Ta7631178419 = end_flag;
int Ti7631278420;
Ti7631278420 = 0;
int Ti7631378421;
Ti7631378421 = 0;
int Tu7555478414;
Ta7631178419[Ti7631278420].i = Ti7631378421;
int Ti7631478418;
Ti7631478418 = 0;
int Tu7555378415;
Tu7555378415 = solve_each_element77556_fun(Ti7631478418, and_group78413, NULL);
int Ti7631578417;
Ti7631578417 = 1;
int Ti7631678416;
Ti7631678416 = ofs77560 + Ti7631578417;
result = solve_one_or_network77559_fun(Ti7631678416, or_group77561, NULL);
}
return result;
}

int trace_or_matrix77562_fun(int ofs77563, Value* or_network77564, Value *env){
int result;
Value* head78390;
head78390 = or_network77564[ofs77563].a;
int Ti7629278410;
Ti7629278410 = 0;
int range_primitive78391;
range_primitive78391 = head78390[Ti7629278410].i;
int Ti7629378409;
Ti7629378409 = 1;
int Ti7629478392;
Ti7629478392 = -Ti7629378409;
if(range_primitive78391 == Ti7629478392){
result = 1;
}
else{
int Ti7629578396;
Ti7629578396 = 99;
int Tu7555578393;
if(range_primitive78391 == Ti7629578396){
int Ti7629678408;
Ti7629678408 = 1;
Tu7555578393 = solve_one_or_network77559_fun(Ti7629678408, head78390, NULL);
}
else{
Value* Ta7629778406;
Ta7629778406 = vscan;
Value* Ta7629878407;
Ta7629878407 = viewpoint;
int t78397;
t78397 = solver77529_fun(range_primitive78391, Ta7629778406, Ta7629878407, NULL);
int Ti7629978398;
Ti7629978398 = 0;
if(t78397 == Ti7629978398){
Tu7555578393 = 1;
}
else{
Value* Ta7630078404;
Ta7630078404 = solver_dist;
int Ti7630178405;
Ti7630178405 = 0;
double tp78399;
tp78399 = Ta7630078404[Ti7630178405].d;
Value* Ta7630278402;
Ta7630278402 = tmin;
int Ti7630378403;
Ti7630378403 = 0;
double Td7630478400;
Td7630478400 = Ta7630278402[Ti7630378403].d;
if(Td7630478400 <= tp78399){
Tu7555578393 = 1;
}
else{
int Ti7630578401;
Ti7630578401 = 1;
Tu7555578393 = solve_one_or_network77559_fun(Ti7630578401, head78390, NULL);
}
}
}
int Ti7630678395;
Ti7630678395 = 1;
int Ti7630778394;
Ti7630778394 = ofs77563 + Ti7630678395;
result = trace_or_matrix77562_fun(Ti7630778394, or_network77564, NULL);
}
return result;
}

bool tracer77565_fun(Value* viewpoint77566, Value* vscan77567, Value *env){
bool result;
Value* Ta7628178387;
Ta7628178387 = tmin;
int Ti7628278388;
Ti7628278388 = 0;
double Td7628378389;
Td7628378389 = 1000000000.000000;
int Tu7555778376;
Ta7628178387[Ti7628278388].d = Td7628378389;
int Ti7628478383;
Ti7628478383 = 0;
Value* Ta7628578385;
Ta7628578385 = or_net;
int Ti7628678386;
Ti7628678386 = 0;
Value* Ta7628778384;
Ta7628778384 = Ta7628578385[Ti7628678386].a;
int Tu7555678377;
Tu7555678377 = trace_or_matrix77562_fun(Ti7628478383, Ta7628778384, NULL);
Value* Ta7628878381;
Ta7628878381 = tmin;
int Ti7628978382;
Ti7628978382 = 0;
double t78378;
t78378 = Ta7628878381[Ti7628978382].d;
double Td7629078379;
Td7629078379 = -0.100000;
if(t78378 <= Td7629078379){
result = 0;
}
else{
double Td7629178380;
Td7629178380 = 100000000.000000;
if(Td7629178380 <= t78378){
result = 0;
}
else{
result = 1;
}
}
return result;
}

int get_nvector_rect77568_fun(int Tu7555877569, Value *env){
int result;
Value* Ta7623778374;
Ta7623778374 = intsec_rectside;
int Ti7623878375;
Ti7623878375 = 0;
int rectside78325;
rectside78325 = Ta7623778374[Ti7623878375].i;
int Ti7623978326;
Ti7623978326 = 1;
if(rectside78325 == Ti7623978326){
Value* Ta7624078367;
Ta7624078367 = nvector;
int Ti7624178368;
Ti7624178368 = 0;
Value* Ta7624278372;
Ta7624278372 = vscan;
int Ti7624378373;
Ti7624378373 = 0;
double Td7624478371;
Td7624478371 = Ta7624278372[Ti7624378373].d;
double Td7624578370;
Td7624578370 = sgn77488_fun(Td7624478371, NULL);
double Td7624678369;
Td7624678369 = -Td7624578370;
int Tu7556078359;
Ta7624078367[Ti7624178368].d = Td7624678369;
Value* Ta7624778364;
Ta7624778364 = nvector;
int Ti7624878365;
Ti7624878365 = 1;
double Td7624978366;
Td7624978366 = 0.000000;
int Tu7555978360;
Ta7624778364[Ti7624878365].d = Td7624978366;
Value* Ta7625078361;
Ta7625078361 = nvector;
int Ti7625178362;
Ti7625178362 = 2;
double Td7625278363;
Td7625278363 = 0.000000;
Ta7625078361[Ti7625178362].d = Td7625278363;
}
else{
int Ti7625378327;
Ti7625378327 = 2;
if(rectside78325 == Ti7625378327){
Value* Ta7625478356;
Ta7625478356 = nvector;
int Ti7625578357;
Ti7625578357 = 0;
double Td7625678358;
Td7625678358 = 0.000000;
int Tu7556278344;
Ta7625478356[Ti7625578357].d = Td7625678358;
Value* Ta7625778349;
Ta7625778349 = nvector;
int Ti7625878350;
Ti7625878350 = 1;
Value* Ta7625978354;
Ta7625978354 = vscan;
int Ti7626078355;
Ti7626078355 = 1;
double Td7626178353;
Td7626178353 = Ta7625978354[Ti7626078355].d;
double Td7626278352;
Td7626278352 = sgn77488_fun(Td7626178353, NULL);
double Td7626378351;
Td7626378351 = -Td7626278352;
int Tu7556178345;
Ta7625778349[Ti7625878350].d = Td7626378351;
Value* Ta7626478346;
Ta7626478346 = nvector;
int Ti7626578347;
Ti7626578347 = 2;
double Td7626678348;
Td7626678348 = 0.000000;
Ta7626478346[Ti7626578347].d = Td7626678348;
}
else{
int Ti7626778328;
Ti7626778328 = 3;
if(rectside78325 == Ti7626778328){
Value* Ta7626878341;
Ta7626878341 = nvector;
int Ti7626978342;
Ti7626978342 = 0;
double Td7627078343;
Td7627078343 = 0.000000;
int Tu7556478329;
Ta7626878341[Ti7626978342].d = Td7627078343;
Value* Ta7627178338;
Ta7627178338 = nvector;
int Ti7627278339;
Ti7627278339 = 1;
double Td7627378340;
Td7627378340 = 0.000000;
int Tu7556378330;
Ta7627178338[Ti7627278339].d = Td7627378340;
Value* Ta7627478331;
Ta7627478331 = nvector;
int Ti7627578332;
Ti7627578332 = 2;
Value* Ta7627678336;
Ta7627678336 = vscan;
int Ti7627778337;
Ti7627778337 = 2;
double Td7627878335;
Td7627878335 = Ta7627678336[Ti7627778337].d;
double Td7627978334;
Td7627978334 = sgn77488_fun(Td7627878335, NULL);
double Td7628078333;
Td7628078333 = -Td7627978334;
Ta7627478331[Ti7627578332].d = Td7628078333;
}
else{
result = 1;
}
}
}
return result;
}

int get_nvector_plane77570_fun(int* m77571, Value *env){
int result;
Value* Ta7622578321;
Ta7622578321 = nvector;
int Ti7622678322;
Ti7622678322 = 0;
double Td7622778324;
Td7622778324 = o_param_a77457_fun(m77571, NULL);
double Td7622878323;
Td7622878323 = -Td7622778324;
int Tu7556678311;
Ta7622578321[Ti7622678322].d = Td7622878323;
Value* Ta7622978317;
Ta7622978317 = nvector;
int Ti7623078318;
Ti7623078318 = 1;
double Td7623178320;
Td7623178320 = o_param_b77459_fun(m77571, NULL);
double Td7623278319;
Td7623278319 = -Td7623178320;
int Tu7556578312;
Ta7622978317[Ti7623078318].d = Td7623278319;
Value* Ta7623378313;
Ta7623378313 = nvector;
int Ti7623478314;
Ti7623478314 = 2;
double Td7623578316;
Td7623578316 = o_param_c77461_fun(m77571, NULL);
double Td7623678315;
Td7623678315 = -Td7623578316;
Ta7623378313[Ti7623478314].d = Td7623678315;
return result;
}

int get_nvector_second_norot77572_fun(int* m77573, Value* p77574, Value *env){
int result;
Value* Ta7619978303;
Ta7619978303 = nvector;
int Ti7620078304;
Ti7620078304 = 0;
int Ti7620178310;
Ti7620178310 = 0;
double Td7620278308;
Td7620278308 = p77574[Ti7620178310].d;
double Td7620378309;
Td7620378309 = o_param_x77463_fun(m77573, NULL);
double Td7620478306;
Td7620478306 = Td7620278308 - Td7620378309;
double Td7620578307;
Td7620578307 = o_param_a77457_fun(m77573, NULL);
double Td7620678305;
Td7620678305 =  Td7620478306 * Td7620578307;
int Tu7556978282;
Ta7619978303[Ti7620078304].d = Td7620678305;
Value* Ta7620778295;
Ta7620778295 = nvector;
int Ti7620878296;
Ti7620878296 = 1;
int Ti7620978302;
Ti7620978302 = 1;
double Td7621078300;
Td7621078300 = p77574[Ti7620978302].d;
double Td7621178301;
Td7621178301 = o_param_y77465_fun(m77573, NULL);
double Td7621278298;
Td7621278298 = Td7621078300 - Td7621178301;
double Td7621378299;
Td7621378299 = o_param_b77459_fun(m77573, NULL);
double Td7621478297;
Td7621478297 =  Td7621278298 * Td7621378299;
int Tu7556878283;
Ta7620778295[Ti7620878296].d = Td7621478297;
Value* Ta7621578287;
Ta7621578287 = nvector;
int Ti7621678288;
Ti7621678288 = 2;
int Ti7621778294;
Ti7621778294 = 2;
double Td7621878292;
Td7621878292 = p77574[Ti7621778294].d;
double Td7621978293;
Td7621978293 = o_param_z77467_fun(m77573, NULL);
double Td7622078290;
Td7622078290 = Td7621878292 - Td7621978293;
double Td7622178291;
Td7622178291 = o_param_c77461_fun(m77573, NULL);
double Td7622278289;
Td7622278289 =  Td7622078290 * Td7622178291;
int Tu7556778284;
Ta7621578287[Ti7621678288].d = Td7622278289;
Value* Ta7622378285;
Ta7622378285 = nvector;
bool Tb7622478286;
Tb7622478286 = o_isinvert77453_fun(m77573, NULL);
result = normalize_vector77485_fun(Ta7622378285, Tb7622478286, NULL);
return result;
}

int get_nvector_second_rot77575_fun(int* m77576, Value* p77577, Value *env){
int result;
Value* Ta7611978276;
Ta7611978276 = nvector_w;
int Ti7612078277;
Ti7612078277 = 0;
int Ti7612178281;
Ti7612178281 = 0;
double Td7612278279;
Td7612278279 = p77577[Ti7612178281].d;
double Td7612378280;
Td7612378280 = o_param_x77463_fun(m77576, NULL);
double Td7612478278;
Td7612478278 = Td7612278279 - Td7612378280;
int Tu7557578196;
Ta7611978276[Ti7612078277].d = Td7612478278;
Value* Ta7612578270;
Ta7612578270 = nvector_w;
int Ti7612678271;
Ti7612678271 = 1;
int Ti7612778275;
Ti7612778275 = 1;
double Td7612878273;
Td7612878273 = p77577[Ti7612778275].d;
double Td7612978274;
Td7612978274 = o_param_y77465_fun(m77576, NULL);
double Td7613078272;
Td7613078272 = Td7612878273 - Td7612978274;
int Tu7557478197;
Ta7612578270[Ti7612678271].d = Td7613078272;
Value* Ta7613178264;
Ta7613178264 = nvector_w;
int Ti7613278265;
Ti7613278265 = 2;
int Ti7613378269;
Ti7613378269 = 2;
double Td7613478267;
Td7613478267 = p77577[Ti7613378269].d;
double Td7613578268;
Td7613578268 = o_param_z77467_fun(m77576, NULL);
double Td7613678266;
Td7613678266 = Td7613478267 - Td7613578268;
int Tu7557378198;
Ta7613178264[Ti7613278265].d = Td7613678266;
Value* Ta7613778244;
Ta7613778244 = nvector;
int Ti7613878245;
Ti7613878245 = 0;
Value* Ta7613978262;
Ta7613978262 = nvector_w;
int Ti7614078263;
Ti7614078263 = 0;
double Td7614178260;
Td7614178260 = Ta7613978262[Ti7614078263].d;
double Td7614278261;
Td7614278261 = o_param_a77457_fun(m77576, NULL);
double Td7614378247;
Td7614378247 =  Td7614178260 * Td7614278261;
Value* Ta7614478258;
Ta7614478258 = nvector_w;
int Ti7614578259;
Ti7614578259 = 1;
double Td7614678256;
Td7614678256 = Ta7614478258[Ti7614578259].d;
double Td7614778257;
Td7614778257 = o_param_r377483_fun(m77576, NULL);
double Td7614878250;
Td7614878250 =  Td7614678256 * Td7614778257;
Value* Ta7614978254;
Ta7614978254 = nvector_w;
int Ti7615078255;
Ti7615078255 = 2;
double Td7615178252;
Td7615178252 = Ta7614978254[Ti7615078255].d;
double Td7615278253;
Td7615278253 = o_param_r277481_fun(m77576, NULL);
double Td7615378251;
Td7615378251 =  Td7615178252 * Td7615278253;
double Td7615478249;
Td7615478249 = Td7614878250 + Td7615378251;
double Td7615578248;
Td7615578248 = fhalf77445_fun(Td7615478249, NULL);
double Td7615678246;
Td7615678246 = Td7614378247 + Td7615578248;
int Tu7557278199;
Ta7613778244[Ti7613878245].d = Td7615678246;
Value* Ta7615778224;
Ta7615778224 = nvector;
int Ti7615878225;
Ti7615878225 = 1;
Value* Ta7615978242;
Ta7615978242 = nvector_w;
int Ti7616078243;
Ti7616078243 = 1;
double Td7616178240;
Td7616178240 = Ta7615978242[Ti7616078243].d;
double Td7616278241;
Td7616278241 = o_param_b77459_fun(m77576, NULL);
double Td7616378227;
Td7616378227 =  Td7616178240 * Td7616278241;
Value* Ta7616478238;
Ta7616478238 = nvector_w;
int Ti7616578239;
Ti7616578239 = 0;
double Td7616678236;
Td7616678236 = Ta7616478238[Ti7616578239].d;
double Td7616778237;
Td7616778237 = o_param_r377483_fun(m77576, NULL);
double Td7616878230;
Td7616878230 =  Td7616678236 * Td7616778237;
Value* Ta7616978234;
Ta7616978234 = nvector_w;
int Ti7617078235;
Ti7617078235 = 2;
double Td7617178232;
Td7617178232 = Ta7616978234[Ti7617078235].d;
double Td7617278233;
Td7617278233 = o_param_r177479_fun(m77576, NULL);
double Td7617378231;
Td7617378231 =  Td7617178232 * Td7617278233;
double Td7617478229;
Td7617478229 = Td7616878230 + Td7617378231;
double Td7617578228;
Td7617578228 = fhalf77445_fun(Td7617478229, NULL);
double Td7617678226;
Td7617678226 = Td7616378227 + Td7617578228;
int Tu7557178200;
Ta7615778224[Ti7615878225].d = Td7617678226;
Value* Ta7617778204;
Ta7617778204 = nvector;
int Ti7617878205;
Ti7617878205 = 2;
Value* Ta7617978222;
Ta7617978222 = nvector_w;
int Ti7618078223;
Ti7618078223 = 2;
double Td7618178220;
Td7618178220 = Ta7617978222[Ti7618078223].d;
double Td7618278221;
Td7618278221 = o_param_c77461_fun(m77576, NULL);
double Td7618378207;
Td7618378207 =  Td7618178220 * Td7618278221;
Value* Ta7618478218;
Ta7618478218 = nvector_w;
int Ti7618578219;
Ti7618578219 = 0;
double Td7618678216;
Td7618678216 = Ta7618478218[Ti7618578219].d;
double Td7618778217;
Td7618778217 = o_param_r277481_fun(m77576, NULL);
double Td7618878210;
Td7618878210 =  Td7618678216 * Td7618778217;
Value* Ta7618978214;
Ta7618978214 = nvector_w;
int Ti7619078215;
Ti7619078215 = 1;
double Td7619178212;
Td7619178212 = Ta7618978214[Ti7619078215].d;
double Td7619278213;
Td7619278213 = o_param_r177479_fun(m77576, NULL);
double Td7619378211;
Td7619378211 =  Td7619178212 * Td7619278213;
double Td7619478209;
Td7619478209 = Td7618878210 + Td7619378211;
double Td7619578208;
Td7619578208 = fhalf77445_fun(Td7619478209, NULL);
double Td7619678206;
Td7619678206 = Td7618378207 + Td7619578208;
int Tu7557078201;
Ta7617778204[Ti7617878205].d = Td7619678206;
Value* Ta7619778202;
Ta7619778202 = nvector;
bool Tb7619878203;
Tb7619878203 = o_isinvert77453_fun(m77576, NULL);
result = normalize_vector77485_fun(Ta7619778202, Tb7619878203, NULL);
return result;
}

int get_nvector77578_fun(int* m77579, Value* p77580, Value *env){
int result;
int m_shape78190;
m_shape78190 = o_form77449_fun(m77579, NULL);
int Ti7611478191;
Ti7611478191 = 1;
if(m_shape78190 == Ti7611478191){
int Tu7611578195;
Tu7611578195 = 1;
result = get_nvector_rect77568_fun(Tu7611578195, NULL);
}
else{
int Ti7611678192;
Ti7611678192 = 2;
if(m_shape78190 == Ti7611678192){
result = get_nvector_plane77570_fun(m77579, NULL);
}
else{
int Ti7611778193;
Ti7611778193 = o_isrot77455_fun(m77579, NULL);
int Ti7611878194;
Ti7611878194 = 0;
if(Ti7611778193 == Ti7611878194){
result = get_nvector_second_norot77572_fun(m77579, p77580, NULL);
}
else{
result = get_nvector_second_rot77575_fun(m77579, p77580, NULL);
}
}
}
return result;
}

int utexture77581_fun(int* m77582, Value* p77583, Value *env){
int result;
int m_tex78032;
m_tex78032 = o_texturetype77447_fun(m77582, NULL);
Value* Ta7598578187;
Ta7598578187 = texture_color;
int Ti7598678188;
Ti7598678188 = 0;
double Td7598778189;
Td7598778189 = o_color_red77473_fun(m77582, NULL);
int Tu7558078033;
Ta7598578187[Ti7598678188].d = Td7598778189;
Value* Ta7598878184;
Ta7598878184 = texture_color;
int Ti7598978185;
Ti7598978185 = 1;
double Td7599078186;
Td7599078186 = o_color_green77475_fun(m77582, NULL);
int Tu7557978034;
Ta7598878184[Ti7598978185].d = Td7599078186;
Value* Ta7599178181;
Ta7599178181 = texture_color;
int Ti7599278182;
Ti7599278182 = 2;
double Td7599378183;
Td7599378183 = o_color_blue77477_fun(m77582, NULL);
int Tu7557878035;
Ta7599178181[Ti7599278182].d = Td7599378183;
int Ti7599478036;
Ti7599478036 = 1;
if(m_tex78032 == Ti7599478036){
int Ti7599578180;
Ti7599578180 = 0;
double Td7599678178;
Td7599678178 = p77583[Ti7599578180].d;
double Td7599778179;
Td7599778179 = o_param_x77463_fun(m77582, NULL);
double w178151;
w178151 = Td7599678178 - Td7599778179;
double Td7599878177;
Td7599878177 = 0.050000;
double Td7599978176;
Td7599978176 =  w178151 * Td7599878177;
double Td7600078174;
Td7600078174 = floor(Td7599978176);
double Td7600178175;
Td7600178175 = 20.000000;
double d178171;
d178171 =  Td7600078174 * Td7600178175;
double Td7600278172;
Td7600278172 = 10.000000;
double Td7600378173;
Td7600378173 = w178151 - d178171;
bool flag178152;
if(Td7600278172 <= Td7600378173){
flag178152 = 0;
}
else{
flag178152 = 1;
}
int Ti7600478170;
Ti7600478170 = 2;
double Td7600578168;
Td7600578168 = p77583[Ti7600478170].d;
double Td7600678169;
Td7600678169 = o_param_z77467_fun(m77582, NULL);
double w378153;
w378153 = Td7600578168 - Td7600678169;
double Td7600778167;
Td7600778167 = 0.050000;
double Td7600878166;
Td7600878166 =  w378153 * Td7600778167;
double Td7600978164;
Td7600978164 = floor(Td7600878166);
double Td7601078165;
Td7601078165 = 20.000000;
double d278161;
d278161 =  Td7600978164 * Td7601078165;
double Td7601178162;
Td7601178162 = 10.000000;
double Td7601278163;
Td7601278163 = w378153 - d278161;
bool flag278154;
if(Td7601178162 <= Td7601278163){
flag278154 = 0;
}
else{
flag278154 = 1;
}
Value* Ta7601378155;
Ta7601378155 = texture_color;
int Ti7601478156;
Ti7601478156 = 1;
int Ti7601578158;
Ti7601578158 = 0;
double Td7601878157;
if(flag178152 == Ti7601578158){
int Ti7601678160;
Ti7601678160 = 0;
if(flag278154 == Ti7601678160){
Td7601878157 = 255.000000;
}
else{
Td7601878157 = 0.000000;
}
}
else{
int Ti7601778159;
Ti7601778159 = 0;
if(flag278154 == Ti7601778159){
Td7601878157 = 0.000000;
}
else{
Td7601878157 = 255.000000;
}
}
Ta7601378155[Ti7601478156].d = Td7601878157;
}
else{
int Ti7601978037;
Ti7601978037 = 2;
if(m_tex78032 == Ti7601978037){
int Ti7602078150;
Ti7602078150 = 1;
double Td7602178148;
Td7602178148 = p77583[Ti7602078150].d;
double Td7602278149;
Td7602278149 = 0.250000;
double Td7602378147;
Td7602378147 =  Td7602178148 * Td7602278149;
double Td7602478146;
Td7602478146 = sin(Td7602378147);
double w278134;
w278134 = fsqr77443_fun(Td7602478146, NULL);
Value* Ta7602578142;
Ta7602578142 = texture_color;
int Ti7602678143;
Ti7602678143 = 0;
double Td7602778145;
Td7602778145 = 255.000000;
double Td7602878144;
Td7602878144 =  Td7602778145 * w278134;
int Tu7557678135;
Ta7602578142[Ti7602678143].d = Td7602878144;
Value* Ta7602978136;
Ta7602978136 = texture_color;
int Ti7603078137;
Ti7603078137 = 1;
double Td7603178139;
Td7603178139 = 255.000000;
double Td7603278141;
Td7603278141 = 1.000000;
double Td7603378140;
Td7603378140 = Td7603278141 - w278134;
double Td7603478138;
Td7603478138 =  Td7603178139 * Td7603378140;
Ta7602978136[Ti7603078137].d = Td7603478138;
}
else{
int Ti7603578038;
Ti7603578038 = 3;
if(m_tex78032 == Ti7603578038){
int Ti7603678133;
Ti7603678133 = 0;
double Td7603778131;
Td7603778131 = p77583[Ti7603678133].d;
double Td7603878132;
Td7603878132 = o_param_x77463_fun(m77582, NULL);
double w178103;
w178103 = Td7603778131 - Td7603878132;
int Ti7603978130;
Ti7603978130 = 2;
double Td7604078128;
Td7604078128 = p77583[Ti7603978130].d;
double Td7604178129;
Td7604178129 = o_param_z77467_fun(m77582, NULL);
double w378104;
w378104 = Td7604078128 - Td7604178129;
double Td7604278126;
Td7604278126 = fsqr77443_fun(w178103, NULL);
double Td7604378127;
Td7604378127 = fsqr77443_fun(w378104, NULL);
double Td7604478125;
Td7604478125 = Td7604278126 + Td7604378127;
double Td7604578123;
Td7604578123 = sqrt(Td7604478125);
double Td7604678124;
Td7604678124 = 10.000000;
double w278105;
w278105 = Td7604578123 / Td7604678124;
double Td7604778122;
Td7604778122 = floor(w278105);
double Td7604878120;
Td7604878120 = w278105 - Td7604778122;
double Td7604978121;
Td7604978121 = 3.141593;
double w478106;
w478106 =  Td7604878120 * Td7604978121;
double Td7605078119;
Td7605078119 = cos(w478106);
double cws78107;
cws78107 = fsqr77443_fun(Td7605078119, NULL);
Value* Ta7605178115;
Ta7605178115 = texture_color;
int Ti7605278116;
Ti7605278116 = 1;
double Td7605378118;
Td7605378118 = 255.000000;
double Td7605478117;
Td7605478117 =  cws78107 * Td7605378118;
int Tu7557778108;
Ta7605178115[Ti7605278116].d = Td7605478117;
Value* Ta7605578109;
Ta7605578109 = texture_color;
int Ti7605678110;
Ti7605678110 = 2;
double Td7605778114;
Td7605778114 = 1.000000;
double Td7605878112;
Td7605878112 = Td7605778114 - cws78107;
double Td7605978113;
Td7605978113 = 255.000000;
double Td7606078111;
Td7606078111 =  Td7605878112 * Td7605978113;
Ta7605578109[Ti7605678110].d = Td7606078111;
}
else{
int Ti7606178039;
Ti7606178039 = 4;
if(m_tex78032 == Ti7606178039){
int Ti7606278102;
Ti7606278102 = 0;
double Td7606378100;
Td7606378100 = p77583[Ti7606278102].d;
double Td7606478101;
Td7606478101 = o_param_x77463_fun(m77582, NULL);
double Td7606578097;
Td7606578097 = Td7606378100 - Td7606478101;
double Td7606678099;
Td7606678099 = o_param_a77457_fun(m77582, NULL);
double Td7606778098;
Td7606778098 = sqrt(Td7606678099);
double w178040;
w178040 =  Td7606578097 * Td7606778098;
int Ti7606878096;
Ti7606878096 = 2;
double Td7606978094;
Td7606978094 = p77583[Ti7606878096].d;
double Td7607078095;
Td7607078095 = o_param_z77467_fun(m77582, NULL);
double Td7607178091;
Td7607178091 = Td7606978094 - Td7607078095;
double Td7607278093;
Td7607278093 = o_param_c77461_fun(m77582, NULL);
double Td7607378092;
Td7607378092 = sqrt(Td7607278093);
double w378041;
w378041 =  Td7607178091 * Td7607378092;
double Td7607478089;
Td7607478089 = fsqr77443_fun(w178040, NULL);
double Td7607578090;
Td7607578090 = fsqr77443_fun(w378041, NULL);
double Td7607678088;
Td7607678088 = Td7607478089 + Td7607578090;
double w478042;
w478042 = sqrt(Td7607678088);
double Td7607778080;
Td7607778080 = 0.000100;
double Td7607878081;
Td7607878081 = fabs(w178040);
double w778043;
if(Td7607778080 <= Td7607878081){
double Td7607978087;
Td7607978087 = w378041 / w178040;
double w578082;
w578082 = fabs(Td7607978087);
double Td7608078083;
Td7608078083 = atan(w578082);
double Td7608178085;
Td7608178085 = 30.000000;
double Td7608278086;
Td7608278086 = 3.141593;
double Td7608378084;
Td7608378084 = Td7608178085 / Td7608278086;
w778043 =  Td7608078083 * Td7608378084;
}
else{
w778043 = 15.000000;
}
double Td7608478079;
Td7608478079 = floor(w778043);
double w978044;
w978044 = w778043 - Td7608478079;
int Ti7608578078;
Ti7608578078 = 1;
double Td7608678076;
Td7608678076 = p77583[Ti7608578078].d;
double Td7608778077;
Td7608778077 = o_param_y77465_fun(m77582, NULL);
double Td7608878073;
Td7608878073 = Td7608678076 - Td7608778077;
double Td7608978075;
Td7608978075 = o_param_b77459_fun(m77582, NULL);
double Td7609078074;
Td7609078074 = sqrt(Td7608978075);
double w278045;
w278045 =  Td7608878073 * Td7609078074;
double Td7609178065;
Td7609178065 = 0.000100;
double Td7609278066;
Td7609278066 = fabs(w778043);
double w878046;
if(Td7609178065 <= Td7609278066){
double Td7609378072;
Td7609378072 = w278045 / w478042;
double w678067;
w678067 = fabs(Td7609378072);
double Td7609478068;
Td7609478068 = atan(w678067);
double Td7609578070;
Td7609578070 = 30.000000;
double Td7609678071;
Td7609678071 = 3.141593;
double Td7609778069;
Td7609778069 = Td7609578070 / Td7609678071;
w878046 =  Td7609478068 * Td7609778069;
}
else{
w878046 = 15.000000;
}
double Td7609878064;
Td7609878064 = floor(w878046);
double w1078047;
w1078047 = w878046 - Td7609878064;
double Td7609978060;
Td7609978060 = 0.150000;
double Td7610078063;
Td7610078063 = 0.500000;
double Td7610178062;
Td7610178062 = Td7610078063 - w978044;
double Td7610278061;
Td7610278061 = fsqr77443_fun(Td7610178062, NULL);
double Td7610378056;
Td7610378056 = Td7609978060 - Td7610278061;
double Td7610478059;
Td7610478059 = 0.500000;
double Td7610578058;
Td7610578058 = Td7610478059 - w1078047;
double Td7610678057;
Td7610678057 = fsqr77443_fun(Td7610578058, NULL);
double w1178048;
w1178048 = Td7610378056 - Td7610678057;
Value* Ta7610778049;
Ta7610778049 = texture_color;
int Ti7610878050;
Ti7610878050 = 2;
double Td7610978052;
Td7610978052 = 0.000000;
double Td7611378051;
if(w1178048 <= Td7610978052){
Td7611378051 = 0.000000;
}
else{
double Td7611078054;
Td7611078054 = 255.000000;
double Td7611178055;
Td7611178055 = 0.300000;
double Td7611278053;
Td7611278053 = Td7611078054 / Td7611178055;
Td7611378051 =  w1178048 * Td7611278053;
}
Ta7610778049[Ti7610878050].d = Td7611378051;
}
else{
result = 1;
}
}
}
}
return result;
}

double in_prod77584_fun(Value* v177585, Value* v277586, Value *env){
double result;
int Ti7596978031;
Ti7596978031 = 0;
double Td7597078028;
Td7597078028 = v177585[Ti7596978031].d;
int Ti7597178030;
Ti7597178030 = 0;
double Td7597278029;
Td7597278029 = v277586[Ti7597178030].d;
double Td7597378022;
Td7597378022 =  Td7597078028 * Td7597278029;
int Ti7597478027;
Ti7597478027 = 1;
double Td7597578024;
Td7597578024 = v177585[Ti7597478027].d;
int Ti7597678026;
Ti7597678026 = 1;
double Td7597778025;
Td7597778025 = v277586[Ti7597678026].d;
double Td7597878023;
Td7597878023 =  Td7597578024 * Td7597778025;
double Td7597978016;
Td7597978016 = Td7597378022 + Td7597878023;
int Ti7598078021;
Ti7598078021 = 2;
double Td7598178018;
Td7598178018 = v177585[Ti7598078021].d;
int Ti7598278020;
Ti7598278020 = 2;
double Td7598378019;
Td7598378019 = v277586[Ti7598278020].d;
double Td7598478017;
Td7598478017 =  Td7598178018 * Td7598378019;
result = Td7597978016 + Td7598478017;
return result;
}

int accumulate_vec_mul77587_fun(Value* v177588, Value* v277589, double w77590, Value *env){
int result;
int Ti7594878009;
Ti7594878009 = 0;
int Ti7594978015;
Ti7594978015 = 0;
double Td7595078011;
Td7595078011 = v177588[Ti7594978015].d;
int Ti7595178014;
Ti7595178014 = 0;
double Td7595278013;
Td7595278013 = v277589[Ti7595178014].d;
double Td7595378012;
Td7595378012 =  w77590 * Td7595278013;
double Td7595478010;
Td7595478010 = Td7595078011 + Td7595378012;
int Tu7558277993;
v177588[Ti7594878009].d = Td7595478010;
int Ti7595578002;
Ti7595578002 = 1;
int Ti7595678008;
Ti7595678008 = 1;
double Td7595778004;
Td7595778004 = v177588[Ti7595678008].d;
int Ti7595878007;
Ti7595878007 = 1;
double Td7595978006;
Td7595978006 = v277589[Ti7595878007].d;
double Td7596078005;
Td7596078005 =  w77590 * Td7595978006;
double Td7596178003;
Td7596178003 = Td7595778004 + Td7596078005;
int Tu7558177994;
v177588[Ti7595578002].d = Td7596178003;
int Ti7596277995;
Ti7596277995 = 2;
int Ti7596378001;
Ti7596378001 = 2;
double Td7596477997;
Td7596477997 = v177588[Ti7596378001].d;
int Ti7596578000;
Ti7596578000 = 2;
double Td7596677999;
Td7596677999 = v277589[Ti7596578000].d;
double Td7596777998;
Td7596777998 =  w77590 * Td7596677999;
double Td7596877996;
Td7596877996 = Td7596477997 + Td7596777998;
v177588[Ti7596277995].d = Td7596877996;
return result;
}

int raytracing77591_fun(int nref77592, double energy77593, Value *env){
int result;
Value* Ta7583477991;
Ta7583477991 = viewpoint;
Value* Ta7583577992;
Ta7583577992 = vscan;
bool crashed_p77855;
crashed_p77855 = tracer77565_fun(Ta7583477991, Ta7583577992, NULL);
int Ti7583677957;
Ti7583677957 = 0;
int Tu7559477856;
if(crashed_p77855 == Ti7583677957){
int Ti7583777958;
Ti7583777958 = 0;
if(nref77592 == Ti7583777958){
Tu7559477856 = 1;
}
else{
Value* Ta7583877989;
Ta7583877989 = vscan;
Value* Ta7583977990;
Ta7583977990 = light;
double Td7584077988;
Td7584077988 = in_prod77584_fun(Ta7583877989, Ta7583977990, NULL);
double hl77959;
hl77959 = -Td7584077988;
double Td7584177960;
Td7584177960 = 0.000000;
if(hl77959 <= Td7584177960){
Tu7559477856 = 1;
}
else{
double Td7584277987;
Td7584277987 = fsqr77443_fun(hl77959, NULL);
double Td7584377986;
Td7584377986 =  Td7584277987 * hl77959;
double Td7584477982;
Td7584477982 =  Td7584377986 * energy77593;
Value* Ta7584577984;
Ta7584577984 = beam;
int Ti7584677985;
Ti7584677985 = 0;
double Td7584777983;
Td7584777983 = Ta7584577984[Ti7584677985].d;
double ihl77961;
ihl77961 =  Td7584477982 * Td7584777983;
Value* Ta7584877976;
Ta7584877976 = rgb;
int Ti7584977977;
Ti7584977977 = 0;
Value* Ta7585077980;
Ta7585077980 = rgb;
int Ti7585177981;
Ti7585177981 = 0;
double Td7585277979;
Td7585277979 = Ta7585077980[Ti7585177981].d;
double Td7585377978;
Td7585377978 = Td7585277979 + ihl77961;
int Tu7558477962;
Ta7584877976[Ti7584977977].d = Td7585377978;
Value* Ta7585477970;
Ta7585477970 = rgb;
int Ti7585577971;
Ti7585577971 = 1;
Value* Ta7585677974;
Ta7585677974 = rgb;
int Ti7585777975;
Ti7585777975 = 1;
double Td7585877973;
Td7585877973 = Ta7585677974[Ti7585777975].d;
double Td7585977972;
Td7585977972 = Td7585877973 + ihl77961;
int Tu7558377963;
Ta7585477970[Ti7585577971].d = Td7585977972;
Value* Ta7586077964;
Ta7586077964 = rgb;
int Ti7586177965;
Ti7586177965 = 2;
Value* Ta7586277968;
Ta7586277968 = rgb;
int Ti7586377969;
Ti7586377969 = 2;
double Td7586477967;
Td7586477967 = Ta7586277968[Ti7586377969].d;
double Td7586577966;
Td7586577966 = Td7586477967 + ihl77961;
Ta7586077964[Ti7586177965].d = Td7586577966;
}
}
}
else{
Tu7559477856 = 1;
}
int Ti7586677857;
Ti7586677857 = 0;
if(crashed_p77855 == Ti7586677857){
result = 1;
}
else{
Value* Ta7586777953;
Ta7586777953 = objects;
Value* Ta7586877955;
Ta7586877955 = crashed_object;
int Ti7586977956;
Ti7586977956 = 0;
int Ti7587077954;
Ti7587077954 = Ta7586877955[Ti7586977956].i;
int* cobj77858;
cobj77858 = Ta7586777953[Ti7587077954].a;
Value* Ta7587177952;
Ta7587177952 = crashed_point;
int Tu7559377859;
Tu7559377859 = get_nvector77578_fun(cobj77858, Ta7587177952, NULL);
int Ti7587277947;
Ti7587277947 = 0;
Value* Ta7587377950;
Ta7587377950 = or_net;
int Ti7587477951;
Ti7587477951 = 0;
Value* Ta7587577948;
Ta7587577948 = Ta7587377950[Ti7587477951].a;
Value* Ta7587677949;
Ta7587677949 = crashed_point;
bool Tb7587777936;
Tb7587777936 = shadow_check_one_or_matrix77552_fun(Ti7587277947, Ta7587577948, Ta7587677949, NULL);
int Ti7587877937;
Ti7587877937 = 0;
double bright77860;
if(Tb7587777936 == Ti7587877937){
Value* Ta7587977945;
Ta7587977945 = nvector;
Value* Ta7588077946;
Ta7588077946 = light;
double Td7588177944;
Td7588177944 = in_prod77584_fun(Ta7587977945, Ta7588077946, NULL);
double br77938;
br77938 = -Td7588177944;
double Td7588277942;
Td7588277942 = 0.000000;
double br177939;
if(Td7588277942 <= br77938){
double Td7588377943;
Td7588377943 = 0.200000;
br177939 = br77938 + Td7588377943;
}
else{
br177939 = 0.200000;
}
double Td7588477940;
Td7588477940 =  br177939 * energy77593;
double Td7588577941;
Td7588577941 = o_diffuse77469_fun(cobj77858, NULL);
bright77860 =  Td7588477940 * Td7588577941;
}
else{
bright77860 = 0.000000;
}
Value* Ta7588677935;
Ta7588677935 = crashed_point;
int Tu7559277861;
Tu7559277861 = utexture77581_fun(cobj77858, Ta7588677935, NULL);
Value* Ta7588777933;
Ta7588777933 = rgb;
Value* Ta7588877934;
Ta7588877934 = texture_color;
int Tu7559177862;
Tu7559177862 = accumulate_vec_mul77587_fun(Ta7588777933, Ta7588877934, bright77860, NULL);
int Ti7588977863;
Ti7588977863 = 4;
if(nref77592 <= Ti7588977863){
double Td7589077864;
Td7589077864 = 0.100000;
if(energy77593 <= Td7589077864){
result = 1;
}
else{
double Td7589177929;
Td7589177929 = -2.000000;
Value* Ta7589277931;
Ta7589277931 = vscan;
Value* Ta7589377932;
Ta7589377932 = nvector;
double Td7589477930;
Td7589477930 = in_prod77584_fun(Ta7589277931, Ta7589377932, NULL);
double w77865;
w77865 =  Td7589177929 * Td7589477930;
Value* Ta7589577927;
Ta7589577927 = vscan;
Value* Ta7589677928;
Ta7589677928 = nvector;
int Tu7559077866;
Tu7559077866 = accumulate_vec_mul77587_fun(Ta7589577927, Ta7589677928, w77865, NULL);
int m_surface77867;
m_surface77867 = o_reflectiontype77451_fun(cobj77858, NULL);
int Ti7589777868;
Ti7589777868 = 1;
if(m_surface77867 == Ti7589777868){
double Td7589877894;
Td7589877894 = 0.000000;
double Td7589977895;
Td7589977895 = o_hilight77471_fun(cobj77858, NULL);
if(Td7589877894 == Td7589977895){
result = 1;
}
else{
Value* Ta7590077925;
Ta7590077925 = vscan;
Value* Ta7590177926;
Ta7590177926 = light;
double Td7590277924;
Td7590277924 = in_prod77584_fun(Ta7590077925, Ta7590177926, NULL);
double hl77896;
hl77896 = -Td7590277924;
double Td7590377897;
Td7590377897 = 0.000000;
if(hl77896 <= Td7590377897){
result = 1;
}
else{
double Td7590477923;
Td7590477923 = fsqr77443_fun(hl77896, NULL);
double Td7590577922;
Td7590577922 = fsqr77443_fun(Td7590477923, NULL);
double Td7590677921;
Td7590677921 =  Td7590577922 * energy77593;
double Td7590777919;
Td7590777919 =  Td7590677921 * bright77860;
double Td7590877920;
Td7590877920 = o_hilight77471_fun(cobj77858, NULL);
double ihl77898;
ihl77898 =  Td7590777919 * Td7590877920;
Value* Ta7590977913;
Ta7590977913 = rgb;
int Ti7591077914;
Ti7591077914 = 0;
Value* Ta7591177917;
Ta7591177917 = rgb;
int Ti7591277918;
Ti7591277918 = 0;
double Td7591377916;
Td7591377916 = Ta7591177917[Ti7591277918].d;
double Td7591477915;
Td7591477915 = Td7591377916 + ihl77898;
int Tu7558677899;
Ta7590977913[Ti7591077914].d = Td7591477915;
Value* Ta7591577907;
Ta7591577907 = rgb;
int Ti7591677908;
Ti7591677908 = 1;
Value* Ta7591777911;
Ta7591777911 = rgb;
int Ti7591877912;
Ti7591877912 = 1;
double Td7591977910;
Td7591977910 = Ta7591777911[Ti7591877912].d;
double Td7592077909;
Td7592077909 = Td7591977910 + ihl77898;
int Tu7558577900;
Ta7591577907[Ti7591677908].d = Td7592077909;
Value* Ta7592177901;
Ta7592177901 = rgb;
int Ti7592277902;
Ti7592277902 = 2;
Value* Ta7592377905;
Ta7592377905 = rgb;
int Ti7592477906;
Ti7592477906 = 2;
double Td7592577904;
Td7592577904 = Ta7592377905[Ti7592477906].d;
double Td7592677903;
Td7592677903 = Td7592577904 + ihl77898;
Ta7592177901[Ti7592277902].d = Td7592677903;
}
}
}
else{
int Ti7592777869;
Ti7592777869 = 2;
if(m_surface77867 == Ti7592777869){
Value* Ta7592877889;
Ta7592877889 = viewpoint;
int Ti7592977890;
Ti7592977890 = 0;
Value* Ta7593077892;
Ta7593077892 = crashed_point;
int Ti7593177893;
Ti7593177893 = 0;
double Td7593277891;
Td7593277891 = Ta7593077892[Ti7593177893].d;
int Tu7558977870;
Ta7592877889[Ti7592977890].d = Td7593277891;
Value* Ta7593377884;
Ta7593377884 = viewpoint;
int Ti7593477885;
Ti7593477885 = 1;
Value* Ta7593577887;
Ta7593577887 = crashed_point;
int Ti7593677888;
Ti7593677888 = 1;
double Td7593777886;
Td7593777886 = Ta7593577887[Ti7593677888].d;
int Tu7558877871;
Ta7593377884[Ti7593477885].d = Td7593777886;
Value* Ta7593877879;
Ta7593877879 = viewpoint;
int Ti7593977880;
Ti7593977880 = 2;
Value* Ta7594077882;
Ta7594077882 = crashed_point;
int Ti7594177883;
Ti7594177883 = 2;
double Td7594277881;
Td7594277881 = Ta7594077882[Ti7594177883].d;
int Tu7558777872;
Ta7593877879[Ti7593977880].d = Td7594277881;
double Td7594377877;
Td7594377877 = 1.000000;
double Td7594477878;
Td7594477878 = o_diffuse77469_fun(cobj77858, NULL);
double Td7594577876;
Td7594577876 = Td7594377877 - Td7594477878;
double energy277873;
energy277873 =  energy77593 * Td7594577876;
int Ti7594677875;
Ti7594677875 = 1;
int Ti7594777874;
Ti7594777874 = nref77592 + Ti7594677875;
result = raytracing77591_fun(Ti7594777874, energy277873, NULL);
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

int write_rgb77594_fun(int Tu7559577595, Value *env){
int result;
Value* Ta7582277853;
Ta7582277853 = rgb;
int Ti7582377854;
Ti7582377854 = 0;
double Td7582477852;
Td7582477852 = Ta7582277853[Ti7582377854].d;
int red77835;
red77835 = (int) Td7582477852;
int Ti7582577851;
Ti7582577851 = 255;
int red77836;
if(red77835 <= Ti7582577851){
red77836 = red77835;
}
else{
red77836 = 255;
}
int Tu7559777837;
putchar(red77836);
Value* Ta7582677849;
Ta7582677849 = rgb;
int Ti7582777850;
Ti7582777850 = 1;
double Td7582877848;
Td7582877848 = Ta7582677849[Ti7582777850].d;
int green77838;
green77838 = (int) Td7582877848;
int Ti7582977847;
Ti7582977847 = 255;
int green77839;
if(green77838 <= Ti7582977847){
green77839 = green77838;
}
else{
green77839 = 255;
}
int Tu7559677840;
putchar(green77839);
Value* Ta7583077845;
Ta7583077845 = rgb;
int Ti7583177846;
Ti7583177846 = 2;
double Td7583277844;
Td7583277844 = Ta7583077845[Ti7583177846].d;
int blue77841;
blue77841 = (int) Td7583277844;
int Ti7583377843;
Ti7583377843 = 255;
int blue77842;
if(blue77841 <= Ti7583377843){
blue77842 = blue77841;
}
else{
blue77842 = 255;
}
putchar(blue77842);
return result;
}

int write_ppm_header77596_fun(int Tu7559877597, Value *env){
int result;
int Ti7580777834;
Ti7580777834 = 80;
int Tu7560677812;
putchar(Ti7580777834);
int Ti7580877832;
Ti7580877832 = 48;
int Ti7580977833;
Ti7580977833 = 6;
int Ti7581077831;
Ti7581077831 = Ti7580877832 + Ti7580977833;
int Tu7560577813;
putchar(Ti7581077831);
int Ti7581177830;
Ti7581177830 = 10;
int Tu7560477814;
putchar(Ti7581177830);
Value* Ta7581277828;
Ta7581277828 = size;
int Ti7581377829;
Ti7581377829 = 0;
int Ti7581477827;
Ti7581477827 = Ta7581277828[Ti7581377829].i;
int Tu7560377815;
printf("%d", Ti7581477827);
int Ti7581577826;
Ti7581577826 = 32;
int Tu7560277816;
putchar(Ti7581577826);
Value* Ta7581677824;
Ta7581677824 = size;
int Ti7581777825;
Ti7581777825 = 1;
int Ti7581877823;
Ti7581877823 = Ta7581677824[Ti7581777825].i;
int Tu7560177817;
printf("%d", Ti7581877823);
int Ti7581977822;
Ti7581977822 = 10;
int Tu7560077818;
putchar(Ti7581977822);
int Ti7582077821;
Ti7582077821 = 255;
int Tu7559977819;
printf("%d", Ti7582077821);
int Ti7582177820;
Ti7582177820 = 10;
putchar(Ti7582177820);
return result;
}

int scan_point77598_fun(int scanx77599, Value *env){
int result;
Value* Ta7571077810;
Ta7571077810 = size;
int Ti7571177811;
Ti7571177811 = 0;
int Ti7571277699;
Ti7571277699 = Ta7571077810[Ti7571177811].i;
if(Ti7571277699 <= scanx77599){
result = 1;
}
else{
double Td7571377806;
Td7571377806 = (double) scanx77599;
Value* Ta7571477808;
Ta7571477808 = scan_offset;
int Ti7571577809;
Ti7571577809 = 0;
double Td7571677807;
Td7571677807 = Ta7571477808[Ti7571577809].d;
double Td7571777802;
Td7571777802 = Td7571377806 - Td7571677807;
Value* Ta7571877804;
Ta7571877804 = scan_d;
int Ti7571977805;
Ti7571977805 = 0;
double Td7572077803;
Td7572077803 = Ta7571877804[Ti7571977805].d;
double sscanx77700;
sscanx77700 =  Td7571777802 * Td7572077803;
Value* Ta7572177792;
Ta7572177792 = vscan;
int Ti7572277793;
Ti7572277793 = 0;
Value* Ta7572377800;
Ta7572377800 = cos_v;
int Ti7572477801;
Ti7572477801 = 1;
double Td7572577799;
Td7572577799 = Ta7572377800[Ti7572477801].d;
double Td7572677795;
Td7572677795 =  sscanx77700 * Td7572577799;
Value* Ta7572777797;
Ta7572777797 = wscan;
int Ti7572877798;
Ti7572877798 = 0;
double Td7572977796;
Td7572977796 = Ta7572777797[Ti7572877798].d;
double Td7573077794;
Td7573077794 = Td7572677795 + Td7572977796;
int Tu7562077701;
Ta7572177792[Ti7572277793].d = Td7573077794;
Value* Ta7573177779;
Ta7573177779 = vscan;
int Ti7573277780;
Ti7573277780 = 1;
Value* Ta7573377790;
Ta7573377790 = scan_sscany;
int Ti7573477791;
Ti7573477791 = 0;
double Td7573577786;
Td7573577786 = Ta7573377790[Ti7573477791].d;
Value* Ta7573677788;
Ta7573677788 = cos_v;
int Ti7573777789;
Ti7573777789 = 0;
double Td7573877787;
Td7573877787 = Ta7573677788[Ti7573777789].d;
double Td7573977782;
Td7573977782 =  Td7573577786 * Td7573877787;
Value* Ta7574077784;
Ta7574077784 = vp;
int Ti7574177785;
Ti7574177785 = 1;
double Td7574277783;
Td7574277783 = Ta7574077784[Ti7574177785].d;
double Td7574377781;
Td7574377781 = Td7573977782 - Td7574277783;
int Tu7561977702;
Ta7573177779[Ti7573277780].d = Td7574377781;
Value* Ta7574477768;
Ta7574477768 = vscan;
int Ti7574577769;
Ti7574577769 = 2;
double Td7574677775;
Td7574677775 = -sscanx77700;
Value* Ta7574777777;
Ta7574777777 = sin_v;
int Ti7574877778;
Ti7574877778 = 1;
double Td7574977776;
Td7574977776 = Ta7574777777[Ti7574877778].d;
double Td7575077771;
Td7575077771 =  Td7574677775 * Td7574977776;
Value* Ta7575177773;
Ta7575177773 = wscan;
int Ti7575277774;
Ti7575277774 = 2;
double Td7575377772;
Td7575377772 = Ta7575177773[Ti7575277774].d;
double Td7575477770;
Td7575477770 = Td7575077771 + Td7575377772;
int Tu7561877703;
Ta7574477768[Ti7574577769].d = Td7575477770;
double Td7575577764;
Td7575577764 = fsqr77443_fun(sscanx77700, NULL);
Value* Ta7575677766;
Ta7575677766 = scan_met1;
int Ti7575777767;
Ti7575777767 = 0;
double Td7575877765;
Td7575877765 = Ta7575677766[Ti7575777767].d;
double Td7575977763;
Td7575977763 = Td7575577764 + Td7575877765;
double metric77704;
metric77704 = sqrt(Td7575977763);
Value* Ta7576077757;
Ta7576077757 = vscan;
int Ti7576177758;
Ti7576177758 = 0;
Value* Ta7576277761;
Ta7576277761 = vscan;
int Ti7576377762;
Ti7576377762 = 0;
double Td7576477760;
Td7576477760 = Ta7576277761[Ti7576377762].d;
double Td7576577759;
Td7576577759 = Td7576477760 / metric77704;
int Tu7561777705;
Ta7576077757[Ti7576177758].d = Td7576577759;
Value* Ta7576677751;
Ta7576677751 = vscan;
int Ti7576777752;
Ti7576777752 = 1;
Value* Ta7576877755;
Ta7576877755 = vscan;
int Ti7576977756;
Ti7576977756 = 1;
double Td7577077754;
Td7577077754 = Ta7576877755[Ti7576977756].d;
double Td7577177753;
Td7577177753 = Td7577077754 / metric77704;
int Tu7561677706;
Ta7576677751[Ti7576777752].d = Td7577177753;
Value* Ta7577277745;
Ta7577277745 = vscan;
int Ti7577377746;
Ti7577377746 = 2;
Value* Ta7577477749;
Ta7577477749 = vscan;
int Ti7577577750;
Ti7577577750 = 2;
double Td7577677748;
Td7577677748 = Ta7577477749[Ti7577577750].d;
double Td7577777747;
Td7577777747 = Td7577677748 / metric77704;
int Tu7561577707;
Ta7577277745[Ti7577377746].d = Td7577777747;
Value* Ta7577877740;
Ta7577877740 = viewpoint;
int Ti7577977741;
Ti7577977741 = 0;
Value* Ta7578077743;
Ta7578077743 = view;
int Ti7578177744;
Ti7578177744 = 0;
double Td7578277742;
Td7578277742 = Ta7578077743[Ti7578177744].d;
int Tu7561477708;
Ta7577877740[Ti7577977741].d = Td7578277742;
Value* Ta7578377735;
Ta7578377735 = viewpoint;
int Ti7578477736;
Ti7578477736 = 1;
Value* Ta7578577738;
Ta7578577738 = view;
int Ti7578677739;
Ti7578677739 = 1;
double Td7578777737;
Td7578777737 = Ta7578577738[Ti7578677739].d;
int Tu7561377709;
Ta7578377735[Ti7578477736].d = Td7578777737;
Value* Ta7578877730;
Ta7578877730 = viewpoint;
int Ti7578977731;
Ti7578977731 = 2;
Value* Ta7579077733;
Ta7579077733 = view;
int Ti7579177734;
Ti7579177734 = 2;
double Td7579277732;
Td7579277732 = Ta7579077733[Ti7579177734].d;
int Tu7561277710;
Ta7578877730[Ti7578977731].d = Td7579277732;
Value* Ta7579377727;
Ta7579377727 = rgb;
int Ti7579477728;
Ti7579477728 = 0;
double Td7579577729;
Td7579577729 = 0.000000;
int Tu7561177711;
Ta7579377727[Ti7579477728].d = Td7579577729;
Value* Ta7579677724;
Ta7579677724 = rgb;
int Ti7579777725;
Ti7579777725 = 1;
double Td7579877726;
Td7579877726 = 0.000000;
int Tu7561077712;
Ta7579677724[Ti7579777725].d = Td7579877726;
Value* Ta7579977721;
Ta7579977721 = rgb;
int Ti7580077722;
Ti7580077722 = 2;
double Td7580177723;
Td7580177723 = 0.000000;
int Tu7560977713;
Ta7579977721[Ti7580077722].d = Td7580177723;
int Ti7580277719;
Ti7580277719 = 0;
double Td7580377720;
Td7580377720 = 1.000000;
int Tu7560877714;
Tu7560877714 = raytracing77591_fun(Ti7580277719, Td7580377720, NULL);
int Tu7580477718;
Tu7580477718 = 1;
int Tu7560777715;
Tu7560777715 = write_rgb77594_fun(Tu7580477718, NULL);
int Ti7580577717;
Ti7580577717 = 1;
int Ti7580677716;
Ti7580677716 = scanx77599 + Ti7580577717;
result = scan_point77598_fun(Ti7580677716, NULL);
}
return result;
}

int scan_line77600_fun(int scany77601, Value *env){
int result;
Value* Ta7565877697;
Ta7565877697 = size;
int Ti7565977698;
Ti7565977698 = 0;
int Ti7566077640;
Ti7566077640 = Ta7565877697[Ti7565977698].i;
if(Ti7566077640 <= scany77601){
result = 1;
}
else{
Value* Ta7566177684;
Ta7566177684 = scan_sscany;
int Ti7566277685;
Ti7566277685 = 0;
Value* Ta7566377695;
Ta7566377695 = scan_offset;
int Ti7566477696;
Ti7566477696 = 0;
double Td7566577693;
Td7566577693 = Ta7566377695[Ti7566477696].d;
double Td7566677694;
Td7566677694 = 1.000000;
double Td7566777691;
Td7566777691 = Td7566577693 - Td7566677694;
double Td7566877692;
Td7566877692 = (double) scany77601;
double t77687;
t77687 = Td7566777691 - Td7566877692;
Value* Ta7566977689;
Ta7566977689 = scan_d;
int Ti7567077690;
Ti7567077690 = 0;
double Td7567177688;
Td7567177688 = Ta7566977689[Ti7567077690].d;
double Td7567277686;
Td7567277686 =  Td7567177688 * t77687;
int Tu7562577641;
Ta7566177684[Ti7566277685].d = Td7567277686;
Value* Ta7567377676;
Ta7567377676 = scan_met1;
int Ti7567477677;
Ti7567477677 = 0;
Value* Ta7567577682;
Ta7567577682 = scan_sscany;
int Ti7567677683;
Ti7567677683 = 0;
double Td7567777681;
Td7567777681 = Ta7567577682[Ti7567677683].d;
double Td7567877679;
Td7567877679 = fsqr77443_fun(Td7567777681, NULL);
double Td7567977680;
Td7567977680 = 40000.000000;
double Td7568077678;
Td7568077678 = Td7567877679 + Td7567977680;
int Tu7562477642;
Ta7567377676[Ti7567477677].d = Td7568077678;
Value* Ta7568177674;
Ta7568177674 = scan_sscany;
int Ti7568277675;
Ti7568277675 = 0;
double Td7568377670;
Td7568377670 = Ta7568177674[Ti7568277675].d;
Value* Ta7568477672;
Ta7568477672 = sin_v;
int Ti7568577673;
Ti7568577673 = 0;
double Td7568677671;
Td7568677671 = Ta7568477672[Ti7568577673].d;
double t177643;
t177643 =  Td7568377670 * Td7568677671;
Value* Ta7568777660;
Ta7568777660 = wscan;
int Ti7568877661;
Ti7568877661 = 0;
Value* Ta7568977668;
Ta7568977668 = sin_v;
int Ti7569077669;
Ti7569077669 = 1;
double Td7569177667;
Td7569177667 = Ta7568977668[Ti7569077669].d;
double Td7569277663;
Td7569277663 =  t177643 * Td7569177667;
Value* Ta7569377665;
Ta7569377665 = vp;
int Ti7569477666;
Ti7569477666 = 0;
double Td7569577664;
Td7569577664 = Ta7569377665[Ti7569477666].d;
double Td7569677662;
Td7569677662 = Td7569277663 - Td7569577664;
int Tu7562377644;
Ta7568777660[Ti7568877661].d = Td7569677662;
Value* Ta7569777650;
Ta7569777650 = wscan;
int Ti7569877651;
Ti7569877651 = 2;
Value* Ta7569977658;
Ta7569977658 = cos_v;
int Ti7570077659;
Ti7570077659 = 1;
double Td7570177657;
Td7570177657 = Ta7569977658[Ti7570077659].d;
double Td7570277653;
Td7570277653 =  t177643 * Td7570177657;
Value* Ta7570377655;
Ta7570377655 = vp;
int Ti7570477656;
Ti7570477656 = 2;
double Td7570577654;
Td7570577654 = Ta7570377655[Ti7570477656].d;
double Td7570677652;
Td7570677652 = Td7570277653 - Td7570577654;
int Tu7562277645;
Ta7569777650[Ti7569877651].d = Td7570677652;
int Ti7570777649;
Ti7570777649 = 0;
int Tu7562177646;
Tu7562177646 = scan_point77598_fun(Ti7570777649, NULL);
int Ti7570877648;
Ti7570877648 = 1;
int Ti7570977647;
Ti7570977647 = scany77601 + Ti7570877648;
result = scan_line77600_fun(Ti7570977647, NULL);
}
return result;
}

int scan_start77602_fun(int Tu7562677603, Value *env){
int result;
int Tu7564577639;
Tu7564577639 = 1;
int Tu7562977623;
Tu7562977623 = write_ppm_header77596_fun(Tu7564577639, NULL);
Value* Ta7564677637;
Ta7564677637 = size;
int Ti7564777638;
Ti7564777638 = 0;
int Ti7564877636;
Ti7564877636 = Ta7564677637[Ti7564777638].i;
double sizex77624;
sizex77624 = (double) Ti7564877636;
Value* Ta7564977632;
Ta7564977632 = scan_d;
int Ti7565077633;
Ti7565077633 = 0;
double Td7565177635;
Td7565177635 = 128.000000;
double Td7565277634;
Td7565277634 = Td7565177635 / sizex77624;
int Tu7562877625;
Ta7564977632[Ti7565077633].d = Td7565277634;
Value* Ta7565377628;
Ta7565377628 = scan_offset;
int Ti7565477629;
Ti7565477629 = 0;
double Td7565577631;
Td7565577631 = 2.000000;
double Td7565677630;
Td7565677630 = sizex77624 / Td7565577631;
int Tu7562777626;
Ta7565377628[Ti7565477629].d = Td7565677630;
int Ti7565777627;
Ti7565777627 = 0;
result = scan_line77600_fun(Ti7565777627, NULL);
return result;
}

int rt77604_fun(int size_x77605, int size_y77606, bool debug_p77607, Value *env){
int result;
Value* Ta7563777621;
Ta7563777621 = size;
int Ti7563877622;
Ti7563877622 = 0;
int Tu7563377611;
Ta7563777621[Ti7563877622].i = size_x77605;
Value* Ta7563977619;
Ta7563977619 = size;
int Ti7564077620;
Ti7564077620 = 1;
int Tu7563277612;
Ta7563977619[Ti7564077620].i = size_y77606;
Value* Ta7564177617;
Ta7564177617 = dbg;
int Ti7564277618;
Ti7564277618 = 0;
int Tu7563177613;
Ta7564177617[Ti7564277618].b = debug_p77607;
int Tu7564377616;
Tu7564377616 = 1;
int Tu7563077614;
Tu7563077614 = read_parameter77506_fun(Tu7564377616, NULL);
int Tu7564477615;
Tu7564477615 = 1;
result = scan_start77602_fun(Tu7564477615, NULL);
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
int Ti7563477608;
Ti7563477608 = 768;
int Ti7563577609;
Ti7563577609 = 768;
int Ti7563677610;
Ti7563677610 = 0;
ans = rt77604_fun(Ti7563477608, Ti7563577609, Ti7563677610, NULL);
return ans;
}
