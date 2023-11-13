#include "main.h"

/**
 * _isdigit - Checks if a character represents a digit (0-9).
 * @c: The character to be checked.
 * Return: 1 if @c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{	/* Check if @c is within ASCII range of digits */
	if (c >= 48 && c <= 57)
	/* Return 1 if @c is a digit */
		return (1);
	/* Return 0 if @c is not a digit */
	return (0);
}
