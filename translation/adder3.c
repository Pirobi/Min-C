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
  int Ti76 = x + y;
  result = Ti76 + z;
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
  int Ti68 = 0;
  if(n == Ti68){
    int Ti69 = 3;
    Closure Tf70 = make_adder_fun(Ti69);
    int Ti71 = 7;
    result = ((fun_int_int_Environment*)Tf70.f)(Ti71, Tf70.env);
  }
  else{
    int Ti72 = 3;
    int Ti73 = 4;
    Closure Tf74 = make_adder2_fun(Ti72, Ti73);
    int Ti75 = 7;
    result = ((fun_int_int_Environment*)Tf74.f)(Ti75, Tf74.env);
  }
  return result;
}

int main(){
  int Ti66 = 1;
  int Ti67 = test_fun(Ti66);
  printf("%d", Ti67);
  int ans = 1;
  return ans;
}
