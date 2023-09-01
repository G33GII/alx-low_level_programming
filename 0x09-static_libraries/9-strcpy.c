#include "main.h"

/**
 * _strcpy - copy a string from 'src' to 'dest'
 * @dest: destination string
 * @src: source string
 * Return: Pointer to 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{/* Calculate the length of the source string 'src'. */
		l++;
	}
	for (; x < l; x++)
	{/* Copy characters from 'src' to 'dest'. */
		dest[x] = src[x];
	}
	dest[l] = '\0'; /* Null-terminate the 'dest' string. */
	return (dest); /* Return a pointer to 'dest'. */
}
