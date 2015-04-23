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
int Ti867 = 0;
if(Ti867 <= k){
double* Ta868 = c[i];
double* Ta869 = c[i];
double Td870 = Ta869[j];
double* Ta871 = a[i];
double Td872 = Ta871[k];
double* Ta873 = b[k];
double Td874 = Ta873[j];
double Td875 =  Td872 * Td874;
double Td876 = Td870 + Td875;
Ta868[j] = Td876;
int Ti877 = 1;
int Ti878 = k - Ti877;
result = loop3_fun(Ti878, env);
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
int Ti862 = 0;
if(Ti862 <= j){
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
int Ti863 = 1;
int Ti864 = m - Ti863;
int Tu741 = ((fun_int_int_Environment*)loop3.f)(Ti864, loop3.env);
int Ti865 = 1;
int Ti866 = j - Ti865;
result = loop2_fun(Ti866, env);
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
int Ti857 = 0;
if(Ti857 <= i){
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
int Ti858 = 1;
int Ti859 = n - Ti858;
int Tu742 = ((fun_int_int_Environment*)loop2.f)(Ti859, loop2.env);
int Ti860 = 1;
int Ti861 = i - Ti860;
result = loop1_fun(Ti861, env);
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
int Ti855 = 1;
int Ti856 = l - Ti855;
result = ((fun_int_int_Environment*)loop1.f)(Ti856, loop1.env);
return result;
}

int init_fun(int i, Environment env){
int result;
double** mat = (double**) env[0];
int n = (int) env[1];
int Ti850 = 0;
if(Ti850 <= i){
double Td851 = 0.000000;
double* Ta852 = (double*) make_array(n, (int)Td851);
mat[i] = Ta852;
int Ti853 = 1;
int Ti854 = i - Ti853;
result = init_fun(Ti854, env);
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
int Ti848 = 1;
int Ti849 = m - Ti848;
int Tu744 = ((fun_int_int_Environment*)init.f)(Ti849, init.env);
result = mat;
return result;
}

int main(){
int Ti765 = 0;
double Td766 = 0.000000;
double* dummy = (double*) make_array(Ti765, (int)Td766);
Environment make_env = malloc(1 * sizeof(void*));
if(make_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
make_env[0] = dummy;
Closure make = { (Function)make_fun, make_env };
int Ti767 = 2;
int Ti768 = 3;
double** a = ((fun_array_int_int_Environment*)make.f)(Ti767, Ti768, make.env);
int Ti769 = 3;
int Ti770 = 2;
double** b = ((fun_array_int_int_Environment*)make.f)(Ti769, Ti770, make.env);
int Ti771 = 2;
int Ti772 = 2;
double** c = ((fun_array_int_int_Environment*)make.f)(Ti771, Ti772, make.env);
int Ti773 = 0;
double* Ta774 = a[Ti773];
int Ti775 = 0;
double Td776 = 1.000000;
Ta774[Ti775] = Td776;
int Ti777 = 0;
double* Ta778 = a[Ti777];
int Ti779 = 1;
double Td780 = 2.000000;
Ta778[Ti779] = Td780;
int Ti781 = 0;
double* Ta782 = a[Ti781];
int Ti783 = 2;
double Td784 = 3.000000;
Ta782[Ti783] = Td784;
int Ti785 = 1;
double* Ta786 = a[Ti785];
int Ti787 = 0;
double Td788 = 4.000000;
Ta786[Ti787] = Td788;
int Ti789 = 1;
double* Ta790 = a[Ti789];
int Ti791 = 1;
double Td792 = 5.000000;
Ta790[Ti791] = Td792;
int Ti793 = 1;
double* Ta794 = a[Ti793];
int Ti795 = 2;
double Td796 = 6.000000;
Ta794[Ti795] = Td796;
int Ti797 = 0;
double* Ta798 = b[Ti797];
int Ti799 = 0;
double Td800 = 7.000000;
Ta798[Ti799] = Td800;
int Ti801 = 0;
double* Ta802 = b[Ti801];
int Ti803 = 1;
double Td804 = 8.000000;
Ta802[Ti803] = Td804;
int Ti805 = 1;
double* Ta806 = b[Ti805];
int Ti807 = 0;
double Td808 = 9.000000;
Ta806[Ti807] = Td808;
int Ti809 = 1;
double* Ta810 = b[Ti809];
int Ti811 = 1;
double Td812 = 10.000000;
Ta810[Ti811] = Td812;
int Ti813 = 2;
double* Ta814 = b[Ti813];
int Ti815 = 0;
double Td816 = 11.000000;
Ta814[Ti815] = Td816;
int Ti817 = 2;
double* Ta818 = b[Ti817];
int Ti819 = 1;
double Td820 = 12.000000;
Ta818[Ti819] = Td820;
int Ti821 = 2;
int Ti822 = 3;
int Ti823 = 2;
int Tu752 = mul_fun(Ti821, Ti822, Ti823, a, b, c);
int Ti824 = 0;
double* Ta825 = c[Ti824];
int Ti826 = 0;
double Td827 = Ta825[Ti826];
int Ti828 = (int) Td827;
printf("%d", Ti828);
int Tu829 = 1;
printf("\n");
int Ti830 = 0;
double* Ta831 = c[Ti830];
int Ti832 = 1;
double Td833 = Ta831[Ti832];
int Ti834 = (int) Td833;
printf("%d", Ti834);
int Tu835 = 1;
printf("\n");
int Ti836 = 1;
double* Ta837 = c[Ti836];
int Ti838 = 0;
double Td839 = Ta837[Ti838];
int Ti840 = (int) Td839;
printf("%d", Ti840);
int Tu841 = 1;
printf("\n");
int Ti842 = 1;
double* Ta843 = c[Ti842];
int Ti844 = 1;
double Td845 = Ta843[Ti844];
int Ti846 = (int) Td845;
printf("%d", Ti846);
int Tu847 = 1;
printf("\n");
int ans = 1;
return ans;
}
