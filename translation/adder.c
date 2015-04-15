#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef Closure fun_Closure_int(int x);
typedef int fun_int_int_Environment(int y, Environment env);

int adder_fun(int y, Environment env){
  int x = (int) *(env + 0);
  int result = x + y;
  return result;
}

Closure make_adder_fun(int x){
  Environment adder_env = malloc(1 * sizeof(int));
  if(adder_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(adder_env + 0) = x;
  Closure adder = { (Function)adder_fun, adder_env };
  Closure result = adder;
  return result;
}

int main(){
  int Ti1252 = 3;
  Closure Tf1253 = make_adder_fun(Ti1252);
  int Ti1254 = 7;
  int Ti1255 = ((fun_int_int_Environment*)Tf1253.f)(Ti1254, Tf1253.env);
  printf("%d", Ti1255);
  int ans = 1;
  return ans;
}
