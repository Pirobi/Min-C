#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef double* fun_double_int_int_Environment(int m, int n, Environment env);
typedef int fun_int_int_int_int_double_double_double(int l, int m, int n, double* a, double* b, double* c);
typedef int fun_int_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
  int result;
  double* a = (double*) *(env + 0 * sizeof(int));
  double* b = (double*) *(env + 1 * sizeof(int));
  double* c = (double*) *(env + 2 * sizeof(int));
  int i = (int) **(env + 3 * sizeof(int));
  int j = (int) **(env + 4 * sizeof(int));
  int Ti128 = 0;
  if(Ti128 <= k){
    double* Ta129 = (c + i);
    double* Ta130 = (c + i);
    double Td131 = *(Ta130 + j);
    double* Ta132 = (a + i);
    double Td133 = *(Ta132 + k);
    double* Ta134 = (b + k);
    double Td135 = *(Ta134 + j);
    double Td136 =  Td133 * Td135;
    double Td137 = Td131 + Td136;
    *(Ta129 + j) = Td137;
    int Ti138 = 1;
    int Ti139 = k - Ti138;
    result = loop3_fun(Ti139, env);
  }
  else{
    result = 1;
  }
  return result;
}

int loop2_fun(int j, Environment env){
  int result;
  double* a = (double*) *(env + 0 * sizeof(int));
  double* b = (double*) *(env + 1 * sizeof(int));
  double* c = (double*) *(env + 2 * sizeof(int));
  int i = (int) **(env + 3 * sizeof(int));
  int m = (int) **(env + 4 * sizeof(int));
  int Ti123 = 0;
  if(Ti123 <= j){
    Environment loop3_env = malloc(5 * sizeof(int));
    if(loop3_env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(loop3_env + 0 * sizeof(int)) = (int*)a;
    *(loop3_env + 1 * sizeof(int)) = (int*)b;
    *(loop3_env + 2 * sizeof(int)) = (int*)c;
    *(loop3_env + 3 * sizeof(int)) = &i;
    *(loop3_env + 4 * sizeof(int)) = &j;
    Closure loop3 = { (Function)loop3_fun, loop3_env };
    int Ti124 = 1;
    int Ti125 = m - Ti124;
    int Tu2 = ((fun_int_int_Environment*)loop3.f)(Ti125, loop3.env);
    int Ti126 = 1;
    int Ti127 = j - Ti126;
    result = loop2_fun(Ti127, env);
  }
  else{
    result = 1;
  }
  return result;
}

int loop1_fun(int i, Environment env){
  int result;
  double* a = (double*) *(env + 0 * sizeof(int));
  double* b = (double*) *(env + 1 * sizeof(int));
  double* c = (double*) *(env + 2 * sizeof(int));
  int m = (int) **(env + 3 * sizeof(int));
  int n = (int) **(env + 4 * sizeof(int));
  int Ti118 = 0;
  if(Ti118 <= i){
    Environment loop2_env = malloc(5 * sizeof(int));
    if(loop2_env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(loop2_env + 0 * sizeof(int)) = (int*)a;
    *(loop2_env + 1 * sizeof(int)) = (int*)b;
    *(loop2_env + 2 * sizeof(int)) = (int*)c;
    *(loop2_env + 3 * sizeof(int)) = &i;
    *(loop2_env + 4 * sizeof(int)) = &m;
    Closure loop2 = { (Function)loop2_fun, loop2_env };
    int Ti119 = 1;
    int Ti120 = n - Ti119;
    int Tu3 = ((fun_int_int_Environment*)loop2.f)(Ti120, loop2.env);
    int Ti121 = 1;
    int Ti122 = i - Ti121;
    result = loop1_fun(Ti122, env);
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
  *(loop1_env + 0 * sizeof(int)) = (int*)a;
  *(loop1_env + 1 * sizeof(int)) = (int*)b;
  *(loop1_env + 2 * sizeof(int)) = (int*)c;
  *(loop1_env + 3 * sizeof(int)) = &m;
  *(loop1_env + 4 * sizeof(int)) = &n;
  Closure loop1 = { (Function)loop1_fun, loop1_env };
  int Ti116 = 1;
  int Ti117 = l - Ti116;
  result = ((fun_int_int_Environment*)loop1.f)(Ti117, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result;
  double* mat = (double*) *(env + 0);
  int n = (int) **(env + 1);
  int Ti111 = 0;
  if(Ti111 <= i){
    double Td112 = 0.000000;
    double* Ta113 = calloc(n, sizeof(double));
    *(mat + i) = *Ta113;
    int Ti114 = 1;
    int Ti115 = i - Ti114;
    result = init_fun(Ti115, env);
  }
  else{
    result = 1;
  }
  return result;
}

double* make_fun(int m, int n, Environment env){
  double* result;
  double* dummy = (double*) *(env + 0 * sizeof(int));
  int* mat = calloc(m, sizeof(int));
  Environment init_env = malloc(2 * sizeof(int));
  if(init_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(init_env + 0 * sizeof(int)) = mat;
  *(init_env + 1 * sizeof(int)) = &n;
  Closure init = { (Function)init_fun, init_env };
  int Ti109 = 1;
  int Ti110 = m - Ti109;
  int Tu5 = ((fun_int_int_Environment*)init.f)(Ti110, init.env);
  result = (double*)mat;
  return result;
}

int main(){
  int Ti26 = 0;
  double Td27 = 0.000000;
  double* dummy = calloc(Ti26, sizeof(double));
  Environment make_env = malloc(1 * sizeof(int));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(make_env + 0 * sizeof(int)) = (int*)dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti28 = 2;
  int Ti29 = 3;
  double* a = ((fun_double_int_int_Environment*)make.f)(Ti28, Ti29, make.env);
  int Ti30 = 3;
  int Ti31 = 2;
  double* b = ((fun_double_int_int_Environment*)make.f)(Ti30, Ti31, make.env);
  int Ti32 = 2;
  int Ti33 = 2;
  double* c = ((fun_double_int_int_Environment*)make.f)(Ti32, Ti33, make.env);
  int Ti34 = 0;
  double* Ta35 = (a + Ti34);
  int Ti36 = 0;
  double Td37 = 1.000000;
  *(Ta35 + Ti36) = Td37;
  int Ti38 = 0;
  double* Ta39 = (a + Ti38);
  int Ti40 = 1;
  double Td41 = 2.000000;
  *(Ta39 + Ti40) = Td41;
  int Ti42 = 0;
  double* Ta43 = (a + Ti42);
  int Ti44 = 2;
  double Td45 = 3.000000;
  *(Ta43 + Ti44) = Td45;
  int Ti46 = 1;
  double* Ta47 = (a + Ti46);
  int Ti48 = 0;
  double Td49 = 4.000000;
  *(Ta47 + Ti48) = Td49;
  int Ti50 = 1;
  double* Ta51 = (a + Ti50);
  int Ti52 = 1;
  double Td53 = 5.000000;
  *(Ta51 + Ti52) = Td53;
  int Ti54 = 1;
  double* Ta55 = (a + Ti54);
  int Ti56 = 2;
  double Td57 = 6.000000;
  *(Ta55 + Ti56) = Td57;
  int Ti58 = 0;
  double* Ta59 = (b + Ti58);
  int Ti60 = 0;
  double Td61 = 7.000000;
  *(Ta59 + Ti60) = Td61;
  int Ti62 = 0;
  double* Ta63 = (b + Ti62);
  int Ti64 = 1;
  double Td65 = 8.000000;
  *(Ta63 + Ti64) = Td65;
  int Ti66 = 1;
  double* Ta67 = (b + Ti66);
  int Ti68 = 0;
  double Td69 = 9.000000;
  *(Ta67 + Ti68) = Td69;
  int Ti70 = 1;
  double* Ta71 = (b + Ti70);
  int Ti72 = 1;
  double Td73 = 10.000000;
  *(Ta71 + Ti72) = Td73;
  int Ti74 = 2;
  double* Ta75 = (b + Ti74);
  int Ti76 = 0;
  double Td77 = 11.000000;
  *(Ta75 + Ti76) = Td77;
  int Ti78 = 2;
  double* Ta79 = (b + Ti78);
  int Ti80 = 1;
  double Td81 = 12.000000;
  *(Ta79 + Ti80) = Td81;
  int Ti82 = 2;
  int Ti83 = 3;
  int Ti84 = 2;
  int Tu13 = mul_fun(Ti82, Ti83, Ti84, a, b, c);
  int Ti85 = 0;
  double* Ta86 = (c + Ti85);
  int Ti87 = 0;
  double Td88 = *(Ta86 + Ti87);
  int Ti89 = (int) Td88;
  printf("%d", Ti89);
  int Tu90 = 1;
  printf("\n");
  int Ti91 = 0;
  double* Ta92 = (c + Ti91);
  int Ti93 = 1;
  double Td94 = *(Ta92 + Ti93);
  int Ti95 = (int) Td94;
  printf("%d", Ti95);
  int Tu96 = 1;
  printf("\n");
  int Ti97 = 1;
  double* Ta98 = (c + Ti97);
  int Ti99 = 0;
  double Td100 = *(Ta98 + Ti99);
  int Ti101 = (int) Td100;
  printf("%d", Ti101);
  int Tu102 = 1;
  printf("\n");
  int Ti103 = 1;
  double* Ta104 = (c + Ti103);
  int Ti105 = 1;
  double Td106 = *(Ta104 + Ti105);
  int Ti107 = (int) Td106;
  printf("%d", Ti107);
  int Tu108 = 1;
  printf("\n");
  int ans = 1;
  return ans;
}
