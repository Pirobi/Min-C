#include<stdio.h>
#include<stdlib.h>
#include"csyntax.c"

typedef double** fun_array_int_int_Environment(int m, int n, Environment env);
typedef int fun_int_int_int_int_array_array_array(int l, int m, int n, double** a, double** b, double** c);
typedef int fun_int_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
int result;
double** a = (double**) env[0];
double** b = (double**) env[1];
double** c = (double**) env[2];
int i = (int) env[3];
int j = (int) env[4];
int Ti1014 = 0;
if(Ti1014 <= k){
double* Ta1015 = c[i];
double* Ta1016 = c[i];
double Td1017 = Ta1016[j];
double* Ta1018 = a[i];
double Td1019 = Ta1018[k];
double* Ta1020 = b[k];
double Td1021 = Ta1020[j];
double Td1022 =  Td1019 * Td1021;
double Td1023 = Td1017 + Td1022;
Ta1015[j] = Td1023;
int Ti1024 = 1;
int Ti1025 = k - Ti1024;
result = loop3_fun(Ti1025, env);
}
else{
result = 1;
}
return result;
}

int loop2_fun(int j, Environment env){
int result;
double** a = (double**) env[0];
double** b = (double**) env[1];
double** c = (double**) env[2];
int i = (int) env[3];
int m = (int) env[4];
int Ti1009 = 0;
if(Ti1009 <= j){
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
int Ti1010 = 1;
int Ti1011 = m - Ti1010;
int Tu888 = ((fun_int_int_Environment*)loop3.f)(Ti1011, loop3.env);
int Ti1012 = 1;
int Ti1013 = j - Ti1012;
result = loop2_fun(Ti1013, env);
}
else{
result = 1;
}
return result;
}

int loop1_fun(int i, Environment env){
int result;
double** a = (double**) env[0];
double** b = (double**) env[1];
double** c = (double**) env[2];
int m = (int) env[3];
int n = (int) env[4];
int Ti1004 = 0;
if(Ti1004 <= i){
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
int Ti1005 = 1;
int Ti1006 = n - Ti1005;
int Tu889 = ((fun_int_int_Environment*)loop2.f)(Ti1006, loop2.env);
int Ti1007 = 1;
int Ti1008 = i - Ti1007;
result = loop1_fun(Ti1008, env);
}
else{
result = 1;
}
return result;
}

int mul_fun(int l, int m, int n, double** a, double** b, double** c){
int result;
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
int Ti1002 = 1;
int Ti1003 = l - Ti1002;
result = ((fun_int_int_Environment*)loop1.f)(Ti1003, loop1.env);
return result;
}

int init_fun(int i, Environment env){
int result;
double** mat = (double**) env[0];
int n = (int) env[1];
int Ti997 = 0;
if(Ti997 <= i){
double Td998 = 0.000000;
double* Ta999 = (double*) make_array(n, (int)Td998);
mat[i] = Ta999;
int Ti1000 = 1;
int Ti1001 = i - Ti1000;
result = init_fun(Ti1001, env);
}
else{
result = 1;
}
return result;
}

double** make_fun(int m, int n, Environment env){
double** result;
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
int Ti995 = 1;
int Ti996 = m - Ti995;
int Tu891 = ((fun_int_int_Environment*)init.f)(Ti996, init.env);
result = mat;
return result;
}

int main(){
int Ti912 = 0;
double Td913 = 0.000000;
double* dummy = (double*) make_array(Ti912, (int)Td913);
Environment make_env = malloc(1 * sizeof(void*));
if(make_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
make_env[0] = dummy;
Closure make = { (Function)make_fun, make_env };
int Ti914 = 2;
int Ti915 = 3;
double** a = ((fun_array_int_int_Environment*)make.f)(Ti914, Ti915, make.env);
int Ti916 = 3;
int Ti917 = 2;
double** b = ((fun_array_int_int_Environment*)make.f)(Ti916, Ti917, make.env);
int Ti918 = 2;
int Ti919 = 2;
double** c = ((fun_array_int_int_Environment*)make.f)(Ti918, Ti919, make.env);
int Ti920 = 0;
double* Ta921 = a[Ti920];
int Ti922 = 0;
double Td923 = 1.000000;
Ta921[Ti922] = Td923;
int Ti924 = 0;
double* Ta925 = a[Ti924];
int Ti926 = 1;
double Td927 = 2.000000;
Ta925[Ti926] = Td927;
int Ti928 = 0;
double* Ta929 = a[Ti928];
int Ti930 = 2;
double Td931 = 3.000000;
Ta929[Ti930] = Td931;
int Ti932 = 1;
double* Ta933 = a[Ti932];
int Ti934 = 0;
double Td935 = 4.000000;
Ta933[Ti934] = Td935;
int Ti936 = 1;
double* Ta937 = a[Ti936];
int Ti938 = 1;
double Td939 = 5.000000;
Ta937[Ti938] = Td939;
int Ti940 = 1;
double* Ta941 = a[Ti940];
int Ti942 = 2;
double Td943 = 6.000000;
Ta941[Ti942] = Td943;
int Ti944 = 0;
double* Ta945 = b[Ti944];
int Ti946 = 0;
double Td947 = 7.000000;
Ta945[Ti946] = Td947;
int Ti948 = 0;
double* Ta949 = b[Ti948];
int Ti950 = 1;
double Td951 = 8.000000;
Ta949[Ti950] = Td951;
int Ti952 = 1;
double* Ta953 = b[Ti952];
int Ti954 = 0;
double Td955 = 9.000000;
Ta953[Ti954] = Td955;
int Ti956 = 1;
double* Ta957 = b[Ti956];
int Ti958 = 1;
double Td959 = 10.000000;
Ta957[Ti958] = Td959;
int Ti960 = 2;
double* Ta961 = b[Ti960];
int Ti962 = 0;
double Td963 = 11.000000;
Ta961[Ti962] = Td963;
int Ti964 = 2;
double* Ta965 = b[Ti964];
int Ti966 = 1;
double Td967 = 12.000000;
Ta965[Ti966] = Td967;
int Ti968 = 2;
int Ti969 = 3;
int Ti970 = 2;
int Tu899 = mul_fun(Ti968, Ti969, Ti970, a, b, c);
int Ti971 = 0;
double* Ta972 = c[Ti971];
int Ti973 = 0;
double Td974 = Ta972[Ti973];
int Ti975 = (int) Td974;
printf("%d", Ti975);
int Tu976 = 1;
printf("\n");
int Ti977 = 0;
double* Ta978 = c[Ti977];
int Ti979 = 1;
double Td980 = Ta978[Ti979];
int Ti981 = (int) Td980;
printf("%d", Ti981);
int Tu982 = 1;
printf("\n");
int Ti983 = 1;
double* Ta984 = c[Ti983];
int Ti985 = 0;
double Td986 = Ta984[Ti985];
int Ti987 = (int) Td986;
printf("%d", Ti987);
int Tu988 = 1;
printf("\n");
int Ti989 = 1;
double* Ta990 = c[Ti989];
int Ti991 = 1;
double Td992 = Ta990[Ti991];
int Ti993 = (int) Td992;
printf("%d", Ti993);
int Tu994 = 1;
printf("\n");
int ans = 1;
return ans;
}
