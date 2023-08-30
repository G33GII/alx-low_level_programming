#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number using recursion.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int temp;
	int result;

	if (y < 0)
		return (-1);  /* Negative exponent not supported */

	if (y == 0)
		return (1);   /* Any number raised to power 0 is 1 */

	/* Recursively calculate x^(y/2) */
	temp = _pow_recursion(x, y / 2);

	/* Calculate x^y using the result of the recursive call */
	result = temp * temp;

	/* If y is odd, multiply by x once more */
	if (y % 2 == 1)
		result *= x;

	return (result);
}
