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
  int Ti267 = 0;
  if(Ti267 <= k){
    double* Ta268 = (c + i);
    double* Ta269 = (c + i);
    double Td270 = *(Ta269 + j);
    double* Ta271 = (a + i);
    double Td272 = *(Ta271 + k);
    double* Ta273 = (b + k);
    double Td274 = *(Ta273 + j);
    double Td275 =  Td272 * Td274;
    double Td276 = Td270 + Td275;
    Ta268[j] = Td276;
    int Ti277 = 1;
    int Ti278 = k - Ti277;
    result = ((fun_int_int_Environment*)loop3.f)(Ti278, loop3.env);
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
  int Ti262 = 0;
  if(Ti262 <= j){
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
    int Ti263 = 1;
    int Ti264 = m - Ti263;
    int Tu141 = ((fun_int_int_Environment*)loop3.f)(Ti264, loop3.env);
    int Ti265 = 1;
    int Ti266 = j - Ti265;
    result = ((fun_int_int_Environment*)loop2.f)(Ti266, loop2.env);
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
  int Ti257 = 0;
  if(Ti257 <= i){
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
    int Ti258 = 1;
    int Ti259 = n - Ti258;
    int Tu142 = ((fun_int_int_Environment*)loop2.f)(Ti259, loop2.env);
    int Ti260 = 1;
    int Ti261 = i - Ti260;
    result = ((fun_int_int_Environment*)loop1.f)(Ti261, loop1.env);
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
  int Ti255 = 1;
  int Ti256 = l - Ti255;
  result = ((fun_int_int_Environment*)loop1.f)(Ti256, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result;
  double* mat = (double*) *(env + 0);
  int n = (int) *(env + 1);
  int Ti250 = 0;
  if(Ti250 <= i){
    double Td251 = 0.000000;
    double Ta252[n];
    memset(Ta252, Td251, n * sizeof(double));
    mat[i] = *Ta252;
    int Ti253 = 1;
    int Ti254 = i - Ti253;
    result = ((fun_int_int_Environment*)init.f)(Ti254, init.env);
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
  int Ti248 = 1;
  int Ti249 = m - Ti248;
  int Tu144 = ((fun_int_int_Environment*)init.f)(Ti249, init.env);
  result = mat;
  return result;
}

int main(){
  int Ti165 = 0;
  double Td166 = 0.000000;
  double dummy[Ti165];
  memset(dummy, Td166, Ti165 * sizeof(double));
  Environment make_env = malloc(1 * sizeof(int));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(make_env + 0) = dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti167 = 2;
  int Ti168 = 3;
  double* a = ((fun_double_int_int_Environment*)make.f)(Ti167, Ti168, make.env);
  int Ti169 = 3;
  int Ti170 = 2;
  double* b = ((fun_double_int_int_Environment*)make.f)(Ti169, Ti170, make.env);
  int Ti171 = 2;
  int Ti172 = 2;
  double* c = ((fun_double_int_int_Environment*)make.f)(Ti171, Ti172, make.env);
  int Ti173 = 0;
  double* Ta174 = (a + Ti173);
  int Ti175 = 0;
  double Td176 = 1.000000;
  Ta174[Ti175] = Td176;
  int Ti177 = 0;
  double* Ta178 = (a + Ti177);
  int Ti179 = 1;
  double Td180 = 2.000000;
  Ta178[Ti179] = Td180;
  int Ti181 = 0;
  double* Ta182 = (a + Ti181);
  int Ti183 = 2;
  double Td184 = 3.000000;
  Ta182[Ti183] = Td184;
  int Ti185 = 1;
  double* Ta186 = (a + Ti185);
  int Ti187 = 0;
  double Td188 = 4.000000;
  Ta186[Ti187] = Td188;
  int Ti189 = 1;
  double* Ta190 = (a + Ti189);
  int Ti191 = 1;
  double Td192 = 5.000000;
  Ta190[Ti191] = Td192;
  int Ti193 = 1;
  double* Ta194 = (a + Ti193);
  int Ti195 = 2;
  double Td196 = 6.000000;
  Ta194[Ti195] = Td196;
  int Ti197 = 0;
  double* Ta198 = (b + Ti197);
  int Ti199 = 0;
  double Td200 = 7.000000;
  Ta198[Ti199] = Td200;
  int Ti201 = 0;
  double* Ta202 = (b + Ti201);
  int Ti203 = 1;
  double Td204 = 8.000000;
  Ta202[Ti203] = Td204;
  int Ti205 = 1;
  double* Ta206 = (b + Ti205);
  int Ti207 = 0;
  double Td208 = 9.000000;
  Ta206[Ti207] = Td208;
  int Ti209 = 1;
  double* Ta210 = (b + Ti209);
  int Ti211 = 1;
  double Td212 = 10.000000;
  Ta210[Ti211] = Td212;
  int Ti213 = 2;
  double* Ta214 = (b + Ti213);
  int Ti215 = 0;
  double Td216 = 11.000000;
  Ta214[Ti215] = Td216;
  int Ti217 = 2;
  double* Ta218 = (b + Ti217);
  int Ti219 = 1;
  double Td220 = 12.000000;
  Ta218[Ti219] = Td220;
  int Ti221 = 2;
  int Ti222 = 3;
  int Ti223 = 2;
  int Tu152 = mul_fun(Ti221, Ti222, Ti223, a, b, c);
  int Ti224 = 0;
  double* Ta225 = (c + Ti224);
  int Ti226 = 0;
  double Td227 = *(Ta225 + Ti226);
  int Ti228 = (int) Td227;
  printf("%d", Ti228);
  int Tu229 = 1;
  printf("\n");
  int Ti230 = 0;
  double* Ta231 = (c + Ti230);
  int Ti232 = 1;
  double Td233 = *(Ta231 + Ti232);
  int Ti234 = (int) Td233;
  printf("%d", Ti234);
  int Tu235 = 1;
  printf("\n");
  int Ti236 = 1;
  double* Ta237 = (c + Ti236);
  int Ti238 = 0;
  double Td239 = *(Ta237 + Ti238);
  int Ti240 = (int) Td239;
  printf("%d", Ti240);
  int Tu241 = 1;
  printf("\n");
  int Ti242 = 1;
  double* Ta243 = (c + Ti242);
  int Ti244 = 1;
  double Td245 = *(Ta243 + Ti244);
  int Ti246 = (int) Td245;
  printf("%d", Ti246);
  int Tu247 = 1;
  printf("\n");
  int ans = 1;
  return ans;
}
