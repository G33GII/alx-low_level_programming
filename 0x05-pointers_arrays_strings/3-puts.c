#include "main.h"

/**
 * _puts - literally puts text on the std output
 * @str: pointer with a vlue of a string
 * Retruns void. std output.
 *
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');


}
