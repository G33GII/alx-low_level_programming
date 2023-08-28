#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: Character to search for.
 *
 * Return: Pointer to the first
 * occurrence of the character, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int f; /* Loop counter */

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] == c)
			return (s + f); /* Return pointer to the found character */
	}
	return (NULL); /* Character not found, return NULL */
}
