#include"csyntax.c"

typedef int fun_int_int_Environment(int x, Environment env);

int sum_fun(int x, Environment env){
  int result = NULL;
  int Ti23;
  Ti23 = 0;
  if(x <= Ti23){
    result = 0;
  }
  else{
    int Ti24;
    Ti24 = 1;
    int Ti25;
    Ti25 = x - Ti24;
    int Ti26;
    Ti26 = sum_fun(Ti25, NULL);
    result = Ti26 + x;
  }
  return result;
}

int main(){
  int ans = 1;
  int Ti16;
  Ti16 = 12;
  printf("%d", Ti16);
  Environment sum_env = malloc(0 * sizeof(void*));
  if(sum_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  Closure sum = { (Function)sum_fun, sum_env };
  int Ti17;
  Ti17 = 10;
  int Ti18;
  Ti18 = sum_fun(Ti17, NULL);
  int Ti19;
  Ti19 = 0;
  if(Ti18 <= Ti19){
    f = sum;
  }
  else{
    f = sum;
  }
  int Ti20;
  Ti20 = 10000;
  int Ti21;
  Ti21 = ((fun_int_int_Environment*)f.f)(Ti20, f.env);
  printf("%d", Ti21);
  int Ti22;
  Ti22 = 100;
  printf("%d", Ti22);
  ans = 1;
  return ans;
}
