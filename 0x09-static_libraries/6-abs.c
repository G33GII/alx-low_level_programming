#include "main.h"

/**
 * _abs - calculate the absolute value of an integer
 * @n: integer to check
 * Return: Absolute value of 'n'.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n); /* Return 'n' if it is non-negative. */
	}
/* Return negation of 'n' if it is negative, results in its absolute value. */
	return (-n);
}
