#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

typedef fun_Closure_int_int_Environment(int m, int n, Environment env);
typedef fun_Closure_int_Environment(int k, Environment env);

int loop3_fun(int k, Environment env){
  double a = *(env + 0);
  double b = *(env + 1);
  double c = *(env + 2);
  int i = *(env + 3);
  int j = *(env + 4);
  int Ti1264 = 0;
  if(Ti1264 <= k){
    double Ta1265 = i[c];
    double Ta1266 = i[c];
    double Td1267 = j[Ta1266];
    double Ta1268 = i[a];
    double Td1269 = k[Ta1268];
    double Ta1270 = k[b];
    double Td1271 = j[Ta1270];
    double Td1272 =  Td1269 * Td1271;
    double Td1273 = Td1267 + Td1272;
    Ta1265[j] = Td1273;
    int Ti1274 = 1;
    int Ti1275 = k - Ti1274;
    int result = loop3_fun(Ti1275, env);
  }
  else{

  }
  return result;
}

int loop2_fun(int j, Environment env){
  double a = *(env + 0);
  double b = *(env + 1);
  double c = *(env + 2);
  int i = *(env + 3);
  int m = *(env + 4);
  int Ti1259 = 0;
  if(Ti1259 <= j){
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
    Closure loop3 = { (Function)loop3_fun, env };
    int Ti1260 = 1;
    int Ti1261 = m - Ti1260;
    int Tu1138 = loop3_fun(Ti1261, env);
    int Ti1262 = 1;
    int Ti1263 = j - Ti1262;
    int result = loop2_fun(Ti1263, env);
  }
  else{

  }
  return result;
}

int loop1_fun(int i, Environment env){
  double a = *(env + 0);
  double b = *(env + 1);
  double c = *(env + 2);
  int m = *(env + 3);
  int n = *(env + 4);
  int Ti1254 = 0;
  if(Ti1254 <= i){
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
    Closure loop2 = { (Function)loop2_fun, env };
    int Ti1255 = 1;
    int Ti1256 = n - Ti1255;
    int Tu1139 = loop2_fun(Ti1256, env);
    int Ti1257 = 1;
    int Ti1258 = i - Ti1257;
    int result = loop1_fun(Ti1258, env);
  }
  else{

  }
  return result;
}

int mul_fun(int l, int m, int n, double a, double b, double c){
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
  Closure loop1 = { (Function)loop1_fun, env };
  int Ti1252 = 1;
  int Ti1253 = l - Ti1252;
  int result = loop1_fun(Ti1253, env);
  return result;
}

int init_fun(int i, Environment env){
  double mat = *(env + 0);
  int n = *(env + 1);
  int Ti1247 = 0;
  if(Ti1247 <= i){
    double Td1248 = 0.000000;
    double Ta1249[n] = {Td1248};
    mat[i] = Ta1249;
    int Ti1250 = 1;
    int Ti1251 = i - Ti1250;
    int result = init_fun(Ti1251, env);
  }
  else{

  }
  return result;
}

