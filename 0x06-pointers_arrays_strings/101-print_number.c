#include "main.h"

/**
 * print_number - Prints an integer as characters.
 * @n: The integer to be printed.
 *
 * This function prints an integer as a series of characters.
 * It handles negative numbers and uses recursion to print each digit.
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = (n < 0) ? -n : n; /* Store the absolute value of n */

	if (n < 0)
	{
		_putchar('-'); /* Print a minus sign for negative numbers */
	}

	/* Use recursion to print each digit of the number */
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0'); /* Print the last digit as a character */
}

