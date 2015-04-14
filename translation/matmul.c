#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef double* fun_double_int_int_Environment(int m, int n, Environment env);
typedef int fun_int_int_int_int_double_double_double(int l, int m, int n, double* a, double* b, double* c);
typedef int fun_int_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
  double* a = (double*) *(env + 0);
  double* b = (double*) *(env + 1);
  double* c = (double*) *(env + 2);
  int i = (int) *(env + 3);
  int j = (int) *(env + 4);
  int Ti2908 = 0;
  if(Ti2908 <= k){
    double* Ta2909 = (c + i);
    double* Ta2910 = (c + i);
    double Td2911 = *(Ta2910 + j);
    double* Ta2912 = (a + i);
    double Td2913 = *(Ta2912 + k);
    double* Ta2914 = (b + k);
    double Td2915 = *(Ta2914 + j);
    double Td2916 =  Td2913 * Td2915;
    double Td2917 = Td2911 + Td2916;
    Ta2909[j] = Td2917;
    int Ti2918 = 1;
    int Ti2919 = k - Ti2918;
    return loop3_fun(Ti2919, env);
  }
  else{

  }
  return result;
}

int loop2_fun(int j, Environment env){
  double* a = (double*) *(env + 0);
  double* b = (double*) *(env + 1);
  double* c = (double*) *(env + 2);
  int i = (int) *(env + 3);
  int m = (int) *(env + 4);
  int Ti2903 = 0;
  if(Ti2903 <= j){
    Environment env = malloc(5 * sizeof(int));
    if(env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(env + 0) = a;
    *(env + 1) = b;
    *(env + 2) = c;
    *(env + 3) = i;
    *(env + 4) = j;
    Closure loop3 = { (Function)loop3_fun, env };
    int Ti2904 = 1;
    int Ti2905 = m - Ti2904;
    int Tu2782 = ((fun_int_int_Environment*)loop3.f)(Ti2905, loop3.env);
    int Ti2906 = 1;
    int Ti2907 = j - Ti2906;
    return loop2_fun(Ti2907, env);
  }
  else{

  }
  return result;
}

int loop1_fun(int i, Environment env){
  double* a = (double*) *(env + 0);
  double* b = (double*) *(env + 1);
  double* c = (double*) *(env + 2);
  int m = (int) *(env + 3);
  int n = (int) *(env + 4);
  int Ti2898 = 0;
  if(Ti2898 <= i){
    Environment env = malloc(5 * sizeof(int));
    if(env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(env + 0) = a;
    *(env + 1) = b;
    *(env + 2) = c;
    *(env + 3) = i;
    *(env + 4) = m;
    Closure loop2 = { (Function)loop2_fun, env };
    int Ti2899 = 1;
    int Ti2900 = n - Ti2899;
    int Tu2783 = ((fun_int_int_Environment*)loop2.f)(Ti2900, loop2.env);
    int Ti2901 = 1;
    int Ti2902 = i - Ti2901;
    return loop1_fun(Ti2902, env);
  }
  else{

  }
  return result;
}

int mul_fun(int l, int m, int n, double* a, double* b, double* c){
  Environment env = malloc(5 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = a;
  *(env + 1) = b;
  *(env + 2) = c;
  *(env + 3) = m;
  *(env + 4) = n;
  Closure loop1 = { (Function)loop1_fun, env };
  int Ti2896 = 1;
  int Ti2897 = l - Ti2896;
  return loop1_fun(Ti2897, env);
  return result;
}

int init_fun(int i, Environment env){
  double* mat = (double*) *(env + 0);
  int n = (int) *(env + 1);
  int Ti2891 = 0;
  if(Ti2891 <= i){
    double Td2892 = 0.000000;
    double Ta2893[n];
    memset(Ta2893, Td2892, n * sizeof(double));
    mat[i] = *Ta2893;
    int Ti2894 = 1;
    int Ti2895 = i - Ti2894;
    return init_fun(Ti2895, env);
  }
  else{

  }
  return result;
}

double* make_fun(int m, int n, Environment env){
  double* dummy = (double*) *(env + 0);
  int mat[m];
  memset(mat, dummy, m * sizeof(int));
  Environment env1 = malloc(2 * sizeof(int));//Wrong, used to be env...name error
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = mat;
  *(env + 1) = n;
  Closure init = { (Function)init_fun, env1 }; //Wrong, used to be env
  int Ti2889 = 1;
  int Ti2890 = m - Ti2889;
  int Tu2785 = ((fun_int_int_Environment*)init.f)(Ti2890, init.env);
  double* result = mat;
  return result;
}

int main(){
  int Ti2806 = 0;
  double Td2807 = 0.000000;
  double dummy[Ti2806];
  memset(dummy, Td2807, Ti2806 * sizeof(double));
  Environment env = malloc(1 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = dummy;
  Closure make = { (Function)make_fun, env };
  int Ti2808 = 2;
  int Ti2809 = 3;
  double* a = ((fun_double_int_int_Environment*)make.f)(Ti2808, Ti2809, make.env);
  int Ti2810 = 3;
  int Ti2811 = 2;
  double* b = ((fun_double_int_int_Environment*)make.f)(Ti2810, Ti2811, make.env);
  int Ti2812 = 2;
  int Ti2813 = 2;
  double* c = ((fun_double_int_int_Environment*)make.f)(Ti2812, Ti2813, make.env);
  int Ti2814 = 0;
  double* Ta2815 = (a + Ti2814);
  int Ti2816 = 0;
  double Td2817 = 1.000000;
  Ta2815[Ti2816] = Td2817;
  int Ti2818 = 0;
  double* Ta2819 = (a + Ti2818);
  int Ti2820 = 1;
  double Td2821 = 2.000000;
  Ta2819[Ti2820] = Td2821;
  int Ti2822 = 0;
  double* Ta2823 = (a + Ti2822);
  int Ti2824 = 2;
  double Td2825 = 3.000000;
  Ta2823[Ti2824] = Td2825;
  int Ti2826 = 1;
  double* Ta2827 = (a + Ti2826);
  int Ti2828 = 0;
  double Td2829 = 4.000000;
  Ta2827[Ti2828] = Td2829;
  int Ti2830 = 1;
  double* Ta2831 = (a + Ti2830);
  int Ti2832 = 1;
  double Td2833 = 5.000000;
  Ta2831[Ti2832] = Td2833;
  int Ti2834 = 1;
  double* Ta2835 = (a + Ti2834);
  int Ti2836 = 2;
  double Td2837 = 6.000000;
  Ta2835[Ti2836] = Td2837;
  int Ti2838 = 0;
  double* Ta2839 = (b + Ti2838);
  int Ti2840 = 0;
  double Td2841 = 7.000000;
  Ta2839[Ti2840] = Td2841;
  int Ti2842 = 0;
  double* Ta2843 = (b + Ti2842);
  int Ti2844 = 1;
  double Td2845 = 8.000000;
  Ta2843[Ti2844] = Td2845;
  int Ti2846 = 1;
  double* Ta2847 = (b + Ti2846);
  int Ti2848 = 0;
  double Td2849 = 9.000000;
  Ta2847[Ti2848] = Td2849;
  int Ti2850 = 1;
  double* Ta2851 = (b + Ti2850);
  int Ti2852 = 1;
  double Td2853 = 10.000000;
  Ta2851[Ti2852] = Td2853;
  int Ti2854 = 2;
  double* Ta2855 = (b + Ti2854);
  int Ti2856 = 0;
  double Td2857 = 11.000000;
  Ta2855[Ti2856] = Td2857;
  int Ti2858 = 2;
  double* Ta2859 = (b + Ti2858);
  int Ti2860 = 1;
  double Td2861 = 12.000000;
  Ta2859[Ti2860] = Td2861;
  int Ti2862 = 2;
  int Ti2863 = 3;
  int Ti2864 = 2;
  int Tu2793 = mul_fun(Ti2862, Ti2863, Ti2864, a, b, c);
  int Ti2865 = 0;
  double* Ta2866 = (c + Ti2865);
  int Ti2867 = 0;
  double Td2868 = *(Ta2866 + Ti2867);
  int Ti2869 = (int) Td2868;
  printf("%d", Ti2869);

  printf("\n");
  int Ti2871 = 0;
  double* Ta2872 = (c + Ti2871);
  int Ti2873 = 1;
  double Td2874 = *(Ta2872 + Ti2873);
  int Ti2875 = (int) Td2874;
  printf("%d", Ti2875);

  printf("\n");
  int Ti2877 = 1;
  double* Ta2878 = (c + Ti2877);
  int Ti2879 = 0;
  double Td2880 = *(Ta2878 + Ti2879);
  int Ti2881 = (int) Td2880;
  printf("%d", Ti2881);

  printf("\n");
  int Ti2883 = 1;
  double* Ta2884 = (c + Ti2883);
  int Ti2885 = 1;
  double Td2886 = *(Ta2884 + Ti2885);
  int Ti2887 = (int) Td2886;
  printf("%d", Ti2887);

  printf("\n");
  int ans = 1;
  return ans;
}