double make_fun(int m, int n, Environment env){
  double dummy = *(env + 0);
  int mat[m] = {dummy};
  Environment env = malloc(2 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = mat;
  *(env + 1) = n;
  Closure init = { (Function)init_fun, env };
  int Ti1245 = 1;
  int Ti1246 = m - Ti1245;
  int Tu1141 = init_fun(Ti1246, env);
  Closure result = mat;
  return result;
}

int main(){
  int Ti1162 = 0;
  double Td1163 = 0.000000;
  double dummy[Ti1162] = {Td1163};
  Environment env = malloc(1 * sizeof(int));
  if(env == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  *(env + 0) = dummy;
  Closure make = { (Function)make_fun, env };
  int Ti1164 = 2;
  int Ti1165 = 3;
  double a = make_fun(Ti1164, Ti1165, env);
  int Ti1166 = 3;
  int Ti1167 = 2;
  double b = make_fun(Ti1166, Ti1167, env);
  int Ti1168 = 2;
  int Ti1169 = 2;
  double c = make_fun(Ti1168, Ti1169, env);
  int Ti1170 = 0;
  double Ta1171 = Ti1170[a];
  int Ti1172 = 0;
  double Td1173 = 1.000000;
  Ta1171[Ti1172] = Td1173;
  int Ti1174 = 0;
  double Ta1175 = Ti1174[a];
  int Ti1176 = 1;
  double Td1177 = 2.000000;
  Ta1175[Ti1176] = Td1177;
  int Ti1178 = 0;
  double Ta1179 = Ti1178[a];
  int Ti1180 = 2;
  double Td1181 = 3.000000;
  Ta1179[Ti1180] = Td1181;
  int Ti1182 = 1;
  double Ta1183 = Ti1182[a];
  int Ti1184 = 0;
  double Td1185 = 4.000000;
  Ta1183[Ti1184] = Td1185;
  int Ti1186 = 1;
  double Ta1187 = Ti1186[a];
  int Ti1188 = 1;
  double Td1189 = 5.000000;
  Ta1187[Ti1188] = Td1189;
  int Ti1190 = 1;
  double Ta1191 = Ti1190[a];
  int Ti1192 = 2;
  double Td1193 = 6.000000;
  Ta1191[Ti1192] = Td1193;
  int Ti1194 = 0;
  double Ta1195 = Ti1194[b];
  int Ti1196 = 0;
  double Td1197 = 7.000000;
  Ta1195[Ti1196] = Td1197;
  int Ti1198 = 0;
  double Ta1199 = Ti1198[b];
  int Ti1200 = 1;
  double Td1201 = 8.000000;
  Ta1199[Ti1200] = Td1201;
  int Ti1202 = 1;
  double Ta1203 = Ti1202[b];
  int Ti1204 = 0;
  double Td1205 = 9.000000;
  Ta1203[Ti1204] = Td1205;
  int Ti1206 = 1;
  double Ta1207 = Ti1206[b];
  int Ti1208 = 1;
  double Td1209 = 10.000000;
  Ta1207[Ti1208] = Td1209;
  int Ti1210 = 2;
  double Ta1211 = Ti1210[b];
  int Ti1212 = 0;
  double Td1213 = 11.000000;
  Ta1211[Ti1212] = Td1213;
  int Ti1214 = 2;
  double Ta1215 = Ti1214[b];
  int Ti1216 = 1;
  double Td1217 = 12.000000;
  Ta1215[Ti1216] = Td1217;
  int Ti1218 = 2;
  int Ti1219 = 3;
  int Ti1220 = 2;
  Closure Tu1149 = mul(Ti1218, Ti1219, Ti1220, a, b, c);
  int Ti1221 = 0;
  double Ta1222 = Ti1221[c];
  int Ti1223 = 0;
  double Td1224 = Ti1223[Ta1222];
  int Ti1225 = (int) Td1224;
  printf("%d", Ti1225);

  printf("%s\n", Tu1226);
  int Ti1227 = 0;
  double Ta1228 = Ti1227[c];
  int Ti1229 = 1;
  double Td1230 = Ti1229[Ta1228];
  int Ti1231 = (int) Td1230;
  printf("%d", Ti1231);

  printf("%s\n", Tu1232);
  int Ti1233 = 1;
  double Ta1234 = Ti1233[c];
  int Ti1235 = 0;
  double Td1236 = Ti1235[Ta1234];
  int Ti1237 = (int) Td1236;
  printf("%d", Ti1237);

  printf("%s\n", Tu1238);
  int Ti1239 = 1;
  double Ta1240 = Ti1239[c];
  int Ti1241 = 1;
  double Td1242 = Ti1241[Ta1240];
  int Ti1243 = (int) Td1242;
  printf("%d", Ti1243);

  printf("%s\n", Tu1244);
  int ans = 1;
  return ans;
}
