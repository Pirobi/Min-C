#include"csyntax.c"

typedef Closure fun_Closure_int(int x);
typedef int fun_int_int_Environment(int y, Environment env);

int adder_fun(int y, Environment env){
int result = NULL;
int x = (int) env[0];
result = x + y;
return result;
}

Closure make_adder_fun(int x){
Closure result = NULL;
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
int ans = 1;
int Ti345 = 3;
int Tf346 = make_adder_fun(Ti345);
int Ti347 = 7;
int Ti348 = ((fun_int_int_Environment*)Tf346.f)(Ti347, Tf346.env);
printf("%d", Ti348);
return ans;
}
