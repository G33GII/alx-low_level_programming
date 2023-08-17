#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - funtion defination that does the magic
 * @n: no input value to the functioin only a std output
 * Return: 2 or 0
 *
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n == 0 || n < 0)
		putchar ('\n');
	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			putchar  (' ');
			j++;
		}
		putchar ('\\');
		putchar ('$');
		putchar ('\n');
		i++;
	}
}
