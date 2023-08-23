#include "main.h"

/**
 * _strncpy - Concatenates two strings up to n characters
 *
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 * @n: The maximum number of characters from src to append.
 *
 * Return: A pointer to the modified dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	/* Append characters from src to dest up to n characters */
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	/* Add null terminator to dest if necessary */
	if (j < n)
	{
		dest[j] = '\0';
	}

	/* Return the modified dest string */
	return (dest);
}

