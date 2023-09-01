#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
/* Iterate through the string until the null terminator is encountered. */
	while (*str != '\0')
	{
		_putchar(*str++); /* Print each character in 'str'. */
	}
	_putchar('\n'); /* Print a newline character after the string. */
}
