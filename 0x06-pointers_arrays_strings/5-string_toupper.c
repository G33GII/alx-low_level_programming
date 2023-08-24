#include "main.h"
/**
 * string_toupper - Converts a string to uppercase
 * @str: The string to be converted.
 *
 * This function converts all lowercase
 * characters in the given string to uppercase.
 * It modifies the original string and
 * Return: a pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - ('a' - 'A'); /* Convert lowercase to uppercase */

		index++;
	}

	return (str);
}
