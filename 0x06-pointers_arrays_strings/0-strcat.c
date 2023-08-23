#include "main.h"

/*
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 *
 * Returns: A pointer to the modified dest string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	/* Find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	int j = 0;

	/* Append characters from src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Return the modified dest string */
	return (dest);
}
