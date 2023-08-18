#include "main.h"
#include <stdio.h>
/**
 * print_square - funtion defination that does the magic
 * @size: no input value to the functioin only a std output
 * Return: 2 or 0
 *
 */

void print_square(int size)
{
	int i = 0;

	if (size <= 0)
		putchar ('\n');
	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			putchar  ('#');
			j++;
		}
		putchar ('\n');
		i++;
	}
}
