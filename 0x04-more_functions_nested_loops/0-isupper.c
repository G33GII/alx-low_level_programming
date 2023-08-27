#include "main.h"
/**
 * _isupper - Checks if a character is an uppercase letter.
 * @a: The character to be checked.
 * Return: 1 if @a is an uppercase letter, 0 otherwise.
 */

int _isupper(char a)
{	/* Check if @a is within ASCII range of uppercase letters */
	if (a >= 65 && a <= 90)
	/* Return 1 if @a is an uppercase letter */
		return (1);
	/* Return 0 if @a is not an uppercase letter */
	return (0);
}
