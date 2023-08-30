#include "main.h"

/**
 * _print_rev_recursion - Recursively print string in reverse.
 * @s: Pointer to current character in the string.
 */
void _print_rev_recursion(char *s)
{
/* If the character is not '\0', recursively move to the next character */
	 /* and print it in reverse order. */
	if (*s)
	{	/* Recurse with the next character. */
		_print_rev_recursion(s + 1);
		_putchar(*s);	/* Print the current character. */
	}
}

