#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef double* fun_double_int_int_Environment(int m, int n, Environment env);
typedef int fun_int_int_int_int_double_double_double(int l, int m, int n, double* a, double* b, double* c);
typedef int fun_int_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
  int result;
  double* a = (double*) *(env + 0);
  double* b = (double*) *(env + 1);
  double* c = (double*) *(env + 2);
  int i = (int) *(env + 3);
  int j = (int) *(env + 4);
  int Ti984 = 0;
  if(Ti984 <= k){
    double* Ta985 = (c + i);
    double* Ta986 = (c + i);
    double Td987 = *(Ta986 + j);
    double* Ta988 = (a + i);
    double Td989 = *(Ta988 + k);
    double* Ta990 = (b + k);
    double Td991 = *(Ta990 + j);
    double Td992 =  Td989 * Td991;
    double Td993 = Td987 + Td992;
    Ta985[j] = Td993;
    int Ti994 = 1;
    int Ti995 = k - Ti994;
    result = loop3_fun(Ti995, env);
  }
  else{
    result = 1;
  }
  return result;
}

int loop2_fun(int j, Environment env){
  int result;
  double* a = (double*) *(env + 0);
  double* b = (double*) *(env + 1);
  double* c = (double*) *(env + 2);
  int i = (int) *(env + 3);
  int m = (int) *(env + 4);
  int Ti979 = 0;
  if(Ti979 <= j){
    Environment loop3_env = malloc(5 * sizeof(int));
    if(loop3_env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(loop3_env + 0) = a;
    *(loop3_env + 1) = b;
    *(loop3_env + 2) = c;
    *(loop3_env + 3) = i;
    *(loop3_env + 4) = j;
    Closure loop3 = { (Function)loop3_fun, loop3_env };
    int Ti980 = 1;
    int Ti981 = m - Ti980;
    int Tu858 = ((fun_int_int_Environment*)loop3.f)(Ti981, loop3.env);
    int Ti982 = 1;
    int Ti983 = j - Ti982;
    result = loop2_fun(Ti983, env);
  }
  else{
    result = 1;
  }
  return result;
}

int loop1_fun(int i, Environment env){
  int result;
  double* a = (double*) *(env + 0);
  double* b = (double*) *(env + 1);
  double* c = (double*) *(env + 2);
  int m = (int) *(env + 3);
  int n = (int) *(env + 4);
  int Ti974 = 0;
  if(Ti974 <= i){
    Environment loop2_env = malloc(5 * sizeof(int));
    if(loop2_env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(loop2_env + 0) = a;
    *(loop2_env + 1) = b;
    *(loop2_env + 2) = c;
    *(loop2_env + 3) = i;
    *(loop2_env + 4) = m;
    Closure loop2 = { (Function)loop2_fun, loop2_env };
    int Ti975 = 1;
    int Ti976 = n - Ti975;
    int Tu859 = ((fun_int_int_Environment*)loop2.f)(Ti976, loop2.env);
    int Ti977 = 1;
    int Ti978 = i - Ti977;
    result = loop1_fun(Ti978, env);
  }
  else{
    result = 1;
  }
  return result;
}

int mul_fun(int l, int m, int n, double* a, double* b, double* c){
  int result;
  Environment loop1_env = malloc(5 * sizeof(int));
  if(loop1_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(loop1_env + 0) = a;
  *(loop1_env + 1) = b;
  *(loop1_env + 2) = c;
  *(loop1_env + 3) = m;
  *(loop1_env + 4) = n;
  Closure loop1 = { (Function)loop1_fun, loop1_env };
  int Ti972 = 1;
  int Ti973 = l - Ti972;
  result = ((fun_int_int_Environment*)loop1.f)(Ti973, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result;
  double* mat = (double*) *(env + 0);
  int n = (int) *(env + 1);
  int Ti967 = 0;
  if(Ti967 <= i){
    double Td968 = 0.000000;
    double Ta969[n];
    memset(Ta969, Td968, n * sizeof(double));
    mat[i] = *Ta969;
    int Ti970 = 1;
    int Ti971 = i - Ti970;
    result = init_fun(Ti971, env);
  }
  else{
    result = 1;
  }
  return result;
}

double* make_fun(int m, int n, Environment env){
  double* result;
  double* dummy = (double*) *(env + 0);
  int mat[m];
  memset(mat, dummy, m * sizeof(int));
  Environment init_env = malloc(2 * sizeof(int));
  if(init_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(init_env + 0) = mat;
  *(init_env + 1) = n;
  Closure init = { (Function)init_fun, init_env };
  int Ti965 = 1;
  int Ti966 = m - Ti965;
  int Tu861 = ((fun_int_int_Environment*)init.f)(Ti966, init.env);
  result = mat;
  return result;
}

int main(){
  int Ti882 = 0;
  double Td883 = 0.000000;
  double dummy[Ti882];
  memset(dummy, Td883, Ti882 * sizeof(double));
  Environment make_env = malloc(1 * sizeof(int));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(make_env + 0) = dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti884 = 2;
  int Ti885 = 3;
  double* a = ((fun_double_int_int_Environment*)make.f)(Ti884, Ti885, make.env);
  int Ti886 = 3;
  int Ti887 = 2;
  double* b = ((fun_double_int_int_Environment*)make.f)(Ti886, Ti887, make.env);
  int Ti888 = 2;
  int Ti889 = 2;
  double* c = ((fun_double_int_int_Environment*)make.f)(Ti888, Ti889, make.env);
  int Ti890 = 0;
  double* Ta891 = (a + Ti890);
  int Ti892 = 0;
  double Td893 = 1.000000;
  Ta891[Ti892] = Td893;
  int Ti894 = 0;
  double* Ta895 = (a + Ti894);
  int Ti896 = 1;
  double Td897 = 2.000000;
  Ta895[Ti896] = Td897;
  int Ti898 = 0;
  double* Ta899 = (a + Ti898);
  int Ti900 = 2;
  double Td901 = 3.000000;
  Ta899[Ti900] = Td901;
  int Ti902 = 1;
  double* Ta903 = (a + Ti902);
  int Ti904 = 0;
  double Td905 = 4.000000;
  Ta903[Ti904] = Td905;
  int Ti906 = 1;
  double* Ta907 = (a + Ti906);
  int Ti908 = 1;
  double Td909 = 5.000000;
  Ta907[Ti908] = Td909;
  int Ti910 = 1;
  double* Ta911 = (a + Ti910);
  int Ti912 = 2;
  double Td913 = 6.000000;
  Ta911[Ti912] = Td913;
  int Ti914 = 0;
  double* Ta915 = (b + Ti914);
  int Ti916 = 0;
  double Td917 = 7.000000;
  Ta915[Ti916] = Td917;
  int Ti918 = 0;
  double* Ta919 = (b + Ti918);
  int Ti920 = 1;
  double Td921 = 8.000000;
  Ta919[Ti920] = Td921;
  int Ti922 = 1;
  double* Ta923 = (b + Ti922);
  int Ti924 = 0;
  double Td925 = 9.000000;
  Ta923[Ti924] = Td925;
  int Ti926 = 1;
  double* Ta927 = (b + Ti926);
  int Ti928 = 1;
  double Td929 = 10.000000;
  Ta927[Ti928] = Td929;
  int Ti930 = 2;
  double* Ta931 = (b + Ti930);
  int Ti932 = 0;
  double Td933 = 11.000000;
  Ta931[Ti932] = Td933;
  int Ti934 = 2;
  double* Ta935 = (b + Ti934);
  int Ti936 = 1;
  double Td937 = 12.000000;
  Ta935[Ti936] = Td937;
  int Ti938 = 2;
  int Ti939 = 3;
  int Ti940 = 2;
  int Tu869 = mul_fun(Ti938, Ti939, Ti940, a, b, c);
  int Ti941 = 0;
  double* Ta942 = (c + Ti941);
  int Ti943 = 0;
  double Td944 = *(Ta942 + Ti943);
  int Ti945 = (int) Td944;
  printf("%d", Ti945);
  int Tu946 = 1;
  printf("\n");
  int Ti947 = 0;
  double* Ta948 = (c + Ti947);
  int Ti949 = 1;
  double Td950 = *(Ta948 + Ti949);
  int Ti951 = (int) Td950;
  printf("%d", Ti951);
  int Tu952 = 1;
  printf("\n");
  int Ti953 = 1;
  double* Ta954 = (c + Ti953);
  int Ti955 = 0;
  double Td956 = *(Ta954 + Ti955);
  int Ti957 = (int) Td956;
  printf("%d", Ti957);
  int Tu958 = 1;
  printf("\n");
  int Ti959 = 1;
  double* Ta960 = (c + Ti959);
  int Ti961 = 1;
  double Td962 = *(Ta960 + Ti961);
  int Ti963 = (int) Td962;
  printf("%d", Ti963);
  int Tu964 = 1;
  printf("\n");
  int ans = 1;
  return ans;
}
