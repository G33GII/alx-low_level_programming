
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
	while (*s != '\0') /* Loop until end of string */
	{	/* Check if current character matches the target character */
		s++;
		if (*s == c)
		{
			return (s); /* Return pointer to the found character */
		}
		 /* Move to the next character in the string */
	}
	return (0); /* Character not found, return NULL */
}
