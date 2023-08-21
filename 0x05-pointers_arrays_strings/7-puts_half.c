#include "main.h"
/**
 * puts_half - A function
 * @str: This holds a copy of the string sent to the function.
 *
 */

void puts_half(char *str)
{
	int i, n, l;

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
		l++;

	n = (l / 2);

	if ((l % 2) == 1)
		n = ((l + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
