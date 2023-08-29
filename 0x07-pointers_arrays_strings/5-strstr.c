#include "main.h"

/**
 * _strstr - Find 'needle' in 'haystack'
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * This function searches for the first occurrence of the 'needle'
 * substring within the 'haystack' string. It returns a pointer to
 * the position in the 'haystack' where the 'needle' is found.
 * If 'needle' is not found, it returns a null pointer.
 *
 * Return: A pointer to the position of 'needle' in 'haystack' or
 *         NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack) /* Loop through 'haystack' */
	{
		char *h = haystack; /* Save 'haystack' */
		char *n = needle;   /* Save 'needle' */

		while (*n && *h == *n) /* Compare */
		{
			h++;
			n++;
		}

		if (!*n) /* If 'needle' matched */
			return (haystack); /* Return position */

		haystack++; /* Move next char */
	}

	return (0); /* 'needle' not found */
}
