#include "main.h"

/**
 * _strstr - find the first occurrence of 'needle' in 'haystack'
 * @haystack: input string
 * @needle: substring to search for
 * Return: Pointer to the first occurrence of 'needle' in 'haystack',
 * or NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
/* Return a pointer to the first occurrence of 'needle' in 'haystack'. */
			return (haystack);
	}

	return (0); /* Return NULL if 'needle' is not found in 'haystack'. */
}
