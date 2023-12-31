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
	int k = 0;

	/* Copy characters from src to dest up to n characters */
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	/* Add null terminator to dest if necessary */
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	/* Return the modified dest string */
	return (dest);
}


