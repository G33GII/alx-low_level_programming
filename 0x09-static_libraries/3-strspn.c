#include "main.h"

/**
 * _strspn - get length of prefix substring with accepted characters
 * @s: input string
 * @accept: set of accepted characters
 * Return: Number of accepted characters in the prefix of 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{/* Increment count for each accepted character. */
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
		/* Return count when no more accepted characters are found. */
				return (n);
		}
		s++;
	}
	return (n); /* Return count of accepted characters. */
}
