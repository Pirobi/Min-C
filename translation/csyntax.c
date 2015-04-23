#include<string.h>
#include<stdlib.h>
#include"csyntax.h"

static inline void* make_array(int size, int initial_value){
  void* array = malloc(size * sizeof(int));
  memset(array, initial_value, sizeof(int));
  return array;
}
