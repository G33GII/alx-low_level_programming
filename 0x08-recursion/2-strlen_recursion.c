#include "main.h"
/**
 * _strlen_recursion - Recursive string length calculation.
 * @s: Input string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int f = 0;  /* Initialize counter. */

	if (s[0])    /* If not null terminator. */
	{
		f++;  /* Increment counter. */
		f += _strlen_recursion(s + 1);/* Recurse to next char. */
	}

	return (f);  /* Return total length. */
}
