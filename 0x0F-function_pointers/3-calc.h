#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;                   /* The operator */
    int (*f)(int a, int b);     /* The function associated */
} op_t;

int op_add(int a, int b);        /* Function prototype for addition */
int op_sub(int a, int b);        /* Function prototype for subtraction */
int op_mul(int a, int b);        /* Function prototype for multiplication */
int op_div(int a, int b);        /* Function prototype for division */
int op_mod(int a, int b);        /* Function prototype for modulo */
int (*get_op_func(char *s))(int, int); /* Function prototype for operator retrieval */

#endif
