#include<stdio.h>
#include<stdlib.h>
#include"csyntax.c"

typedef int fun_int_int_int_int_int_int_int(int a, int b, int c, int d, int e, int f);

int foo_fun(int a, int b, int c, int d, int e, int f){
int result = NULL;
printf("%d", a);
printf("%d", b);
printf("%d", c);
printf("%d", d);
printf("%d", e);
printf("%d", f);
return result;
}

int bar_fun(int a, int b, int c, int d, int e, int f){
int result = NULL;
result = foo_fun(b, a, d, e, f, c);
return result;
}

int main(){
int ans = 1;
int Ti61 = 1;
int Ti62 = 2;
int Ti63 = 3;
int Ti64 = 4;
int Ti65 = 5;
int Ti66 = 6;
ans = bar_fun(Ti61, Ti62, Ti63, Ti64, Ti65, Ti66);
return ans;
}
