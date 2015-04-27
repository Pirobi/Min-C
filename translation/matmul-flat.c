#include"csyntax.c"

typedef double** fun_array_int_int_array(int m, int n, double* dummy);
typedef int fun_int_int_int_array(int i, int n, double** mat);
typedef int fun_int_int_int_int_array_array_array(int i, int k, int j, double** a, double** b, double** c);

int loop3_fun(int i, int k, int j, double** a, double** b, double** c){
int result = NULL;
int Ti615 = 0;
if(Ti615 <= k){
double* Ta616 = c[i];
double* Ta617 = c[i];
double Td618 = Ta617[j];
double* Ta619 = a[i];
double Td620 = Ta619[k];
double* Ta621 = b[k];
double Td622 = Ta621[j];
double Td623 =  Td620 * Td622;
double Td624 = Td618 + Td623;
Ta616[j] = Td624;
int Ti625 = 1;
int Ti626 = k - Ti625;
result = loop3_fun(i, Ti626, j, a, b, c);
}
else{
result = 1;
}
return result;
}

int loop2_fun(int i, int m, int j, double** a, double** b, double** c){
int result = NULL;
int Ti610 = 0;
if(Ti610 <= j){
int Ti611 = 1;
int Ti612 = m - Ti611;
int Tu489 = loop3_fun(i, Ti612, j, a, b, c);
int Ti613 = 1;
int Ti614 = j - Ti613;
result = loop2_fun(i, m, Ti614, a, b, c);
}
else{
result = 1;
}
return result;
}

int loop1_fun(int i, int m, int n, double** a, double** b, double** c){
int result = NULL;
int Ti605 = 0;
if(Ti605 <= i){
int Ti606 = 1;
int Ti607 = n - Ti606;
int Tu490 = loop2_fun(i, m, Ti607, a, b, c);
int Ti608 = 1;
int Ti609 = i - Ti608;
result = loop1_fun(Ti609, m, n, a, b, c);
}
else{
result = 1;
}
return result;
}

int mul_fun(int l, int m, int n, double** a, double** b, double** c){
int result = NULL;
int Ti603 = 1;
int Ti604 = l - Ti603;
result = loop1_fun(Ti604, m, n, a, b, c);
return result;
}

int init_fun(int i, int n, double** mat){
int result = NULL;
int Ti598 = 0;
if(Ti598 <= i){
double Td599 = 0.000000;
double* Ta600 = (double*) make_double_array(n, Td599);
mat[i] = Ta600;
int Ti601 = 1;
int Ti602 = i - Ti601;
result = init_fun(Ti602, n, mat);
}
else{
result = 1;
}
return result;
}

double** make_fun(int m, int n, double* dummy){
double** result = NULL;
int* mat = (int*) make_array(m, dummy);
int Ti596 = 1;
int Ti597 = m - Ti596;
int Tu492 = init_fun(Ti597, n, mat);
result = mat;
return result;
}

int main(){
int ans = 1;
int Ti513 = 0;
double Td514 = 0.000000;
double* dummy = (double*) make_double_array(Ti513, Td514);
int Ti515 = 2;
int Ti516 = 3;
double** a = make_fun(Ti515, Ti516, dummy);
int Ti517 = 3;
int Ti518 = 2;
double** b = make_fun(Ti517, Ti518, dummy);
int Ti519 = 2;
int Ti520 = 2;
double** c = make_fun(Ti519, Ti520, dummy);
int Ti521 = 0;
double* Ta522 = a[Ti521];
int Ti523 = 0;
double Td524 = 1.000000;
Ta522[Ti523] = Td524;
int Ti525 = 0;
double* Ta526 = a[Ti525];
int Ti527 = 1;
double Td528 = 2.000000;
Ta526[Ti527] = Td528;
int Ti529 = 0;
double* Ta530 = a[Ti529];
int Ti531 = 2;
double Td532 = 3.000000;
Ta530[Ti531] = Td532;
int Ti533 = 1;
double* Ta534 = a[Ti533];
int Ti535 = 0;
double Td536 = 4.000000;
Ta534[Ti535] = Td536;
int Ti537 = 1;
double* Ta538 = a[Ti537];
int Ti539 = 1;
double Td540 = 5.000000;
Ta538[Ti539] = Td540;
int Ti541 = 1;
double* Ta542 = a[Ti541];
int Ti543 = 2;
double Td544 = 6.000000;
Ta542[Ti543] = Td544;
int Ti545 = 0;
double* Ta546 = b[Ti545];
int Ti547 = 0;
double Td548 = 7.000000;
Ta546[Ti547] = Td548;
int Ti549 = 0;
double* Ta550 = b[Ti549];
int Ti551 = 1;
double Td552 = 8.000000;
Ta550[Ti551] = Td552;
int Ti553 = 1;
double* Ta554 = b[Ti553];
int Ti555 = 0;
double Td556 = 9.000000;
Ta554[Ti555] = Td556;
int Ti557 = 1;
double* Ta558 = b[Ti557];
int Ti559 = 1;
double Td560 = 10.000000;
Ta558[Ti559] = Td560;
int Ti561 = 2;
double* Ta562 = b[Ti561];
int Ti563 = 0;
double Td564 = 11.000000;
Ta562[Ti563] = Td564;
int Ti565 = 2;
double* Ta566 = b[Ti565];
int Ti567 = 1;
double Td568 = 12.000000;
Ta566[Ti567] = Td568;
int Ti569 = 2;
int Ti570 = 3;
int Ti571 = 2;
int Tu500 = mul_fun(Ti569, Ti570, Ti571, a, b, c);
int Ti572 = 0;
double* Ta573 = c[Ti572];
int Ti574 = 0;
double Td575 = Ta573[Ti574];
int Ti576 = (int) Td575;
printf("%d", Ti576);
int Tu577 = 1;
printf("\n");
int Ti578 = 0;
double* Ta579 = c[Ti578];
int Ti580 = 1;
double Td581 = Ta579[Ti580];
int Ti582 = (int) Td581;
printf("%d", Ti582);
int Tu583 = 1;
printf("\n");
int Ti584 = 1;
double* Ta585 = c[Ti584];
int Ti586 = 0;
double Td587 = Ta585[Ti586];
int Ti588 = (int) Td587;
printf("%d", Ti588);
int Tu589 = 1;
printf("\n");
int Ti590 = 1;
double* Ta591 = c[Ti590];
int Ti592 = 1;
double Td593 = Ta591[Ti592];
int Ti594 = (int) Td593;
printf("%d", Ti594);
int Tu595 = 1;
printf("\n");
return ans;
}
