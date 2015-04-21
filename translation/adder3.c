#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef int fun_int_int(int n);
typedef Closure fun_Closure_int_int(int x, int y);
typedef Closure fun_Closure_int(int x);
typedef int fun_int_int_Environment(int y, Environment env);

int adder_fun(int y, Environment env){
  int result;
  int x = (int) *(env + 0);
  result = x + y;
  return result;
}

Closure make_adder_fun(int x){
  Closure result;
  Environment adder_env = malloc(1 * sizeof(int));
  if(adder_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(adder_env + 0) = x;
  Closure adder = { (Function)adder_fun, adder_env };
  result = adder;
  return result;
}

int adder2_fun(int z, Environment env){
  int result;
  int x = (int) *(env + 0);
  int y = (int) *(env + 1);
  int Ti22 = x + y;
  result = Ti22 + z;
  return result;
}

Closure make_adder2_fun(int x, int y){
  Closure result;
  Environment adder2_env = malloc(2 * sizeof(int));
  if(adder2_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(adder2_env + 0) = x;
  *(adder2_env + 1) = y;
  Closure adder2 = { (Function)adder2_fun, adder2_env };
  result = adder2;
  return result;
}

int test_fun(int n){
  int result;
  int Ti14 = 0;
  if(n == Ti14){
    int Ti15 = 3;
    Closure Tf16 = make_adder_fun(Ti15);
    int Ti17 = 7;
    result = ((fun_int_int_Environment*)Tf16.f)(Ti17, Tf16.env);
  }
  else{
    int Ti18 = 3;
    int Ti19 = 4;
    Closure Tf20 = make_adder2_fun(Ti18, Ti19);
    int Ti21 = 7;
    result = ((fun_int_int_Environment*)Tf20.f)(Ti21, Tf20.env);
  }
  return result;
}

int main(){
  int Ti12 = 0;
  int Ti13 = test_fun(Ti12);
  printf("%d", Ti13);
  int ans = 1;
  return ans;
}
