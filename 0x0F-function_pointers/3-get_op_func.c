#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: The operator passed as an argument to the program
 *
 * Return: A pointer to the function that corresponds to the operator given
 */

int (*get_op_func(char *s))(int, int)
{
	int x = 0;  /* Initialize x to 0 */

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[x].op != NULL)  /* Iterate through the ops array */
	{
		if (strcmp(s, ops[x].op) == 0)  /* Compare operator strings */
		{
			return (ops[x].f);  /* Return the corresponding function pointer */
		}
		x++;  /* Increment x to move to the next element in ops */
	}

	return (NULL);  /* Operator not found, return NULL */

}
