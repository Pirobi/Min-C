#include"csyntax.c"

typedef double** fun_array_int_int_Environment(int m, int n, Environment env);
typedef int fun_int_int_int_int_array_array_array(int l, int m, int n, double** a, double** b, double** c);
typedef int fun_int_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
int result = NULL;
double** a = (double**) env[0];
double** b = (double**) env[1];
double** c = (double**) env[2];
int i = (int) env[3];
int j = (int) env[4];
int Ti476 = 0;
if(Ti476 <= k){
double* Ta477 = c[i];
double* Ta478 = c[i];
double Td479 = Ta478[j];
double* Ta480 = a[i];
double Td481 = Ta480[k];
double* Ta482 = b[k];
double Td483 = Ta482[j];
double Td484 =  Td481 * Td483;
double Td485 = Td479 + Td484;
Ta477[j] = Td485;
int Ti486 = 1;
int Ti487 = k - Ti486;
result = loop3_fun(Ti487, env);
}
else{
result = 1;
}
return result;
}

int loop2_fun(int j, Environment env){
int result = NULL;
double** a = (double**) env[0];
double** b = (double**) env[1];
double** c = (double**) env[2];
int i = (int) env[3];
int m = (int) env[4];
int Ti471 = 0;
if(Ti471 <= j){
Environment loop3_env = malloc(5 * sizeof(void*));
if(loop3_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
loop3_env[0] = a;
loop3_env[1] = b;
loop3_env[2] = c;
loop3_env[3] = i;
loop3_env[4] = j;
Closure loop3 = { (Function)loop3_fun, loop3_env };
int Ti472 = 1;
int Ti473 = m - Ti472;
int Tu350 = ((fun_int_int_Environment*)loop3.f)(Ti473, loop3.env);
int Ti474 = 1;
int Ti475 = j - Ti474;
result = loop2_fun(Ti475, env);
}
else{
result = 1;
}
return result;
}

int loop1_fun(int i, Environment env){
int result = NULL;
double** a = (double**) env[0];
double** b = (double**) env[1];
double** c = (double**) env[2];
int m = (int) env[3];
int n = (int) env[4];
int Ti466 = 0;
if(Ti466 <= i){
Environment loop2_env = malloc(5 * sizeof(void*));
if(loop2_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
loop2_env[0] = a;
loop2_env[1] = b;
loop2_env[2] = c;
loop2_env[3] = i;
loop2_env[4] = m;
Closure loop2 = { (Function)loop2_fun, loop2_env };
int Ti467 = 1;
int Ti468 = n - Ti467;
int Tu351 = ((fun_int_int_Environment*)loop2.f)(Ti468, loop2.env);
int Ti469 = 1;
int Ti470 = i - Ti469;
result = loop1_fun(Ti470, env);
}
else{
result = 1;
}
return result;
}

int mul_fun(int l, int m, int n, double** a, double** b, double** c){
int result = NULL;
Environment loop1_env = malloc(5 * sizeof(void*));
if(loop1_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
loop1_env[0] = a;
loop1_env[1] = b;
loop1_env[2] = c;
loop1_env[3] = m;
loop1_env[4] = n;
Closure loop1 = { (Function)loop1_fun, loop1_env };
int Ti464 = 1;
int Ti465 = l - Ti464;
result = ((fun_int_int_Environment*)loop1.f)(Ti465, loop1.env);
return result;
}

int init_fun(int i, Environment env){
int result = NULL;
double** mat = (double**) env[0];
int n = (int) env[1];
int Ti459 = 0;
if(Ti459 <= i){
double Td460 = 0.000000;
double* Ta461 = (double*) make_double_array(n, Td460);
mat[i] = Ta461;
int Ti462 = 1;
int Ti463 = i - Ti462;
result = init_fun(Ti463, env);
}
else{
result = 1;
}
return result;
}

double** make_fun(int m, int n, Environment env){
double** result = NULL;
double* dummy = (double*) env[0];
int* mat = (int*) make_array(m, dummy);
Environment init_env = malloc(2 * sizeof(void*));
if(init_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
init_env[0] = mat;
init_env[1] = n;
Closure init = { (Function)init_fun, init_env };
int Ti457 = 1;
int Ti458 = m - Ti457;
int Tu353 = ((fun_int_int_Environment*)init.f)(Ti458, init.env);
result = mat;
return result;
}

int main(){
int ans = 1;
int Ti374 = 0;
double Td375 = 0.000000;
double* dummy = (double*) make_double_array(Ti374, Td375);
Environment make_env = malloc(1 * sizeof(void*));
if(make_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
make_env[0] = dummy;
Closure make = { (Function)make_fun, make_env };
int Ti376 = 2;
int Ti377 = 3;
double** a = ((fun_array_int_int_Environment*)make.f)(Ti376, Ti377, make.env);
int Ti378 = 3;
int Ti379 = 2;
double** b = ((fun_array_int_int_Environment*)make.f)(Ti378, Ti379, make.env);
int Ti380 = 2;
int Ti381 = 2;
double** c = ((fun_array_int_int_Environment*)make.f)(Ti380, Ti381, make.env);
int Ti382 = 0;
double* Ta383 = a[Ti382];
int Ti384 = 0;
double Td385 = 1.000000;
Ta383[Ti384] = Td385;
int Ti386 = 0;
double* Ta387 = a[Ti386];
int Ti388 = 1;
double Td389 = 2.000000;
Ta387[Ti388] = Td389;
int Ti390 = 0;
double* Ta391 = a[Ti390];
int Ti392 = 2;
double Td393 = 3.000000;
Ta391[Ti392] = Td393;
int Ti394 = 1;
double* Ta395 = a[Ti394];
int Ti396 = 0;
double Td397 = 4.000000;
Ta395[Ti396] = Td397;
int Ti398 = 1;
double* Ta399 = a[Ti398];
int Ti400 = 1;
double Td401 = 5.000000;
Ta399[Ti400] = Td401;
int Ti402 = 1;
double* Ta403 = a[Ti402];
int Ti404 = 2;
double Td405 = 6.000000;
Ta403[Ti404] = Td405;
int Ti406 = 0;
double* Ta407 = b[Ti406];
int Ti408 = 0;
double Td409 = 7.000000;
Ta407[Ti408] = Td409;
int Ti410 = 0;
double* Ta411 = b[Ti410];
int Ti412 = 1;
double Td413 = 8.000000;
Ta411[Ti412] = Td413;
int Ti414 = 1;
double* Ta415 = b[Ti414];
int Ti416 = 0;
double Td417 = 9.000000;
Ta415[Ti416] = Td417;
int Ti418 = 1;
double* Ta419 = b[Ti418];
int Ti420 = 1;
double Td421 = 10.000000;
Ta419[Ti420] = Td421;
int Ti422 = 2;
double* Ta423 = b[Ti422];
int Ti424 = 0;
double Td425 = 11.000000;
Ta423[Ti424] = Td425;
int Ti426 = 2;
double* Ta427 = b[Ti426];
int Ti428 = 1;
double Td429 = 12.000000;
Ta427[Ti428] = Td429;
int Ti430 = 2;
int Ti431 = 3;
int Ti432 = 2;
int Tu361 = mul_fun(Ti430, Ti431, Ti432, a, b, c);
int Ti433 = 0;
double* Ta434 = c[Ti433];
int Ti435 = 0;
double Td436 = Ta434[Ti435];
int Ti437 = (int) Td436;
printf("%d", Ti437);
int Tu438 = 1;
printf("\n");
int Ti439 = 0;
double* Ta440 = c[Ti439];
int Ti441 = 1;
double Td442 = Ta440[Ti441];
int Ti443 = (int) Td442;
printf("%d", Ti443);
int Tu444 = 1;
printf("\n");
int Ti445 = 1;
double* Ta446 = c[Ti445];
int Ti447 = 0;
double Td448 = Ta446[Ti447];
int Ti449 = (int) Td448;
printf("%d", Ti449);
int Tu450 = 1;
printf("\n");
int Ti451 = 1;
double* Ta452 = c[Ti451];
int Ti453 = 1;
double Td454 = Ta452[Ti453];
int Ti455 = (int) Td454;
printf("%d", Ti455);
int Tu456 = 1;
printf("\n");
return ans;
}
