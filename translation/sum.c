#include"csyntax.c"

typedef int fun_int_int(int x);

int sum_fun(int x){
  int result = NULL;
  int Ti170 = 0;
  if(x <= Ti170){
    result = 0;
  }
  else{
    int Ti171 = 1;
    int Ti172 = x - Ti171;
    int Ti173 = sum_fun(Ti172);
    result = Ti173 + x;
  }
  return result;
}

int main(){
  int ans = 1;
  int Ti166 = 12;
  printf("%d", Ti166);
  int Ti167 = 10000;
  int Ti168 = sum_fun(Ti167);
  printf("%d", Ti168);
  int Ti169 = 100;
  printf("%d", Ti169);
  ans = 1;
  return ans;
}