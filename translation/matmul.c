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
  int Ti152 = 0;
  if(Ti152 <= k){
    double* Ta153 = c[i];
    double* Ta154 = c[i];
    double Td155 = Ta154[j];
    double* Ta156 = a[i];
    double Td157 = Ta156[k];
    double* Ta158 = b[k];
    double Td159 = Ta158[j];
    double Td160 =  Td157 * Td159;
    double Td161 = Td155 + Td160;
    Ta153[j] = Td161;
    int Ti162 = 1;
    int Ti163 = k - Ti162;
    result = loop3_fun(Ti163, env);
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
  int Ti147 = 0;
  if(Ti147 <= j){
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
    int Ti148 = 1;
    int Ti149 = m - Ti148;
    int Tu26 = ((fun_int_int_Environment*)loop3.f)(Ti149, loop3.env);
    int Ti150 = 1;
    int Ti151 = j - Ti150;
    result = loop2_fun(Ti151, env);
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
  int Ti142 = 0;
  if(Ti142 <= i){
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
    int Ti143 = 1;
    int Ti144 = n - Ti143;
    int Tu27 = ((fun_int_int_Environment*)loop2.f)(Ti144, loop2.env);
    int Ti145 = 1;
    int Ti146 = i - Ti145;
    result = loop1_fun(Ti146, env);
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
  int Ti140 = 1;
  int Ti141 = l - Ti140;
  result = ((fun_int_int_Environment*)loop1.f)(Ti141, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result = NULL;
  double** mat = (double**) env[0];
  int n = (int) env[1];
  int Ti135 = 0;
  if(Ti135 <= i){
    double Td136 = 0.000000;
    double* Ta137 = (double*) make_array(n, (int)Td136);
    mat[i] = Ta137;
    int Ti138 = 1;
    int Ti139 = i - Ti138;
    result = init_fun(Ti139, env);
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
  int Ti133 = 1;
  int Ti134 = m - Ti133;
  int Tu29 = ((fun_int_int_Environment*)init.f)(Ti134, init.env);
  result = mat;
  return result;
}

int main(){
  int ans = 1;
  int Ti50 = 0;
  double Td51 = 0.000000;
  double* dummy = (double*) make_array(Ti50, (int)Td51);
  Environment make_env = malloc(1 * sizeof(void*));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  make_env[0] = dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti52 = 2;
  int Ti53 = 3;
  double** a = ((fun_array_int_int_Environment*)make.f)(Ti52, Ti53, make.env);
  int Ti54 = 3;
  int Ti55 = 2;
  double** b = ((fun_array_int_int_Environment*)make.f)(Ti54, Ti55, make.env);
  int Ti56 = 2;
  int Ti57 = 2;
  double** c = ((fun_array_int_int_Environment*)make.f)(Ti56, Ti57, make.env);
  int Ti58 = 0;
  double* Ta59 = a[Ti58];
  int Ti60 = 0;
  double Td61 = 1.000000;
  Ta59[Ti60] = Td61;
  int Ti62 = 0;
  double* Ta63 = a[Ti62];
  int Ti64 = 1;
  double Td65 = 2.000000;
  Ta63[Ti64] = Td65;
  int Ti66 = 0;
  double* Ta67 = a[Ti66];
  int Ti68 = 2;
  double Td69 = 3.000000;
  Ta67[Ti68] = Td69;
  int Ti70 = 1;
  double* Ta71 = a[Ti70];
  int Ti72 = 0;
  double Td73 = 4.000000;
  Ta71[Ti72] = Td73;
  int Ti74 = 1;
  double* Ta75 = a[Ti74];
  int Ti76 = 1;
  double Td77 = 5.000000;
  Ta75[Ti76] = Td77;
  int Ti78 = 1;
  double* Ta79 = a[Ti78];
  int Ti80 = 2;
  double Td81 = 6.000000;
  Ta79[Ti80] = Td81;
  int Ti82 = 0;
  double* Ta83 = b[Ti82];
  int Ti84 = 0;
  double Td85 = 7.000000;
  Ta83[Ti84] = Td85;
  int Ti86 = 0;
  double* Ta87 = b[Ti86];
  int Ti88 = 1;
  double Td89 = 8.000000;
  Ta87[Ti88] = Td89;
  int Ti90 = 1;
  double* Ta91 = b[Ti90];
  int Ti92 = 0;
  double Td93 = 9.000000;
  Ta91[Ti92] = Td93;
  int Ti94 = 1;
  double* Ta95 = b[Ti94];
  int Ti96 = 1;
  double Td97 = 10.000000;
  Ta95[Ti96] = Td97;
  int Ti98 = 2;
  double* Ta99 = b[Ti98];
  int Ti100 = 0;
  double Td101 = 11.000000;
  Ta99[Ti100] = Td101;
  int Ti102 = 2;
  double* Ta103 = b[Ti102];
  int Ti104 = 1;
  double Td105 = 12.000000;
  Ta103[Ti104] = Td105;
  int Ti106 = 2;
  int Ti107 = 3;
  int Ti108 = 2;
  int Tu37 = mul_fun(Ti106, Ti107, Ti108, a, b, c);
  int Ti109 = 0;
  double* Ta110 = c[Ti109];
  int Ti111 = 0;
  double Td112 = Ta110[Ti111];
  int Ti113 = (int) Td112;
  printf("%d", Ti113);
  int Tu114 = 1;
  printf("\n");
  int Ti115 = 0;
  double* Ta116 = c[Ti115];
  int Ti117 = 1;
  double Td118 = Ta116[Ti117];
  int Ti119 = (int) Td118;
  printf("%d", Ti119);
  int Tu120 = 1;
  printf("\n");
  int Ti121 = 1;
  double* Ta122 = c[Ti121];
  int Ti123 = 0;
  double Td124 = Ta122[Ti123];
  int Ti125 = (int) Td124;
  printf("%d", Ti125);
  int Tu126 = 1;
  printf("\n");
  int Ti127 = 1;
  double* Ta128 = c[Ti127];
  int Ti129 = 1;
  double Td130 = Ta128[Ti129];
  int Ti131 = (int) Td130;
  printf("%d", Ti131);
  int Tu132 = 1;
  printf("\n");
  return ans;
}
