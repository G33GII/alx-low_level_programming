#include "main.h"
/**
 * print_numbers - funtion defination that does the magic
 * @void: no input value to the functioin only a std output
 * Return: 1 or 0
 */

void print_numbers(void)
{
	int g = 0;

	while (g < 10)
	{
		_putchar (g + '0');
		g++;
	}
	_putchar ('\n');
}
