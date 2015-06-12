#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x46532, int size_y46533, bool debug_p46534, Value *env);
typedef int fun_int_int_double_Value(int nref46519, double energy46520, Value *env);
typedef int fun_int_array_array_double_Value(Value* v146515, Value* v246516, double w46517, Value *env);
typedef double fun_double_array_array_Value(Value* v146512, Value* v246513, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint46493, Value* vscan46494, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs46484, Value* and_group46485, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs46472, Value* and_group46473, Value* p46474, Value *env);
typedef bool fun_bool_int_array_Value(int ofs46469, Value* iand46470, Value *env);
typedef int fun_int_int_array_array_Value(int index46457, Value* l46458, Value* p46459, Value *env);
typedef double fun_double_tuple_array_Value(int* m46442, Value* v46443, Value *env);
typedef int fun_int_tuple_array_Value(int* m46436, Value* l46437, Value *env);
typedef Value* fun_array_int_Value(int length46430, Value *env);
typedef bool fun_bool_int_Value(int n46422, Value *env);
typedef int fun_int_int_Value(int Tu4439346420, Value *env);
typedef int fun_int_array_bool_Value(Value* v46413, bool inv46414, Value *env);
typedef double fun_double_tuple_Value(int* m46385, Value *env);
typedef bool fun_bool_tuple_Value(int* m46381, Value *env);
typedef int fun_int_tuple_Value(int* m46375, Value *env);
typedef double fun_double_double_Value(double x46371, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x46368, bool y46369, Value *env);

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

