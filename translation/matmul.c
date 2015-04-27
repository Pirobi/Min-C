#include<stdio.h>
#include<stdlib.h>
#include"csyntax.c"

typedef double** fun_array_int_int_Environment(int m, int n, Environment env);
typedef int fun_int_int_int_int_array_array_array(int l, int m, int n, double** a, double** b, double** c);
typedef int fun_int_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
  int result = NULL;
  double** a = (double**) env[0];
  double** b = (double**) env[1];
  double** c = (double**) env[2];
  int i = (int) env[3];
  int j = (int) env[4];
  int Ti194 = 0;
  if(Ti194 <= k){
    double* Ta195 = c[i];
    double* Ta196 = c[i];
    double Td197 = Ta196[j];
    double* Ta198 = a[i];
    double Td199 = Ta198[k];
    double* Ta200 = b[k];
    double Td201 = Ta200[j];
    double Td202 =  Td199 * Td201;
    double Td203 = Td197 + Td202;
    Ta195[j] = Td203;
    int Ti204 = 1;
    int Ti205 = k - Ti204;
    result = loop3_fun(Ti205, env);
  }
  else{
    result = 1;
  }
  return result;
}

int loop2_fun(int j, Environment env){
  int result = NULL;
  double** a = (double**) env[0];
  double** b = (double**) env[1];
  double** c = (double**) env[2];
  int i = (int) env[3];
  int m = (int) env[4];
  int Ti189 = 0;
  if(Ti189 <= j){
    Environment loop3_env = malloc(5 * sizeof(void*));
    if(loop3_env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    loop3_env[0] = a;
    loop3_env[1] = b;
    loop3_env[2] = c;
    loop3_env[3] = i;
    loop3_env[4] = j;
    Closure loop3 = { (Function)loop3_fun, loop3_env };
    int Ti190 = 1;
    int Ti191 = m - Ti190;
    int Tu68 = ((fun_int_int_Environment*)loop3.f)(Ti191, loop3.env);
    int Ti192 = 1;
    int Ti193 = j - Ti192;
    result = loop2_fun(Ti193, env);
  }
  else{
    result = 1;
  }
  return result;
}

int loop1_fun(int i, Environment env){
  int result = NULL;
  double** a = (double**) env[0];
  double** b = (double**) env[1];
  double** c = (double**) env[2];
  int m = (int) env[3];
  int n = (int) env[4];
  int Ti184 = 0;
  if(Ti184 <= i){
    Environment loop2_env = malloc(5 * sizeof(void*));
    if(loop2_env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    loop2_env[0] = a;
    loop2_env[1] = b;
    loop2_env[2] = c;
    loop2_env[3] = i;
    loop2_env[4] = m;
    Closure loop2 = { (Function)loop2_fun, loop2_env };
    int Ti185 = 1;
    int Ti186 = n - Ti185;
    int Tu69 = ((fun_int_int_Environment*)loop2.f)(Ti186, loop2.env);
    int Ti187 = 1;
    int Ti188 = i - Ti187;
    result = loop1_fun(Ti188, env);
  }
  else{
    result = 1;
  }
  return result;
}

int mul_fun(int l, int m, int n, double** a, double** b, double** c){
  int result = NULL;
  Environment loop1_env = malloc(5 * sizeof(void*));
  if(loop1_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  loop1_env[0] = a;
  loop1_env[1] = b;
  loop1_env[2] = c;
  loop1_env[3] = m;
  loop1_env[4] = n;
  Closure loop1 = { (Function)loop1_fun, loop1_env };
  int Ti182 = 1;
  int Ti183 = l - Ti182;
  result = ((fun_int_int_Environment*)loop1.f)(Ti183, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result = NULL;
  double** mat = (double**) env[0];
  int n = (int) env[1];
  int Ti177 = 0;
  if(Ti177 <= i){
    double Td178 = 0.000000;
    double* Ta179 = (double*) make_array(n, (int)Td178);
    mat[i] = Ta179;
    int Ti180 = 1;
    int Ti181 = i - Ti180;
    result = init_fun(Ti181, env);
  }
  else{
    result = 1;
  }
  return result;
}

double** make_fun(int m, int n, Environment env){
  double** result = NULL;
  double* dummy = (double*) env[0];
  int* mat = (int*) make_array(m, dummy);
  Environment init_env = malloc(2 * sizeof(void*));
  if(init_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  init_env[0] = mat;
  init_env[1] = n;
  Closure init = { (Function)init_fun, init_env };
  int Ti175 = 1;
  int Ti176 = m - Ti175;
  int Tu71 = ((fun_int_int_Environment*)init.f)(Ti176, init.env);
  result = mat;
  return result;
}

int main(){
  int ans = 1;
  int Ti92 = 0;
  double Td93 = 0.000000;
  double* dummy = (double*) make_array(Ti92, (int)Td93);
  Environment make_env = malloc(1 * sizeof(void*));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  make_env[0] = dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti94 = 2;
  int Ti95 = 3;
  double** a = ((fun_array_int_int_Environment*)make.f)(Ti94, Ti95, make.env);
  int Ti96 = 3;
  int Ti97 = 2;
  double** b = ((fun_array_int_int_Environment*)make.f)(Ti96, Ti97, make.env);
  int Ti98 = 2;
  int Ti99 = 2;
  double** c = ((fun_array_int_int_Environment*)make.f)(Ti98, Ti99, make.env);
  int Ti100 = 0;
  double* Ta101 = a[Ti100];
  int Ti102 = 0;
  double Td103 = 1.000000;
  Ta101[Ti102] = Td103;
  int Ti104 = 0;
  double* Ta105 = a[Ti104];
  int Ti106 = 1;
  double Td107 = 2.000000;
  Ta105[Ti106] = Td107;
  int Ti108 = 0;
  double* Ta109 = a[Ti108];
  int Ti110 = 2;
  double Td111 = 3.000000;
  Ta109[Ti110] = Td111;
  int Ti112 = 1;
  double* Ta113 = a[Ti112];
  int Ti114 = 0;
  double Td115 = 4.000000;
  Ta113[Ti114] = Td115;
  int Ti116 = 1;
  double* Ta117 = a[Ti116];
  int Ti118 = 1;
  double Td119 = 5.000000;
  Ta117[Ti118] = Td119;
  int Ti120 = 1;
  double* Ta121 = a[Ti120];
  int Ti122 = 2;
  double Td123 = 6.000000;
  Ta121[Ti122] = Td123;
  int Ti124 = 0;
  double* Ta125 = b[Ti124];
  int Ti126 = 0;
  double Td127 = 7.000000;
  Ta125[Ti126] = Td127;
  int Ti128 = 0;
  double* Ta129 = b[Ti128];
  int Ti130 = 1;
  double Td131 = 8.000000;
  Ta129[Ti130] = Td131;
  int Ti132 = 1;
  double* Ta133 = b[Ti132];
  int Ti134 = 0;
  double Td135 = 9.000000;
  Ta133[Ti134] = Td135;
  int Ti136 = 1;
  double* Ta137 = b[Ti136];
  int Ti138 = 1;
  double Td139 = 10.000000;
  Ta137[Ti138] = Td139;
  int Ti140 = 2;
  double* Ta141 = b[Ti140];
  int Ti142 = 0;
  double Td143 = 11.000000;
  Ta141[Ti142] = Td143;
  int Ti144 = 2;
  double* Ta145 = b[Ti144];
  int Ti146 = 1;
  double Td147 = 12.000000;
  Ta145[Ti146] = Td147;
  int Ti148 = 2;
  int Ti149 = 3;
  int Ti150 = 2;
  int Tu79 = mul_fun(Ti148, Ti149, Ti150, a, b, c);
  int Ti151 = 0;
  double* Ta152 = c[Ti151];
  int Ti153 = 0;
  double Td154 = Ta152[Ti153];
  int Ti155 = (int) Td154;
  printf("%d", Ti155);
  int Tu156 = 1;
  printf("\n");
  int Ti157 = 0;
  double* Ta158 = c[Ti157];
  int Ti159 = 1;
  double Td160 = Ta158[Ti159];
  int Ti161 = (int) Td160;
  printf("%d", Ti161);
  int Tu162 = 1;
  printf("\n");
  int Ti163 = 1;
  double* Ta164 = c[Ti163];
  int Ti165 = 0;
  double Td166 = Ta164[Ti165];
  int Ti167 = (int) Td166;
  printf("%d", Ti167);
  int Tu168 = 1;
  printf("\n");
  int Ti169 = 1;
  double* Ta170 = c[Ti169];
  int Ti171 = 1;
  double Td172 = Ta170[Ti171];
  int Ti173 = (int) Td172;
  printf("%d", Ti173);
  int Tu174 = 1;
  printf("\n");
  return ans;
}
