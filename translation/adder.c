#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef fun_int_int_Environment(int y, Environment env);

int adder(int y, Environment env){
  int x = *(env + 0);
  int result = x + y;
  return result;
}

Closure make_adder(int x){
  Environment env = malloc(1 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = x;
  Closure result = { (Function)adder, env };
  return result;
}

int main(){
  int Ti57 = 3;
  Closure Tf58 = make_adder(Ti57);
  int Ti59 = 7;
  int Ti60 = ((fun_int_int_Environment*)Tf58.f)(Ti59, Tf58.env);
  printf("%d", Ti60);
  int ans = 1;
  return ans;
}
