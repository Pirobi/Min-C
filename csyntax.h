#ifndef SYNTAX_H
#define SYNTAX_H

//Defines a function pointer
typedef void* Function;

//Defines a pointer to a list of free variables, or the environment
typedef int* Environment;

/*Defines a closure for use in Closure Conversion.
A Closure is defined as the following:
<Function name, Environment>*/
typedef struct{
  Function f;
  Environment env;
}Closure;

#endif
