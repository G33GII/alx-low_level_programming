#include "main.h"

/**
 * print_line - funtion defination that does the magic
 * @n: no input value to the functioin only a std output
 * Return: 1 or 0
 *
 */
void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		if (n == 0 || n < 0)
			_putchar ('\n');
		_putchar ('_');
		i++;
	}
	_putchar ('\n');
}
