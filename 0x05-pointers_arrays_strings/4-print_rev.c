#include "main.h"
/**
 * print_rev - A function that print a string in reverse order.
 * @s: This holds a copy of the string sent to the function.
 *
 */


void print_rev(char *s)
{
	int l = 0, i;

	for (; *s != '\0'; s++)
	{
		l++;
	}
	s--;
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
