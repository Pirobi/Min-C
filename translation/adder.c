#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef Closure fun_Closure_int(int x);
typedef int fun_int_int_Environment(int y, Environment env);

int adder_fun(int y, Environment env){
int result;
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
int Ti597 = 3;
Closure Tf598 = make_adder_fun(Ti597);
int Ti599 = 7;
int Ti600 = ((fun_int_int_Environment*)Tf598.f)(Ti599, Tf598.env);
printf("%d", Ti600);
int ans = 1;
return ans;
}
