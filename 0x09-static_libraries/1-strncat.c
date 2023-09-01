#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters
 *
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 * @n: The maximum number of characters from src to append.
 *
 * Return: A pointer to the modified dest string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append characters from src to dest up to n characters */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null terminator to dest if necessary */
	if (j < n)
	{
		dest[i] = '\0';
	}

	/* Return the modified dest string */
	return (dest);
}

