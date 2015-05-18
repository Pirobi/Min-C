#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

static inline void make_array(Value **array, int size, Value initial_value, Type type){
  int x;
  *array = NULL;  
  if(size < 1){
    size = 1;
  }
  *array = malloc(size * sizeof(Value));
  if(*array == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  for(x = 0; x < size; x++){
    switch (type){
    case INT:
      (*array)[x].i = initial_value.i;
      break;
    case DOUBLE:
      (*array)[x].d = initial_value.d;
      break;
    case CLOSURE:
      (*array)[x].c = initial_value.c;
      break;
    case ARRAY:
      (*array)[x].a = initial_value.a;
      break;
    default:
      break;
    }
  }
}

static inline void safe_malloc(Value **env, int size){
  *env = NULL;
  if(size > 0){
    *env = malloc(size * sizeof(Value));
    if(*env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
  }
}
