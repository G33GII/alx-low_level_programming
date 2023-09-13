#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * op_add - Adds two integers.
 * @a: input value.
 * @b: input value.
 * Return: integer.
 */
int op_add(int a, int b);

/**
 * op_sub - Subtracts two integers.
 * @a: input value.
 * @b: input value.
 * Return: integer.
 */
int op_sub(int a, int b);

/**
 * op_mul - Multiplies two integers.
 * @a: input value.
 * @b: input value.
 * Return: integer.
 */
int op_mul(int a, int b);

/**
 * op_div - Divides two integers.
 * @a: input value.
 * @b: input value.
 * Return: integer.
 */
int op_div(int a, int b);

/**
 * op_mod - Computes the remainder of integer division.
 * @a: input value.
 * @b: input value.
 * Return: integer.
 */
int op_mod(int a, int b);

/**
 * get_op_func - selects the correct function to perform the operation.
 * s The operator passed as an argument to the program.
 * Return: integer function pointer.
 */
int (*get_op_func(char *s))(int, int);

#endif
