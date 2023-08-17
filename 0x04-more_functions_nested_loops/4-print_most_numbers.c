#include "main.h"

/**
 * print_most_numbers - funtion defination that does the magic
 * @void: no input value to the functioin only a std output
 * Return: 1 or 0
 */

void print_most_numbers(void)
{
	char c = '0';

	while ( c <= '9' )
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);

		c++;
	}
	_putchar('\n');
}
