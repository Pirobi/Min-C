#include<stdio.h>
#include<stdlib.h>
#include"csyntax.c"

typedef double** fun_array_int_int_array(int m, int n, double* dummy);
typedef int fun_int_int_int_array(int i, int n, double** mat);
typedef int fun_int_int_int_int_array_array_array(int i, int k, int j, double** a, double** b, double** c);

int loop3_fun(int i, int k, int j, double** a, double** b, double** c){
int result = NULL;
int Ti333 = 0;
if(Ti333 <= k){
double* Ta334 = c[i];
double* Ta335 = c[i];
double Td336 = Ta335[j];
double* Ta337 = a[i];
double Td338 = Ta337[k];
double* Ta339 = b[k];
double Td340 = Ta339[j];
double Td341 =  Td338 * Td340;
double Td342 = Td336 + Td341;
Ta334[j] = Td342;
int Ti343 = 1;
int Ti344 = k - Ti343;
result = loop3_fun(i, Ti344, j, a, b, c);
}
else{
result = 1;
}
return result;
}

int loop2_fun(int i, int m, int j, double** a, double** b, double** c){
int result = NULL;
int Ti328 = 0;
if(Ti328 <= j){
int Ti329 = 1;
int Ti330 = m - Ti329;
int Tu207 = loop3_fun(i, Ti330, j, a, b, c);
int Ti331 = 1;
int Ti332 = j - Ti331;
result = loop2_fun(i, m, Ti332, a, b, c);
}
else{
result = 1;
}
return result;
}

int loop1_fun(int i, int m, int n, double** a, double** b, double** c){
int result = NULL;
int Ti323 = 0;
if(Ti323 <= i){
int Ti324 = 1;
int Ti325 = n - Ti324;
int Tu208 = loop2_fun(i, m, Ti325, a, b, c);
int Ti326 = 1;
int Ti327 = i - Ti326;
result = loop1_fun(Ti327, m, n, a, b, c);
}
else{
result = 1;
}
return result;
}

int mul_fun(int l, int m, int n, double** a, double** b, double** c){
int result = NULL;
int Ti321 = 1;
int Ti322 = l - Ti321;
result = loop1_fun(Ti322, m, n, a, b, c);
return result;
}

int init_fun(int i, int n, double** mat){
int result = NULL;
int Ti316 = 0;
if(Ti316 <= i){
double Td317 = 0.000000;
double* Ta318 = (double*) make_array(n, (int)Td317);
mat[i] = Ta318;
int Ti319 = 1;
int Ti320 = i - Ti319;
result = init_fun(Ti320, n, mat);
}
else{
result = 1;
}
return result;
}

double** make_fun(int m, int n, double* dummy){
double** result = NULL;
int* mat = (int*) make_array(m, dummy);
int Ti314 = 1;
int Ti315 = m - Ti314;
int Tu210 = init_fun(Ti315, n, mat);
result = mat;
return result;
}

int main(){
int ans = 1;
int Ti231 = 0;
double Td232 = 0.000000;
double* dummy = (double*) make_array(Ti231, (int)Td232);
int Ti233 = 2;
int Ti234 = 3;
double** a = make_fun(Ti233, Ti234, dummy);
int Ti235 = 3;
int Ti236 = 2;
double** b = make_fun(Ti235, Ti236, dummy);
int Ti237 = 2;
int Ti238 = 2;
double** c = make_fun(Ti237, Ti238, dummy);
int Ti239 = 0;
double* Ta240 = a[Ti239];
int Ti241 = 0;
double Td242 = 1.000000;
Ta240[Ti241] = Td242;
int Ti243 = 0;
double* Ta244 = a[Ti243];
int Ti245 = 1;
double Td246 = 2.000000;
Ta244[Ti245] = Td246;
int Ti247 = 0;
double* Ta248 = a[Ti247];
int Ti249 = 2;
double Td250 = 3.000000;
Ta248[Ti249] = Td250;
int Ti251 = 1;
double* Ta252 = a[Ti251];
int Ti253 = 0;
double Td254 = 4.000000;
Ta252[Ti253] = Td254;
int Ti255 = 1;
double* Ta256 = a[Ti255];
int Ti257 = 1;
double Td258 = 5.000000;
Ta256[Ti257] = Td258;
int Ti259 = 1;
double* Ta260 = a[Ti259];
int Ti261 = 2;
double Td262 = 6.000000;
Ta260[Ti261] = Td262;
int Ti263 = 0;
double* Ta264 = b[Ti263];
int Ti265 = 0;
double Td266 = 7.000000;
Ta264[Ti265] = Td266;
int Ti267 = 0;
double* Ta268 = b[Ti267];
int Ti269 = 1;
double Td270 = 8.000000;
Ta268[Ti269] = Td270;
int Ti271 = 1;
double* Ta272 = b[Ti271];
int Ti273 = 0;
double Td274 = 9.000000;
Ta272[Ti273] = Td274;
int Ti275 = 1;
double* Ta276 = b[Ti275];
int Ti277 = 1;
double Td278 = 10.000000;
Ta276[Ti277] = Td278;
int Ti279 = 2;
double* Ta280 = b[Ti279];
int Ti281 = 0;
double Td282 = 11.000000;
Ta280[Ti281] = Td282;
int Ti283 = 2;
double* Ta284 = b[Ti283];
int Ti285 = 1;
double Td286 = 12.000000;
Ta284[Ti285] = Td286;
int Ti287 = 2;
int Ti288 = 3;
int Ti289 = 2;
int Tu218 = mul_fun(Ti287, Ti288, Ti289, a, b, c);
int Ti290 = 0;
double* Ta291 = c[Ti290];
int Ti292 = 0;
double Td293 = Ta291[Ti292];
int Ti294 = (int) Td293;
printf("%d", Ti294);
int Tu295 = 1;
printf("\n");
int Ti296 = 0;
double* Ta297 = c[Ti296];
int Ti298 = 1;
double Td299 = Ta297[Ti298];
int Ti300 = (int) Td299;
printf("%d", Ti300);
int Tu301 = 1;
printf("\n");
int Ti302 = 1;
double* Ta303 = c[Ti302];
int Ti304 = 0;
double Td305 = Ta303[Ti304];
int Ti306 = (int) Td305;
printf("%d", Ti306);
int Tu307 = 1;
printf("\n");
int Ti308 = 1;
double* Ta309 = c[Ti308];
int Ti310 = 1;
double Td311 = Ta309[Ti310];
int Ti312 = (int) Td311;
printf("%d", Ti312);
int Tu313 = 1;
printf("\n");
return ans;
}
