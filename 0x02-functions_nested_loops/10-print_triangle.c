#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
