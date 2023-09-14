#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums up a variable number of integers.
 * @n: The number of integers to sum.
 * ...
 * This function takes a variable number of integers and returns their sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int xdx = 0;
	int z, z_sum = 0;
	va_list x_args;

	va_start(x_args, n);

	while (xdx < n)
	{
		z = va_arg(x_args, int);
		z_sum += z;
		xdx++;
	}
	va_end(x_args);

	return (z_sum);
}
