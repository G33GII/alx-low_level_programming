#include "main.h"

/**
 * _strpbrk - find first character in 's' that is in 'accept'
 * @s: input string
 * @accept: set of accepted characters
 * Return: Pointer to the first occurrence in 's'
 * that matches a character in 'accept', or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
	/* Return a pointer to the first matching character in 's'. */
				return (s);
		}
		s++;
	}

	return ('\0'); /* Return NULL if no match is found. */
}
