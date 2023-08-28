#include "main.h"


/**
 * _strpbrk - Locate the first
 * occurrence of a character from a set in a string.
 * @s: String to search.
 * @accept: Set of characters to look for.
 *
 * Return: Pointer to the first
 * matching character, or NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	char *curr; /* Current character in 's' */

	if (*s == '\0' || *accept == '\0')
		return (0);

	while (*s != '\0') /* Loop through 's' */
	{
		curr = accept; /* Reset current to start of 'accept' */

		while (*curr != '\0') /* Loop through 'accept' */
		{
			if (*s == *curr)
				return (s); /* Return if character found */
			curr++; /* Move to next character in 'accept' */
		}

		s++; /* Move to next character in 's' */
	}

	return (0); /* No match found */
}
