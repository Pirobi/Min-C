#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"csyntax.h"

static inline void* make_array(int size, int initial_value){
  void* array = malloc(size * sizeof(int));
  memset(array, initial_value, sizeof(int));
  return array;
}

static inline void safe_malloc(Environment *env, int size){
  *env = NULL;
  if(size > 0){
    *env = malloc(size * sizeof(void*));
    if(*env == NULL){
      printf("Error allocating memory for environment\n");
      exit(-1);
    }
  }
}
