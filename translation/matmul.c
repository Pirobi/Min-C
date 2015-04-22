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
  int Ti556 = 0;
  if(Ti556 <= k){
    double* Ta557 = (c + i);
    double* Ta558 = (c + i);
    double Td559 = *(Ta558 + j);
    double* Ta560 = (a + i);
    double Td561 = *(Ta560 + k);
    double* Ta562 = (b + k);
    double Td563 = *(Ta562 + j);
    double Td564 =  Td561 * Td563;
    double Td565 = Td559 + Td564;
    Ta557[j] = Td565;
    int Ti566 = 1;
    int Ti567 = k - Ti566;
    result = loop3_fun(Ti567, env);
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
  int Ti551 = 0;
  if(Ti551 <= j){
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
    int Ti552 = 1;
    int Ti553 = m - Ti552;
    int Tu430 = ((fun_int_int_Environment*)loop3.f)(Ti553, loop3.env);
    int Ti554 = 1;
    int Ti555 = j - Ti554;
    result = loop2_fun(Ti555, env);
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
  int Ti546 = 0;
  if(Ti546 <= i){
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
    int Ti547 = 1;
    int Ti548 = n - Ti547;
    int Tu431 = ((fun_int_int_Environment*)loop2.f)(Ti548, loop2.env);
    int Ti549 = 1;
    int Ti550 = i - Ti549;
    result = loop1_fun(Ti550, env);
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
  int Ti544 = 1;
  int Ti545 = l - Ti544;
  result = ((fun_int_int_Environment*)loop1.f)(Ti545, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result;
  double* mat = (double*) *(env + 0 * sizeof(int));
  int n = (int) **(env + 1 * sizeof(int));
  int Ti539 = 0;
  if(Ti539 <= i){
    double Td540 = 0.000000;
    double Ta541[n];
    memset(Ta541, Td540, n * sizeof(double));
    mat[i] = *Ta541;
    int Ti542 = 1;
    int Ti543 = i - Ti542;
    result = init_fun(Ti543, env);
  }
  else{
    result = 1;
  }
  return result;
}

double* make_fun(int m, int n, Environment env){
  double* result;
  double* dummy = (double*) *(env + 0 * sizeof(int));
  int mat[m];
  memset(mat, *dummy, m * sizeof(int));
  Environment init_env = malloc(2 * sizeof(int));
  if(init_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(init_env + 0 * sizeof(int)) = (int*)mat;
  *(init_env + 1 * sizeof(int)) = &n;
  Closure init = { (Function)init_fun, init_env };
  int Ti537 = 1;
  int Ti538 = m - Ti537;
  int Tu433 = ((fun_int_int_Environment*)init.f)(Ti538, init.env);
  result = (double*)mat;
  return result;
}

int main(){
  int Ti454 = 0;
  double Td455 = 0.000000;
  double dummy[Ti454];
  memset(dummy, Td455, Ti454 * sizeof(double));
  Environment make_env = malloc(1 * sizeof(int));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(make_env + 0 * sizeof(int)) = (int*)dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti456 = 2;
  int Ti457 = 3;
  double* a = ((fun_double_int_int_Environment*)make.f)(Ti456, Ti457, make.env);
  int Ti458 = 3;
  int Ti459 = 2;
  double* b = ((fun_double_int_int_Environment*)make.f)(Ti458, Ti459, make.env);
  int Ti460 = 2;
  int Ti461 = 2;
  double* c = ((fun_double_int_int_Environment*)make.f)(Ti460, Ti461, make.env);
  int Ti462 = 0;
  double* Ta463 = (a + Ti462);
  int Ti464 = 0;
  double Td465 = 1.000000;
  Ta463[Ti464] = Td465;
  int Ti466 = 0;
  double* Ta467 = (a + Ti466);
  int Ti468 = 1;
  double Td469 = 2.000000;
  Ta467[Ti468] = Td469;
  int Ti470 = 0;
  double* Ta471 = (a + Ti470);
  int Ti472 = 2;
  double Td473 = 3.000000;
  Ta471[Ti472] = Td473;
  int Ti474 = 1;
  double* Ta475 = (a + Ti474);
  int Ti476 = 0;
  double Td477 = 4.000000;
  Ta475[Ti476] = Td477;
  int Ti478 = 1;
  double* Ta479 = (a + Ti478);
  int Ti480 = 1;
  double Td481 = 5.000000;
  Ta479[Ti480] = Td481;
  int Ti482 = 1;
  double* Ta483 = (a + Ti482);
  int Ti484 = 2;
  double Td485 = 6.000000;
  Ta483[Ti484] = Td485;
  int Ti486 = 0;
  double* Ta487 = (b + Ti486);
  int Ti488 = 0;
  double Td489 = 7.000000;
  Ta487[Ti488] = Td489;
  int Ti490 = 0;
  double* Ta491 = (b + Ti490);
  int Ti492 = 1;
  double Td493 = 8.000000;
  Ta491[Ti492] = Td493;
  int Ti494 = 1;
  double* Ta495 = (b + Ti494);
  int Ti496 = 0;
  double Td497 = 9.000000;
  Ta495[Ti496] = Td497;
  int Ti498 = 1;
  double* Ta499 = (b + Ti498);
  int Ti500 = 1;
  double Td501 = 10.000000;
  Ta499[Ti500] = Td501;
  int Ti502 = 2;
  double* Ta503 = (b + Ti502);
  int Ti504 = 0;
  double Td505 = 11.000000;
  Ta503[Ti504] = Td505;
  int Ti506 = 2;
  double* Ta507 = (b + Ti506);
  int Ti508 = 1;
  double Td509 = 12.000000;
  Ta507[Ti508] = Td509;
  int Ti510 = 2;
  int Ti511 = 3;
  int Ti512 = 2;
  int Tu441 = mul_fun(Ti510, Ti511, Ti512, a, b, c);
  int Ti513 = 0;
  double* Ta514 = (c + Ti513);
  int Ti515 = 0;
  double Td516 = *(Ta514 + Ti515);
  int Ti517 = (int) Td516;
  printf("%d", Ti517);
  int Tu518 = 1;
  printf("\n");
  int Ti519 = 0;
  double* Ta520 = (c + Ti519);
  int Ti521 = 1;
  double Td522 = *(Ta520 + Ti521);
  int Ti523 = (int) Td522;
  printf("%d", Ti523);
  int Tu524 = 1;
  printf("\n");
  int Ti525 = 1;
  double* Ta526 = (c + Ti525);
  int Ti527 = 0;
  double Td528 = *(Ta526 + Ti527);
  int Ti529 = (int) Td528;
  printf("%d", Ti529);
  int Tu530 = 1;
  printf("\n");
  int Ti531 = 1;
  double* Ta532 = (c + Ti531);
  int Ti533 = 1;
  double Td534 = *(Ta532 + Ti533);
  int Ti535 = (int) Td534;
  printf("%d", Ti535);
  int Tu536 = 1;
  printf("\n");
  int ans = 1;
  return ans;
}
