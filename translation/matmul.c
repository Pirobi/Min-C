#include<stdio.h>
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
  int Ti6677 = 0;
  if(Ti6677 <= k){
    double* Ta6678 = c[i];
    double* Ta6679 = c[i];
    double Td6680 = Ta6679[j];
    double* Ta6681 = a[i];
    double Td6682 = Ta6681[k];
    double* Ta6683 = b[k];
    double Td6684 = Ta6683[j];
    double Td6685 =  Td6682 * Td6684;
    double Td6686 = Td6680 + Td6685;
    Ta6678[j] = Td6686;
    int Ti6687 = 1;
    int Ti6688 = k - Ti6687;
    result = loop3_fun(Ti6688, env);
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
  int Ti6672 = 0;
  if(Ti6672 <= j){
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
    int Ti6673 = 1;
    int Ti6674 = m - Ti6673;
    int Tu6551 = ((fun_int_int_Environment*)loop3.f)(Ti6674, loop3.env);
    int Ti6675 = 1;
    int Ti6676 = j - Ti6675;
    result = loop2_fun(Ti6676, env);
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
  int Ti6667 = 0;
  if(Ti6667 <= i){
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
    int Ti6668 = 1;
    int Ti6669 = n - Ti6668;
    int Tu6552 = ((fun_int_int_Environment*)loop2.f)(Ti6669, loop2.env);
    int Ti6670 = 1;
    int Ti6671 = i - Ti6670;
    result = loop1_fun(Ti6671, env);
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
  int Ti6665 = 1;
  int Ti6666 = l - Ti6665;
  result = ((fun_int_int_Environment*)loop1.f)(Ti6666, loop1.env);
  return result;
}

int init_fun(int i, Environment env){
  int result;
  double** mat = (double**) env[0];
  int n = (int) env[1];
  int Ti6660 = 0;
  if(Ti6660 <= i){
    double Td6661 = 0.000000;
    double* Ta6662 = (double*) make_array(n, (int)Td6661);
    mat[i] = Ta6662;
    int Ti6663 = 1;
    int Ti6664 = i - Ti6663;
    result = init_fun(Ti6664, env);
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
  int Ti6658 = 1;
  int Ti6659 = m - Ti6658;
  int Tu6554 = ((fun_int_int_Environment*)init.f)(Ti6659, init.env);
  result = mat;
  return result;
}

int main(){
  int Ti6575 = 0;
  double Td6576 = 0.000000;
  double* dummy = (double*) make_array(Ti6575, (int)Td6576);
  Environment make_env = malloc(1 * sizeof(void*));
  if(make_env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  make_env[0] = dummy;
  Closure make = { (Function)make_fun, make_env };
  int Ti6577 = 2;
  int Ti6578 = 3;
  double** a = ((fun_array_int_int_Environment*)make.f)(Ti6577, Ti6578, make.env);
  int Ti6579 = 3;
  int Ti6580 = 2;
  double** b = ((fun_array_int_int_Environment*)make.f)(Ti6579, Ti6580, make.env);
  int Ti6581 = 2;
  int Ti6582 = 2;
  double** c = ((fun_array_int_int_Environment*)make.f)(Ti6581, Ti6582, make.env);
  int Ti6583 = 0;
  double* Ta6584 = a[Ti6583];
  int Ti6585 = 0;
  double Td6586 = 1.000000;
  Ta6584[Ti6585] = Td6586;
  int Ti6587 = 0;
  double* Ta6588 = a[Ti6587];
  int Ti6589 = 1;
  double Td6590 = 2.000000;
  Ta6588[Ti6589] = Td6590;
  int Ti6591 = 0;
  double* Ta6592 = a[Ti6591];
  int Ti6593 = 2;
  double Td6594 = 3.000000;
  Ta6592[Ti6593] = Td6594;
  int Ti6595 = 1;
  double* Ta6596 = a[Ti6595];
  int Ti6597 = 0;
  double Td6598 = 4.000000;
  Ta6596[Ti6597] = Td6598;
  int Ti6599 = 1;
  double* Ta6600 = a[Ti6599];
  int Ti6601 = 1;
  double Td6602 = 5.000000;
  Ta6600[Ti6601] = Td6602;
  int Ti6603 = 1;
  double* Ta6604 = a[Ti6603];
  int Ti6605 = 2;
  double Td6606 = 6.000000;
  Ta6604[Ti6605] = Td6606;
  int Ti6607 = 0;
  double* Ta6608 = b[Ti6607];
  int Ti6609 = 0;
  double Td6610 = 7.000000;
  Ta6608[Ti6609] = Td6610;
  int Ti6611 = 0;
  double* Ta6612 = b[Ti6611];
  int Ti6613 = 1;
  double Td6614 = 8.000000;
  Ta6612[Ti6613] = Td6614;
  int Ti6615 = 1;
  double* Ta6616 = b[Ti6615];
  int Ti6617 = 0;
  double Td6618 = 9.000000;
  Ta6616[Ti6617] = Td6618;
  int Ti6619 = 1;
  double* Ta6620 = b[Ti6619];
  int Ti6621 = 1;
  double Td6622 = 10.000000;
  Ta6620[Ti6621] = Td6622;
  int Ti6623 = 2;
  double* Ta6624 = b[Ti6623];
  int Ti6625 = 0;
  double Td6626 = 11.000000;
  Ta6624[Ti6625] = Td6626;
  int Ti6627 = 2;
  double* Ta6628 = b[Ti6627];
  int Ti6629 = 1;
  double Td6630 = 12.000000;
  Ta6628[Ti6629] = Td6630;
  int Ti6631 = 2;
  int Ti6632 = 3;
  int Ti6633 = 2;
  int Tu6562 = mul_fun(Ti6631, Ti6632, Ti6633, a, b, c);
  int Ti6634 = 0;
  double* Ta6635 = c[Ti6634];
  int Ti6636 = 0;
  double Td6637 = Ta6635[Ti6636];
  int Ti6638 = (int) Td6637;
  printf("%d", Ti6638);
  int Tu6639 = 1;
  printf("\n");
  int Ti6640 = 0;
  double* Ta6641 = c[Ti6640];
  int Ti6642 = 1;
  double Td6643 = Ta6641[Ti6642];
  int Ti6644 = (int) Td6643;
  printf("%d", Ti6644);
  int Tu6645 = 1;
  printf("\n");
  int Ti6646 = 1;
  double* Ta6647 = c[Ti6646];
  int Ti6648 = 0;
  double Td6649 = Ta6647[Ti6648];
  int Ti6650 = (int) Td6649;
  printf("%d", Ti6650);
  int Tu6651 = 1;
  printf("\n");
  int Ti6652 = 1;
  double* Ta6653 = c[Ti6652];
  int Ti6654 = 1;
  double Td6655 = Ta6653[Ti6654];
  int Ti6656 = (int) Td6655;
  printf("%d", Ti6656);
  int Tu6657 = 1;
  printf("\n");
  int ans = 1;
  return ans;
}
