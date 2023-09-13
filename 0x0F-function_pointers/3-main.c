#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h> /* Include for exit() */

/**
 * main - Entry point for a simple calculator program
 * @argc: Argument count.
 * @argv: Argument Vector.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	int (*z_func)(int, int);

	operator = "+-*/%";

	if (argv == NULL || argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strchr(operator, argv[2][0]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	z_func = get_op_func(argv[2]);

	printf("%d\n", z_func(num1, num2));

	return (0);
}
