#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: The operator passed as an argument to the program
 *
 * Return: A pointer to the function that corresponds to the operator given
 */

int (*get_op_func(char *s))(int, int)
{
    if (*s == '*')  /* Check if the operator is multiplication */
        return (op_mul);
    else if (*s == '+')  /* Check if the operator is addition */
        return (op_add);
    else if (*s == '-')  /* Check if the operator is subtraction */
        return (op_sub);
    else if (*s == '/')  /* Check if the operator is division */
        return (op_div);
    else if (*s == '%')  /* Check if the operator is modulo */
        return (op_mod);
    else
        return (NULL);  /* Return NULL if operator is not recognized */
}
