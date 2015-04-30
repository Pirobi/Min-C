#include"csyntax.c"

typedef int fun_int_int_Environment(int x, Environment env);

int sum_fun(int x, Environment env){
  int result = NULL;
  int Ti339;
  Ti339 = 0;
  if(x <= Ti339){
    result = 0;
  }
  else{
    int Ti340;
    Ti340 = 1;
    int Ti341;
    Ti341 = x - Ti340;
    int Ti342;
    Ti342 = sum_fun(Ti341, NULL);
    result = Ti342 + x;
  }
  return result;
}

int main(){
  int ans = 1;
  int Ti332;
  Ti332 = 12;
  int u;
  printf("%d", Ti332);
  Environment sum_env = malloc(0 * sizeof(void*));
  if(sum_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  Closure sum = { (Function)sum_fun, sum_env };
  int Ti333;
  Ti333 = 10;
  int Ti334;
  Ti334 = sum_fun(Ti333, NULL);
  int Ti335;
  Ti335 = 0;
  Closure f;
  if(Ti334 <= Ti335){
    f = sum;
  }
  else{
    f = sum;
  }
  int Ti336;
  Ti336 = 10000;
  int Ti337;
  Ti337 = ((fun_int_int_Environment*)f.f)(Ti336, f.env);
  printf("%d", Ti337);
  int Ti338;
  Ti338 = 100;
  printf("%d", Ti338);
  ans = 1;
  return ans;
}
