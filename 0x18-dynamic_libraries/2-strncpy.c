#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/* Initialize a counter 'j' to 0. */
	j = 0;

/* Copy from 'src' to 'dest' up to 'n' or until the \0 is encountered. */
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j]; /* Copy the character from 'src' to 'dest'. */
		j++;
	}

/* If 'n' is greater > length of 'src', pad 'dest' with null characters. */
	while (j < n)
	{
		dest[j] = '\0'; /* Pad 'dest' with null characters. */
		j++;
	}

	return (dest); /* Return 'dest' after copying. */
}
