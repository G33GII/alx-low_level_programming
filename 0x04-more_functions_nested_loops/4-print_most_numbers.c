#include "main.h"
/**
 * print_most_numbers - funtion defination that does the magic
 * @void: no input value to the functioin only a std output
 * Return: 1 or 0
 */

void print_most_numbers(void)
{
	int g = 0;

	while (g < 10)
	{
		if ((g == 2) || (g == 4))
			continue;
		else
			_putchar (g + '0');
		g++;
	}
	_putchar ('\n');
}
