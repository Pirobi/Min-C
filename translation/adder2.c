#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef Closure fun_Closure_int_int(int x, int y);
typedef int fun_int_int_Environment(int z, Environment env);

int adder2_fun(int z, Environment env){
  int x = (int) *(env + 0);
  int y = (int) *(env + 1);
  int Ti10 = x + y;
  int result = Ti10 + z;
  return result;
}

Closure make_adder2_fun(int x, int y){
  Environment adder2_env = malloc(2 * sizeof(int));
  if(adder2_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(adder2_env + 0) = x;
  *(adder2_env + 1) = y;
  Closure adder2 = { (Function)adder2_fun, adder2_env };
  Closure result = adder2;
  return result;
}

int main(){
  int Ti5 = 3;
  int Ti6 = 4;
  Closure Tf7 = make_adder2_fun(Ti5, Ti6);
  int Ti8 = 7;
  int Ti9 = ((fun_int_int_Environment*)Tf7.f)(Ti8, Tf7.env);
  printf("%d", Ti9);
  int ans = 1;
  return ans;
}
