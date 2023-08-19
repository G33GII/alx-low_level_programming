#include <stdio.h>
#include "main.h"
/**
 * print_number - function
 * @n: input variable
 * Return: 0 always
 *
 */
void print_number(int n)
{
	int reversed;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}

	if (reversed == 0)
	{
		_putchar('0');
	} else
	{
		while (reversed > 0)
		{
			_putchar('0' + (reversed % 10));
			reversed /= 10;
		}
	}
}
