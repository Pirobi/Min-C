#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

static inline void make_int_array(Value **array, int size, int initial_value){
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
    (*array)[x].i = initial_value;
  }
}

static inline void make_double_array(Value **array, int size, double initial_value){
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
    (*array)[x].d = initial_value;
  }
}

static inline void make_multi_array(Value **array, int size, Value* initial_value){
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
    (*array)[x].a = initial_value;
  }
}

static inline void make_closure_array(Value **array, int size, Closure* initial_value){
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
    (*array)[x].c = initial_value;
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
