#ifndef SYNTAX_H
#define SYNTAX_H

//Defines a function pointer
typedef void* Function;

union Value;

struct Closure;

/*Defines a closure for use in dealing with Closure Conversion.
A Closure is defined as the following:
<Function name, Environment>*/
typedef struct Closure{
  Function f;
  union Value* env;
}Closure;

typedef union Value{
  int i;
  double d;
  Closure* c;
  int* ip;
  double* dp;
}Value;



#endif
