#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef fun_int_int_Environment(int y, Environment env);

int adder_fun(int y, Environment env){
  int x = *(env + 0);
  int result = x + y;
  return result;
}

Closure make_adder_fun(int x){
  Environment env = malloc(1 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = x;
  Closure adder = { (Function)adder_fun, env };
  Closure result = adder;
  return result;
}

int main(){
  int Ti21 = 3;
  Closure Tf22 = make_adder(Ti21);
  int Ti23 = 7;
  int Ti24 = ((fun_int_int_Environment*)Tf22.f)(Ti23, Tf22.env);
  printf("%d", Ti24);
  int ans = 1;
  return ans;
}
