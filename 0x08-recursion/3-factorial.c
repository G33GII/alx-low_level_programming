#include "main.h"

/**
 * factorial - Calculates the factorial of a number using recursion.
 * @n: Input number.
 *
 * Return: Factorial of the input number, or appropriate values
 *          for negative input or factorial of 0.
 */

int factorial(int n)
{
	int f = n;  /* Initialize f with n. */

	if (f < 0)  /* If n is negative. */
		return (-1);  /* Return -1 indicating error. */

	if (f == 0)  /* If n is 0. */
		return (1);  /* Factorial of 0 is 1. */
	/* Calculate factorial recursively. */
	return (f * factorial(n - 1));
}
