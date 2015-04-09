#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef fun_double_int_int_Environment(int m, int n, Environment env);
typedef fun_Closure_int_Environment(int k, Environment env);

Closure loop3(int k, Environment env){
  double a = *(env + 0);
  double b = *(env + 1);
  double c = *(env + 2);
  int i = *(env + 3);
  int j = *(env + 4);
  int Ti128 = 0;
  if(Ti128 <= k){
    double Ta129 = i[c];
    double Ta130 = i[c];
    double Td131 = j[Ta130];
    double Ta132 = i[a];
    double Td133 = k[Ta132];
    double Ta134 = k[b];
    double Td135 = j[Ta134];
    double Td136 =  Td133 * Td135;
    double Td137 = Td131 + Td136;
    Ta129[j] = Td137;
    int Ti138 = 1;
    int Ti139 = k - Ti138;
    Closure result = ((fun_Closure_int_Environment*)loop3.f)(Ti139, loop3.env);
  }
  else{

  }
  return result;
}

Closure loop2(int j, Environment env){
  double a = *(env + 0);
  double b = *(env + 1);
  double c = *(env + 2);
  int i = *(env + 3);
  int m = *(env + 4);
  int Ti123 = 0;
  if(Ti123 <= j){
    Environment env = malloc(5 * sizeof(int));
    if(env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(env + 0) = a;
    *(env + 1) = b;
    *(env + 2) = c;
    *(env + 3) = i;
    *(env + 4) = j;
    Closure result = { (Function)loop3, env };
  }
  else{

  }
  return result;
}

Closure loop1(int i, Environment env){
  double a = *(env + 0);
  double b = *(env + 1);
  double c = *(env + 2);
  int m = *(env + 3);
  int n = *(env + 4);
  int Ti118 = 0;
  if(Ti118 <= i){
    Environment env = malloc(5 * sizeof(int));
    if(env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
    *(env + 0) = a;
    *(env + 1) = b;
    *(env + 2) = c;
    *(env + 3) = i;
    *(env + 4) = m;
    Closure result = { (Function)loop2, env };
  }
  else{

  }
  return result;
}

Closure mul(int l, int m, int n, double a, double b, double c){
  Environment env = malloc(5 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = a;
  *(env + 1) = b;
  *(env + 2) = c;
  *(env + 3) = m;
  *(env + 4) = n;
  Closure result = { (Function)loop1, env };
  return result;
}

Closure init(int i, Environment env){
  double mat = *(env + 0);
  int n = *(env + 1);
  int Ti111 = 0;
  if(Ti111 <= i){
    double Td112 = 0.000000;
    double Ta113[n] = {Td112};
    mat[i] = Ta113;
    int Ti114 = 1;
    int Ti115 = i - Ti114;
    Closure result = ((fun_Closure_int_Environment*)init.f)(Ti115, init.env);
  }
  else{

  }
  return result;
}

double make(int m, int n, Environment env){
  double dummy = *(env + 0);
  int mat[m] = {dummy};
  Environment env = malloc(2 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = mat;
  *(env + 1) = n;
  Closure result = { (Function)init, env };
  return result;
}

int main(){
  int Ti26 = 0;
  double Td27 = 0.000000;
  double dummy[Ti26] = {Td27};
  Environment env = malloc(1 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = dummy;
  Closure result = { (Function)make, env };
  int ans = 1;
  return ans;
}