bool xor46367_fun(bool x46368, bool y46369, Value *env){
    bool result;
    int Ti4636548828;
    Ti4636548828 = 0;
    if(x46368 == Ti4636548828){
	result = y46369;
    }
    else{
	int Ti4636648829;
	Ti4636648829 = 0;
	if(y46369 == Ti4636648829){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    return result;
}

double fsqr46370_fun(double x46371, Value *env){
    double result;
    result =  x46371 * x46371;
    return result;
}

double fhalf46372_fun(double x46373, Value *env){
    double result;
    double Td4636448827;
    Td4636448827 = 2.000000;
    result = x46373 / Td4636448827;
    return result;
}

int o_texturetype46374_fun(int* m46375, Value *env){
    int result;
    int m_tex48817 = m46375[0];
    int xm_shape48818 = m46375[1];
    int xm_surface48819 = m46375[2];
    int xm_isrot48820 = m46375[3];
    Value* xm_abc48821 = m46375[4];
    Value* xm_xyz48822 = m46375[5];
    bool xm_invert48823 = m46375[6];
    Value* xm_surfparams48824 = m46375[7];
    Value* xm_color48825 = m46375[8];
    Value* xm_rot12348826 = m46375[9];
    result = m_tex48817;
    return result;
}

int o_form46376_fun(int* m46377, Value *env){
    int result;
    int xm_tex48807 = m46377[0];
    int m_shape48808 = m46377[1];
    int xm_surface48809 = m46377[2];
    int xm_isrot48810 = m46377[3];
    Value* xm_abc48811 = m46377[4];
    Value* xm_xyz48812 = m46377[5];
    bool xm_invert48813 = m46377[6];
    Value* xm_surfparams48814 = m46377[7];
    Value* xm_color48815 = m46377[8];
    Value* xm_rot12348816 = m46377[9];
    result = m_shape48808;
    return result;
}

int o_reflectiontype46378_fun(int* m46379, Value *env){
    int result;
    int xm_tex48797 = m46379[0];
    int xm_shape48798 = m46379[1];
    int m_surface48799 = m46379[2];
    int xm_isrot48800 = m46379[3];
    Value* xm_abc48801 = m46379[4];
    Value* xm_xyz48802 = m46379[5];
    bool xm_invert48803 = m46379[6];
    Value* xm_surfparams48804 = m46379[7];
    Value* xm_color48805 = m46379[8];
    Value* xm_rot12348806 = m46379[9];
    result = m_surface48799;
    return result;
}

bool o_isinvert46380_fun(int* m46381, Value *env){
    bool result;
    int m_tex48787 = m46381[0];
    int m_shape48788 = m46381[1];
    int m_surface48789 = m46381[2];
    int m_isrot48790 = m46381[3];
    Value* xm_abc48791 = m46381[4];
    Value* xm_xyz48792 = m46381[5];
    bool m_invert48793 = m46381[6];
    Value* xm_surfparams48794 = m46381[7];
    Value* xm_color48795 = m46381[8];
    Value* xm_rot12348796 = m46381[9];
    result = m_invert48793;
    return result;
}

int o_isrot46382_fun(int* m46383, Value *env){
    int result;
    int xm_tex48777 = m46383[0];
    int xm_shape48778 = m46383[1];
    int xm_surface48779 = m46383[2];
    int m_isrot48780 = m46383[3];
    Value* xm_abc48781 = m46383[4];
    Value* xm_xyz48782 = m46383[5];
    bool xm_invert48783 = m46383[6];
    Value* xm_surfparams48784 = m46383[7];
    Value* xm_color48785 = m46383[8];
    Value* xm_rot12348786 = m46383[9];
    result = m_isrot48780;
    return result;
}

double o_param_a46384_fun(int* m46385, Value *env){
    double result;
    int xm_tex48766 = m46385[0];
    int xm_shape48767 = m46385[1];
    int xm_surface48768 = m46385[2];
    int xm_isrot48769 = m46385[3];
    Value* m_abc48770 = m46385[4];
    Value* xm_xyz48771 = m46385[5];
    bool xm_invert48772 = m46385[6];
    Value* xm_surfparams48773 = m46385[7];
    Value* xm_color48774 = m46385[8];
    Value* xm_rot12348775 = m46385[9];
    int Ti4636348776;
    Ti4636348776 = 0;
    result = m_abc48770[Ti4636348776].d;
    return result;
}

double o_param_b46386_fun(int* m46387, Value *env){
    double result;
    int xm_tex48755 = m46387[0];
    int xm_shape48756 = m46387[1];
    int xm_surface48757 = m46387[2];
    int xm_isrot48758 = m46387[3];
    Value* m_abc48759 = m46387[4];
    Value* xm_xyz48760 = m46387[5];
    bool xm_invert48761 = m46387[6];
    Value* xm_surfparams48762 = m46387[7];
    Value* xm_color48763 = m46387[8];
    Value* xm_rot12348764 = m46387[9];
    int Ti4636248765;
    Ti4636248765 = 1;
    result = m_abc48759[Ti4636248765].d;
    return result;
}

double o_param_c46388_fun(int* m46389, Value *env){
    double result;
    int xm_tex48744 = m46389[0];
    int xm_shape48745 = m46389[1];
    int xm_surface48746 = m46389[2];
    int xm_isrot48747 = m46389[3];
    Value* m_abc48748 = m46389[4];
    Value* xm_xyz48749 = m46389[5];
    bool xm_invert48750 = m46389[6];
    Value* xm_surfparams48751 = m46389[7];
    Value* xm_color48752 = m46389[8];
    Value* xm_rot12348753 = m46389[9];
    int Ti4636148754;
    Ti4636148754 = 2;
    result = m_abc48748[Ti4636148754].d;
    return result;
}

double o_param_x46390_fun(int* m46391, Value *env){
    double result;
    int xm_tex48733 = m46391[0];
    int xm_shape48734 = m46391[1];
    int xm_surface48735 = m46391[2];
    int xm_isrot48736 = m46391[3];
    Value* xm_abc48737 = m46391[4];
    Value* m_xyz48738 = m46391[5];
    bool xm_invert48739 = m46391[6];
    Value* xm_surfparams48740 = m46391[7];
    Value* xm_color48741 = m46391[8];
    Value* xm_rot12348742 = m46391[9];
    int Ti4636048743;
    Ti4636048743 = 0;
    result = m_xyz48738[Ti4636048743].d;
    return result;
}

double o_param_y46392_fun(int* m46393, Value *env){
    double result;
    int xm_tex48722 = m46393[0];
    int xm_shape48723 = m46393[1];
    int xm_surface48724 = m46393[2];
    int xm_isrot48725 = m46393[3];
    Value* xm_abc48726 = m46393[4];
    Value* m_xyz48727 = m46393[5];
    bool xm_invert48728 = m46393[6];
    Value* xm_surfparams48729 = m46393[7];
    Value* xm_color48730 = m46393[8];
    Value* xm_rot12348731 = m46393[9];
    int Ti4635948732;
    Ti4635948732 = 1;
    result = m_xyz48727[Ti4635948732].d;
    return result;
}

double o_param_z46394_fun(int* m46395, Value *env){
    double result;
    int xm_tex48711 = m46395[0];
    int xm_shape48712 = m46395[1];
    int xm_surface48713 = m46395[2];
    int xm_isrot48714 = m46395[3];
    Value* xm_abc48715 = m46395[4];
    Value* m_xyz48716 = m46395[5];
    bool xm_invert48717 = m46395[6];
    Value* xm_surfparams48718 = m46395[7];
    Value* xm_color48719 = m46395[8];
    Value* xm_rot12348720 = m46395[9];
    int Ti4635848721;
    Ti4635848721 = 2;
    result = m_xyz48716[Ti4635848721].d;
    return result;
}

double o_diffuse46396_fun(int* m46397, Value *env){
    double result;
    int xm_tex48700 = m46397[0];
    int xm_shape48701 = m46397[1];
    int xm_surface48702 = m46397[2];
    int xm_isrot48703 = m46397[3];
    Value* xm_abc48704 = m46397[4];
    Value* xm_xyz48705 = m46397[5];
    bool xm_invert48706 = m46397[6];
    Value* m_surfparams48707 = m46397[7];
    Value* xm_color48708 = m46397[8];
    Value* xm_rot12348709 = m46397[9];
    int Ti4635748710;
    Ti4635748710 = 0;
    result = m_surfparams48707[Ti4635748710].d;
    return result;
}

double o_hilight46398_fun(int* m46399, Value *env){
    double result;
    int xm_tex48689 = m46399[0];
    int xm_shape48690 = m46399[1];
    int xm_surface48691 = m46399[2];
    int xm_isrot48692 = m46399[3];
    Value* xm_abc48693 = m46399[4];
    Value* xm_xyz48694 = m46399[5];
    bool xm_invert48695 = m46399[6];
    Value* m_surfparams48696 = m46399[7];
    Value* xm_color48697 = m46399[8];
    Value* xm_rot12348698 = m46399[9];
    int Ti4635648699;
    Ti4635648699 = 1;
    result = m_surfparams48696[Ti4635648699].d;
    return result;
}

double o_color_red46400_fun(int* m46401, Value *env){
    double result;
    int xm_tex48678 = m46401[0];
    int xm_shape48679 = m46401[1];
    int m_surface48680 = m46401[2];
    int xm_isrot48681 = m46401[3];
    Value* xm_abc48682 = m46401[4];
    Value* xm_xyz48683 = m46401[5];
    bool xm_invert48684 = m46401[6];
    Value* xm_surfparams48685 = m46401[7];
    Value* m_color48686 = m46401[8];
    Value* xm_rot12348687 = m46401[9];
    int Ti4635548688;
    Ti4635548688 = 0;
    result = m_color48686[Ti4635548688].d;
    return result;
}

double o_color_green46402_fun(int* m46403, Value *env){
    double result;
    int xm_tex48667 = m46403[0];
    int xm_shape48668 = m46403[1];
    int m_surface48669 = m46403[2];
    int xm_isrot48670 = m46403[3];
    Value* xm_abc48671 = m46403[4];
    Value* xm_xyz48672 = m46403[5];
    bool xm_invert48673 = m46403[6];
    Value* xm_surfparams48674 = m46403[7];
    Value* m_color48675 = m46403[8];
    Value* xm_rot12348676 = m46403[9];
    int Ti4635448677;
    Ti4635448677 = 1;
    result = m_color48675[Ti4635448677].d;
    return result;
}

double o_color_blue46404_fun(int* m46405, Value *env){
    double result;
    int xm_tex48656 = m46405[0];
    int xm_shape48657 = m46405[1];
    int m_surface48658 = m46405[2];
    int xm_isrot48659 = m46405[3];
    Value* xm_abc48660 = m46405[4];
    Value* xm_xyz48661 = m46405[5];
    bool xm_invert48662 = m46405[6];
    Value* xm_surfparams48663 = m46405[7];
    Value* m_color48664 = m46405[8];
    Value* xm_rot12348665 = m46405[9];
    int Ti4635348666;
    Ti4635348666 = 2;
    result = m_color48664[Ti4635348666].d;
    return result;
}

double o_param_r146406_fun(int* m46407, Value *env){
    double result;
    int xm_tex48645 = m46407[0];
    int xm_shape48646 = m46407[1];
    int xm_surface48647 = m46407[2];
    int xm_isrot48648 = m46407[3];
    Value* xm_abc48649 = m46407[4];
    Value* xm_xyz48650 = m46407[5];
    bool xm_invert48651 = m46407[6];
    Value* xm_surfparams48652 = m46407[7];
    Value* xm_color48653 = m46407[8];
    Value* m_rot12348654 = m46407[9];
    int Ti4635248655;
    Ti4635248655 = 0;
    result = m_rot12348654[Ti4635248655].d;
    return result;
}

double o_param_r246408_fun(int* m46409, Value *env){
    double result;
    int xm_tex48634 = m46409[0];
    int xm_shape48635 = m46409[1];
    int xm_surface48636 = m46409[2];
    int xm_isrot48637 = m46409[3];
    Value* xm_abc48638 = m46409[4];
    Value* xm_xyz48639 = m46409[5];
    bool xm_invert48640 = m46409[6];
    Value* xm_surfparams48641 = m46409[7];
    Value* xm_color48642 = m46409[8];
    Value* m_rot12348643 = m46409[9];
    int Ti4635148644;
    Ti4635148644 = 1;
    result = m_rot12348643[Ti4635148644].d;
    return result;
}

double o_param_r346410_fun(int* m46411, Value *env){
    double result;
    int xm_tex48623 = m46411[0];
    int xm_shape48624 = m46411[1];
    int xm_surface48625 = m46411[2];
    int xm_isrot48626 = m46411[3];
    Value* xm_abc48627 = m46411[4];
    Value* xm_xyz48628 = m46411[5];
    bool xm_invert48629 = m46411[6];
    Value* xm_surfparams48630 = m46411[7];
    Value* xm_color48631 = m46411[8];
    Value* m_rot12348632 = m46411[9];
    int Ti4635048633;
    Ti4635048633 = 2;
    result = m_rot12348632[Ti4635048633].d;
    return result;
}

int normalize_vector46412_fun(Value* v46413, bool inv46414, Value *env){
    int result;
    int Ti4632648622;
    Ti4632648622 = 0;
    double Td4632748621;
    Td4632748621 = v46413[Ti4632648622].d;
    double Td4632848617;
    Td4632848617 = fsqr46370_fun(Td4632748621, NULL);
    int Ti4632948620;
    Ti4632948620 = 1;
    double Td4633048619;
    Td4633048619 = v46413[Ti4632948620].d;
    double Td4633148618;
    Td4633148618 = fsqr46370_fun(Td4633048619, NULL);
    double Td4633248613;
    Td4633248613 = Td4632848617 + Td4633148618;
    int Ti4633348616;
    Ti4633348616 = 2;
    double Td4633448615;
    Td4633448615 = v46413[Ti4633348616].d;
    double Td4633548614;
    Td4633548614 = fsqr46370_fun(Td4633448615, NULL);
    double Td4633648612;
    Td4633648612 = Td4633248613 + Td4633548614;
    double n048595;
    n048595 = sqrt(Td4633648612);
    int Ti4633748611;
    Ti4633748611 = 0;
    double n48596;
    if(inv46414 == Ti4633748611){
	n48596 = n048595;
    }
    else{
	n48596 = -n048595;
    }
    int Ti4633848607;
    Ti4633848607 = 0;
    int Ti4633948610;
    Ti4633948610 = 0;
    double Td4634048609;
    Td4634048609 = v46413[Ti4633948610].d;
    double Td4634148608;
    Td4634148608 = Td4634048609 / n48596;
    int Tu4439248597;
    v46413[Ti4633848607].d = Td4634148608;
    int Ti4634248603;
    Ti4634248603 = 1;
    int Ti4634348606;
    Ti4634348606 = 1;
    double Td4634448605;
    Td4634448605 = v46413[Ti4634348606].d;
    double Td4634548604;
    Td4634548604 = Td4634448605 / n48596;
    int Tu4439148598;
    v46413[Ti4634248603].d = Td4634548604;
    int Ti4634648599;
    Ti4634648599 = 2;
    int Ti4634748602;
    Ti4634748602 = 2;
    double Td4634848601;
    Td4634848601 = v46413[Ti4634748602].d;
    double Td4634948600;
    Td4634948600 = Td4634848601 / n48596;
    v46413[Ti4634648599].d = Td4634948600;
    return result;
}

double sgn46415_fun(double x46416, Value *env){
    double result;
    double Td4632548594;
    Td4632548594 = 0.000000;
    if(x46416 <= Td4632548594){
	result = -1.000000;
    }
    else{
	result = 1.000000;
    }
    return result;
}

double rad46417_fun(double x46418, Value *env){
    double result;
    double Td4632448593;
    Td4632448593 = 0.017453;
    result =  x46418 * Td4632448593;
    return result;
}

int read_environ46419_fun(int Tu4439346420, Value *env){
    int result;
    Value* Ta4622148589;
    Ta4622148589 = screen;
    int Ti4622248590;
    Ti4622248590 = 0;
    int Tu4622348592;
    Tu4622348592 = 1;
    double Td4622448591;
    printf("Enter a float: ");
    scanf("%d\n", &Td4622448591);
    int Tu4440948465;
    Ta4622148589[Ti4622248590].d = Td4622448591;
    Value* Ta4622548585;
    Ta4622548585 = screen;
    int Ti4622648586;
    Ti4622648586 = 1;
    int Tu4622748588;
    Tu4622748588 = 1;
    double Td4622848587;
    printf("Enter a float: ");
    scanf("%d\n", &Td4622848587);
    int Tu4440848466;
    Ta4622548585[Ti4622648586].d = Td4622848587;
    Value* Ta4622948581;
    Ta4622948581 = screen;
    int Ti4623048582;
    Ti4623048582 = 2;
    int Tu4623148584;
    Tu4623148584 = 1;
    double Td4623248583;
    printf("Enter a float: ");
    scanf("%d\n", &Td4623248583);
    int Tu4440748467;
    Ta4622948581[Ti4623048582].d = Td4623248583;
    int Tu4623348580;
    Tu4623348580 = 1;
    double Td4623448579;
    printf("Enter a float: ");
    scanf("%d\n", &Td4623448579);
    double v148468;
    v148468 = rad46417_fun(Td4623448579, NULL);
    Value* Ta4623548576;
    Ta4623548576 = cos_v;
    int Ti4623648577;
    Ti4623648577 = 0;
    double Td4623748578;
    Td4623748578 = cos(v148468);
    int Tu4440648469;
    Ta4623548576[Ti4623648577].d = Td4623748578;
    Value* Ta4623848573;
    Ta4623848573 = sin_v;
    int Ti4623948574;
    Ti4623948574 = 0;
    double Td4624048575;
    Td4624048575 = sin(v148468);
    int Tu4440548470;
    Ta4623848573[Ti4623948574].d = Td4624048575;
    int Tu4624148572;
    Tu4624148572 = 1;
    double Td4624248571;
    printf("Enter a float: ");
    scanf("%d\n", &Td4624248571);
    double v248471;
    v248471 = rad46417_fun(Td4624248571, NULL);
    Value* Ta4624348568;
    Ta4624348568 = cos_v;
    int Ti4624448569;
    Ti4624448569 = 1;
    double Td4624548570;
    Td4624548570 = cos(v248471);
    int Tu4440448472;
    Ta4624348568[Ti4624448569].d = Td4624548570;
    Value* Ta4624648565;
    Ta4624648565 = sin_v;
    int Ti4624748566;
    Ti4624748566 = 1;
    double Td4624848567;
    Td4624848567 = sin(v248471);
    int Tu4440348473;
    Ta4624648565[Ti4624748566].d = Td4624848567;
    int Tu4624948564;
    Tu4624948564 = 1;
    double nl48474;
    printf("Enter a float: ");
    scanf("%d\n", &nl48474);
    int Tu4625048563;
    Tu4625048563 = 1;
    double Td4625148562;
    printf("Enter a float: ");
    scanf("%d\n", &Td4625148562);
    double l148475;
    l148475 = rad46417_fun(Td4625148562, NULL);
    double sl148476;
    sl148476 = sin(l148475);
    Value* Ta4625248559;
    Ta4625248559 = light;
    int Ti4625348560;
    Ti4625348560 = 1;
    double Td4625448561;
    Td4625448561 = -sl148476;
    int Tu4440248477;
    Ta4625248559[Ti4625348560].d = Td4625448561;
    int Tu4625548558;
    Tu4625548558 = 1;
    double Td4625648557;
    printf("Enter a float: ");
    scanf("%d\n", &Td4625648557);
    double l248478;
    l248478 = rad46417_fun(Td4625648557, NULL);
    double cl148479;
    cl148479 = cos(l148475);
    double sl248480;
    sl248480 = sin(l248478);
    Value* Ta4625748554;
    Ta4625748554 = light;
    int Ti4625848555;
    Ti4625848555 = 0;
    double Td4625948556;
    Td4625948556 =  cl148479 * sl248480;
    int Tu4440148481;
    Ta4625748554[Ti4625848555].d = Td4625948556;
    double cl248482;
    cl248482 = cos(l248478);
    Value* Ta4626048551;
    Ta4626048551 = light;
    int Ti4626148552;
    Ti4626148552 = 2;
    double Td4626248553;
    Td4626248553 =  cl148479 * cl248482;
    int Tu4440048483;
    Ta4626048551[Ti4626148552].d = Td4626248553;
    Value* Ta4626348547;
    Ta4626348547 = beam;
    int Ti4626448548;
    Ti4626448548 = 0;
    int Tu4626548550;
    Tu4626548550 = 1;
    double Td4626648549;
    printf("Enter a float: ");
    scanf("%d\n", &Td4626648549);
    int Tu4439948484;
    Ta4626348547[Ti4626448548].d = Td4626648549;
    Value* Ta4626748536;
    Ta4626748536 = vp;
    int Ti4626848537;
    Ti4626848537 = 0;
    Value* Ta4626948545;
    Ta4626948545 = cos_v;
    int Ti4627048546;
    Ti4627048546 = 0;
    double Td4627148541;
    Td4627148541 = Ta4626948545[Ti4627048546].d;
    Value* Ta4627248543;
    Ta4627248543 = sin_v;
    int Ti4627348544;
    Ti4627348544 = 1;
    double Td4627448542;
    Td4627448542 = Ta4627248543[Ti4627348544].d;
    double Td4627548539;
    Td4627548539 =  Td4627148541 * Td4627448542;
    double Td4627648540;
    Td4627648540 = -200.000000;
    double Td4627748538;
    Td4627748538 =  Td4627548539 * Td4627648540;
    int Tu4439848485;
    Ta4626748536[Ti4626848537].d = Td4627748538;
    Value* Ta4627848528;
    Ta4627848528 = vp;
    int Ti4627948529;
    Ti4627948529 = 1;
    Value* Ta4628048534;
    Ta4628048534 = sin_v;
    int Ti4628148535;
    Ti4628148535 = 0;
    double Td4628248533;
    Td4628248533 = Ta4628048534[Ti4628148535].d;
    double Td4628348531;
    Td4628348531 = -Td4628248533;
    double Td4628448532;
    Td4628448532 = -200.000000;
    double Td4628548530;
    Td4628548530 =  Td4628348531 * Td4628448532;
    int Tu4439748486;
    Ta4627848528[Ti4627948529].d = Td4628548530;
    Value* Ta4628648517;
    Ta4628648517 = vp;
    int Ti4628748518;
    Ti4628748518 = 2;
    Value* Ta4628848526;
    Ta4628848526 = cos_v;
    int Ti4628948527;
    Ti4628948527 = 0;
    double Td4629048522;
    Td4629048522 = Ta4628848526[Ti4628948527].d;
    Value* Ta4629148524;
    Ta4629148524 = cos_v;
    int Ti4629248525;
    Ti4629248525 = 1;
    double Td4629348523;
    Td4629348523 = Ta4629148524[Ti4629248525].d;
    double Td4629448520;
    Td4629448520 =  Td4629048522 * Td4629348523;
    double Td4629548521;
    Td4629548521 = -200.000000;
    double Td4629648519;
    Td4629648519 =  Td4629448520 * Td4629548521;
    int Tu4439648487;
    Ta4628648517[Ti4628748518].d = Td4629648519;
    Value* Ta4629748508;
    Ta4629748508 = view;
    int Ti4629848509;
    Ti4629848509 = 0;
    Value* Ta4629948515;
    Ta4629948515 = vp;
    int Ti4630048516;
    Ti4630048516 = 0;
    double Td4630148511;
    Td4630148511 = Ta4629948515[Ti4630048516].d;
    Value* Ta4630248513;
    Ta4630248513 = screen;
    int Ti4630348514;
    Ti4630348514 = 0;
    double Td4630448512;
    Td4630448512 = Ta4630248513[Ti4630348514].d;
    double Td4630548510;
    Td4630548510 = Td4630148511 + Td4630448512;
    int Tu4439548488;
    Ta4629748508[Ti4629848509].d = Td4630548510;
    Value* Ta4630648499;
    Ta4630648499 = view;
    int Ti4630748500;
    Ti4630748500 = 1;
    Value* Ta4630848506;
    Ta4630848506 = vp;
    int Ti4630948507;
    Ti4630948507 = 1;
    double Td4631048502;
    Td4631048502 = Ta4630848506[Ti4630948507].d;
    Value* Ta4631148504;
    Ta4631148504 = screen;
    int Ti4631248505;
    Ti4631248505 = 1;
    double Td4631348503;
    Td4631348503 = Ta4631148504[Ti4631248505].d;
    double Td4631448501;
    Td4631448501 = Td4631048502 + Td4631348503;
    int Tu4439448489;
    Ta4630648499[Ti4630748500].d = Td4631448501;
    Value* Ta4631548490;
    Ta4631548490 = view;
    int Ti4631648491;
    Ti4631648491 = 2;
    Value* Ta4631748497;
    Ta4631748497 = vp;
    int Ti4631848498;
    Ti4631848498 = 2;
    double Td4631948493;
    Td4631948493 = Ta4631748497[Ti4631848498].d;
    Value* Ta4632048495;
    Ta4632048495 = screen;
    int Ti4632148496;
    Ti4632148496 = 2;
    double Td4632248494;
    Td4632248494 = Ta4632048495[Ti4632148496].d;
    double Td4632348492;
    Td4632348492 = Td4631948493 + Td4632248494;
    Ta4631548490[Ti4631648491].d = Td4632348492;
    return result;
}

bool read_nth_object46421_fun(int n46422, Value *env){
    bool result;
    int Tu4583148464;
    Tu4583148464 = 1;
    int texture48018;
    printf("Enter an integer: ");
    scanf("%i\n", &texture48018);
    int Ti4583248463;
    Ti4583248463 = 1;
    int Ti4583348019;
    Ti4583348019 = -Ti4583248463;
    if(texture48018 == Ti4583348019){
	result = 0;
    }
    else{
	int Tu4583448462;
	Tu4583448462 = 1;
	int form48020;
	printf("Enter an integer: ");
	scanf("%i\n", &form48020);
	int Tu4583548461;
	Tu4583548461 = 1;
	int refltype48021;
	printf("Enter an integer: ");
	scanf("%i\n", &refltype48021);
	int Tu4583648460;
	Tu4583648460 = 1;
	int isrot_p48022;
	printf("Enter an integer: ");
	scanf("%i\n", &isrot_p48022);
	int Ti4583748458;
	Ti4583748458 = 3;
	double Td4583848459;
	Td4583848459 = 0.000000;
	Value* abc48023;
	make_double_array(&abc48023, Ti4583748458, Td4583848459);
	int Ti4583948455;
	Ti4583948455 = 0;
	int Tu4584048457;
	Tu4584048457 = 1;
	double Td4584148456;
	printf("Enter a float: ");
	scanf("%d\n", &Td4584148456);
	int Tu4444848024;
	abc48023[Ti4583948455].d = Td4584148456;
	int Ti4584248452;
	Ti4584248452 = 1;
	int Tu4584348454;
	Tu4584348454 = 1;
	double Td4584448453;
	printf("Enter a float: ");
	scanf("%d\n", &Td4584448453);
	int Tu4444748025;
	abc48023[Ti4584248452].d = Td4584448453;
	int Ti4584548449;
	Ti4584548449 = 2;
	int Tu4584648451;
	Tu4584648451 = 1;
	double Td4584748450;
	printf("Enter a float: ");
	scanf("%d\n", &Td4584748450);
	int Tu4444648026;
	abc48023[Ti4584548449].d = Td4584748450;
	int Ti4584848447;
	Ti4584848447 = 3;
	double Td4584948448;
	Td4584948448 = 0.000000;
	Value* xyz48027;
	make_double_array(&xyz48027, Ti4584848447, Td4584948448);
	int Ti4585048444;
	Ti4585048444 = 0;
	int Tu4585148446;
	Tu4585148446 = 1;
	double Td4585248445;
	printf("Enter a float: ");
	scanf("%d\n", &Td4585248445);
	int Tu4444548028;
	xyz48027[Ti4585048444].d = Td4585248445;
	int Ti4585348441;
	Ti4585348441 = 1;
	int Tu4585448443;
	Tu4585448443 = 1;
	double Td4585548442;
	printf("Enter a float: ");
	scanf("%d\n", &Td4585548442);
	int Tu4444448029;
	xyz48027[Ti4585348441].d = Td4585548442;
	int Ti4585648438;
	Ti4585648438 = 2;
	int Tu4585748440;
	Tu4585748440 = 1;
	double Td4585848439;
	printf("Enter a float: ");
	scanf("%d\n", &Td4585848439);
	int Tu4444348030;
	xyz48027[Ti4585648438].d = Td4585848439;
	double Td4585948435;
	Td4585948435 = 0.000000;
	int Tu4586048437;
	Tu4586048437 = 1;
	double Td4586148436;
	printf("Enter a float: ");
	scanf("%d\n", &Td4586148436);
	bool m_invert48031;
	if(Td4585948435 <= Td4586148436){
	    m_invert48031 = 0;
	}
	else{
	    m_invert48031 = 1;
	}
	int Ti4586248433;
	Ti4586248433 = 2;
	double Td4586348434;
	Td4586348434 = 0.000000;
	Value* reflparam48032;
	make_double_array(&reflparam48032, Ti4586248433, Td4586348434);
	int Ti4586448430;
	Ti4586448430 = 0;
	int Tu4586548432;
	Tu4586548432 = 1;
	double Td4586648431;
	printf("Enter a float: ");
	scanf("%d\n", &Td4586648431);
	int Tu4444248033;
	reflparam48032[Ti4586448430].d = Td4586648431;
	int Ti4586748427;
	Ti4586748427 = 1;
	int Tu4586848429;
	Tu4586848429 = 1;
	double Td4586948428;
	printf("Enter a float: ");
	scanf("%d\n", &Td4586948428);
	int Tu4444148034;
	reflparam48032[Ti4586748427].d = Td4586948428;
	int Ti4587048425;
	Ti4587048425 = 3;
	double Td4587148426;
	Td4587148426 = 0.000000;
	Value* color48035;
	make_double_array(&color48035, Ti4587048425, Td4587148426);
	int Ti4587248422;
	Ti4587248422 = 0;
	int Tu4587348424;
	Tu4587348424 = 1;
	double Td4587448423;
	printf("Enter a float: ");
	scanf("%d\n", &Td4587448423);
	int Tu4444048036;
	color48035[Ti4587248422].d = Td4587448423;
	int Ti4587548419;
	Ti4587548419 = 1;
	int Tu4587648421;
	Tu4587648421 = 1;
	double Td4587748420;
	printf("Enter a float: ");
	scanf("%d\n", &Td4587748420);
	int Tu4443948037;
	color48035[Ti4587548419].d = Td4587748420;
	int Ti4587848416;
	Ti4587848416 = 2;
	int Tu4587948418;
	Tu4587948418 = 1;
	double Td4588048417;
	printf("Enter a float: ");
	scanf("%d\n", &Td4588048417);
	int Tu4443848038;
	color48035[Ti4587848416].d = Td4588048417;
	int Ti4588148414;
	Ti4588148414 = 3;
	double Td4588248415;
	Td4588248415 = 0.000000;
	Value* rotation48039;
	make_double_array(&rotation48039, Ti4588148414, Td4588248415);
	int Ti4588348399;
	Ti4588348399 = 0;
	int Tu4443748040;
	if(isrot_p48022 == Ti4588348399){
	    Tu4443748040 = 1;
	}
	else{
	    int Ti4588448410;
	    Ti4588448410 = 0;
	    int Tu4588548413;
	    Tu4588548413 = 1;
	    double Td4588648412;
	    printf("Enter a float: ");
	    scanf("%d\n", &Td4588648412);
	    double Td4588748411;
	    Td4588748411 = rad46417_fun(Td4588648412, NULL);
	    int Tu4441148400;
	    rotation48039[Ti4588448410].d = Td4588748411;
	    int Ti4588848406;
	    Ti4588848406 = 1;
	    int Tu4588948409;
	    Tu4588948409 = 1;
	    double Td4589048408;
	    printf("Enter a float: ");
	    scanf("%d\n", &Td4589048408);
	    double Td4589148407;
	    Td4589148407 = rad46417_fun(Td4589048408, NULL);
	    int Tu4441048401;
	    rotation48039[Ti4588848406].d = Td4589148407;
	    int Ti4589248402;
	    Ti4589248402 = 2;
	    int Tu4589348405;
	    Tu4589348405 = 1;
	    double Td4589448404;
	    printf("Enter a float: ");
	    scanf("%d\n", &Td4589448404);
	    double Td4589548403;
	    Td4589548403 = rad46417_fun(Td4589448404, NULL);
	    rotation48039[Ti4589248402].d = Td4589548403;
	}
	int Ti4589648398;
	Ti4589648398 = 2;
	bool m_invert248041;
	if(form48020 == Ti4589648398){
	    m_invert248041 = 1;
	}
	else{
	    m_invert248041 = m_invert48031;
	}
	int* obj48042;
	obj48042 = malloc(10 * sizeof(int));
	obj48042[0] = texture48018;
	obj48042[1] = form48020;
	obj48042[2] = refltype48021;
	obj48042[3] = isrot_p48022;
	obj48042[4] = abc48023;
	obj48042[5] = xyz48027;
	obj48042[6] = m_invert248041;
	obj48042[7] = reflparam48032;
	obj48042[8] = color48035;
	obj48042[9] = rotation48039;

	Value* Ta4589748397;
	Ta4589748397 = objects;
	int Tu4443648043;
	Ta4589748397[n46422].a = obj48042;
	int Ti4589848370;
	Ti4589848370 = 3;
	int Tu4443548044;
	if(form48020 == Ti4589848370){
	    int Ti4589948396;
	    Ti4589948396 = 0;
	    double a48374;
	    a48374 = abc48023[Ti4589948396].d;
	    int Ti4590048391;
	    Ti4590048391 = 0;
	    double Td4590148393;
	    Td4590148393 = 0.000000;
	    double Td4590448392;
	    if(Td4590148393 == a48374){
		Td4590448392 = 0.000000;
	    }
	    else{
		double Td4590248394;
		Td4590248394 = sgn46415_fun(a48374, NULL);
		double Td4590348395;
		Td4590348395 = fsqr46370_fun(a48374, NULL);
		Td4590448392 = Td4590248394 / Td4590348395;
	    }
	    int Tu4441348375;
	    abc48023[Ti4590048391].d = Td4590448392;
	    int Ti4590548390;
	    Ti4590548390 = 1;
	    double b48376;
	    b48376 = abc48023[Ti4590548390].d;
	    int Ti4590648385;
	    Ti4590648385 = 1;
	    double Td4590748387;
	    Td4590748387 = 0.000000;
	    double Td4591048386;
	    if(Td4590748387 == b48376){
		Td4591048386 = 0.000000;
	    }
	    else{
		double Td4590848388;
		Td4590848388 = sgn46415_fun(b48376, NULL);
		double Td4590948389;
		Td4590948389 = fsqr46370_fun(b48376, NULL);
		Td4591048386 = Td4590848388 / Td4590948389;
	    }
	    int Tu4441248377;
	    abc48023[Ti4590648385].d = Td4591048386;
	    int Ti4591148384;
	    Ti4591148384 = 2;
	    double c48378;
	    c48378 = abc48023[Ti4591148384].d;
	    int Ti4591248379;
	    Ti4591248379 = 2;
	    double Td4591348381;
	    Td4591348381 = 0.000000;
	    double Td4591648380;
	    if(Td4591348381 == c48378){
		Td4591648380 = 0.000000;
	    }
	    else{
		double Td4591448382;
		Td4591448382 = sgn46415_fun(c48378, NULL);
		double Td4591548383;
		Td4591548383 = fsqr46370_fun(c48378, NULL);
		Td4591648380 = Td4591448382 / Td4591548383;
	    }
	    abc48023[Ti4591248379].d = Td4591648380;
	}
	else{
	    int Ti4591748371;
	    Ti4591748371 = 2;
	    if(form48020 == Ti4591748371){
		int Ti4591848373;
		Ti4591848373 = 0;
		int Ti4591948372;
		if(m_invert48031 == Ti4591848373){
		    Ti4591948372 = 1;
		}
		else{
		    Ti4591948372 = 0;
		}
		Tu4443548044 = normalize_vector46412_fun(abc48023, Ti4591948372, NULL);
	    }
	    else{
		Tu4443548044 = 1;
	    }
	}
	int Ti4592048046;
	Ti4592048046 = 0;
	int Tu4443448045;
	if(isrot_p48022 == Ti4592048046){
	    Tu4443448045 = 1;
	}
	else{
	    Value* Ta4592148365;
	    Ta4592148365 = cs_temp;
	    int Ti4592248366;
	    Ti4592248366 = 10;
	    int Ti4592348369;
	    Ti4592348369 = 0;
	    double Td4592448368;
	    Td4592448368 = rotation48039[Ti4592348369].d;
	    double Td4592548367;
	    Td4592548367 = cos(Td4592448368);
	    int Tu4443348047;
	    Ta4592148365[Ti4592248366].d = Td4592548367;
	    Value* Ta4592648360;
	    Ta4592648360 = cs_temp;
	    int Ti4592748361;
	    Ti4592748361 = 11;
	    int Ti4592848364;
	    Ti4592848364 = 0;
	    double Td4592948363;
	    Td4592948363 = rotation48039[Ti4592848364].d;
	    double Td4593048362;
	    Td4593048362 = sin(Td4592948363);
	    int Tu4443248048;
	    Ta4592648360[Ti4592748361].d = Td4593048362;
	    Value* Ta4593148355;
	    Ta4593148355 = cs_temp;
	    int Ti4593248356;
	    Ti4593248356 = 12;
	    int Ti4593348359;
	    Ti4593348359 = 1;
	    double Td4593448358;
	    Td4593448358 = rotation48039[Ti4593348359].d;
	    double Td4593548357;
	    Td4593548357 = cos(Td4593448358);
	    int Tu4443148049;
	    Ta4593148355[Ti4593248356].d = Td4593548357;
	    Value* Ta4593648350;
	    Ta4593648350 = cs_temp;
	    int Ti4593748351;
	    Ti4593748351 = 13;
	    int Ti4593848354;
	    Ti4593848354 = 1;
	    double Td4593948353;
	    Td4593948353 = rotation48039[Ti4593848354].d;
	    double Td4594048352;
	    Td4594048352 = sin(Td4593948353);
	    int Tu4443048050;
	    Ta4593648350[Ti4593748351].d = Td4594048352;
	    Value* Ta4594148345;
	    Ta4594148345 = cs_temp;
	    int Ti4594248346;
	    Ti4594248346 = 14;
	    int Ti4594348349;
	    Ti4594348349 = 2;
	    double Td4594448348;
	    Td4594448348 = rotation48039[Ti4594348349].d;
	    double Td4594548347;
	    Td4594548347 = cos(Td4594448348);
	    int Tu4442948051;
	    Ta4594148345[Ti4594248346].d = Td4594548347;
	    Value* Ta4594648340;
	    Ta4594648340 = cs_temp;
	    int Ti4594748341;
	    Ti4594748341 = 15;
	    int Ti4594848344;
	    Ti4594848344 = 2;
	    double Td4594948343;
	    Td4594948343 = rotation48039[Ti4594848344].d;
	    double Td4595048342;
	    Td4595048342 = sin(Td4594948343);
	    int Tu4442848052;
	    Ta4594648340[Ti4594748341].d = Td4595048342;
	    Value* Ta4595148331;
	    Ta4595148331 = cs_temp;
	    int Ti4595248332;
	    Ti4595248332 = 0;
	    Value* Ta4595348338;
	    Ta4595348338 = cs_temp;
	    int Ti4595448339;
	    Ti4595448339 = 12;
	    double Td4595548334;
	    Td4595548334 = Ta4595348338[Ti4595448339].d;
	    Value* Ta4595648336;
	    Ta4595648336 = cs_temp;
	    int Ti4595748337;
	    Ti4595748337 = 14;
	    double Td4595848335;
	    Td4595848335 = Ta4595648336[Ti4595748337].d;
	    double Td4595948333;
	    Td4595948333 =  Td4595548334 * Td4595848335;
	    int Tu4442748053;
	    Ta4595148331[Ti4595248332].d = Td4595948333;
	    Value* Ta4596048310;
	    Ta4596048310 = cs_temp;
	    int Ti4596148311;
	    Ti4596148311 = 1;
	    Value* Ta4596248329;
	    Ta4596248329 = cs_temp;
	    int Ti4596348330;
	    Ti4596348330 = 11;
	    double Td4596448325;
	    Td4596448325 = Ta4596248329[Ti4596348330].d;
	    Value* Ta4596548327;
	    Ta4596548327 = cs_temp;
	    int Ti4596648328;
	    Ti4596648328 = 13;
	    double Td4596748326;
	    Td4596748326 = Ta4596548327[Ti4596648328].d;
	    double Td4596848321;
	    Td4596848321 =  Td4596448325 * Td4596748326;
	    Value* Ta4596948323;
	    Ta4596948323 = cs_temp;
	    int Ti4597048324;
	    Ti4597048324 = 14;
	    double Td4597148322;
	    Td4597148322 = Ta4596948323[Ti4597048324].d;
	    double Td4597248313;
	    Td4597248313 =  Td4596848321 * Td4597148322;
	    Value* Ta4597348319;
	    Ta4597348319 = cs_temp;
	    int Ti4597448320;
	    Ti4597448320 = 10;
	    double Td4597548315;
	    Td4597548315 = Ta4597348319[Ti4597448320].d;
	    Value* Ta4597648317;
	    Ta4597648317 = cs_temp;
	    int Ti4597748318;
	    Ti4597748318 = 15;
	    double Td4597848316;
	    Td4597848316 = Ta4597648317[Ti4597748318].d;
	    double Td4597948314;
	    Td4597948314 =  Td4597548315 * Td4597848316;
	    double Td4598048312;
	    Td4598048312 = Td4597248313 - Td4597948314;
	    int Tu4442648054;
	    Ta4596048310[Ti4596148311].d = Td4598048312;
	    Value* Ta4598148289;
	    Ta4598148289 = cs_temp;
	    int Ti4598248290;
	    Ti4598248290 = 2;
	    Value* Ta4598348308;
	    Ta4598348308 = cs_temp;
	    int Ti4598448309;
	    Ti4598448309 = 10;
	    double Td4598548304;
	    Td4598548304 = Ta4598348308[Ti4598448309].d;
	    Value* Ta4598648306;
	    Ta4598648306 = cs_temp;
	    int Ti4598748307;
	    Ti4598748307 = 13;
	    double Td4598848305;
	    Td4598848305 = Ta4598648306[Ti4598748307].d;
	    double Td4598948300;
	    Td4598948300 =  Td4598548304 * Td4598848305;
	    Value* Ta4599048302;
	    Ta4599048302 = cs_temp;
	    int Ti4599148303;
	    Ti4599148303 = 14;
	    double Td4599248301;
	    Td4599248301 = Ta4599048302[Ti4599148303].d;
	    double Td4599348292;
	    Td4599348292 =  Td4598948300 * Td4599248301;
	    Value* Ta4599448298;
	    Ta4599448298 = cs_temp;
	    int Ti4599548299;
	    Ti4599548299 = 11;
	    double Td4599648294;
	    Td4599648294 = Ta4599448298[Ti4599548299].d;
	    Value* Ta4599748296;
	    Ta4599748296 = cs_temp;
	    int Ti4599848297;
	    Ti4599848297 = 15;
	    double Td4599948295;
	    Td4599948295 = Ta4599748296[Ti4599848297].d;
	    double Td4600048293;
	    Td4600048293 =  Td4599648294 * Td4599948295;
	    double Td4600148291;
	    Td4600148291 = Td4599348292 + Td4600048293;
	    int Tu4442548055;
	    Ta4598148289[Ti4598248290].d = Td4600148291;
	    Value* Ta4600248280;
	    Ta4600248280 = cs_temp;
	    int Ti4600348281;
	    Ti4600348281 = 3;
	    Value* Ta4600448287;
	    Ta4600448287 = cs_temp;
	    int Ti4600548288;
	    Ti4600548288 = 12;
	    double Td4600648283;
	    Td4600648283 = Ta4600448287[Ti4600548288].d;
	    Value* Ta4600748285;
	    Ta4600748285 = cs_temp;
	    int Ti4600848286;
	    Ti4600848286 = 15;
	    double Td4600948284;
	    Td4600948284 = Ta4600748285[Ti4600848286].d;
	    double Td4601048282;
	    Td4601048282 =  Td4600648283 * Td4600948284;
	    int Tu4442448056;
	    Ta4600248280[Ti4600348281].d = Td4601048282;
	    Value* Ta4601148259;
	    Ta4601148259 = cs_temp;
	    int Ti4601248260;
	    Ti4601248260 = 4;
	    Value* Ta4601348278;
	    Ta4601348278 = cs_temp;
	    int Ti4601448279;
	    Ti4601448279 = 11;
	    double Td4601548274;
	    Td4601548274 = Ta4601348278[Ti4601448279].d;
	    Value* Ta4601648276;
	    Ta4601648276 = cs_temp;
	    int Ti4601748277;
	    Ti4601748277 = 13;
	    double Td4601848275;
	    Td4601848275 = Ta4601648276[Ti4601748277].d;
	    double Td4601948270;
	    Td4601948270 =  Td4601548274 * Td4601848275;
	    Value* Ta4602048272;
	    Ta4602048272 = cs_temp;
	    int Ti4602148273;
	    Ti4602148273 = 15;
	    double Td4602248271;
	    Td4602248271 = Ta4602048272[Ti4602148273].d;
	    double Td4602348262;
	    Td4602348262 =  Td4601948270 * Td4602248271;
	    Value* Ta4602448268;
	    Ta4602448268 = cs_temp;
	    int Ti4602548269;
	    Ti4602548269 = 10;
	    double Td4602648264;
	    Td4602648264 = Ta4602448268[Ti4602548269].d;
	    Value* Ta4602748266;
	    Ta4602748266 = cs_temp;
	    int Ti4602848267;
	    Ti4602848267 = 14;
	    double Td4602948265;
	    Td4602948265 = Ta4602748266[Ti4602848267].d;
	    double Td4603048263;
	    Td4603048263 =  Td4602648264 * Td4602948265;
	    double Td4603148261;
	    Td4603148261 = Td4602348262 + Td4603048263;
	    int Tu4442348057;
	    Ta4601148259[Ti4601248260].d = Td4603148261;
	    Value* Ta4603248238;
	    Ta4603248238 = cs_temp;
	    int Ti4603348239;
	    Ti4603348239 = 5;
	    Value* Ta4603448257;
	    Ta4603448257 = cs_temp;
	    int Ti4603548258;
	    Ti4603548258 = 10;
	    double Td4603648253;
	    Td4603648253 = Ta4603448257[Ti4603548258].d;
	    Value* Ta4603748255;
	    Ta4603748255 = cs_temp;
	    int Ti4603848256;
	    Ti4603848256 = 13;
	    double Td4603948254;
	    Td4603948254 = Ta4603748255[Ti4603848256].d;
	    double Td4604048249;
	    Td4604048249 =  Td4603648253 * Td4603948254;
	    Value* Ta4604148251;
	    Ta4604148251 = cs_temp;
	    int Ti4604248252;
	    Ti4604248252 = 15;
	    double Td4604348250;
	    Td4604348250 = Ta4604148251[Ti4604248252].d;
	    double Td4604448241;
	    Td4604448241 =  Td4604048249 * Td4604348250;
	    Value* Ta4604548247;
	    Ta4604548247 = cs_temp;
	    int Ti4604648248;
	    Ti4604648248 = 11;
	    double Td4604748243;
	    Td4604748243 = Ta4604548247[Ti4604648248].d;
	    Value* Ta4604848245;
	    Ta4604848245 = cs_temp;
	    int Ti4604948246;
	    Ti4604948246 = 14;
	    double Td4605048244;
	    Td4605048244 = Ta4604848245[Ti4604948246].d;
	    double Td4605148242;
	    Td4605148242 =  Td4604748243 * Td4605048244;
	    double Td4605248240;
	    Td4605248240 = Td4604448241 - Td4605148242;
	    int Tu4442248058;
	    Ta4603248238[Ti4603348239].d = Td4605248240;
	    Value* Ta4605348232;
	    Ta4605348232 = cs_temp;
	    int Ti4605448233;
	    Ti4605448233 = 6;
	    Value* Ta4605548236;
	    Ta4605548236 = cs_temp;
	    int Ti4605648237;
	    Ti4605648237 = 13;
	    double Td4605748235;
	    Td4605748235 = Ta4605548236[Ti4605648237].d;
	    double Td4605848234;
	    Td4605848234 = -Td4605748235;
	    int Tu4442148059;
	    Ta4605348232[Ti4605448233].d = Td4605848234;
	    Value* Ta4605948223;
	    Ta4605948223 = cs_temp;
	    int Ti4606048224;
	    Ti4606048224 = 7;
	    Value* Ta4606148230;
	    Ta4606148230 = cs_temp;
	    int Ti4606248231;
	    Ti4606248231 = 11;
	    double Td4606348226;
	    Td4606348226 = Ta4606148230[Ti4606248231].d;
	    Value* Ta4606448228;
	    Ta4606448228 = cs_temp;
	    int Ti4606548229;
	    Ti4606548229 = 12;
	    double Td4606648227;
	    Td4606648227 = Ta4606448228[Ti4606548229].d;
	    double Td4606748225;
	    Td4606748225 =  Td4606348226 * Td4606648227;
	    int Tu4442048060;
	    Ta4605948223[Ti4606048224].d = Td4606748225;
	    Value* Ta4606848214;
	    Ta4606848214 = cs_temp;
	    int Ti4606948215;
	    Ti4606948215 = 8;
	    Value* Ta4607048221;
	    Ta4607048221 = cs_temp;
	    int Ti4607148222;
	    Ti4607148222 = 10;
	    double Td4607248217;
	    Td4607248217 = Ta4607048221[Ti4607148222].d;
	    Value* Ta4607348219;
	    Ta4607348219 = cs_temp;
	    int Ti4607448220;
	    Ti4607448220 = 12;
	    double Td4607548218;
	    Td4607548218 = Ta4607348219[Ti4607448220].d;
	    double Td4607648216;
	    Td4607648216 =  Td4607248217 * Td4607548218;
	    int Tu4441948061;
	    Ta4606848214[Ti4606948215].d = Td4607648216;
	    int Ti4607748213;
	    Ti4607748213 = 0;
	    double ao48062;
	    ao48062 = abc48023[Ti4607748213].d;
	    int Ti4607848212;
	    Ti4607848212 = 1;
	    double bo48063;
	    bo48063 = abc48023[Ti4607848212].d;
	    int Ti4607948211;
	    Ti4607948211 = 2;
	    double co48064;
	    co48064 = abc48023[Ti4607948211].d;
	    int Ti4608048193;
	    Ti4608048193 = 0;
	    Value* Ta4608148209;
	    Ta4608148209 = cs_temp;
	    int Ti4608248210;
	    Ti4608248210 = 0;
	    double Td4608348208;
	    Td4608348208 = Ta4608148209[Ti4608248210].d;
	    double Td4608448207;
	    Td4608448207 = fsqr46370_fun(Td4608348208, NULL);
	    double Td4608548201;
	    Td4608548201 =  ao48062 * Td4608448207;
	    Value* Ta4608648205;
	    Ta4608648205 = cs_temp;
	    int Ti4608748206;
	    Ti4608748206 = 3;
	    double Td4608848204;
	    Td4608848204 = Ta4608648205[Ti4608748206].d;
	    double Td4608948203;
	    Td4608948203 = fsqr46370_fun(Td4608848204, NULL);
	    double Td4609048202;
	    Td4609048202 =  bo48063 * Td4608948203;
	    double Td4609148195;
	    Td4609148195 = Td4608548201 + Td4609048202;
	    Value* Ta4609248199;
	    Ta4609248199 = cs_temp;
	    int Ti4609348200;
	    Ti4609348200 = 6;
	    double Td4609448198;
	    Td4609448198 = Ta4609248199[Ti4609348200].d;
	    double Td4609548197;
	    Td4609548197 = fsqr46370_fun(Td4609448198, NULL);
	    double Td4609648196;
	    Td4609648196 =  co48064 * Td4609548197;
	    double Td4609748194;
	    Td4609748194 = Td4609148195 + Td4609648196;
	    int Tu4441848065;
	    abc48023[Ti4608048193].d = Td4609748194;
	    int Ti4609848175;
	    Ti4609848175 = 1;
	    Value* Ta4609948191;
	    Ta4609948191 = cs_temp;
	    int Ti4610048192;
	    Ti4610048192 = 1;
	    double Td4610148190;
	    Td4610148190 = Ta4609948191[Ti4610048192].d;
	    double Td4610248189;
	    Td4610248189 = fsqr46370_fun(Td4610148190, NULL);
	    double Td4610348183;
	    Td4610348183 =  ao48062 * Td4610248189;
	    Value* Ta4610448187;
	    Ta4610448187 = cs_temp;
	    int Ti4610548188;
	    Ti4610548188 = 4;
	    double Td4610648186;
	    Td4610648186 = Ta4610448187[Ti4610548188].d;
	    double Td4610748185;
	    Td4610748185 = fsqr46370_fun(Td4610648186, NULL);
	    double Td4610848184;
	    Td4610848184 =  bo48063 * Td4610748185;
	    double Td4610948177;
	    Td4610948177 = Td4610348183 + Td4610848184;
	    Value* Ta4611048181;
	    Ta4611048181 = cs_temp;
	    int Ti4611148182;
	    Ti4611148182 = 7;
	    double Td4611248180;
	    Td4611248180 = Ta4611048181[Ti4611148182].d;
	    double Td4611348179;
	    Td4611348179 = fsqr46370_fun(Td4611248180, NULL);
	    double Td4611448178;
	    Td4611448178 =  co48064 * Td4611348179;
	    double Td4611548176;
	    Td4611548176 = Td4610948177 + Td4611448178;
	    int Tu4441748066;
	    abc48023[Ti4609848175].d = Td4611548176;
	    int Ti4611648157;
	    Ti4611648157 = 2;
	    Value* Ta4611748173;
	    Ta4611748173 = cs_temp;
	    int Ti4611848174;
	    Ti4611848174 = 2;
	    double Td4611948172;
	    Td4611948172 = Ta4611748173[Ti4611848174].d;
	    double Td4612048171;
	    Td4612048171 = fsqr46370_fun(Td4611948172, NULL);
	    double Td4612148165;
	    Td4612148165 =  ao48062 * Td4612048171;
	    Value* Ta4612248169;
	    Ta4612248169 = cs_temp;
	    int Ti4612348170;
	    Ti4612348170 = 5;
	    double Td4612448168;
	    Td4612448168 = Ta4612248169[Ti4612348170].d;
	    double Td4612548167;
	    Td4612548167 = fsqr46370_fun(Td4612448168, NULL);
	    double Td4612648166;
	    Td4612648166 =  bo48063 * Td4612548167;
	    double Td4612748159;
	    Td4612748159 = Td4612148165 + Td4612648166;
	    Value* Ta4612848163;
	    Ta4612848163 = cs_temp;
	    int Ti4612948164;
	    Ti4612948164 = 8;
	    double Td4613048162;
	    Td4613048162 = Ta4612848163[Ti4612948164].d;
	    double Td4613148161;
	    Td4613148161 = fsqr46370_fun(Td4613048162, NULL);
	    double Td4613248160;
	    Td4613248160 =  co48064 * Td4613148161;
	    double Td4613348158;
	    Td4613348158 = Td4612748159 + Td4613248160;
	    int Tu4441648067;
	    abc48023[Ti4611648157].d = Td4613348158;
	    int Ti4613448128;
	    Ti4613448128 = 0;
	    double Td4613548130;
	    Td4613548130 = 2.000000;
	    Value* Ta4613648155;
	    Ta4613648155 = cs_temp;
	    int Ti4613748156;
	    Ti4613748156 = 1;
	    double Td4613848154;
	    Td4613848154 = Ta4613648155[Ti4613748156].d;
	    double Td4613948150;
	    Td4613948150 =  ao48062 * Td4613848154;
	    Value* Ta4614048152;
	    Ta4614048152 = cs_temp;
	    int Ti4614148153;
	    Ti4614148153 = 2;
	    double Td4614248151;
	    Td4614248151 = Ta4614048152[Ti4614148153].d;
	    double Td4614348141;
	    Td4614348141 =  Td4613948150 * Td4614248151;
	    Value* Ta4614448148;
	    Ta4614448148 = cs_temp;
	    int Ti4614548149;
	    Ti4614548149 = 4;
	    double Td4614648147;
	    Td4614648147 = Ta4614448148[Ti4614548149].d;
	    double Td4614748143;
	    Td4614748143 =  bo48063 * Td4614648147;
	    Value* Ta4614848145;
	    Ta4614848145 = cs_temp;
	    int Ti4614948146;
	    Ti4614948146 = 5;
	    double Td4615048144;
	    Td4615048144 = Ta4614848145[Ti4614948146].d;
	    double Td4615148142;
	    Td4615148142 =  Td4614748143 * Td4615048144;
	    double Td4615248132;
	    Td4615248132 = Td4614348141 + Td4615148142;
	    Value* Ta4615348139;
	    Ta4615348139 = cs_temp;
	    int Ti4615448140;
	    Ti4615448140 = 7;
	    double Td4615548138;
	    Td4615548138 = Ta4615348139[Ti4615448140].d;
	    double Td4615648134;
	    Td4615648134 =  co48064 * Td4615548138;
	    Value* Ta4615748136;
	    Ta4615748136 = cs_temp;
	    int Ti4615848137;
	    Ti4615848137 = 8;
	    double Td4615948135;
	    Td4615948135 = Ta4615748136[Ti4615848137].d;
	    double Td4616048133;
	    Td4616048133 =  Td4615648134 * Td4615948135;
	    double Td4616148131;
	    Td4616148131 = Td4615248132 + Td4616048133;
	    double Td4616248129;
	    Td4616248129 =  Td4613548130 * Td4616148131;
	    int Tu4441548068;
	    rotation48039[Ti4613448128].d = Td4616248129;
	    int Ti4616348099;
	    Ti4616348099 = 1;
	    double Td4616448101;
	    Td4616448101 = 2.000000;
	    Value* Ta4616548126;
	    Ta4616548126 = cs_temp;
	    int Ti4616648127;
	    Ti4616648127 = 0;
	    double Td4616748125;
	    Td4616748125 = Ta4616548126[Ti4616648127].d;
	    double Td4616848121;
	    Td4616848121 =  ao48062 * Td4616748125;
	    Value* Ta4616948123;
	    Ta4616948123 = cs_temp;
	    int Ti4617048124;
	    Ti4617048124 = 2;
	    double Td4617148122;
	    Td4617148122 = Ta4616948123[Ti4617048124].d;
	    double Td4617248112;
	    Td4617248112 =  Td4616848121 * Td4617148122;
	    Value* Ta4617348119;
	    Ta4617348119 = cs_temp;
	    int Ti4617448120;
	    Ti4617448120 = 3;
	    double Td4617548118;
	    Td4617548118 = Ta4617348119[Ti4617448120].d;
	    double Td4617648114;
	    Td4617648114 =  bo48063 * Td4617548118;
	    Value* Ta4617748116;
	    Ta4617748116 = cs_temp;
	    int Ti4617848117;
	    Ti4617848117 = 5;
	    double Td4617948115;
	    Td4617948115 = Ta4617748116[Ti4617848117].d;
	    double Td4618048113;
	    Td4618048113 =  Td4617648114 * Td4617948115;
	    double Td4618148103;
	    Td4618148103 = Td4617248112 + Td4618048113;
	    Value* Ta4618248110;
	    Ta4618248110 = cs_temp;
	    int Ti4618348111;
	    Ti4618348111 = 6;
	    double Td4618448109;
	    Td4618448109 = Ta4618248110[Ti4618348111].d;
	    double Td4618548105;
	    Td4618548105 =  co48064 * Td4618448109;
	    Value* Ta4618648107;
	    Ta4618648107 = cs_temp;
	    int Ti4618748108;
	    Ti4618748108 = 8;
	    double Td4618848106;
	    Td4618848106 = Ta4618648107[Ti4618748108].d;
	    double Td4618948104;
	    Td4618948104 =  Td4618548105 * Td4618848106;
	    double Td4619048102;
	    Td4619048102 = Td4618148103 + Td4618948104;
	    double Td4619148100;
	    Td4619148100 =  Td4616448101 * Td4619048102;
	    int Tu4441448069;
	    rotation48039[Ti4616348099].d = Td4619148100;
	    int Ti4619248070;
	    Ti4619248070 = 2;
	    double Td4619348072;
	    Td4619348072 = 2.000000;
	    Value* Ta4619448097;
	    Ta4619448097 = cs_temp;
	    int Ti4619548098;
	    Ti4619548098 = 0;
	    double Td4619648096;
	    Td4619648096 = Ta4619448097[Ti4619548098].d;
	    double Td4619748092;
	    Td4619748092 =  ao48062 * Td4619648096;
	    Value* Ta4619848094;
	    Ta4619848094 = cs_temp;
	    int Ti4619948095;
	    Ti4619948095 = 1;
	    double Td4620048093;
	    Td4620048093 = Ta4619848094[Ti4619948095].d;
	    double Td4620148083;
	    Td4620148083 =  Td4619748092 * Td4620048093;
	    Value* Ta4620248090;
	    Ta4620248090 = cs_temp;
	    int Ti4620348091;
	    Ti4620348091 = 3;
	    double Td4620448089;
	    Td4620448089 = Ta4620248090[Ti4620348091].d;
	    double Td4620548085;
	    Td4620548085 =  bo48063 * Td4620448089;
	    Value* Ta4620648087;
	    Ta4620648087 = cs_temp;
	    int Ti4620748088;
	    Ti4620748088 = 4;
	    double Td4620848086;
	    Td4620848086 = Ta4620648087[Ti4620748088].d;
	    double Td4620948084;
	    Td4620948084 =  Td4620548085 * Td4620848086;
	    double Td4621048074;
	    Td4621048074 = Td4620148083 + Td4620948084;
	    Value* Ta4621148081;
	    Ta4621148081 = cs_temp;
	    int Ti4621248082;
	    Ti4621248082 = 6;
	    double Td4621348080;
	    Td4621348080 = Ta4621148081[Ti4621248082].d;
	    double Td4621448076;
	    Td4621448076 =  co48064 * Td4621348080;
	    Value* Ta4621548078;
	    Ta4621548078 = cs_temp;
	    int Ti4621648079;
	    Ti4621648079 = 7;
	    double Td4621748077;
	    Td4621748077 = Ta4621548078[Ti4621648079].d;
	    double Td4621848075;
	    Td4621848075 =  Td4621448076 * Td4621748077;
	    double Td4621948073;
	    Td4621948073 = Td4621048074 + Td4621848075;
	    double Td4622048071;
	    Td4622048071 =  Td4619348072 * Td4621948073;
	    rotation48039[Ti4619248070].d = Td4622048071;
	}
	result = 1;
    }
    return result;
}

int read_object46423_fun(int n46424, Value *env){
    int result;
    int Ti4582648013;
    Ti4582648013 = 61;
    if(Ti4582648013 <= n46424){
	result = 1;
    }
    else{
	bool Tb4582748014;
	Tb4582748014 = read_nth_object46421_fun(n46424, NULL);
	int Ti4582848015;
	Ti4582848015 = 0;
	if(Tb4582748014 == Ti4582848015){
	    result = 1;
	}
	else{
	    int Ti4582948017;
	    Ti4582948017 = 1;
	    int Ti4583048016;
	    Ti4583048016 = n46424 + Ti4582948017;
	    result = read_object46423_fun(Ti4583048016, NULL);
	}
    }
    return result;
}

int read_all_object46425_fun(int Tu4444946426, Value *env){
    int result;
    int Ti4582548012;
    Ti4582548012 = 0;
    result = read_object46423_fun(Ti4582548012, NULL);
    return result;
}

Value* read_net_item46427_fun(int length46428, Value *env){
    Value* result;
    int Tu4581648011;
    Tu4581648011 = 1;
    int item48000;
    printf("Enter an integer: ");
    scanf("%i\n", &item48000);
    int Ti4581748010;
    Ti4581748010 = 1;
    int Ti4581848001;
    Ti4581848001 = -Ti4581748010;
    if(item48000 == Ti4581848001){
	int Ti4581948009;
	Ti4581948009 = 1;
	int Ti4582048006;
	Ti4582048006 = length46428 + Ti4581948009;
	int Ti4582148008;
	Ti4582148008 = 1;
	int Ti4582248007;
	Ti4582248007 = -Ti4582148008;
	make_int_array(&result, Ti4582048006, Ti4582248007);
    }
    else{
	int Ti4582348005;
	Ti4582348005 = 1;
	int Ti4582448004;
	Ti4582448004 = length46428 + Ti4582348005;
	Value* v48002;
	v48002 = read_net_item46427_fun(Ti4582448004, NULL);
	int Tu4445048003;
	v48002[length46428].i = item48000;
	result = v48002;
    }
    return result;
}

Value* read_or_network46429_fun(int length46430, Value *env){
    Value* result;
    int Ti4580747999;
    Ti4580747999 = 0;
    Value* net47988;
    net47988 = read_net_item46427_fun(Ti4580747999, NULL);
    int Ti4580847998;
    Ti4580847998 = 0;
    int Ti4580947989;
    Ti4580947989 = net47988[Ti4580847998].i;
    int Ti4581047997;
    Ti4581047997 = 1;
    int Ti4581147990;
    Ti4581147990 = -Ti4581047997;
    if(Ti4580947989 == Ti4581147990){
	int Ti4581247996;
	Ti4581247996 = 1;
	int Ti4581347995;
	Ti4581347995 = length46430 + Ti4581247996;
	make_multi_array(&result, Ti4581347995, net47988);
    }
    else{
	int Ti4581447994;
	Ti4581447994 = 1;
	int Ti4581547993;
	Ti4581547993 = length46430 + Ti4581447994;
	Value* v47991;
	v47991 = read_or_network46429_fun(Ti4581547993, NULL);
	int Tu4445147992;
	v47991[length46430].a = net47988;
	result = v47991;
    }
    return result;
}

int read_and_network46431_fun(int n46432, Value *env){
    int result;
    int Ti4579947987;
    Ti4579947987 = 0;
    Value* net47978;
    net47978 = read_net_item46427_fun(Ti4579947987, NULL);
    int Ti4580047986;
    Ti4580047986 = 0;
    int Ti4580147979;
    Ti4580147979 = net47978[Ti4580047986].i;
    int Ti4580247985;
    Ti4580247985 = 1;
    int Ti4580347980;
    Ti4580347980 = -Ti4580247985;
    if(Ti4580147979 == Ti4580347980){
	result = 1;
    }
    else{
	Value* Ta4580447984;
	Ta4580447984 = and_net;
	int Tu4445247981;
	Ta4580447984[n46432].a = net47978;
	int Ti4580547983;
	Ti4580547983 = 1;
	int Ti4580647982;
	Ti4580647982 = n46432 + Ti4580547983;
	result = read_and_network46431_fun(Ti4580647982, NULL);
    }
    return result;
}

int read_parameter46433_fun(int Tu4445346434, Value *env){
    int result;
    int Tu4579247977;
    Tu4579247977 = 1;
    int Tu4445647968;
    Tu4445647968 = read_environ46419_fun(Tu4579247977, NULL);
    int Tu4579347976;
    Tu4579347976 = 1;
    int Tu4445547969;
    Tu4445547969 = read_all_object46425_fun(Tu4579347976, NULL);
    int Ti4579447975;
    Ti4579447975 = 0;
    int Tu4445447970;
    Tu4445447970 = read_and_network46431_fun(Ti4579447975, NULL);
    Value* Ta4579547971;
    Ta4579547971 = or_net;
    int Ti4579647972;
    Ti4579647972 = 0;
    int Ti4579747974;
    Ti4579747974 = 0;
    Value* Ta4579847973;
    Ta4579847973 = read_or_network46429_fun(Ti4579747974, NULL);
    Ta4579547971[Ti4579647972].a = Ta4579847973;
    return result;
}

int solver_rect46435_fun(int* m46436, Value* l46437, Value *env){
    int result;
    double Td4567847928;
    Td4567847928 = 0.000000;
    int Ti4567947967;
    Ti4567947967 = 0;
    double Td4568047929;
    Td4568047929 = l46437[Ti4567947967].d;
    bool answera47842;
    if(Td4567847928 == Td4568047929){
	answera47842 = 0;
    }
    else{
	bool Tb4568147962;
	Tb4568147962 = o_isinvert46380_fun(m46436, NULL);
	double Td4568247964;
	Td4568247964 = 0.000000;
	int Ti4568347966;
	Ti4568347966 = 0;
	double Td4568447965;
	Td4568447965 = l46437[Ti4568347966].d;
	int Ti4568547963;
	if(Td4568247964 <= Td4568447965){
	    Ti4568547963 = 0;
	}
	else{
	    Ti4568547963 = 1;
	}
	bool Tb4568647959;
	Tb4568647959 = xor46367_fun(Tb4568147962, Ti4568547963, NULL);
	int Ti4568747960;
	Ti4568747960 = 0;
	double d47930;
	if(Tb4568647959 == Ti4568747960){
	    double Td4568847961;
	    Td4568847961 = o_param_a46384_fun(m46436, NULL);
	    d47930 = -Td4568847961;
	}
	else{
	    d47930 = o_param_a46384_fun(m46436, NULL);
	}
	Value* Ta4568947957;
	Ta4568947957 = solver_w_vec;
	int Ti4569047958;
	Ti4569047958 = 0;
	double Td4569147956;
	Td4569147956 = Ta4568947957[Ti4569047958].d;
	double Td4569247953;
	Td4569247953 = d47930 - Td4569147956;
	int Ti4569347955;
	Ti4569347955 = 0;
	double Td4569447954;
	Td4569447954 = l46437[Ti4569347955].d;
	double d247931;
	d247931 = Td4569247953 / Td4569447954;
	double Td4569547932;
	Td4569547932 = o_param_b46386_fun(m46436, NULL);
	int Ti4569647952;
	Ti4569647952 = 1;
	double Td4569747951;
	Td4569747951 = l46437[Ti4569647952].d;
	double Td4569847947;
	Td4569847947 =  d247931 * Td4569747951;
	Value* Ta4569947949;
	Ta4569947949 = solver_w_vec;
	int Ti4570047950;
	Ti4570047950 = 1;
	double Td4570147948;
	Td4570147948 = Ta4569947949[Ti4570047950].d;
	double Td4570247946;
	Td4570247946 = Td4569847947 + Td4570147948;
	double Td4570347933;
	Td4570347933 = fabs(Td4570247946);
	if(Td4569547932 <= Td4570347933){
	    answera47842 = 0;
	}
	else{
	    double Td4570447934;
	    Td4570447934 = o_param_c46388_fun(m46436, NULL);
	    int Ti4570547945;
	    Ti4570547945 = 2;
	    double Td4570647944;
	    Td4570647944 = l46437[Ti4570547945].d;
	    double Td4570747940;
	    Td4570747940 =  d247931 * Td4570647944;
	    Value* Ta4570847942;
	    Ta4570847942 = solver_w_vec;
	    int Ti4570947943;
	    Ti4570947943 = 2;
	    double Td4571047941;
	    Td4571047941 = Ta4570847942[Ti4570947943].d;
	    double Td4571147939;
	    Td4571147939 = Td4570747940 + Td4571047941;
	    double Td4571247935;
	    Td4571247935 = fabs(Td4571147939);
	    if(Td4570447934 <= Td4571247935){
		answera47842 = 0;
	    }
	    else{
		Value* Ta4571347937;
		Ta4571347937 = solver_dist;
		int Ti4571447938;
		Ti4571447938 = 0;
		int Tu4445747936;
		Ta4571347937[Ti4571447938].d = d247931;
		answera47842 = 1;
	    }
	}
    }
    int Ti4571547843;
    Ti4571547843 = 0;
    if(answera47842 == Ti4571547843){
	double Td4571647888;
	Td4571647888 = 0.000000;
	int Ti4571747927;
	Ti4571747927 = 1;
	double Td4571847889;
	Td4571847889 = l46437[Ti4571747927].d;
	bool answerb47844;
	if(Td4571647888 == Td4571847889){
	    answerb47844 = 0;
	}
	else{
	    bool Tb4571947922;
	    Tb4571947922 = o_isinvert46380_fun(m46436, NULL);
	    double Td4572047924;
	    Td4572047924 = 0.000000;
	    int Ti4572147926;
	    Ti4572147926 = 1;
	    double Td4572247925;
	    Td4572247925 = l46437[Ti4572147926].d;
	    int Ti4572347923;
	    if(Td4572047924 <= Td4572247925){
		Ti4572347923 = 0;
	    }
	    else{
		Ti4572347923 = 1;
	    }
	    bool Tb4572447919;
	    Tb4572447919 = xor46367_fun(Tb4571947922, Ti4572347923, NULL);
	    int Ti4572547920;
	    Ti4572547920 = 0;
	    double d47890;
	    if(Tb4572447919 == Ti4572547920){
		double Td4572647921;
		Td4572647921 = o_param_b46386_fun(m46436, NULL);
		d47890 = -Td4572647921;
	    }
	    else{
		d47890 = o_param_b46386_fun(m46436, NULL);
	    }
	    Value* Ta4572747917;
	    Ta4572747917 = solver_w_vec;
	    int Ti4572847918;
	    Ti4572847918 = 1;
	    double Td4572947916;
	    Td4572947916 = Ta4572747917[Ti4572847918].d;
	    double Td4573047913;
	    Td4573047913 = d47890 - Td4572947916;
	    int Ti4573147915;
	    Ti4573147915 = 1;
	    double Td4573247914;
	    Td4573247914 = l46437[Ti4573147915].d;
	    double d247891;
	    d247891 = Td4573047913 / Td4573247914;
	    double Td4573347892;
	    Td4573347892 = o_param_c46388_fun(m46436, NULL);
	    int Ti4573447912;
	    Ti4573447912 = 2;
	    double Td4573547911;
	    Td4573547911 = l46437[Ti4573447912].d;
	    double Td4573647907;
	    Td4573647907 =  d247891 * Td4573547911;
	    Value* Ta4573747909;
	    Ta4573747909 = solver_w_vec;
	    int Ti4573847910;
	    Ti4573847910 = 2;
	    double Td4573947908;
	    Td4573947908 = Ta4573747909[Ti4573847910].d;
	    double Td4574047906;
	    Td4574047906 = Td4573647907 + Td4573947908;
	    double Td4574147893;
	    Td4574147893 = fabs(Td4574047906);
	    if(Td4573347892 <= Td4574147893){
		answerb47844 = 0;
	    }
	    else{
		double Td4574247894;
		Td4574247894 = o_param_a46384_fun(m46436, NULL);
		int Ti4574347905;
		Ti4574347905 = 0;
		double Td4574447904;
		Td4574447904 = l46437[Ti4574347905].d;
		double Td4574547900;
		Td4574547900 =  d247891 * Td4574447904;
		Value* Ta4574647902;
		Ta4574647902 = solver_w_vec;
		int Ti4574747903;
		Ti4574747903 = 0;
		double Td4574847901;
		Td4574847901 = Ta4574647902[Ti4574747903].d;
		double Td4574947899;
		Td4574947899 = Td4574547900 + Td4574847901;
		double Td4575047895;
		Td4575047895 = fabs(Td4574947899);
		if(Td4574247894 <= Td4575047895){
		    answerb47844 = 0;
		}
		else{
		    Value* Ta4575147897;
		    Ta4575147897 = solver_dist;
		    int Ti4575247898;
		    Ti4575247898 = 0;
		    int Tu4445847896;
		    Ta4575147897[Ti4575247898].d = d247891;
		    answerb47844 = 1;
		}
	    }
	}
	int Ti4575347845;
	Ti4575347845 = 0;
	if(answerb47844 == Ti4575347845){
	    double Td4575447848;
	    Td4575447848 = 0.000000;
	    int Ti4575547887;
	    Ti4575547887 = 2;
	    double Td4575647849;
	    Td4575647849 = l46437[Ti4575547887].d;
	    bool answerc47846;
	    if(Td4575447848 == Td4575647849){
		answerc47846 = 0;
	    }
	    else{
		bool Tb4575747882;
		Tb4575747882 = o_isinvert46380_fun(m46436, NULL);
		double Td4575847884;
		Td4575847884 = 0.000000;
		int Ti4575947886;
		Ti4575947886 = 2;
		double Td4576047885;
		Td4576047885 = l46437[Ti4575947886].d;
		int Ti4576147883;
		if(Td4575847884 <= Td4576047885){
		    Ti4576147883 = 0;
		}
		else{
		    Ti4576147883 = 1;
		}
		bool Tb4576247879;
		Tb4576247879 = xor46367_fun(Tb4575747882, Ti4576147883, NULL);
		int Ti4576347880;
		Ti4576347880 = 0;
		double d47850;
		if(Tb4576247879 == Ti4576347880){
		    double Td4576447881;
		    Td4576447881 = o_param_c46388_fun(m46436, NULL);
		    d47850 = -Td4576447881;
		}
		else{
		    d47850 = o_param_c46388_fun(m46436, NULL);
		}
		Value* Ta4576547877;
		Ta4576547877 = solver_w_vec;
		int Ti4576647878;
		Ti4576647878 = 2;
		double Td4576747876;
		Td4576747876 = Ta4576547877[Ti4576647878].d;
		double Td4576847873;
		Td4576847873 = d47850 - Td4576747876;
		int Ti4576947875;
		Ti4576947875 = 2;
		double Td4577047874;
		Td4577047874 = l46437[Ti4576947875].d;
		double d247851;
		d247851 = Td4576847873 / Td4577047874;
		double Td4577147852;
		Td4577147852 = o_param_a46384_fun(m46436, NULL);
		int Ti4577247872;
		Ti4577247872 = 0;
		double Td4577347871;
		Td4577347871 = l46437[Ti4577247872].d;
		double Td4577447867;
		Td4577447867 =  d247851 * Td4577347871;
		Value* Ta4577547869;
		Ta4577547869 = solver_w_vec;
		int Ti4577647870;
		Ti4577647870 = 0;
		double Td4577747868;
		Td4577747868 = Ta4577547869[Ti4577647870].d;
		double Td4577847866;
		Td4577847866 = Td4577447867 + Td4577747868;
		double Td4577947853;
		Td4577947853 = fabs(Td4577847866);
		if(Td4577147852 <= Td4577947853){
		    answerc47846 = 0;
		}
		else{
		    double Td4578047854;
		    Td4578047854 = o_param_b46386_fun(m46436, NULL);
		    int Ti4578147865;
		    Ti4578147865 = 1;
		    double Td4578247864;
		    Td4578247864 = l46437[Ti4578147865].d;
		    double Td4578347860;
		    Td4578347860 =  d247851 * Td4578247864;
		    Value* Ta4578447862;
		    Ta4578447862 = solver_w_vec;
		    int Ti4578547863;
		    Ti4578547863 = 1;
		    double Td4578647861;
		    Td4578647861 = Ta4578447862[Ti4578547863].d;
		    double Td4578747859;
		    Td4578747859 = Td4578347860 + Td4578647861;
		    double Td4578847855;
		    Td4578847855 = fabs(Td4578747859);
		    if(Td4578047854 <= Td4578847855){
			answerc47846 = 0;
		    }
		    else{
			Value* Ta4578947857;
			Ta4578947857 = solver_dist;
			int Ti4579047858;
			Ti4579047858 = 0;
			int Tu4445947856;
			Ta4578947857[Ti4579047858].d = d247851;
			answerc47846 = 1;
		    }
		}
	    }
	    int Ti4579147847;
	    Ti4579147847 = 0;
	    if(answerc47846 == Ti4579147847){
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

int solver_surface46438_fun(int* m46439, Value* l46440, Value *env){
    int result;
    int Ti4564447841;
    Ti4564447841 = 0;
    double Td4564547839;
    Td4564547839 = l46440[Ti4564447841].d;
    double Td4564647840;
    Td4564647840 = o_param_a46384_fun(m46439, NULL);
    double Td4564747834;
    Td4564747834 =  Td4564547839 * Td4564647840;
    int Ti4564847838;
    Ti4564847838 = 1;
    double Td4564947836;
    Td4564947836 = l46440[Ti4564847838].d;
    double Td4565047837;
    Td4565047837 = o_param_b46386_fun(m46439, NULL);
    double Td4565147835;
    Td4565147835 =  Td4564947836 * Td4565047837;
    double Td4565247829;
    Td4565247829 = Td4564747834 + Td4565147835;
    int Ti4565347833;
    Ti4565347833 = 2;
    double Td4565447831;
    Td4565447831 = l46440[Ti4565347833].d;
    double Td4565547832;
    Td4565547832 = o_param_c46388_fun(m46439, NULL);
    double Td4565647830;
    Td4565647830 =  Td4565447831 * Td4565547832;
    double q47805;
    q47805 = Td4565247829 + Td4565647830;
    double Td4565747806;
    Td4565747806 = 0.000000;
    if(q47805 <= Td4565747806){
	result = 0;
    }
    else{
	Value* Ta4565847827;
	Ta4565847827 = solver_w_vec;
	int Ti4565947828;
	Ti4565947828 = 0;
	double Td4566047825;
	Td4566047825 = Ta4565847827[Ti4565947828].d;
	double Td4566147826;
	Td4566147826 = o_param_a46384_fun(m46439, NULL);
	double Td4566247819;
	Td4566247819 =  Td4566047825 * Td4566147826;
	Value* Ta4566347823;
	Ta4566347823 = solver_w_vec;
	int Ti4566447824;
	Ti4566447824 = 1;
	double Td4566547821;
	Td4566547821 = Ta4566347823[Ti4566447824].d;
	double Td4566647822;
	Td4566647822 = o_param_b46386_fun(m46439, NULL);
	double Td4566747820;
	Td4566747820 =  Td4566547821 * Td4566647822;
	double Td4566847813;
	Td4566847813 = Td4566247819 + Td4566747820;
	Value* Ta4566947817;
	Ta4566947817 = solver_w_vec;
	int Ti4567047818;
	Ti4567047818 = 2;
	double Td4567147815;
	Td4567147815 = Ta4566947817[Ti4567047818].d;
	double Td4567247816;
	Td4567247816 = o_param_c46388_fun(m46439, NULL);
	double Td4567347814;
	Td4567347814 =  Td4567147815 * Td4567247816;
	double Td4567447812;
	Td4567447812 = Td4566847813 + Td4567347814;
	double t47807;
	t47807 = Td4567447812 / q47805;
	Value* Ta4567547809;
	Ta4567547809 = solver_dist;
	int Ti4567647810;
	Ti4567647810 = 0;
	double Td4567747811;
	Td4567747811 = -t47807;
	int Tu4446047808;
	Ta4567547809[Ti4567647810].d = Td4567747811;
	result = 1;
    }
    return result;
}

double in_prod_sqr_obj46441_fun(int* m46442, Value* v46443, Value *env){
    double result;
    int Ti4562847804;
    Ti4562847804 = 0;
    double Td4562947803;
    Td4562947803 = v46443[Ti4562847804].d;
    double Td4563047801;
    Td4563047801 = fsqr46370_fun(Td4562947803, NULL);
    double Td4563147802;
    Td4563147802 = o_param_a46384_fun(m46442, NULL);
    double Td4563247795;
    Td4563247795 =  Td4563047801 * Td4563147802;
    int Ti4563347800;
    Ti4563347800 = 1;
    double Td4563447799;
    Td4563447799 = v46443[Ti4563347800].d;
    double Td4563547797;
    Td4563547797 = fsqr46370_fun(Td4563447799, NULL);
    double Td4563647798;
    Td4563647798 = o_param_b46386_fun(m46442, NULL);
    double Td4563747796;
    Td4563747796 =  Td4563547797 * Td4563647798;
    double Td4563847789;
    Td4563847789 = Td4563247795 + Td4563747796;
    int Ti4563947794;
    Ti4563947794 = 2;
    double Td4564047793;
    Td4564047793 = v46443[Ti4563947794].d;
    double Td4564147791;
    Td4564147791 = fsqr46370_fun(Td4564047793, NULL);
    double Td4564247792;
    Td4564247792 = o_param_c46388_fun(m46442, NULL);
    double Td4564347790;
    Td4564347790 =  Td4564147791 * Td4564247792;
    result = Td4563847789 + Td4564347790;
    return result;
}

double in_prod_co_objrot46444_fun(int* m46445, Value* v46446, Value *env){
    double result;
    int Ti4560647788;
    Ti4560647788 = 1;
    double Td4560747785;
    Td4560747785 = v46446[Ti4560647788].d;
    int Ti4560847787;
    Ti4560847787 = 2;
    double Td4560947786;
    Td4560947786 = v46446[Ti4560847787].d;
    double Td4561047783;
    Td4561047783 =  Td4560747785 * Td4560947786;
    double Td4561147784;
    Td4561147784 = o_param_r146406_fun(m46445, NULL);
    double Td4561247775;
    Td4561247775 =  Td4561047783 * Td4561147784;
    int Ti4561347782;
    Ti4561347782 = 0;
    double Td4561447779;
    Td4561447779 = v46446[Ti4561347782].d;
    int Ti4561547781;
    Ti4561547781 = 2;
    double Td4561647780;
    Td4561647780 = v46446[Ti4561547781].d;
    double Td4561747777;
    Td4561747777 =  Td4561447779 * Td4561647780;
    double Td4561847778;
    Td4561847778 = o_param_r246408_fun(m46445, NULL);
    double Td4561947776;
    Td4561947776 =  Td4561747777 * Td4561847778;
    double Td4562047767;
    Td4562047767 = Td4561247775 + Td4561947776;
    int Ti4562147774;
    Ti4562147774 = 0;
    double Td4562247771;
    Td4562247771 = v46446[Ti4562147774].d;
    int Ti4562347773;
    Ti4562347773 = 1;
    double Td4562447772;
    Td4562447772 = v46446[Ti4562347773].d;
    double Td4562547769;
    Td4562547769 =  Td4562247771 * Td4562447772;
    double Td4562647770;
    Td4562647770 = o_param_r346410_fun(m46445, NULL);
    double Td4562747768;
    Td4562747768 =  Td4562547769 * Td4562647770;
    result = Td4562047767 + Td4562747768;
    return result;
}

double solver2nd_mul_b46447_fun(int* m46448, Value* l46449, Value *env){
    double result;
    Value* Ta4558147765;
    Ta4558147765 = solver_w_vec;
    int Ti4558247766;
    Ti4558247766 = 0;
    double Td4558347762;
    Td4558347762 = Ta4558147765[Ti4558247766].d;
    int Ti4558447764;
    Ti4558447764 = 0;
    double Td4558547763;
    Td4558547763 = l46449[Ti4558447764].d;
    double Td4558647760;
    Td4558647760 =  Td4558347762 * Td4558547763;
    double Td4558747761;
    Td4558747761 = o_param_a46384_fun(m46448, NULL);
    double Td4558847751;
    Td4558847751 =  Td4558647760 * Td4558747761;
    Value* Ta4558947758;
    Ta4558947758 = solver_w_vec;
    int Ti4559047759;
    Ti4559047759 = 1;
    double Td4559147755;
    Td4559147755 = Ta4558947758[Ti4559047759].d;
    int Ti4559247757;
    Ti4559247757 = 1;
    double Td4559347756;
    Td4559347756 = l46449[Ti4559247757].d;
    double Td4559447753;
    Td4559447753 =  Td4559147755 * Td4559347756;
    double Td4559547754;
    Td4559547754 = o_param_b46386_fun(m46448, NULL);
    double Td4559647752;
    Td4559647752 =  Td4559447753 * Td4559547754;
    double Td4559747742;
    Td4559747742 = Td4558847751 + Td4559647752;
    Value* Ta4559847749;
    Ta4559847749 = solver_w_vec;
    int Ti4559947750;
    Ti4559947750 = 2;
    double Td4560047746;
    Td4560047746 = Ta4559847749[Ti4559947750].d;
    int Ti4560147748;
    Ti4560147748 = 2;
    double Td4560247747;
    Td4560247747 = l46449[Ti4560147748].d;
    double Td4560347744;
    Td4560347744 =  Td4560047746 * Td4560247747;
    double Td4560447745;
    Td4560447745 = o_param_c46388_fun(m46448, NULL);
    double Td4560547743;
    Td4560547743 =  Td4560347744 * Td4560447745;
    result = Td4559747742 + Td4560547743;
    return result;
}

double solver2nd_rot_b46450_fun(int* m46451, Value* l46452, Value *env){
    double result;
    Value* Ta4553547740;
    Ta4553547740 = solver_w_vec;
    int Ti4553647741;
    Ti4553647741 = 2;
    double Td4553747737;
    Td4553747737 = Ta4553547740[Ti4553647741].d;
    int Ti4553847739;
    Ti4553847739 = 1;
    double Td4553947738;
    Td4553947738 = l46452[Ti4553847739].d;
    double Td4554047730;
    Td4554047730 =  Td4553747737 * Td4553947738;
    Value* Ta4554147735;
    Ta4554147735 = solver_w_vec;
    int Ti4554247736;
    Ti4554247736 = 1;
    double Td4554347732;
    Td4554347732 = Ta4554147735[Ti4554247736].d;
    int Ti4554447734;
    Ti4554447734 = 2;
    double Td4554547733;
    Td4554547733 = l46452[Ti4554447734].d;
    double Td4554647731;
    Td4554647731 =  Td4554347732 * Td4554547733;
    double Td4554747728;
    Td4554747728 = Td4554047730 + Td4554647731;
    double Td4554847729;
    Td4554847729 = o_param_r146406_fun(m46451, NULL);
    double Td4554947712;
    Td4554947712 =  Td4554747728 * Td4554847729;
    Value* Ta4555047726;
    Ta4555047726 = solver_w_vec;
    int Ti4555147727;
    Ti4555147727 = 0;
    double Td4555247723;
    Td4555247723 = Ta4555047726[Ti4555147727].d;
    int Ti4555347725;
    Ti4555347725 = 2;
    double Td4555447724;
    Td4555447724 = l46452[Ti4555347725].d;
    double Td4555547716;
    Td4555547716 =  Td4555247723 * Td4555447724;
    Value* Ta4555647721;
    Ta4555647721 = solver_w_vec;
    int Ti4555747722;
    Ti4555747722 = 2;
    double Td4555847718;
    Td4555847718 = Ta4555647721[Ti4555747722].d;
    int Ti4555947720;
    Ti4555947720 = 0;
    double Td4556047719;
    Td4556047719 = l46452[Ti4555947720].d;
    double Td4556147717;
    Td4556147717 =  Td4555847718 * Td4556047719;
    double Td4556247714;
    Td4556247714 = Td4555547716 + Td4556147717;
    double Td4556347715;
    Td4556347715 = o_param_r246408_fun(m46451, NULL);
    double Td4556447713;
    Td4556447713 =  Td4556247714 * Td4556347715;
    double Td4556547696;
    Td4556547696 = Td4554947712 + Td4556447713;
    Value* Ta4556647710;
    Ta4556647710 = solver_w_vec;
    int Ti4556747711;
    Ti4556747711 = 0;
    double Td4556847707;
    Td4556847707 = Ta4556647710[Ti4556747711].d;
    int Ti4556947709;
    Ti4556947709 = 1;
    double Td4557047708;
    Td4557047708 = l46452[Ti4556947709].d;
    double Td4557147700;
    Td4557147700 =  Td4556847707 * Td4557047708;
    Value* Ta4557247705;
    Ta4557247705 = solver_w_vec;
    int Ti4557347706;
    Ti4557347706 = 1;
    double Td4557447702;
    Td4557447702 = Ta4557247705[Ti4557347706].d;
    int Ti4557547704;
    Ti4557547704 = 0;
    double Td4557647703;
    Td4557647703 = l46452[Ti4557547704].d;
    double Td4557747701;
    Td4557747701 =  Td4557447702 * Td4557647703;
    double Td4557847698;
    Td4557847698 = Td4557147700 + Td4557747701;
    double Td4557947699;
    Td4557947699 = o_param_r346410_fun(m46451, NULL);
    double Td4558047697;
    Td4558047697 =  Td4557847698 * Td4557947699;
    result = Td4556547696 + Td4558047697;
    return result;
}

int solver_second46453_fun(int* m46454, Value* l46455, Value *env){
    int result;
    double aa047655;
    aa047655 = in_prod_sqr_obj46441_fun(m46454, l46455, NULL);
    int Ti4550647693;
    Ti4550647693 = o_isrot46382_fun(m46454, NULL);
    int Ti4550747694;
    Ti4550747694 = 0;
    double aa47656;
    if(Ti4550647693 == Ti4550747694){
	aa47656 = aa047655;
    }
    else{
	double Td4550847695;
	Td4550847695 = in_prod_co_objrot46444_fun(m46454, l46455, NULL);
	aa47656 = aa047655 + Td4550847695;
    }
    double Td4550947657;
    Td4550947657 = 0.000000;
    if(Td4550947657 == aa47656){
	result = 0;
    }
    else{
	double Td4551047691;
	Td4551047691 = 2.000000;
	double Td4551147692;
	Td4551147692 = solver2nd_mul_b46447_fun(m46454, l46455, NULL);
	double bb047658;
	bb047658 =  Td4551047691 * Td4551147692;
	int Ti4551247688;
	Ti4551247688 = o_isrot46382_fun(m46454, NULL);
	int Ti4551347689;
	Ti4551347689 = 0;
	double bb47659;
	if(Ti4551247688 == Ti4551347689){
	    bb47659 = bb047658;
	}
	else{
	    double Td4551447690;
	    Td4551447690 = solver2nd_rot_b46450_fun(m46454, l46455, NULL);
	    bb47659 = bb047658 + Td4551447690;
	}
	Value* Ta4551547687;
	Ta4551547687 = solver_w_vec;
	double cc047660;
	cc047660 = in_prod_sqr_obj46441_fun(m46454, Ta4551547687, NULL);
	int Ti4551647683;
	Ti4551647683 = o_isrot46382_fun(m46454, NULL);
	int Ti4551747684;
	Ti4551747684 = 0;
	double cc147661;
	if(Ti4551647683 == Ti4551747684){
	    cc147661 = cc047660;
	}
	else{
	    Value* Ta4551847686;
	    Ta4551847686 = solver_w_vec;
	    double Td4551947685;
	    Td4551947685 = in_prod_co_objrot46444_fun(m46454, Ta4551847686, NULL);
	    cc147661 = cc047660 + Td4551947685;
	}
	int Ti4552047680;
	Ti4552047680 = o_form46376_fun(m46454, NULL);
	int Ti4552147681;
	Ti4552147681 = 3;
	double cc47662;
	if(Ti4552047680 == Ti4552147681){
	    double Td4552247682;
	    Td4552247682 = 1.000000;
	    cc47662 = cc147661 - Td4552247682;
	}
	else{
	    cc47662 = cc147661;
	}
	double Td4552347679;
	Td4552347679 = 4.000000;
	double Td4552447678;
	Td4552447678 =  Td4552347679 * aa47656;
	double d247676;
	d247676 =  Td4552447678 * cc47662;
	double Td4552547677;
	Td4552547677 = fsqr46370_fun(bb47659, NULL);
	double d47663;
	d47663 = Td4552547677 - d247676;
	double Td4552647664;
	Td4552647664 = 0.000000;
	if(d47663 <= Td4552647664){
	    result = 0;
	}
	else{
	    double sd47665;
	    sd47665 = sqrt(d47663);
	    bool Tb4552747674;
	    Tb4552747674 = o_isinvert46380_fun(m46454, NULL);
	    int Ti4552847675;
	    Ti4552847675 = 0;
	    double t147666;
	    if(Tb4552747674 == Ti4552847675){
		t147666 = -sd47665;
	    }
	    else{
		t147666 = sd47665;
	    }
	    Value* Ta4552947668;
	    Ta4552947668 = solver_dist;
	    int Ti4553047669;
	    Ti4553047669 = 0;
	    double Td4553147672;
	    Td4553147672 = t147666 - bb47659;
	    double Td4553247673;
	    Td4553247673 = 2.000000;
	    double Td4553347671;
	    Td4553347671 = Td4553147672 / Td4553247673;
	    double Td4553447670;
	    Td4553447670 = Td4553347671 / aa47656;
	    int Tu4446147667;
	    Ta4552947668[Ti4553047669].d = Td4553447670;
	    result = 1;
	}
    }
    return result;
}

int solver46456_fun(int index46457, Value* l46458, Value* p46459, Value *env){
    int result;
    Value* Ta4548547654;
    Ta4548547654 = objects;
    int* m47629;
    m47629 = Ta4548547654[index46457].a;
    Value* Ta4548647648;
    Ta4548647648 = solver_w_vec;
    int Ti4548747649;
    Ti4548747649 = 0;
    int Ti4548847653;
    Ti4548847653 = 0;
    double Td4548947651;
    Td4548947651 = p46459[Ti4548847653].d;
    double Td4549047652;
    Td4549047652 = o_param_x46390_fun(m47629, NULL);
    double Td4549147650;
    Td4549147650 = Td4548947651 - Td4549047652;
    int Tu4446447630;
    Ta4548647648[Ti4548747649].d = Td4549147650;
    Value* Ta4549247642;
    Ta4549247642 = solver_w_vec;
    int Ti4549347643;
    Ti4549347643 = 1;
    int Ti4549447647;
    Ti4549447647 = 1;
    double Td4549547645;
    Td4549547645 = p46459[Ti4549447647].d;
    double Td4549647646;
    Td4549647646 = o_param_y46392_fun(m47629, NULL);
    double Td4549747644;
    Td4549747644 = Td4549547645 - Td4549647646;
    int Tu4446347631;
    Ta4549247642[Ti4549347643].d = Td4549747644;
    Value* Ta4549847636;
    Ta4549847636 = solver_w_vec;
    int Ti4549947637;
    Ti4549947637 = 2;
    int Ti4550047641;
    Ti4550047641 = 2;
    double Td4550147639;
    Td4550147639 = p46459[Ti4550047641].d;
    double Td4550247640;
    Td4550247640 = o_param_z46394_fun(m47629, NULL);
    double Td4550347638;
    Td4550347638 = Td4550147639 - Td4550247640;
    int Tu4446247632;
    Ta4549847636[Ti4549947637].d = Td4550347638;
    int m_shape47633;
    m_shape47633 = o_form46376_fun(m47629, NULL);
    int Ti4550447634;
    Ti4550447634 = 1;
    if(m_shape47633 == Ti4550447634){
	result = solver_rect46435_fun(m47629, l46458, NULL);
    }
    else{
	int Ti4550547635;
	Ti4550547635 = 2;
	if(m_shape47633 == Ti4550547635){
	    result = solver_surface46438_fun(m47629, l46458, NULL);
	}
	else{
	    result = solver_second46453_fun(m47629, l46458, NULL);
	}
    }
    return result;
}

bool is_rect_outside46460_fun(int* m46461, Value *env){
    bool result;
    double Td4546647614;
    Td4546647614 = o_param_a46384_fun(m46461, NULL);
    Value* Ta4546747627;
    Ta4546747627 = isoutside_q;
    int Ti4546847628;
    Ti4546847628 = 0;
    double Td4546947626;
    Td4546947626 = Ta4546747627[Ti4546847628].d;
    double Td4547047615;
    Td4547047615 = fabs(Td4546947626);
    int Ti4548147610;
    if(Td4546647614 <= Td4547047615){
	Ti4548147610 = 0;
    }
    else{
	double Td4547147616;
	Td4547147616 = o_param_b46386_fun(m46461, NULL);
	Value* Ta4547247624;
	Ta4547247624 = isoutside_q;
	int Ti4547347625;
	Ti4547347625 = 1;
	double Td4547447623;
	Td4547447623 = Ta4547247624[Ti4547347625].d;
	double Td4547547617;
	Td4547547617 = fabs(Td4547447623);
	if(Td4547147616 <= Td4547547617){
	    Ti4548147610 = 0;
	}
	else{
	    double Td4547647618;
	    Td4547647618 = o_param_c46388_fun(m46461, NULL);
	    Value* Ta4547747621;
	    Ta4547747621 = isoutside_q;
	    int Ti4547847622;
	    Ti4547847622 = 2;
	    double Td4547947620;
	    Td4547947620 = Ta4547747621[Ti4547847622].d;
	    double Td4548047619;
	    Td4548047619 = fabs(Td4547947620);
	    if(Td4547647618 <= Td4548047619){
		Ti4548147610 = 0;
	    }
	    else{
		Ti4548147610 = 1;
	    }
	}
    }
    int Ti4548247611;
    Ti4548247611 = 0;
    if(Ti4548147610 == Ti4548247611){
	bool Tb4548347612;
	Tb4548347612 = o_isinvert46380_fun(m46461, NULL);
	int Ti4548447613;
	Ti4548447613 = 0;
	if(Tb4548347612 == Ti4548447613){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    else{
	result = o_isinvert46380_fun(m46461, NULL);
    }
    return result;
}

bool is_plane_outside46462_fun(int* m46463, Value *env){
    bool result;
    double Td4544647606;
    Td4544647606 = o_param_a46384_fun(m46463, NULL);
    Value* Ta4544747608;
    Ta4544747608 = isoutside_q;
    int Ti4544847609;
    Ti4544847609 = 0;
    double Td4544947607;
    Td4544947607 = Ta4544747608[Ti4544847609].d;
    double Td4545047600;
    Td4545047600 =  Td4544647606 * Td4544947607;
    double Td4545147602;
    Td4545147602 = o_param_b46386_fun(m46463, NULL);
    Value* Ta4545247604;
    Ta4545247604 = isoutside_q;
    int Ti4545347605;
    Ti4545347605 = 1;
    double Td4545447603;
    Td4545447603 = Ta4545247604[Ti4545347605].d;
    double Td4545547601;
    Td4545547601 =  Td4545147602 * Td4545447603;
    double Td4545647594;
    Td4545647594 = Td4545047600 + Td4545547601;
    double Td4545747596;
    Td4545747596 = o_param_c46388_fun(m46463, NULL);
    Value* Ta4545847598;
    Ta4545847598 = isoutside_q;
    int Ti4545947599;
    Ti4545947599 = 2;
    double Td4546047597;
    Td4546047597 = Ta4545847598[Ti4545947599].d;
    double Td4546147595;
    Td4546147595 =  Td4545747596 * Td4546047597;
    double w47588;
    w47588 = Td4545647594 + Td4546147595;
    double Td4546247593;
    Td4546247593 = 0.000000;
    bool s47589;
    if(Td4546247593 <= w47588){
	s47589 = 0;
    }
    else{
	s47589 = 1;
    }
    bool Tb4546347592;
    Tb4546347592 = o_isinvert46380_fun(m46463, NULL);
    bool Tb4546447590;
    Tb4546447590 = xor46367_fun(Tb4546347592, s47589, NULL);
    int Ti4546547591;
    Ti4546547591 = 0;
    if(Tb4546447590 == Ti4546547591){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_second_outside46464_fun(int* m46465, Value *env){
    bool result;
    Value* Ta4543447587;
    Ta4543447587 = isoutside_q;
    double w47572;
    w47572 = in_prod_sqr_obj46441_fun(m46465, Ta4543447587, NULL);
    int Ti4543547584;
    Ti4543547584 = o_form46376_fun(m46465, NULL);
    int Ti4543647585;
    Ti4543647585 = 3;
    double w247573;
    if(Ti4543547584 == Ti4543647585){
	double Td4543747586;
	Td4543747586 = 1.000000;
	w247573 = w47572 - Td4543747586;
    }
    else{
	w247573 = w47572;
    }
    int Ti4543847580;
    Ti4543847580 = o_isrot46382_fun(m46465, NULL);
    int Ti4543947581;
    Ti4543947581 = 0;
    double w347574;
    if(Ti4543847580 == Ti4543947581){
	w347574 = w247573;
    }
    else{
	Value* Ta4544047583;
	Ta4544047583 = isoutside_q;
	double Td4544147582;
	Td4544147582 = in_prod_co_objrot46444_fun(m46465, Ta4544047583, NULL);
	w347574 = w247573 + Td4544147582;
    }
    double Td4544247579;
    Td4544247579 = 0.000000;
    bool s47575;
    if(Td4544247579 <= w347574){
	s47575 = 0;
    }
    else{
	s47575 = 1;
    }
    bool Tb4544347578;
    Tb4544347578 = o_isinvert46380_fun(m46465, NULL);
    bool Tb4544447576;
    Tb4544447576 = xor46367_fun(Tb4544347578, s47575, NULL);
    int Ti4544547577;
    Ti4544547577 = 0;
    if(Tb4544447576 == Ti4544547577){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_outside46466_fun(int* m46467, Value *env){
    bool result;
    Value* Ta4541147565;
    Ta4541147565 = isoutside_q;
    int Ti4541247566;
    Ti4541247566 = 0;
    Value* Ta4541347570;
    Ta4541347570 = chkinside_p;
    int Ti4541447571;
    Ti4541447571 = 0;
    double Td4541547568;
    Td4541547568 = Ta4541347570[Ti4541447571].d;
    double Td4541647569;
    Td4541647569 = o_param_x46390_fun(m46467, NULL);
    double Td4541747567;
    Td4541747567 = Td4541547568 - Td4541647569;
    int Tu4446747545;
    Ta4541147565[Ti4541247566].d = Td4541747567;
    Value* Ta4541847558;
    Ta4541847558 = isoutside_q;
    int Ti4541947559;
    Ti4541947559 = 1;
    Value* Ta4542047563;
    Ta4542047563 = chkinside_p;
    int Ti4542147564;
    Ti4542147564 = 1;
    double Td4542247561;
    Td4542247561 = Ta4542047563[Ti4542147564].d;
    double Td4542347562;
    Td4542347562 = o_param_y46392_fun(m46467, NULL);
    double Td4542447560;
    Td4542447560 = Td4542247561 - Td4542347562;
    int Tu4446647546;
    Ta4541847558[Ti4541947559].d = Td4542447560;
    Value* Ta4542547551;
    Ta4542547551 = isoutside_q;
    int Ti4542647552;
    Ti4542647552 = 2;
    Value* Ta4542747556;
    Ta4542747556 = chkinside_p;
    int Ti4542847557;
    Ti4542847557 = 2;
    double Td4542947554;
    Td4542947554 = Ta4542747556[Ti4542847557].d;
    double Td4543047555;
    Td4543047555 = o_param_z46394_fun(m46467, NULL);
    double Td4543147553;
    Td4543147553 = Td4542947554 - Td4543047555;
    int Tu4446547547;
    Ta4542547551[Ti4542647552].d = Td4543147553;
    int m_shape47548;
    m_shape47548 = o_form46376_fun(m46467, NULL);
    int Ti4543247549;
    Ti4543247549 = 1;
    if(m_shape47548 == Ti4543247549){
	result = is_rect_outside46460_fun(m46467, NULL);
    }
    else{
	int Ti4543347550;
	Ti4543347550 = 2;
	if(m_shape47548 == Ti4543347550){
	    result = is_plane_outside46462_fun(m46467, NULL);
	}
	else{
	    result = is_second_outside46464_fun(m46467, NULL);
	}
    }
    return result;
}

bool check_all_inside46468_fun(int ofs46469, Value* iand46470, Value *env){
    bool result;
    int head47536;
    head47536 = iand46470[ofs46469].i;
    int Ti4540347544;
    Ti4540347544 = 1;
    int Ti4540447537;
    Ti4540447537 = -Ti4540347544;
    if(head47536 == Ti4540447537){
	result = 1;
    }
    else{
	Value* Ta4540547543;
	Ta4540547543 = objects;
	int* Tt4540647542;
	Tt4540647542 = Ta4540547543[head47536].a;
	bool Tb4540747538;
	Tb4540747538 = is_outside46466_fun(Tt4540647542, NULL);
	int Ti4540847539;
	Ti4540847539 = 0;
	if(Tb4540747538 == Ti4540847539){
	    int Ti4540947541;
	    Ti4540947541 = 1;
	    int Ti4541047540;
	    Ti4541047540 = ofs46469 + Ti4540947541;
	    result = check_all_inside46468_fun(Ti4541047540, iand46470, NULL);
	}
	else{
	    result = 0;
	}
    }
    return result;
}

bool shadow_check_and_group46471_fun(int iand_ofs46472, Value* and_group46473, Value* p46474, Value *env){
    bool result;
    int Ti4535447480;
    Ti4535447480 = and_group46473[iand_ofs46472].i;
    int Ti4535547535;
    Ti4535547535 = 1;
    int Ti4535647481;
    Ti4535647481 = -Ti4535547535;
    if(Ti4535447480 == Ti4535647481){
	result = 0;
    }
    else{
	int obj47482;
	obj47482 = and_group46473[iand_ofs46472].i;
	Value* Ta4535747534;
	Ta4535747534 = light;
	int t047483;
	t047483 = solver46456_fun(obj47482, Ta4535747534, p46474, NULL);
	Value* Ta4535847532;
	Ta4535847532 = solver_dist;
	int Ti4535947533;
	Ti4535947533 = 0;
	double t0p47484;
	t0p47484 = Ta4535847532[Ti4535947533].d;
	int Ti4536047530;
	Ti4536047530 = 0;
	int Ti4536247485;
	if(t047483 == Ti4536047530){
	    Ti4536247485 = 0;
	}
	else{
	    double Td4536147531;
	    Td4536147531 = -0.200000;
	    if(Td4536147531 <= t0p47484){
		Ti4536247485 = 0;
	    }
	    else{
		Ti4536247485 = 1;
	    }
	}
	int Ti4536347486;
	Ti4536347486 = 0;
	if(Ti4536247485 == Ti4536347486){
	    Value* Ta4536447529;
	    Ta4536447529 = objects;
	    int* Tt4536547528;
	    Tt4536547528 = Ta4536447529[obj47482].a;
	    bool Tb4536647524;
	    Tb4536647524 = o_isinvert46380_fun(Tt4536547528, NULL);
	    int Ti4536747525;
	    Ti4536747525 = 0;
	    if(Tb4536647524 == Ti4536747525){
		result = 0;
	    }
	    else{
		int Ti4536847527;
		Ti4536847527 = 1;
		int Ti4536947526;
		Ti4536947526 = iand_ofs46472 + Ti4536847527;
		result = shadow_check_and_group46471_fun(Ti4536947526, and_group46473, p46474, NULL);
	    }
	}
	else{
	    double Td4537047523;
	    Td4537047523 = 0.010000;
	    double t47487;
	    t47487 = t0p47484 + Td4537047523;
	    Value* Ta4537147514;
	    Ta4537147514 = chkinside_p;
	    int Ti4537247515;
	    Ti4537247515 = 0;
	    Value* Ta4537347521;
	    Ta4537347521 = light;
	    int Ti4537447522;
	    Ti4537447522 = 0;
	    double Td4537547520;
	    Td4537547520 = Ta4537347521[Ti4537447522].d;
	    double Td4537647517;
	    Td4537647517 =  Td4537547520 * t47487;
	    int Ti4537747519;
	    Ti4537747519 = 0;
	    double Td4537847518;
	    Td4537847518 = p46474[Ti4537747519].d;
	    double Td4537947516;
	    Td4537947516 = Td4537647517 + Td4537847518;
	    int Tu4447047488;
	    Ta4537147514[Ti4537247515].d = Td4537947516;
	    Value* Ta4538047505;
	    Ta4538047505 = chkinside_p;
	    int Ti4538147506;
	    Ti4538147506 = 1;
	    Value* Ta4538247512;
	    Ta4538247512 = light;
	    int Ti4538347513;
	    Ti4538347513 = 1;
	    double Td4538447511;
	    Td4538447511 = Ta4538247512[Ti4538347513].d;
	    double Td4538547508;
	    Td4538547508 =  Td4538447511 * t47487;
	    int Ti4538647510;
	    Ti4538647510 = 1;
	    double Td4538747509;
	    Td4538747509 = p46474[Ti4538647510].d;
	    double Td4538847507;
	    Td4538847507 = Td4538547508 + Td4538747509;
	    int Tu4446947489;
	    Ta4538047505[Ti4538147506].d = Td4538847507;
	    Value* Ta4538947496;
	    Ta4538947496 = chkinside_p;
	    int Ti4539047497;
	    Ti4539047497 = 2;
	    Value* Ta4539147503;
	    Ta4539147503 = light;
	    int Ti4539247504;
	    Ti4539247504 = 2;
	    double Td4539347502;
	    Td4539347502 = Ta4539147503[Ti4539247504].d;
	    double Td4539447499;
	    Td4539447499 =  Td4539347502 * t47487;
	    int Ti4539547501;
	    Ti4539547501 = 2;
	    double Td4539647500;
	    Td4539647500 = p46474[Ti4539547501].d;
	    double Td4539747498;
	    Td4539747498 = Td4539447499 + Td4539647500;
	    int Tu4446847490;
	    Ta4538947496[Ti4539047497].d = Td4539747498;
	    int Ti4539847495;
	    Ti4539847495 = 0;
	    bool Tb4539947491;
	    Tb4539947491 = check_all_inside46468_fun(Ti4539847495, and_group46473, NULL);
	    int Ti4540047492;
	    Ti4540047492 = 0;
	    if(Tb4539947491 == Ti4540047492){
		int Ti4540147494;
		Ti4540147494 = 1;
		int Ti4540247493;
		Ti4540247493 = iand_ofs46472 + Ti4540147494;
		result = shadow_check_and_group46471_fun(Ti4540247493, and_group46473, p46474, NULL);
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

bool shadow_check_one_or_group46475_fun(int ofs46476, Value* or_group46477, Value* p46478, Value *env){
    bool result;
    int head47470;
    head47470 = or_group46477[ofs46476].i;
    int Ti4534747479;
    Ti4534747479 = 1;
    int Ti4534847471;
    Ti4534847471 = -Ti4534747479;
    if(head47470 == Ti4534847471){
	result = 0;
    }
    else{
	Value* Ta4534947478;
	Ta4534947478 = and_net;
	Value* and_group47472;
	and_group47472 = Ta4534947478[head47470].a;
	int Ti4535047477;
	Ti4535047477 = 0;
	bool shadow_p47473;
	shadow_p47473 = shadow_check_and_group46471_fun(Ti4535047477, and_group47472, p46478, NULL);
	int Ti4535147474;
	Ti4535147474 = 0;
	if(shadow_p47473 == Ti4535147474){
	    int Ti4535247476;
	    Ti4535247476 = 1;
	    int Ti4535347475;
	    Ti4535347475 = ofs46476 + Ti4535247476;
	    result = shadow_check_one_or_group46475_fun(Ti4535347475, or_group46477, p46478, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

bool shadow_check_one_or_matrix46479_fun(int ofs46480, Value* or_matrix46481, Value* p46482, Value *env){
    bool result;
    Value* head47443;
    head47443 = or_matrix46481[ofs46480].a;
    int Ti4532347469;
    Ti4532347469 = 0;
    int range_primitive47444;
    range_primitive47444 = head47443[Ti4532347469].i;
    int Ti4532447468;
    Ti4532447468 = 1;
    int Ti4532547445;
    Ti4532547445 = -Ti4532447468;
    if(range_primitive47444 == Ti4532547445){
	result = 0;
    }
    else{
	int Ti4532647446;
	Ti4532647446 = 99;
	if(range_primitive47444 == Ti4532647446){
	    int Ti4532747467;
	    Ti4532747467 = 1;
	    bool Tb4532847463;
	    Tb4532847463 = shadow_check_one_or_group46475_fun(Ti4532747467, head47443, p46482, NULL);
	    int Ti4532947464;
	    Ti4532947464 = 0;
	    if(Tb4532847463 == Ti4532947464){
		int Ti4533047466;
		Ti4533047466 = 1;
		int Ti4533147465;
		Ti4533147465 = ofs46480 + Ti4533047466;
		result = shadow_check_one_or_matrix46479_fun(Ti4533147465, or_matrix46481, p46482, NULL);
	    }
	    else{
		result = 1;
	    }
	}
	else{
	    Value* Ta4533247462;
	    Ta4533247462 = light;
	    int t47447;
	    t47447 = solver46456_fun(range_primitive47444, Ta4533247462, p46482, NULL);
	    int Ti4533347448;
	    Ti4533347448 = 0;
	    if(t47447 == Ti4533347448){
		int Ti4533447461;
		Ti4533447461 = 1;
		int Ti4533547460;
		Ti4533547460 = ofs46480 + Ti4533447461;
		result = shadow_check_one_or_matrix46479_fun(Ti4533547460, or_matrix46481, p46482, NULL);
	    }
	    else{
		double Td4533647449;
		Td4533647449 = -0.100000;
		Value* Ta4533747458;
		Ta4533747458 = solver_dist;
		int Ti4533847459;
		Ti4533847459 = 0;
		double Td4533947450;
		Td4533947450 = Ta4533747458[Ti4533847459].d;
		if(Td4533647449 <= Td4533947450){
		    int Ti4534047457;
		    Ti4534047457 = 1;
		    int Ti4534147456;
		    Ti4534147456 = ofs46480 + Ti4534047457;
		    result = shadow_check_one_or_matrix46479_fun(Ti4534147456, or_matrix46481, p46482, NULL);
		}
		else{
		    int Ti4534247455;
		    Ti4534247455 = 1;
		    bool Tb4534347451;
		    Tb4534347451 = shadow_check_one_or_group46475_fun(Ti4534247455, head47443, p46482, NULL);
		    int Ti4534447452;
		    Ti4534447452 = 0;
		    if(Tb4534347451 == Ti4534447452){
			int Ti4534547454;
			Ti4534547454 = 1;
			int Ti4534647453;
			Ti4534647453 = ofs46480 + Ti4534547454;
			result = shadow_check_one_or_matrix46479_fun(Ti4534647453, or_matrix46481, p46482, NULL);
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

int solve_each_element46483_fun(int iand_ofs46484, Value* and_group46485, Value *env){
    int result;
    int iobj47351;
    iobj47351 = and_group46485[iand_ofs46484].i;
    int Ti4524447442;
    Ti4524447442 = 1;
    int Ti4524547352;
    Ti4524547352 = -Ti4524447442;
    if(iobj47351 == Ti4524547352){
	result = 1;
    }
    else{
	Value* Ta4524647440;
	Ta4524647440 = vscan;
	Value* Ta4524747441;
	Ta4524747441 = viewpoint;
	int t047353;
	t047353 = solver46456_fun(iobj47351, Ta4524647440, Ta4524747441, NULL);
	int Ti4524847361;
	Ti4524847361 = 0;
	int Tu4447947354;
	if(t047353 == Ti4524847361){
	    Value* Ta4524947439;
	    Ta4524947439 = objects;
	    int* Tt4525047438;
	    Tt4525047438 = Ta4524947439[iobj47351].a;
	    bool Tb4525147433;
	    Tb4525147433 = o_isinvert46380_fun(Tt4525047438, NULL);
	    int Ti4525247434;
	    Ti4525247434 = 0;
	    if(Tb4525147433 == Ti4525247434){
		Value* Ta4525347435;
		Ta4525347435 = end_flag;
		int Ti4525447436;
		Ti4525447436 = 0;
		int Ti4525547437;
		Ti4525547437 = 1;
		Ta4525347435[Ti4525447436].i = Ti4525547437;
	    }
	    else{
		Tu4447947354 = 1;
	    }
	}
	else{
	    Value* Ta4525647431;
	    Ta4525647431 = solver_dist;
	    int Ti4525747432;
	    Ti4525747432 = 0;
	    double t0p47362;
	    t0p47362 = Ta4525647431[Ti4525747432].d;
	    double Td4525847363;
	    Td4525847363 = -0.100000;
	    if(t0p47362 <= Td4525847363){
		Tu4447947354 = 1;
	    }
	    else{
		Value* Ta4525947429;
		Ta4525947429 = tmin;
		int Ti4526047430;
		Ti4526047430 = 0;
		double Td4526147364;
		Td4526147364 = Ta4525947429[Ti4526047430].d;
		if(Td4526147364 <= t0p47362){
		    Tu4447947354 = 1;
		}
		else{
		    double Td4526247428;
		    Td4526247428 = 0.010000;
		    double t47365;
		    t47365 = t0p47362 + Td4526247428;
		    Value* Ta4526347418;
		    Ta4526347418 = chkinside_p;
		    int Ti4526447419;
		    Ti4526447419 = 0;
		    Value* Ta4526547426;
		    Ta4526547426 = vscan;
		    int Ti4526647427;
		    Ti4526647427 = 0;
		    double Td4526747425;
		    Td4526747425 = Ta4526547426[Ti4526647427].d;
		    double Td4526847421;
		    Td4526847421 =  Td4526747425 * t47365;
		    Value* Ta4526947423;
		    Ta4526947423 = viewpoint;
		    int Ti4527047424;
		    Ti4527047424 = 0;
		    double Td4527147422;
		    Td4527147422 = Ta4526947423[Ti4527047424].d;
		    double Td4527247420;
		    Td4527247420 = Td4526847421 + Td4527147422;
		    int Tu4447847366;
		    Ta4526347418[Ti4526447419].d = Td4527247420;
		    Value* Ta4527347408;
		    Ta4527347408 = chkinside_p;
		    int Ti4527447409;
		    Ti4527447409 = 1;
		    Value* Ta4527547416;
		    Ta4527547416 = vscan;
		    int Ti4527647417;
		    Ti4527647417 = 1;
		    double Td4527747415;
		    Td4527747415 = Ta4527547416[Ti4527647417].d;
		    double Td4527847411;
		    Td4527847411 =  Td4527747415 * t47365;
		    Value* Ta4527947413;
		    Ta4527947413 = viewpoint;
		    int Ti4528047414;
		    Ti4528047414 = 1;
		    double Td4528147412;
		    Td4528147412 = Ta4527947413[Ti4528047414].d;
		    double Td4528247410;
		    Td4528247410 = Td4527847411 + Td4528147412;
		    int Tu4447747367;
		    Ta4527347408[Ti4527447409].d = Td4528247410;
		    Value* Ta4528347398;
		    Ta4528347398 = chkinside_p;
		    int Ti4528447399;
		    Ti4528447399 = 2;
		    Value* Ta4528547406;
		    Ta4528547406 = vscan;
		    int Ti4528647407;
		    Ti4528647407 = 2;
		    double Td4528747405;
		    Td4528747405 = Ta4528547406[Ti4528647407].d;
		    double Td4528847401;
		    Td4528847401 =  Td4528747405 * t47365;
		    Value* Ta4528947403;
		    Ta4528947403 = viewpoint;
		    int Ti4529047404;
		    Ti4529047404 = 2;
		    double Td4529147402;
		    Td4529147402 = Ta4528947403[Ti4529047404].d;
		    double Td4529247400;
		    Td4529247400 = Td4528847401 + Td4529147402;
		    int Tu4447647368;
		    Ta4528347398[Ti4528447399].d = Td4529247400;
		    int Ti4529347397;
		    Ti4529347397 = 0;
		    bool Tb4529447369;
		    Tb4529447369 = check_all_inside46468_fun(Ti4529347397, and_group46485, NULL);
		    int Ti4529547370;
		    Ti4529547370 = 0;
		    if(Tb4529447369 == Ti4529547370){
			Tu4447947354 = 1;
		    }
		    else{
			Value* Ta4529647395;
			Ta4529647395 = tmin;
			int Ti4529747396;
			Ti4529747396 = 0;
			int Tu4447547371;
			Ta4529647395[Ti4529747396].d = t47365;
			Value* Ta4529847390;
			Ta4529847390 = crashed_point;
			int Ti4529947391;
			Ti4529947391 = 0;
			Value* Ta4530047393;
			Ta4530047393 = chkinside_p;
			int Ti4530147394;
			Ti4530147394 = 0;
			double Td4530247392;
			Td4530247392 = Ta4530047393[Ti4530147394].d;
			int Tu4447447372;
			Ta4529847390[Ti4529947391].d = Td4530247392;
			Value* Ta4530347385;
			Ta4530347385 = crashed_point;
			int Ti4530447386;
			Ti4530447386 = 1;
			Value* Ta4530547388;
			Ta4530547388 = chkinside_p;
			int Ti4530647389;
			Ti4530647389 = 1;
			double Td4530747387;
			Td4530747387 = Ta4530547388[Ti4530647389].d;
			int Tu4447347373;
			Ta4530347385[Ti4530447386].d = Td4530747387;
			Value* Ta4530847380;
			Ta4530847380 = crashed_point;
			int Ti4530947381;
			Ti4530947381 = 2;
			Value* Ta4531047383;
			Ta4531047383 = chkinside_p;
			int Ti4531147384;
			Ti4531147384 = 2;
			double Td4531247382;
			Td4531247382 = Ta4531047383[Ti4531147384].d;
			int Tu4447247374;
			Ta4530847380[Ti4530947381].d = Td4531247382;
			Value* Ta4531347378;
			Ta4531347378 = intsec_rectside;
			int Ti4531447379;
			Ti4531447379 = 0;
			int Tu4447147375;
			Ta4531347378[Ti4531447379].i = t047353;
			Value* Ta4531547376;
			Ta4531547376 = crashed_object;
			int Ti4531647377;
			Ti4531647377 = 0;
			Ta4531547376[Ti4531647377].i = iobj47351;
		    }
		}
	    }
	}
	Value* Ta4531747359;
	Ta4531747359 = end_flag;
	int Ti4531847360;
	Ti4531847360 = 0;
	bool Tb4531947355;
	Tb4531947355 = Ta4531747359[Ti4531847360].b;
	int Ti4532047356;
	Ti4532047356 = 0;
	if(Tb4531947355 == Ti4532047356){
	    int Ti4532147358;
	    Ti4532147358 = 1;
	    int Ti4532247357;
	    Ti4532247357 = iand_ofs46484 + Ti4532147358;
	    result = solve_each_element46483_fun(Ti4532247357, and_group46485, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int solve_one_or_network46486_fun(int ofs46487, Value* or_group46488, Value *env){
    int result;
    int head47338;
    head47338 = or_group46488[ofs46487].i;
    int Ti4523547350;
    Ti4523547350 = 1;
    int Ti4523647339;
    Ti4523647339 = -Ti4523547350;
    if(head47338 == Ti4523647339){
	result = 1;
    }
    else{
	Value* Ta4523747349;
	Ta4523747349 = and_net;
	Value* and_group47340;
	and_group47340 = Ta4523747349[head47338].a;
	Value* Ta4523847346;
	Ta4523847346 = end_flag;
	int Ti4523947347;
	Ti4523947347 = 0;
	int Ti4524047348;
	Ti4524047348 = 0;
	int Tu4448147341;
	Ta4523847346[Ti4523947347].i = Ti4524047348;
	int Ti4524147345;
	Ti4524147345 = 0;
	int Tu4448047342;
	Tu4448047342 = solve_each_element46483_fun(Ti4524147345, and_group47340, NULL);
	int Ti4524247344;
	Ti4524247344 = 1;
	int Ti4524347343;
	Ti4524347343 = ofs46487 + Ti4524247344;
	result = solve_one_or_network46486_fun(Ti4524347343, or_group46488, NULL);
    }
    return result;
}

int trace_or_matrix46489_fun(int ofs46490, Value* or_network46491, Value *env){
    int result;
    Value* head47317;
    head47317 = or_network46491[ofs46490].a;
    int Ti4521947337;
    Ti4521947337 = 0;
    int range_primitive47318;
    range_primitive47318 = head47317[Ti4521947337].i;
    int Ti4522047336;
    Ti4522047336 = 1;
    int Ti4522147319;
    Ti4522147319 = -Ti4522047336;
    if(range_primitive47318 == Ti4522147319){
	result = 1;
    }
    else{
	int Ti4522247323;
	Ti4522247323 = 99;
	int Tu4448247320;
	if(range_primitive47318 == Ti4522247323){
	    int Ti4522347335;
	    Ti4522347335 = 1;
	    Tu4448247320 = solve_one_or_network46486_fun(Ti4522347335, head47317, NULL);
	}
	else{
	    Value* Ta4522447333;
	    Ta4522447333 = vscan;
	    Value* Ta4522547334;
	    Ta4522547334 = viewpoint;
	    int t47324;
	    t47324 = solver46456_fun(range_primitive47318, Ta4522447333, Ta4522547334, NULL);
	    int Ti4522647325;
	    Ti4522647325 = 0;
	    if(t47324 == Ti4522647325){
		Tu4448247320 = 1;
	    }
	    else{
		Value* Ta4522747331;
		Ta4522747331 = solver_dist;
		int Ti4522847332;
		Ti4522847332 = 0;
		double tp47326;
		tp47326 = Ta4522747331[Ti4522847332].d;
		Value* Ta4522947329;
		Ta4522947329 = tmin;
		int Ti4523047330;
		Ti4523047330 = 0;
		double Td4523147327;
		Td4523147327 = Ta4522947329[Ti4523047330].d;
		if(Td4523147327 <= tp47326){
		    Tu4448247320 = 1;
		}
		else{
		    int Ti4523247328;
		    Ti4523247328 = 1;
		    Tu4448247320 = solve_one_or_network46486_fun(Ti4523247328, head47317, NULL);
		}
	    }
	}
	int Ti4523347322;
	Ti4523347322 = 1;
	int Ti4523447321;
	Ti4523447321 = ofs46490 + Ti4523347322;
	result = trace_or_matrix46489_fun(Ti4523447321, or_network46491, NULL);
    }
    return result;
}

bool tracer46492_fun(Value* viewpoint46493, Value* vscan46494, Value *env){
    bool result;
    Value* Ta4520847314;
    Ta4520847314 = tmin;
    int Ti4520947315;
    Ti4520947315 = 0;
    double Td4521047316;
    Td4521047316 = 1000000000.000000;
    int Tu4448447303;
    Ta4520847314[Ti4520947315].d = Td4521047316;
    int Ti4521147310;
    Ti4521147310 = 0;
    Value* Ta4521247312;
    Ta4521247312 = or_net;
    int Ti4521347313;
    Ti4521347313 = 0;
    Value* Ta4521447311;
    Ta4521447311 = Ta4521247312[Ti4521347313].a;
    int Tu4448347304;
    Tu4448347304 = trace_or_matrix46489_fun(Ti4521147310, Ta4521447311, NULL);
    Value* Ta4521547308;
    Ta4521547308 = tmin;
    int Ti4521647309;
    Ti4521647309 = 0;
    double t47305;
    t47305 = Ta4521547308[Ti4521647309].d;
    double Td4521747306;
    Td4521747306 = -0.100000;
    if(t47305 <= Td4521747306){
	result = 0;
    }
    else{
	double Td4521847307;
	Td4521847307 = 100000000.000000;
	if(Td4521847307 <= t47305){
	    result = 0;
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int get_nvector_rect46495_fun(int Tu4448546496, Value *env){
    int result;
    Value* Ta4516447301;
    Ta4516447301 = intsec_rectside;
    int Ti4516547302;
    Ti4516547302 = 0;
    int rectside47252;
    rectside47252 = Ta4516447301[Ti4516547302].i;
    int Ti4516647253;
    Ti4516647253 = 1;
    if(rectside47252 == Ti4516647253){
	Value* Ta4516747294;
	Ta4516747294 = nvector;
	int Ti4516847295;
	Ti4516847295 = 0;
	Value* Ta4516947299;
	Ta4516947299 = vscan;
	int Ti4517047300;
	Ti4517047300 = 0;
	double Td4517147298;
	Td4517147298 = Ta4516947299[Ti4517047300].d;
	double Td4517247297;
	Td4517247297 = sgn46415_fun(Td4517147298, NULL);
	double Td4517347296;
	Td4517347296 = -Td4517247297;
	int Tu4448747286;
	Ta4516747294[Ti4516847295].d = Td4517347296;
	Value* Ta4517447291;
	Ta4517447291 = nvector;
	int Ti4517547292;
	Ti4517547292 = 1;
	double Td4517647293;
	Td4517647293 = 0.000000;
	int Tu4448647287;
	Ta4517447291[Ti4517547292].d = Td4517647293;
	Value* Ta4517747288;
	Ta4517747288 = nvector;
	int Ti4517847289;
	Ti4517847289 = 2;
	double Td4517947290;
	Td4517947290 = 0.000000;
	Ta4517747288[Ti4517847289].d = Td4517947290;
    }
    else{
	int Ti4518047254;
	Ti4518047254 = 2;
	if(rectside47252 == Ti4518047254){
	    Value* Ta4518147283;
	    Ta4518147283 = nvector;
	    int Ti4518247284;
	    Ti4518247284 = 0;
	    double Td4518347285;
	    Td4518347285 = 0.000000;
	    int Tu4448947271;
	    Ta4518147283[Ti4518247284].d = Td4518347285;
	    Value* Ta4518447276;
	    Ta4518447276 = nvector;
	    int Ti4518547277;
	    Ti4518547277 = 1;
	    Value* Ta4518647281;
	    Ta4518647281 = vscan;
	    int Ti4518747282;
	    Ti4518747282 = 1;
	    double Td4518847280;
	    Td4518847280 = Ta4518647281[Ti4518747282].d;
	    double Td4518947279;
	    Td4518947279 = sgn46415_fun(Td4518847280, NULL);
	    double Td4519047278;
	    Td4519047278 = -Td4518947279;
	    int Tu4448847272;
	    Ta4518447276[Ti4518547277].d = Td4519047278;
	    Value* Ta4519147273;
	    Ta4519147273 = nvector;
	    int Ti4519247274;
	    Ti4519247274 = 2;
	    double Td4519347275;
	    Td4519347275 = 0.000000;
	    Ta4519147273[Ti4519247274].d = Td4519347275;
	}
	else{
	    int Ti4519447255;
	    Ti4519447255 = 3;
	    if(rectside47252 == Ti4519447255){
		Value* Ta4519547268;
		Ta4519547268 = nvector;
		int Ti4519647269;
		Ti4519647269 = 0;
		double Td4519747270;
		Td4519747270 = 0.000000;
		int Tu4449147256;
		Ta4519547268[Ti4519647269].d = Td4519747270;
		Value* Ta4519847265;
		Ta4519847265 = nvector;
		int Ti4519947266;
		Ti4519947266 = 1;
		double Td4520047267;
		Td4520047267 = 0.000000;
		int Tu4449047257;
		Ta4519847265[Ti4519947266].d = Td4520047267;
		Value* Ta4520147258;
		Ta4520147258 = nvector;
		int Ti4520247259;
		Ti4520247259 = 2;
		Value* Ta4520347263;
		Ta4520347263 = vscan;
		int Ti4520447264;
		Ti4520447264 = 2;
		double Td4520547262;
		Td4520547262 = Ta4520347263[Ti4520447264].d;
		double Td4520647261;
		Td4520647261 = sgn46415_fun(Td4520547262, NULL);
		double Td4520747260;
		Td4520747260 = -Td4520647261;
		Ta4520147258[Ti4520247259].d = Td4520747260;
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

int get_nvector_plane46497_fun(int* m46498, Value *env){
    int result;
    Value* Ta4515247248;
    Ta4515247248 = nvector;
    int Ti4515347249;
    Ti4515347249 = 0;
    double Td4515447251;
    Td4515447251 = o_param_a46384_fun(m46498, NULL);
    double Td4515547250;
    Td4515547250 = -Td4515447251;
    int Tu4449347238;
    Ta4515247248[Ti4515347249].d = Td4515547250;
    Value* Ta4515647244;
    Ta4515647244 = nvector;
    int Ti4515747245;
    Ti4515747245 = 1;
    double Td4515847247;
    Td4515847247 = o_param_b46386_fun(m46498, NULL);
    double Td4515947246;
    Td4515947246 = -Td4515847247;
    int Tu4449247239;
    Ta4515647244[Ti4515747245].d = Td4515947246;
    Value* Ta4516047240;
    Ta4516047240 = nvector;
    int Ti4516147241;
    Ti4516147241 = 2;
    double Td4516247243;
    Td4516247243 = o_param_c46388_fun(m46498, NULL);
    double Td4516347242;
    Td4516347242 = -Td4516247243;
    Ta4516047240[Ti4516147241].d = Td4516347242;
    return result;
}

int get_nvector_second_norot46499_fun(int* m46500, Value* p46501, Value *env){
    int result;
    Value* Ta4512647230;
    Ta4512647230 = nvector;
    int Ti4512747231;
    Ti4512747231 = 0;
    int Ti4512847237;
    Ti4512847237 = 0;
    double Td4512947235;
    Td4512947235 = p46501[Ti4512847237].d;
    double Td4513047236;
    Td4513047236 = o_param_x46390_fun(m46500, NULL);
    double Td4513147233;
    Td4513147233 = Td4512947235 - Td4513047236;
    double Td4513247234;
    Td4513247234 = o_param_a46384_fun(m46500, NULL);
    double Td4513347232;
    Td4513347232 =  Td4513147233 * Td4513247234;
    int Tu4449647209;
    Ta4512647230[Ti4512747231].d = Td4513347232;
    Value* Ta4513447222;
    Ta4513447222 = nvector;
    int Ti4513547223;
    Ti4513547223 = 1;
    int Ti4513647229;
    Ti4513647229 = 1;
    double Td4513747227;
    Td4513747227 = p46501[Ti4513647229].d;
    double Td4513847228;
    Td4513847228 = o_param_y46392_fun(m46500, NULL);
    double Td4513947225;
    Td4513947225 = Td4513747227 - Td4513847228;
    double Td4514047226;
    Td4514047226 = o_param_b46386_fun(m46500, NULL);
    double Td4514147224;
    Td4514147224 =  Td4513947225 * Td4514047226;
    int Tu4449547210;
    Ta4513447222[Ti4513547223].d = Td4514147224;
    Value* Ta4514247214;
    Ta4514247214 = nvector;
    int Ti4514347215;
    Ti4514347215 = 2;
    int Ti4514447221;
    Ti4514447221 = 2;
    double Td4514547219;
    Td4514547219 = p46501[Ti4514447221].d;
    double Td4514647220;
    Td4514647220 = o_param_z46394_fun(m46500, NULL);
    double Td4514747217;
    Td4514747217 = Td4514547219 - Td4514647220;
    double Td4514847218;
    Td4514847218 = o_param_c46388_fun(m46500, NULL);
    double Td4514947216;
    Td4514947216 =  Td4514747217 * Td4514847218;
    int Tu4449447211;
    Ta4514247214[Ti4514347215].d = Td4514947216;
    Value* Ta4515047212;
    Ta4515047212 = nvector;
    bool Tb4515147213;
    Tb4515147213 = o_isinvert46380_fun(m46500, NULL);
    result = normalize_vector46412_fun(Ta4515047212, Tb4515147213, NULL);
    return result;
}

int get_nvector_second_rot46502_fun(int* m46503, Value* p46504, Value *env){
    int result;
    Value* Ta4504647203;
    Ta4504647203 = nvector_w;
    int Ti4504747204;
    Ti4504747204 = 0;
    int Ti4504847208;
    Ti4504847208 = 0;
    double Td4504947206;
    Td4504947206 = p46504[Ti4504847208].d;
    double Td4505047207;
    Td4505047207 = o_param_x46390_fun(m46503, NULL);
    double Td4505147205;
    Td4505147205 = Td4504947206 - Td4505047207;
    int Tu4450247123;
    Ta4504647203[Ti4504747204].d = Td4505147205;
    Value* Ta4505247197;
    Ta4505247197 = nvector_w;
    int Ti4505347198;
    Ti4505347198 = 1;
    int Ti4505447202;
    Ti4505447202 = 1;
    double Td4505547200;
    Td4505547200 = p46504[Ti4505447202].d;
    double Td4505647201;
    Td4505647201 = o_param_y46392_fun(m46503, NULL);
    double Td4505747199;
    Td4505747199 = Td4505547200 - Td4505647201;
    int Tu4450147124;
    Ta4505247197[Ti4505347198].d = Td4505747199;
    Value* Ta4505847191;
    Ta4505847191 = nvector_w;
    int Ti4505947192;
    Ti4505947192 = 2;
    int Ti4506047196;
    Ti4506047196 = 2;
    double Td4506147194;
    Td4506147194 = p46504[Ti4506047196].d;
    double Td4506247195;
    Td4506247195 = o_param_z46394_fun(m46503, NULL);
    double Td4506347193;
    Td4506347193 = Td4506147194 - Td4506247195;
    int Tu4450047125;
    Ta4505847191[Ti4505947192].d = Td4506347193;
    Value* Ta4506447171;
    Ta4506447171 = nvector;
    int Ti4506547172;
    Ti4506547172 = 0;
    Value* Ta4506647189;
    Ta4506647189 = nvector_w;
    int Ti4506747190;
    Ti4506747190 = 0;
    double Td4506847187;
    Td4506847187 = Ta4506647189[Ti4506747190].d;
    double Td4506947188;
    Td4506947188 = o_param_a46384_fun(m46503, NULL);
    double Td4507047174;
    Td4507047174 =  Td4506847187 * Td4506947188;
    Value* Ta4507147185;
    Ta4507147185 = nvector_w;
    int Ti4507247186;
    Ti4507247186 = 1;
    double Td4507347183;
    Td4507347183 = Ta4507147185[Ti4507247186].d;
    double Td4507447184;
    Td4507447184 = o_param_r346410_fun(m46503, NULL);
    double Td4507547177;
    Td4507547177 =  Td4507347183 * Td4507447184;
    Value* Ta4507647181;
    Ta4507647181 = nvector_w;
    int Ti4507747182;
    Ti4507747182 = 2;
    double Td4507847179;
    Td4507847179 = Ta4507647181[Ti4507747182].d;
    double Td4507947180;
    Td4507947180 = o_param_r246408_fun(m46503, NULL);
    double Td4508047178;
    Td4508047178 =  Td4507847179 * Td4507947180;
    double Td4508147176;
    Td4508147176 = Td4507547177 + Td4508047178;
    double Td4508247175;
    Td4508247175 = fhalf46372_fun(Td4508147176, NULL);
    double Td4508347173;
    Td4508347173 = Td4507047174 + Td4508247175;
    int Tu4449947126;
    Ta4506447171[Ti4506547172].d = Td4508347173;
    Value* Ta4508447151;
    Ta4508447151 = nvector;
    int Ti4508547152;
    Ti4508547152 = 1;
    Value* Ta4508647169;
    Ta4508647169 = nvector_w;
    int Ti4508747170;
    Ti4508747170 = 1;
    double Td4508847167;
    Td4508847167 = Ta4508647169[Ti4508747170].d;
    double Td4508947168;
    Td4508947168 = o_param_b46386_fun(m46503, NULL);
    double Td4509047154;
    Td4509047154 =  Td4508847167 * Td4508947168;
    Value* Ta4509147165;
    Ta4509147165 = nvector_w;
    int Ti4509247166;
    Ti4509247166 = 0;
    double Td4509347163;
    Td4509347163 = Ta4509147165[Ti4509247166].d;
    double Td4509447164;
    Td4509447164 = o_param_r346410_fun(m46503, NULL);
    double Td4509547157;
    Td4509547157 =  Td4509347163 * Td4509447164;
    Value* Ta4509647161;
    Ta4509647161 = nvector_w;
    int Ti4509747162;
    Ti4509747162 = 2;
    double Td4509847159;
    Td4509847159 = Ta4509647161[Ti4509747162].d;
    double Td4509947160;
    Td4509947160 = o_param_r146406_fun(m46503, NULL);
    double Td4510047158;
    Td4510047158 =  Td4509847159 * Td4509947160;
    double Td4510147156;
    Td4510147156 = Td4509547157 + Td4510047158;
    double Td4510247155;
    Td4510247155 = fhalf46372_fun(Td4510147156, NULL);
    double Td4510347153;
    Td4510347153 = Td4509047154 + Td4510247155;
    int Tu4449847127;
    Ta4508447151[Ti4508547152].d = Td4510347153;
    Value* Ta4510447131;
    Ta4510447131 = nvector;
    int Ti4510547132;
    Ti4510547132 = 2;
    Value* Ta4510647149;
    Ta4510647149 = nvector_w;
    int Ti4510747150;
    Ti4510747150 = 2;
    double Td4510847147;
    Td4510847147 = Ta4510647149[Ti4510747150].d;
    double Td4510947148;
    Td4510947148 = o_param_c46388_fun(m46503, NULL);
    double Td4511047134;
    Td4511047134 =  Td4510847147 * Td4510947148;
    Value* Ta4511147145;
    Ta4511147145 = nvector_w;
    int Ti4511247146;
    Ti4511247146 = 0;
    double Td4511347143;
    Td4511347143 = Ta4511147145[Ti4511247146].d;
    double Td4511447144;
    Td4511447144 = o_param_r246408_fun(m46503, NULL);
    double Td4511547137;
    Td4511547137 =  Td4511347143 * Td4511447144;
    Value* Ta4511647141;
    Ta4511647141 = nvector_w;
    int Ti4511747142;
    Ti4511747142 = 1;
    double Td4511847139;
    Td4511847139 = Ta4511647141[Ti4511747142].d;
    double Td4511947140;
    Td4511947140 = o_param_r146406_fun(m46503, NULL);
    double Td4512047138;
    Td4512047138 =  Td4511847139 * Td4511947140;
    double Td4512147136;
    Td4512147136 = Td4511547137 + Td4512047138;
    double Td4512247135;
    Td4512247135 = fhalf46372_fun(Td4512147136, NULL);
    double Td4512347133;
    Td4512347133 = Td4511047134 + Td4512247135;
    int Tu4449747128;
    Ta4510447131[Ti4510547132].d = Td4512347133;
    Value* Ta4512447129;
    Ta4512447129 = nvector;
    bool Tb4512547130;
    Tb4512547130 = o_isinvert46380_fun(m46503, NULL);
    result = normalize_vector46412_fun(Ta4512447129, Tb4512547130, NULL);
    return result;
}

int get_nvector46505_fun(int* m46506, Value* p46507, Value *env){
    int result;
    int m_shape47117;
    m_shape47117 = o_form46376_fun(m46506, NULL);
    int Ti4504147118;
    Ti4504147118 = 1;
    if(m_shape47117 == Ti4504147118){
	int Tu4504247122;
	Tu4504247122 = 1;
	result = get_nvector_rect46495_fun(Tu4504247122, NULL);
    }
    else{
	int Ti4504347119;
	Ti4504347119 = 2;
	if(m_shape47117 == Ti4504347119){
	    result = get_nvector_plane46497_fun(m46506, NULL);
	}
	else{
	    int Ti4504447120;
	    Ti4504447120 = o_isrot46382_fun(m46506, NULL);
	    int Ti4504547121;
	    Ti4504547121 = 0;
	    if(Ti4504447120 == Ti4504547121){
		result = get_nvector_second_norot46499_fun(m46506, p46507, NULL);
	    }
	    else{
		result = get_nvector_second_rot46502_fun(m46506, p46507, NULL);
	    }
	}
    }
    return result;
}

int utexture46508_fun(int* m46509, Value* p46510, Value *env){
    int result;
    int m_tex46959;
    m_tex46959 = o_texturetype46374_fun(m46509, NULL);
    Value* Ta4491247114;
    Ta4491247114 = texture_color;
    int Ti4491347115;
    Ti4491347115 = 0;
    double Td4491447116;
    Td4491447116 = o_color_red46400_fun(m46509, NULL);
    int Tu4450746960;
    Ta4491247114[Ti4491347115].d = Td4491447116;
    Value* Ta4491547111;
    Ta4491547111 = texture_color;
    int Ti4491647112;
    Ti4491647112 = 1;
    double Td4491747113;
    Td4491747113 = o_color_green46402_fun(m46509, NULL);
    int Tu4450646961;
    Ta4491547111[Ti4491647112].d = Td4491747113;
    Value* Ta4491847108;
    Ta4491847108 = texture_color;
    int Ti4491947109;
    Ti4491947109 = 2;
    double Td4492047110;
    Td4492047110 = o_color_blue46404_fun(m46509, NULL);
    int Tu4450546962;
    Ta4491847108[Ti4491947109].d = Td4492047110;
    int Ti4492146963;
    Ti4492146963 = 1;
    if(m_tex46959 == Ti4492146963){
	int Ti4492247107;
	Ti4492247107 = 0;
	double Td4492347105;
	Td4492347105 = p46510[Ti4492247107].d;
	double Td4492447106;
	Td4492447106 = o_param_x46390_fun(m46509, NULL);
	double w147078;
	w147078 = Td4492347105 - Td4492447106;
	double Td4492547104;
	Td4492547104 = 0.050000;
	double Td4492647103;
	Td4492647103 =  w147078 * Td4492547104;
	double Td4492747101;
	Td4492747101 = floor(Td4492647103);
	double Td4492847102;
	Td4492847102 = 20.000000;
	double d147098;
	d147098 =  Td4492747101 * Td4492847102;
	double Td4492947099;
	Td4492947099 = 10.000000;
	double Td4493047100;
	Td4493047100 = w147078 - d147098;
	bool flag147079;
	if(Td4492947099 <= Td4493047100){
	    flag147079 = 0;
	}
	else{
	    flag147079 = 1;
	}
	int Ti4493147097;
	Ti4493147097 = 2;
	double Td4493247095;
	Td4493247095 = p46510[Ti4493147097].d;
	double Td4493347096;
	Td4493347096 = o_param_z46394_fun(m46509, NULL);
	double w347080;
	w347080 = Td4493247095 - Td4493347096;
	double Td4493447094;
	Td4493447094 = 0.050000;
	double Td4493547093;
	Td4493547093 =  w347080 * Td4493447094;
	double Td4493647091;
	Td4493647091 = floor(Td4493547093);
	double Td4493747092;
	Td4493747092 = 20.000000;
	double d247088;
	d247088 =  Td4493647091 * Td4493747092;
	double Td4493847089;
	Td4493847089 = 10.000000;
	double Td4493947090;
	Td4493947090 = w347080 - d247088;
	bool flag247081;
	if(Td4493847089 <= Td4493947090){
	    flag247081 = 0;
	}
	else{
	    flag247081 = 1;
	}
	Value* Ta4494047082;
	Ta4494047082 = texture_color;
	int Ti4494147083;
	Ti4494147083 = 1;
	int Ti4494247085;
	Ti4494247085 = 0;
	double Td4494547084;
	if(flag147079 == Ti4494247085){
	    int Ti4494347087;
	    Ti4494347087 = 0;
	    if(flag247081 == Ti4494347087){
		Td4494547084 = 255.000000;
	    }
	    else{
		Td4494547084 = 0.000000;
	    }
	}
	else{
	    int Ti4494447086;
	    Ti4494447086 = 0;
	    if(flag247081 == Ti4494447086){
		Td4494547084 = 0.000000;
	    }
	    else{
		Td4494547084 = 255.000000;
	    }
	}
	Ta4494047082[Ti4494147083].d = Td4494547084;
    }
    else{
	int Ti4494646964;
	Ti4494646964 = 2;
	if(m_tex46959 == Ti4494646964){
	    int Ti4494747077;
	    Ti4494747077 = 1;
	    double Td4494847075;
	    Td4494847075 = p46510[Ti4494747077].d;
	    double Td4494947076;
	    Td4494947076 = 0.250000;
	    double Td4495047074;
	    Td4495047074 =  Td4494847075 * Td4494947076;
	    double Td4495147073;
	    Td4495147073 = sin(Td4495047074);
	    double w247061;
	    w247061 = fsqr46370_fun(Td4495147073, NULL);
	    Value* Ta4495247069;
	    Ta4495247069 = texture_color;
	    int Ti4495347070;
	    Ti4495347070 = 0;
	    double Td4495447072;
	    Td4495447072 = 255.000000;
	    double Td4495547071;
	    Td4495547071 =  Td4495447072 * w247061;
	    int Tu4450347062;
	    Ta4495247069[Ti4495347070].d = Td4495547071;
	    Value* Ta4495647063;
	    Ta4495647063 = texture_color;
	    int Ti4495747064;
	    Ti4495747064 = 1;
	    double Td4495847066;
	    Td4495847066 = 255.000000;
	    double Td4495947068;
	    Td4495947068 = 1.000000;
	    double Td4496047067;
	    Td4496047067 = Td4495947068 - w247061;
	    double Td4496147065;
	    Td4496147065 =  Td4495847066 * Td4496047067;
	    Ta4495647063[Ti4495747064].d = Td4496147065;
	}
	else{
	    int Ti4496246965;
	    Ti4496246965 = 3;
	    if(m_tex46959 == Ti4496246965){
		int Ti4496347060;
		Ti4496347060 = 0;
		double Td4496447058;
		Td4496447058 = p46510[Ti4496347060].d;
		double Td4496547059;
		Td4496547059 = o_param_x46390_fun(m46509, NULL);
		double w147030;
		w147030 = Td4496447058 - Td4496547059;
		int Ti4496647057;
		Ti4496647057 = 2;
		double Td4496747055;
		Td4496747055 = p46510[Ti4496647057].d;
		double Td4496847056;
		Td4496847056 = o_param_z46394_fun(m46509, NULL);
		double w347031;
		w347031 = Td4496747055 - Td4496847056;
		double Td4496947053;
		Td4496947053 = fsqr46370_fun(w147030, NULL);
		double Td4497047054;
		Td4497047054 = fsqr46370_fun(w347031, NULL);
		double Td4497147052;
		Td4497147052 = Td4496947053 + Td4497047054;
		double Td4497247050;
		Td4497247050 = sqrt(Td4497147052);
		double Td4497347051;
		Td4497347051 = 10.000000;
		double w247032;
		w247032 = Td4497247050 / Td4497347051;
		double Td4497447049;
		Td4497447049 = floor(w247032);
		double Td4497547047;
		Td4497547047 = w247032 - Td4497447049;
		double Td4497647048;
		Td4497647048 = 3.141593;
		double w447033;
		w447033 =  Td4497547047 * Td4497647048;
		double Td4497747046;
		Td4497747046 = cos(w447033);
		double cws47034;
		cws47034 = fsqr46370_fun(Td4497747046, NULL);
		Value* Ta4497847042;
		Ta4497847042 = texture_color;
		int Ti4497947043;
		Ti4497947043 = 1;
		double Td4498047045;
		Td4498047045 = 255.000000;
		double Td4498147044;
		Td4498147044 =  cws47034 * Td4498047045;
		int Tu4450447035;
		Ta4497847042[Ti4497947043].d = Td4498147044;
		Value* Ta4498247036;
		Ta4498247036 = texture_color;
		int Ti4498347037;
		Ti4498347037 = 2;
		double Td4498447041;
		Td4498447041 = 1.000000;
		double Td4498547039;
		Td4498547039 = Td4498447041 - cws47034;
		double Td4498647040;
		Td4498647040 = 255.000000;
		double Td4498747038;
		Td4498747038 =  Td4498547039 * Td4498647040;
		Ta4498247036[Ti4498347037].d = Td4498747038;
	    }
	    else{
		int Ti4498846966;
		Ti4498846966 = 4;
		if(m_tex46959 == Ti4498846966){
		    int Ti4498947029;
		    Ti4498947029 = 0;
		    double Td4499047027;
		    Td4499047027 = p46510[Ti4498947029].d;
		    double Td4499147028;
		    Td4499147028 = o_param_x46390_fun(m46509, NULL);
		    double Td4499247024;
		    Td4499247024 = Td4499047027 - Td4499147028;
		    double Td4499347026;
		    Td4499347026 = o_param_a46384_fun(m46509, NULL);
		    double Td4499447025;
		    Td4499447025 = sqrt(Td4499347026);
		    double w146967;
		    w146967 =  Td4499247024 * Td4499447025;
		    int Ti4499547023;
		    Ti4499547023 = 2;
		    double Td4499647021;
		    Td4499647021 = p46510[Ti4499547023].d;
		    double Td4499747022;
		    Td4499747022 = o_param_z46394_fun(m46509, NULL);
		    double Td4499847018;
		    Td4499847018 = Td4499647021 - Td4499747022;
		    double Td4499947020;
		    Td4499947020 = o_param_c46388_fun(m46509, NULL);
		    double Td4500047019;
		    Td4500047019 = sqrt(Td4499947020);
		    double w346968;
		    w346968 =  Td4499847018 * Td4500047019;
		    double Td4500147016;
		    Td4500147016 = fsqr46370_fun(w146967, NULL);
		    double Td4500247017;
		    Td4500247017 = fsqr46370_fun(w346968, NULL);
		    double Td4500347015;
		    Td4500347015 = Td4500147016 + Td4500247017;
		    double w446969;
		    w446969 = sqrt(Td4500347015);
		    double Td4500447007;
		    Td4500447007 = 0.000100;
		    double Td4500547008;
		    Td4500547008 = fabs(w146967);
		    double w746970;
		    if(Td4500447007 <= Td4500547008){
			double Td4500647014;
			Td4500647014 = w346968 / w146967;
			double w547009;
			w547009 = fabs(Td4500647014);
			double Td4500747010;
			Td4500747010 = atan(w547009);
			double Td4500847012;
			Td4500847012 = 30.000000;
			double Td4500947013;
			Td4500947013 = 3.141593;
			double Td4501047011;
			Td4501047011 = Td4500847012 / Td4500947013;
			w746970 =  Td4500747010 * Td4501047011;
		    }
		    else{
			w746970 = 15.000000;
		    }
		    double Td4501147006;
		    Td4501147006 = floor(w746970);
		    double w946971;
		    w946971 = w746970 - Td4501147006;
		    int Ti4501247005;
		    Ti4501247005 = 1;
		    double Td4501347003;
		    Td4501347003 = p46510[Ti4501247005].d;
		    double Td4501447004;
		    Td4501447004 = o_param_y46392_fun(m46509, NULL);
		    double Td4501547000;
		    Td4501547000 = Td4501347003 - Td4501447004;
		    double Td4501647002;
		    Td4501647002 = o_param_b46386_fun(m46509, NULL);
		    double Td4501747001;
		    Td4501747001 = sqrt(Td4501647002);
		    double w246972;
		    w246972 =  Td4501547000 * Td4501747001;
		    double Td4501846992;
		    Td4501846992 = 0.000100;
		    double Td4501946993;
		    Td4501946993 = fabs(w746970);
		    double w846973;
		    if(Td4501846992 <= Td4501946993){
			double Td4502046999;
			Td4502046999 = w246972 / w446969;
			double w646994;
			w646994 = fabs(Td4502046999);
			double Td4502146995;
			Td4502146995 = atan(w646994);
			double Td4502246997;
			Td4502246997 = 30.000000;
			double Td4502346998;
			Td4502346998 = 3.141593;
			double Td4502446996;
			Td4502446996 = Td4502246997 / Td4502346998;
			w846973 =  Td4502146995 * Td4502446996;
		    }
		    else{
			w846973 = 15.000000;
		    }
		    double Td4502546991;
		    Td4502546991 = floor(w846973);
		    double w1046974;
		    w1046974 = w846973 - Td4502546991;
		    double Td4502646987;
		    Td4502646987 = 0.150000;
		    double Td4502746990;
		    Td4502746990 = 0.500000;
		    double Td4502846989;
		    Td4502846989 = Td4502746990 - w946971;
		    double Td4502946988;
		    Td4502946988 = fsqr46370_fun(Td4502846989, NULL);
		    double Td4503046983;
		    Td4503046983 = Td4502646987 - Td4502946988;
		    double Td4503146986;
		    Td4503146986 = 0.500000;
		    double Td4503246985;
		    Td4503246985 = Td4503146986 - w1046974;
		    double Td4503346984;
		    Td4503346984 = fsqr46370_fun(Td4503246985, NULL);
		    double w1146975;
		    w1146975 = Td4503046983 - Td4503346984;
		    Value* Ta4503446976;
		    Ta4503446976 = texture_color;
		    int Ti4503546977;
		    Ti4503546977 = 2;
		    double Td4503646979;
		    Td4503646979 = 0.000000;
		    double Td4504046978;
		    if(w1146975 <= Td4503646979){
			Td4504046978 = 0.000000;
		    }
		    else{
			double Td4503746981;
			Td4503746981 = 255.000000;
			double Td4503846982;
			Td4503846982 = 0.300000;
			double Td4503946980;
			Td4503946980 = Td4503746981 / Td4503846982;
			Td4504046978 =  w1146975 * Td4503946980;
		    }
		    Ta4503446976[Ti4503546977].d = Td4504046978;
		}
		else{
		    result = 1;
		}
	    }
	}
    }
    return result;
}

double in_prod46511_fun(Value* v146512, Value* v246513, Value *env){
    double result;
    int Ti4489646958;
    Ti4489646958 = 0;
    double Td4489746955;
    Td4489746955 = v146512[Ti4489646958].d;
    int Ti4489846957;
    Ti4489846957 = 0;
    double Td4489946956;
    Td4489946956 = v246513[Ti4489846957].d;
    double Td4490046949;
    Td4490046949 =  Td4489746955 * Td4489946956;
    int Ti4490146954;
    Ti4490146954 = 1;
    double Td4490246951;
    Td4490246951 = v146512[Ti4490146954].d;
    int Ti4490346953;
    Ti4490346953 = 1;
    double Td4490446952;
    Td4490446952 = v246513[Ti4490346953].d;
    double Td4490546950;
    Td4490546950 =  Td4490246951 * Td4490446952;
    double Td4490646943;
    Td4490646943 = Td4490046949 + Td4490546950;
    int Ti4490746948;
    Ti4490746948 = 2;
    double Td4490846945;
    Td4490846945 = v146512[Ti4490746948].d;
    int Ti4490946947;
    Ti4490946947 = 2;
    double Td4491046946;
    Td4491046946 = v246513[Ti4490946947].d;
    double Td4491146944;
    Td4491146944 =  Td4490846945 * Td4491046946;
    result = Td4490646943 + Td4491146944;
    return result;
}

int accumulate_vec_mul46514_fun(Value* v146515, Value* v246516, double w46517, Value *env){
    int result;
    int Ti4487546936;
    Ti4487546936 = 0;
    int Ti4487646942;
    Ti4487646942 = 0;
    double Td4487746938;
    Td4487746938 = v146515[Ti4487646942].d;
    int Ti4487846941;
    Ti4487846941 = 0;
    double Td4487946940;
    Td4487946940 = v246516[Ti4487846941].d;
    double Td4488046939;
    Td4488046939 =  w46517 * Td4487946940;
    double Td4488146937;
    Td4488146937 = Td4487746938 + Td4488046939;
    int Tu4450946920;
    v146515[Ti4487546936].d = Td4488146937;
    int Ti4488246929;
    Ti4488246929 = 1;
    int Ti4488346935;
    Ti4488346935 = 1;
    double Td4488446931;
    Td4488446931 = v146515[Ti4488346935].d;
    int Ti4488546934;
    Ti4488546934 = 1;
    double Td4488646933;
    Td4488646933 = v246516[Ti4488546934].d;
    double Td4488746932;
    Td4488746932 =  w46517 * Td4488646933;
    double Td4488846930;
    Td4488846930 = Td4488446931 + Td4488746932;
    int Tu4450846921;
    v146515[Ti4488246929].d = Td4488846930;
    int Ti4488946922;
    Ti4488946922 = 2;
    int Ti4489046928;
    Ti4489046928 = 2;
    double Td4489146924;
    Td4489146924 = v146515[Ti4489046928].d;
    int Ti4489246927;
    Ti4489246927 = 2;
    double Td4489346926;
    Td4489346926 = v246516[Ti4489246927].d;
    double Td4489446925;
    Td4489446925 =  w46517 * Td4489346926;
    double Td4489546923;
    Td4489546923 = Td4489146924 + Td4489446925;
    v146515[Ti4488946922].d = Td4489546923;
    return result;
}

int raytracing46518_fun(int nref46519, double energy46520, Value *env){
    int result;
    Value* Ta4476146918;
    Ta4476146918 = viewpoint;
    Value* Ta4476246919;
    Ta4476246919 = vscan;
    bool crashed_p46782;
    crashed_p46782 = tracer46492_fun(Ta4476146918, Ta4476246919, NULL);
    int Ti4476346884;
    Ti4476346884 = 0;
    int Tu4452146783;
    if(crashed_p46782 == Ti4476346884){
	int Ti4476446885;
	Ti4476446885 = 0;
	if(nref46519 == Ti4476446885){
	    Tu4452146783 = 1;
	}
	else{
	    Value* Ta4476546916;
	    Ta4476546916 = vscan;
	    Value* Ta4476646917;
	    Ta4476646917 = light;
	    double Td4476746915;
	    Td4476746915 = in_prod46511_fun(Ta4476546916, Ta4476646917, NULL);
	    double hl46886;
	    hl46886 = -Td4476746915;
	    double Td4476846887;
	    Td4476846887 = 0.000000;
	    if(hl46886 <= Td4476846887){
		Tu4452146783 = 1;
	    }
	    else{
		double Td4476946914;
		Td4476946914 = fsqr46370_fun(hl46886, NULL);
		double Td4477046913;
		Td4477046913 =  Td4476946914 * hl46886;
		double Td4477146909;
		Td4477146909 =  Td4477046913 * energy46520;
		Value* Ta4477246911;
		Ta4477246911 = beam;
		int Ti4477346912;
		Ti4477346912 = 0;
		double Td4477446910;
		Td4477446910 = Ta4477246911[Ti4477346912].d;
		double ihl46888;
		ihl46888 =  Td4477146909 * Td4477446910;
		Value* Ta4477546903;
		Ta4477546903 = rgb;
		int Ti4477646904;
		Ti4477646904 = 0;
		Value* Ta4477746907;
		Ta4477746907 = rgb;
		int Ti4477846908;
		Ti4477846908 = 0;
		double Td4477946906;
		Td4477946906 = Ta4477746907[Ti4477846908].d;
		double Td4478046905;
		Td4478046905 = Td4477946906 + ihl46888;
		int Tu4451146889;
		Ta4477546903[Ti4477646904].d = Td4478046905;
		Value* Ta4478146897;
		Ta4478146897 = rgb;
		int Ti4478246898;
		Ti4478246898 = 1;
		Value* Ta4478346901;
		Ta4478346901 = rgb;
		int Ti4478446902;
		Ti4478446902 = 1;
		double Td4478546900;
		Td4478546900 = Ta4478346901[Ti4478446902].d;
		double Td4478646899;
		Td4478646899 = Td4478546900 + ihl46888;
		int Tu4451046890;
		Ta4478146897[Ti4478246898].d = Td4478646899;
		Value* Ta4478746891;
		Ta4478746891 = rgb;
		int Ti4478846892;
		Ti4478846892 = 2;
		Value* Ta4478946895;
		Ta4478946895 = rgb;
		int Ti4479046896;
		Ti4479046896 = 2;
		double Td4479146894;
		Td4479146894 = Ta4478946895[Ti4479046896].d;
		double Td4479246893;
		Td4479246893 = Td4479146894 + ihl46888;
		Ta4478746891[Ti4478846892].d = Td4479246893;
	    }
	}
    }
    else{
	Tu4452146783 = 1;
    }
    int Ti4479346784;
    Ti4479346784 = 0;
    if(crashed_p46782 == Ti4479346784){
	result = 1;
    }
    else{
	Value* Ta4479446880;
	Ta4479446880 = objects;
	Value* Ta4479546882;
	Ta4479546882 = crashed_object;
	int Ti4479646883;
	Ti4479646883 = 0;
	int Ti4479746881;
	Ti4479746881 = Ta4479546882[Ti4479646883].i;
	int* cobj46785;
	cobj46785 = Ta4479446880[Ti4479746881].a;
	Value* Ta4479846879;
	Ta4479846879 = crashed_point;
	int Tu4452046786;
	Tu4452046786 = get_nvector46505_fun(cobj46785, Ta4479846879, NULL);
	int Ti4479946874;
	Ti4479946874 = 0;
	Value* Ta4480046877;
	Ta4480046877 = or_net;
	int Ti4480146878;
	Ti4480146878 = 0;
	Value* Ta4480246875;
	Ta4480246875 = Ta4480046877[Ti4480146878].a;
	Value* Ta4480346876;
	Ta4480346876 = crashed_point;
	bool Tb4480446863;
	Tb4480446863 = shadow_check_one_or_matrix46479_fun(Ti4479946874, Ta4480246875, Ta4480346876, NULL);
	int Ti4480546864;
	Ti4480546864 = 0;
	double bright46787;
	if(Tb4480446863 == Ti4480546864){
	    Value* Ta4480646872;
	    Ta4480646872 = nvector;
	    Value* Ta4480746873;
	    Ta4480746873 = light;
	    double Td4480846871;
	    Td4480846871 = in_prod46511_fun(Ta4480646872, Ta4480746873, NULL);
	    double br46865;
	    br46865 = -Td4480846871;
	    double Td4480946869;
	    Td4480946869 = 0.000000;
	    double br146866;
	    if(Td4480946869 <= br46865){
		double Td4481046870;
		Td4481046870 = 0.200000;
		br146866 = br46865 + Td4481046870;
	    }
	    else{
		br146866 = 0.200000;
	    }
	    double Td4481146867;
	    Td4481146867 =  br146866 * energy46520;
	    double Td4481246868;
	    Td4481246868 = o_diffuse46396_fun(cobj46785, NULL);
	    bright46787 =  Td4481146867 * Td4481246868;
	}
	else{
	    bright46787 = 0.000000;
	}
	Value* Ta4481346862;
	Ta4481346862 = crashed_point;
	int Tu4451946788;
	Tu4451946788 = utexture46508_fun(cobj46785, Ta4481346862, NULL);
	Value* Ta4481446860;
	Ta4481446860 = rgb;
	Value* Ta4481546861;
	Ta4481546861 = texture_color;
	int Tu4451846789;
	Tu4451846789 = accumulate_vec_mul46514_fun(Ta4481446860, Ta4481546861, bright46787, NULL);
	int Ti4481646790;
	Ti4481646790 = 4;
	if(nref46519 <= Ti4481646790){
	    double Td4481746791;
	    Td4481746791 = 0.100000;
	    if(energy46520 <= Td4481746791){
		result = 1;
	    }
	    else{
		double Td4481846856;
		Td4481846856 = -2.000000;
		Value* Ta4481946858;
		Ta4481946858 = vscan;
		Value* Ta4482046859;
		Ta4482046859 = nvector;
		double Td4482146857;
		Td4482146857 = in_prod46511_fun(Ta4481946858, Ta4482046859, NULL);
		double w46792;
		w46792 =  Td4481846856 * Td4482146857;
		Value* Ta4482246854;
		Ta4482246854 = vscan;
		Value* Ta4482346855;
		Ta4482346855 = nvector;
		int Tu4451746793;
		Tu4451746793 = accumulate_vec_mul46514_fun(Ta4482246854, Ta4482346855, w46792, NULL);
		int m_surface46794;
		m_surface46794 = o_reflectiontype46378_fun(cobj46785, NULL);
		int Ti4482446795;
		Ti4482446795 = 1;
		if(m_surface46794 == Ti4482446795){
		    double Td4482546821;
		    Td4482546821 = 0.000000;
		    double Td4482646822;
		    Td4482646822 = o_hilight46398_fun(cobj46785, NULL);
		    if(Td4482546821 == Td4482646822){
			result = 1;
		    }
		    else{
			Value* Ta4482746852;
			Ta4482746852 = vscan;
			Value* Ta4482846853;
			Ta4482846853 = light;
			double Td4482946851;
			Td4482946851 = in_prod46511_fun(Ta4482746852, Ta4482846853, NULL);
			double hl46823;
			hl46823 = -Td4482946851;
			double Td4483046824;
			Td4483046824 = 0.000000;
			if(hl46823 <= Td4483046824){
			    result = 1;
			}
			else{
			    double Td4483146850;
			    Td4483146850 = fsqr46370_fun(hl46823, NULL);
			    double Td4483246849;
			    Td4483246849 = fsqr46370_fun(Td4483146850, NULL);
			    double Td4483346848;
			    Td4483346848 =  Td4483246849 * energy46520;
			    double Td4483446846;
			    Td4483446846 =  Td4483346848 * bright46787;
			    double Td4483546847;
			    Td4483546847 = o_hilight46398_fun(cobj46785, NULL);
			    double ihl46825;
			    ihl46825 =  Td4483446846 * Td4483546847;
			    Value* Ta4483646840;
			    Ta4483646840 = rgb;
			    int Ti4483746841;
			    Ti4483746841 = 0;
			    Value* Ta4483846844;
			    Ta4483846844 = rgb;
			    int Ti4483946845;
			    Ti4483946845 = 0;
			    double Td4484046843;
			    Td4484046843 = Ta4483846844[Ti4483946845].d;
			    double Td4484146842;
			    Td4484146842 = Td4484046843 + ihl46825;
			    int Tu4451346826;
			    Ta4483646840[Ti4483746841].d = Td4484146842;
			    Value* Ta4484246834;
			    Ta4484246834 = rgb;
			    int Ti4484346835;
			    Ti4484346835 = 1;
			    Value* Ta4484446838;
			    Ta4484446838 = rgb;
			    int Ti4484546839;
			    Ti4484546839 = 1;
			    double Td4484646837;
			    Td4484646837 = Ta4484446838[Ti4484546839].d;
			    double Td4484746836;
			    Td4484746836 = Td4484646837 + ihl46825;
			    int Tu4451246827;
			    Ta4484246834[Ti4484346835].d = Td4484746836;
			    Value* Ta4484846828;
			    Ta4484846828 = rgb;
			    int Ti4484946829;
			    Ti4484946829 = 2;
			    Value* Ta4485046832;
			    Ta4485046832 = rgb;
			    int Ti4485146833;
			    Ti4485146833 = 2;
			    double Td4485246831;
			    Td4485246831 = Ta4485046832[Ti4485146833].d;
			    double Td4485346830;
			    Td4485346830 = Td4485246831 + ihl46825;
			    Ta4484846828[Ti4484946829].d = Td4485346830;
			}
		    }
		}
		else{
		    int Ti4485446796;
		    Ti4485446796 = 2;
		    if(m_surface46794 == Ti4485446796){
			Value* Ta4485546816;
			Ta4485546816 = viewpoint;
			int Ti4485646817;
			Ti4485646817 = 0;
			Value* Ta4485746819;
			Ta4485746819 = crashed_point;
			int Ti4485846820;
			Ti4485846820 = 0;
			double Td4485946818;
			Td4485946818 = Ta4485746819[Ti4485846820].d;
			int Tu4451646797;
			Ta4485546816[Ti4485646817].d = Td4485946818;
			Value* Ta4486046811;
			Ta4486046811 = viewpoint;
			int Ti4486146812;
			Ti4486146812 = 1;
			Value* Ta4486246814;
			Ta4486246814 = crashed_point;
			int Ti4486346815;
			Ti4486346815 = 1;
			double Td4486446813;
			Td4486446813 = Ta4486246814[Ti4486346815].d;
			int Tu4451546798;
			Ta4486046811[Ti4486146812].d = Td4486446813;
			Value* Ta4486546806;
			Ta4486546806 = viewpoint;
			int Ti4486646807;
			Ti4486646807 = 2;
			Value* Ta4486746809;
			Ta4486746809 = crashed_point;
			int Ti4486846810;
			Ti4486846810 = 2;
			double Td4486946808;
			Td4486946808 = Ta4486746809[Ti4486846810].d;
			int Tu4451446799;
			Ta4486546806[Ti4486646807].d = Td4486946808;
			double Td4487046804;
			Td4487046804 = 1.000000;
			double Td4487146805;
			Td4487146805 = o_diffuse46396_fun(cobj46785, NULL);
			double Td4487246803;
			Td4487246803 = Td4487046804 - Td4487146805;
			double energy246800;
			energy246800 =  energy46520 * Td4487246803;
			int Ti4487346802;
			Ti4487346802 = 1;
			int Ti4487446801;
			Ti4487446801 = nref46519 + Ti4487346802;
			result = raytracing46518_fun(Ti4487446801, energy246800, NULL);
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

int write_rgb46521_fun(int Tu4452246522, Value *env){
    int result;
    Value* Ta4474946780;
    Ta4474946780 = rgb;
    int Ti4475046781;
    Ti4475046781 = 0;
    double Td4475146779;
    Td4475146779 = Ta4474946780[Ti4475046781].d;
    int red46762;
    red46762 = (int) Td4475146779;
    int Ti4475246778;
    Ti4475246778 = 255;
    int red46763;
    if(red46762 <= Ti4475246778){
	red46763 = red46762;
    }
    else{
	red46763 = 255;
    }
    int Tu4452446764;
    printf("%d", red46763);
    Value* Ta4475346776;
    Ta4475346776 = rgb;
    int Ti4475446777;
    Ti4475446777 = 1;
    double Td4475546775;
    Td4475546775 = Ta4475346776[Ti4475446777].d;
    int green46765;
    green46765 = (int) Td4475546775;
    int Ti4475646774;
    Ti4475646774 = 255;
    int green46766;
    if(green46765 <= Ti4475646774){
	green46766 = green46765;
    }
    else{
	green46766 = 255;
    }
    int Tu4452346767;
    printf("%d", green46766);
    Value* Ta4475746772;
    Ta4475746772 = rgb;
    int Ti4475846773;
    Ti4475846773 = 2;
    double Td4475946771;
    Td4475946771 = Ta4475746772[Ti4475846773].d;
    int blue46768;
    blue46768 = (int) Td4475946771;
    int Ti4476046770;
    Ti4476046770 = 255;
    int blue46769;
    if(blue46768 <= Ti4476046770){
	blue46769 = blue46768;
    }
    else{
	blue46769 = 255;
    }
    printf("%d", blue46769);
    return result;
}

int write_ppm_header46523_fun(int Tu4452546524, Value *env){
    int result;
    int Ti4473446761;
    Ti4473446761 = 80;
    int Tu4453346739;
    printf("%d", Ti4473446761);
    int Ti4473546759;
    Ti4473546759 = 48;
    int Ti4473646760;
    Ti4473646760 = 6;
    int Ti4473746758;
    Ti4473746758 = Ti4473546759 + Ti4473646760;
    int Tu4453246740;
    printf("%d", Ti4473746758);
    int Ti4473846757;
    Ti4473846757 = 10;
    int Tu4453146741;
    printf("%d", Ti4473846757);
    Value* Ta4473946755;
    Ta4473946755 = size;
    int Ti4474046756;
    Ti4474046756 = 0;
    int Ti4474146754;
    Ti4474146754 = Ta4473946755[Ti4474046756].i;
    int Tu4453046742;
    printf("%d", Ti4474146754);
    int Ti4474246753;
    Ti4474246753 = 32;
    int Tu4452946743;
    printf("%d", Ti4474246753);
    Value* Ta4474346751;
    Ta4474346751 = size;
    int Ti4474446752;
    Ti4474446752 = 1;
    int Ti4474546750;
    Ti4474546750 = Ta4474346751[Ti4474446752].i;
    int Tu4452846744;
    printf("%d", Ti4474546750);
    int Ti4474646749;
    Ti4474646749 = 10;
    int Tu4452746745;
    printf("%d", Ti4474646749);
    int Ti4474746748;
    Ti4474746748 = 255;
    int Tu4452646746;
    printf("%d", Ti4474746748);
    int Ti4474846747;
    Ti4474846747 = 10;
    printf("%d", Ti4474846747);
    return result;
}

int scan_point46525_fun(int scanx46526, Value *env){
    int result;
    Value* Ta4463746737;
    Ta4463746737 = size;
    int Ti4463846738;
    Ti4463846738 = 0;
    int Ti4463946626;
    Ti4463946626 = Ta4463746737[Ti4463846738].i;
    if(Ti4463946626 <= scanx46526){
	result = 1;
    }
    else{
	double Td4464046733;
	Td4464046733 = (double) scanx46526;
	Value* Ta4464146735;
	Ta4464146735 = scan_offset;
	int Ti4464246736;
	Ti4464246736 = 0;
	double Td4464346734;
	Td4464346734 = Ta4464146735[Ti4464246736].d;
	double Td4464446729;
	Td4464446729 = Td4464046733 - Td4464346734;
	Value* Ta4464546731;
	Ta4464546731 = scan_d;
	int Ti4464646732;
	Ti4464646732 = 0;
	double Td4464746730;
	Td4464746730 = Ta4464546731[Ti4464646732].d;
	double sscanx46627;
	sscanx46627 =  Td4464446729 * Td4464746730;
	Value* Ta4464846719;
	Ta4464846719 = vscan;
	int Ti4464946720;
	Ti4464946720 = 0;
	Value* Ta4465046727;
	Ta4465046727 = cos_v;
	int Ti4465146728;
	Ti4465146728 = 1;
	double Td4465246726;
	Td4465246726 = Ta4465046727[Ti4465146728].d;
	double Td4465346722;
	Td4465346722 =  sscanx46627 * Td4465246726;
	Value* Ta4465446724;
	Ta4465446724 = wscan;
	int Ti4465546725;
	Ti4465546725 = 0;
	double Td4465646723;
	Td4465646723 = Ta4465446724[Ti4465546725].d;
	double Td4465746721;
	Td4465746721 = Td4465346722 + Td4465646723;
	int Tu4454746628;
	Ta4464846719[Ti4464946720].d = Td4465746721;
	Value* Ta4465846706;
	Ta4465846706 = vscan;
	int Ti4465946707;
	Ti4465946707 = 1;
	Value* Ta4466046717;
	Ta4466046717 = scan_sscany;
	int Ti4466146718;
	Ti4466146718 = 0;
	double Td4466246713;
	Td4466246713 = Ta4466046717[Ti4466146718].d;
	Value* Ta4466346715;
	Ta4466346715 = cos_v;
	int Ti4466446716;
	Ti4466446716 = 0;
	double Td4466546714;
	Td4466546714 = Ta4466346715[Ti4466446716].d;
	double Td4466646709;
	Td4466646709 =  Td4466246713 * Td4466546714;
	Value* Ta4466746711;
	Ta4466746711 = vp;
	int Ti4466846712;
	Ti4466846712 = 1;
	double Td4466946710;
	Td4466946710 = Ta4466746711[Ti4466846712].d;
	double Td4467046708;
	Td4467046708 = Td4466646709 - Td4466946710;
	int Tu4454646629;
	Ta4465846706[Ti4465946707].d = Td4467046708;
	Value* Ta4467146695;
	Ta4467146695 = vscan;
	int Ti4467246696;
	Ti4467246696 = 2;
	double Td4467346702;
	Td4467346702 = -sscanx46627;
	Value* Ta4467446704;
	Ta4467446704 = sin_v;
	int Ti4467546705;
	Ti4467546705 = 1;
	double Td4467646703;
	Td4467646703 = Ta4467446704[Ti4467546705].d;
	double Td4467746698;
	Td4467746698 =  Td4467346702 * Td4467646703;
	Value* Ta4467846700;
	Ta4467846700 = wscan;
	int Ti4467946701;
	Ti4467946701 = 2;
	double Td4468046699;
	Td4468046699 = Ta4467846700[Ti4467946701].d;
	double Td4468146697;
	Td4468146697 = Td4467746698 + Td4468046699;
	int Tu4454546630;
	Ta4467146695[Ti4467246696].d = Td4468146697;
	double Td4468246691;
	Td4468246691 = fsqr46370_fun(sscanx46627, NULL);
	Value* Ta4468346693;
	Ta4468346693 = scan_met1;
	int Ti4468446694;
	Ti4468446694 = 0;
	double Td4468546692;
	Td4468546692 = Ta4468346693[Ti4468446694].d;
	double Td4468646690;
	Td4468646690 = Td4468246691 + Td4468546692;
	double metric46631;
	metric46631 = sqrt(Td4468646690);
	Value* Ta4468746684;
	Ta4468746684 = vscan;
	int Ti4468846685;
	Ti4468846685 = 0;
	Value* Ta4468946688;
	Ta4468946688 = vscan;
	int Ti4469046689;
	Ti4469046689 = 0;
	double Td4469146687;
	Td4469146687 = Ta4468946688[Ti4469046689].d;
	double Td4469246686;
	Td4469246686 = Td4469146687 / metric46631;
	int Tu4454446632;
	Ta4468746684[Ti4468846685].d = Td4469246686;
	Value* Ta4469346678;
	Ta4469346678 = vscan;
	int Ti4469446679;
	Ti4469446679 = 1;
	Value* Ta4469546682;
	Ta4469546682 = vscan;
	int Ti4469646683;
	Ti4469646683 = 1;
	double Td4469746681;
	Td4469746681 = Ta4469546682[Ti4469646683].d;
	double Td4469846680;
	Td4469846680 = Td4469746681 / metric46631;
	int Tu4454346633;
	Ta4469346678[Ti4469446679].d = Td4469846680;
	Value* Ta4469946672;
	Ta4469946672 = vscan;
	int Ti4470046673;
	Ti4470046673 = 2;
	Value* Ta4470146676;
	Ta4470146676 = vscan;
	int Ti4470246677;
	Ti4470246677 = 2;
	double Td4470346675;
	Td4470346675 = Ta4470146676[Ti4470246677].d;
	double Td4470446674;
	Td4470446674 = Td4470346675 / metric46631;
	int Tu4454246634;
	Ta4469946672[Ti4470046673].d = Td4470446674;
	Value* Ta4470546667;
	Ta4470546667 = viewpoint;
	int Ti4470646668;
	Ti4470646668 = 0;
	Value* Ta4470746670;
	Ta4470746670 = view;
	int Ti4470846671;
	Ti4470846671 = 0;
	double Td4470946669;
	Td4470946669 = Ta4470746670[Ti4470846671].d;
	int Tu4454146635;
	Ta4470546667[Ti4470646668].d = Td4470946669;
	Value* Ta4471046662;
	Ta4471046662 = viewpoint;
	int Ti4471146663;
	Ti4471146663 = 1;
	Value* Ta4471246665;
	Ta4471246665 = view;
	int Ti4471346666;
	Ti4471346666 = 1;
	double Td4471446664;
	Td4471446664 = Ta4471246665[Ti4471346666].d;
	int Tu4454046636;
	Ta4471046662[Ti4471146663].d = Td4471446664;
	Value* Ta4471546657;
	Ta4471546657 = viewpoint;
	int Ti4471646658;
	Ti4471646658 = 2;
	Value* Ta4471746660;
	Ta4471746660 = view;
	int Ti4471846661;
	Ti4471846661 = 2;
	double Td4471946659;
	Td4471946659 = Ta4471746660[Ti4471846661].d;
	int Tu4453946637;
	Ta4471546657[Ti4471646658].d = Td4471946659;
	Value* Ta4472046654;
	Ta4472046654 = rgb;
	int Ti4472146655;
	Ti4472146655 = 0;
	double Td4472246656;
	Td4472246656 = 0.000000;
	int Tu4453846638;
	Ta4472046654[Ti4472146655].d = Td4472246656;
	Value* Ta4472346651;
	Ta4472346651 = rgb;
	int Ti4472446652;
	Ti4472446652 = 1;
	double Td4472546653;
	Td4472546653 = 0.000000;
	int Tu4453746639;
	Ta4472346651[Ti4472446652].d = Td4472546653;
	Value* Ta4472646648;
	Ta4472646648 = rgb;
	int Ti4472746649;
	Ti4472746649 = 2;
	double Td4472846650;
	Td4472846650 = 0.000000;
	int Tu4453646640;
	Ta4472646648[Ti4472746649].d = Td4472846650;
	int Ti4472946646;
	Ti4472946646 = 0;
	double Td4473046647;
	Td4473046647 = 1.000000;
	int Tu4453546641;
	Tu4453546641 = raytracing46518_fun(Ti4472946646, Td4473046647, NULL);
	int Tu4473146645;
	Tu4473146645 = 1;
	int Tu4453446642;
	Tu4453446642 = write_rgb46521_fun(Tu4473146645, NULL);
	int Ti4473246644;
	Ti4473246644 = 1;
	int Ti4473346643;
	Ti4473346643 = scanx46526 + Ti4473246644;
	result = scan_point46525_fun(Ti4473346643, NULL);
    }
    return result;
}

int scan_line46527_fun(int scany46528, Value *env){
    int result;
    Value* Ta4458546624;
    Ta4458546624 = size;
    int Ti4458646625;
    Ti4458646625 = 0;
    int Ti4458746567;
    Ti4458746567 = Ta4458546624[Ti4458646625].i;
    if(Ti4458746567 <= scany46528){
	result = 1;
    }
    else{
	Value* Ta4458846611;
	Ta4458846611 = scan_sscany;
	int Ti4458946612;
	Ti4458946612 = 0;
	Value* Ta4459046622;
	Ta4459046622 = scan_offset;
	int Ti4459146623;
	Ti4459146623 = 0;
	double Td4459246620;
	Td4459246620 = Ta4459046622[Ti4459146623].d;
	double Td4459346621;
	Td4459346621 = 1.000000;
	double Td4459446618;
	Td4459446618 = Td4459246620 - Td4459346621;
	double Td4459546619;
	Td4459546619 = (double) scany46528;
	double t46614;
	t46614 = Td4459446618 - Td4459546619;
	Value* Ta4459646616;
	Ta4459646616 = scan_d;
	int Ti4459746617;
	Ti4459746617 = 0;
	double Td4459846615;
	Td4459846615 = Ta4459646616[Ti4459746617].d;
	double Td4459946613;
	Td4459946613 =  Td4459846615 * t46614;
	int Tu4455246568;
	Ta4458846611[Ti4458946612].d = Td4459946613;
	Value* Ta4460046603;
	Ta4460046603 = scan_met1;
	int Ti4460146604;
	Ti4460146604 = 0;
	Value* Ta4460246609;
	Ta4460246609 = scan_sscany;
	int Ti4460346610;
	Ti4460346610 = 0;
	double Td4460446608;
	Td4460446608 = Ta4460246609[Ti4460346610].d;
	double Td4460546606;
	Td4460546606 = fsqr46370_fun(Td4460446608, NULL);
	double Td4460646607;
	Td4460646607 = 40000.000000;
	double Td4460746605;
	Td4460746605 = Td4460546606 + Td4460646607;
	int Tu4455146569;
	Ta4460046603[Ti4460146604].d = Td4460746605;
	Value* Ta4460846601;
	Ta4460846601 = scan_sscany;
	int Ti4460946602;
	Ti4460946602 = 0;
	double Td4461046597;
	Td4461046597 = Ta4460846601[Ti4460946602].d;
	Value* Ta4461146599;
	Ta4461146599 = sin_v;
	int Ti4461246600;
	Ti4461246600 = 0;
	double Td4461346598;
	Td4461346598 = Ta4461146599[Ti4461246600].d;
	double t146570;
	t146570 =  Td4461046597 * Td4461346598;
	Value* Ta4461446587;
	Ta4461446587 = wscan;
	int Ti4461546588;
	Ti4461546588 = 0;
	Value* Ta4461646595;
	Ta4461646595 = sin_v;
	int Ti4461746596;
	Ti4461746596 = 1;
	double Td4461846594;
	Td4461846594 = Ta4461646595[Ti4461746596].d;
	double Td4461946590;
	Td4461946590 =  t146570 * Td4461846594;
	Value* Ta4462046592;
	Ta4462046592 = vp;
	int Ti4462146593;
	Ti4462146593 = 0;
	double Td4462246591;
	Td4462246591 = Ta4462046592[Ti4462146593].d;
	double Td4462346589;
	Td4462346589 = Td4461946590 - Td4462246591;
	int Tu4455046571;
	Ta4461446587[Ti4461546588].d = Td4462346589;
	Value* Ta4462446577;
	Ta4462446577 = wscan;
	int Ti4462546578;
	Ti4462546578 = 2;
	Value* Ta4462646585;
	Ta4462646585 = cos_v;
	int Ti4462746586;
	Ti4462746586 = 1;
	double Td4462846584;
	Td4462846584 = Ta4462646585[Ti4462746586].d;
	double Td4462946580;
	Td4462946580 =  t146570 * Td4462846584;
	Value* Ta4463046582;
	Ta4463046582 = vp;
	int Ti4463146583;
	Ti4463146583 = 2;
	double Td4463246581;
	Td4463246581 = Ta4463046582[Ti4463146583].d;
	double Td4463346579;
	Td4463346579 = Td4462946580 - Td4463246581;
	int Tu4454946572;
	Ta4462446577[Ti4462546578].d = Td4463346579;
	int Ti4463446576;
	Ti4463446576 = 0;
	int Tu4454846573;
	Tu4454846573 = scan_point46525_fun(Ti4463446576, NULL);
	int Ti4463546575;
	Ti4463546575 = 1;
	int Ti4463646574;
	Ti4463646574 = scany46528 + Ti4463546575;
	result = scan_line46527_fun(Ti4463646574, NULL);
    }
    return result;
}

int scan_start46529_fun(int Tu4455346530, Value *env){
    int result;
    int Tu4457246566;
    Tu4457246566 = 1;
    int Tu4455646550;
    Tu4455646550 = write_ppm_header46523_fun(Tu4457246566, NULL);
    Value* Ta4457346564;
    Ta4457346564 = size;
    int Ti4457446565;
    Ti4457446565 = 0;
    int Ti4457546563;
    Ti4457546563 = Ta4457346564[Ti4457446565].i;
    double sizex46551;
    sizex46551 = (int) Ti4457546563;
    Value* Ta4457646559;
    Ta4457646559 = scan_d;
    int Ti4457746560;
    Ti4457746560 = 0;
    double Td4457846562;
    Td4457846562 = 128.000000;
    double Td4457946561;
    Td4457946561 = Td4457846562 / sizex46551;
    int Tu4455546552;
    Ta4457646559[Ti4457746560].d = Td4457946561;
    Value* Ta4458046555;
    Ta4458046555 = scan_offset;
    int Ti4458146556;
    Ti4458146556 = 0;
    double Td4458246558;
    Td4458246558 = 2.000000;
    double Td4458346557;
    Td4458346557 = sizex46551 / Td4458246558;
    int Tu4455446553;
    Ta4458046555[Ti4458146556].d = Td4458346557;
    int Ti4458446554;
    Ti4458446554 = 0;
    result = scan_line46527_fun(Ti4458446554, NULL);
    return result;
}

int rt46531_fun(int size_x46532, int size_y46533, bool debug_p46534, Value *env){
    int result;
    Value* Ta4456446548;
    Ta4456446548 = size;
    int Ti4456546549;
    Ti4456546549 = 0;
    int Tu4456046538;
    Ta4456446548[Ti4456546549].i = size_x46532;
    Value* Ta4456646546;
    Ta4456646546 = size;
    int Ti4456746547;
    Ti4456746547 = 1;
    int Tu4455946539;
    Ta4456646546[Ti4456746547].i = size_y46533;
    Value* Ta4456846544;
    Ta4456846544 = dbg;
    int Ti4456946545;
    Ti4456946545 = 0;
    int Tu4455846540;
    Ta4456846544[Ti4456946545].b = debug_p46534;
    int Tu4457046543;
    Tu4457046543 = 1;
    int Tu4455746541;
    Tu4455746541 = read_parameter46433_fun(Tu4457046543, NULL);
    int Tu4457146542;
    Tu4457146542 = 1;
    result = scan_start46529_fun(Tu4457146542, NULL);
    return result;
}

int main(){
    int ans = 1;
    int Ti4456146535;
    Ti4456146535 = 768;
    int Ti4456246536;
    Ti4456246536 = 768;
    int Ti4456346537;
    Ti4456346537 = 0;
    ans = rt46531_fun(Ti4456146535, Ti4456246536, Ti4456346537, NULL);
    return ans;
}
