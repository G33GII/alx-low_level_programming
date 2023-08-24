#include "main.h"

/**
 * _strcmp - Compares two strings character by character
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 *         found, respectively, to be less than, to match, or be greater
 *         than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0;

/* Compare characters of s1 and s2 until a difference or null terminator */

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			/* Return the difference between the differing characters */
			return (s1[k] - s2[k]);
		}
		k++;
	}

	/* Return 0 if both strings are identical up to this point */
	return (0);
}

