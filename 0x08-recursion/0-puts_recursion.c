#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion.
 *
 * @s: The input string.
 */
void _puts_recursion(char *s)
{
	/* Base case: If the current character is null terminator */
	if (s[0] == '\0')
	{
		_putchar('\n'); /* Print a new line */
		return;        /* Exit the function */
	}

	/* Print the current character */
	if (s[0])
	{
		_putchar(s[0]);
	}

	/* Recursively call the function for the next character */
	_puts_recursion(s + 1);
}
