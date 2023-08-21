#include "main.h"
/**
 * puts2 - A function that chances the order of a string.
 * @str: This holds a copy of the string sent to the function.
 *
 */

void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *y = str;
	int j;

	for (; *y != '\0'; y++)
	{
		l++;
	}

	i = l - 1;

	for (j = 0 ; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');

}
