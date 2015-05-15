#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

static inline void make_array(Value **array, int size, union Value initial_value){
  int x;
  *array = NULL;  
  *array = malloc(size * sizeof(union Value));
  if(*array == NULL){
    printf("Error allocating memory for environment\n");
    exit(-1);
  }
  for(x = 0; x < size; x++){
    array[x] = &initial_value;
  }
}

static inline void safe_malloc(Value **env, int size){
  *env = NULL;
  if(size > 0){
    *env = malloc(size * sizeof(union Value));
    if(*env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
  }
}
