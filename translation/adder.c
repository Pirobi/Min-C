#include<string.h>
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
  int Ti1 = 3;
  Closure Tf2 = make_adder_fun(Ti1);
  int Ti3 = 7;
  int Ti4 = ((fun_int_int_Environment*)Tf2.f)(Ti3, Tf2.env);
  printf("%d", Ti4);
  int ans = 1;
  return ans;
}
