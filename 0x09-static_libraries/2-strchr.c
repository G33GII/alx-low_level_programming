#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: A pointer to the first occurrence of
 * character 'c' in the string 's', or NULL if 'c' is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

/* Iterate until the end is reached (including the null terminator). */
	for (; s[i] != '\0'; i++)
	{
/* If the current character matches 'c', return a pointer to that character. */
		if (s[i] == c)
			return (&s[i]);
	}

	/* If 'c' is not found, return NULL. */
	return (0);
}
