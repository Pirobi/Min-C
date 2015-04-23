#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef Closure fun_Closure_int(int x);
typedef Closure fun_int_int_Environment(int y, Environment env);

Closure adder_fun(int y, Environment env){
  Closure result;
  int x = (int) env[0];
  result = x + y;
  return result;
}

Closure make_adder_fun(int x){
  Closure result;
  Environment adder_env = malloc(1 * sizeof(void*));
  if(adder_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  adder_env[0] = x;
  Closure adder = { (Function)adder_fun, adder_env };
  result = adder;
  return result;
}

int main(){
  int Ti279 = 3;
  Closure Tf280 = make_adder_fun(Ti279);
  int Ti281 = 7;
  int Ti282 = ((fun_int_int_Environment*)Tf280.f)(Ti281, Tf280.env);
  printf("%d", Ti282);
  int ans = 1;
  return ans;
}
