#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings s1 and s2, returns a new string
 * @s1: The first string to be concatenated, can be NULL.
 * @s2: The second string to be concatenated, can be NULL.
 *
 * This function calculates the length of the resulting string,
 * allocates memory for it,
 * and copies characters from s1 and s2 to create the concatenated string.
 *
 * Return: A pointer to the concatenated string
 * (newly allocated) or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	size_t idx, idz = 0, z;
	char *sx;

	/* Determine the length of the resulting string */
	if (s1 == NULL && s2 == NULL)
		idx = 1;
	else if (s1 != NULL && s2 != NULL)
		idx = strlen(s1) + strlen(s2) + 1;
	else if (s1 == NULL && s2 != NULL)
		idx = strlen(s2) + 1;
	else if (s1 != NULL && s2 == NULL)
		idx = strlen(s1) + 1;
	/* Allocate memory for the resulting string */
	sx = malloc(idx * sizeof(char));
	/* Copy characters from s1 to the result, if s1 is not NULL */
	if (s1 != NULL)
	{
		for (idz = 0; idz < idx; idz++)
		{
			if (s1[idz] == '\0')
				break;
			sx[idz] = s1[idz];
		}
	}
	/* Copy characters from s2 to the result, if s2 is not NULL */
	if (s2 != NULL)
	{
		for (z = 0; z < idx; idz++, z++)
		{
			if (s2[z] == '\0')
				break;
			sx[idz] = s2[z];
		}
	}
	/* Null-terminate the resulting string */
	sx[idz] = '\0';
	/* Return the concatenated string */
	return (sx);
}
