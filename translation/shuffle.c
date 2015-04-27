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
int Ti632 = 1;
int Ti633 = 2;
int Ti634 = 3;
int Ti635 = 4;
int Ti636 = 5;
int Ti637 = 6;
ans = bar_fun(Ti632, Ti633, Ti634, Ti635, Ti636, Ti637);
return ans;
}
