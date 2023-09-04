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
	size_t length, index = 0, z;
	char *New_str;

	/* Determine the length of the resulting string */
	if (s1 == NULL && s2 == NULL)
	 length = 1;
	else if (s1 != NULL && s2 != NULL)
	 length = strlen(s1) + strlen(s2) + 1;
	else if (s1 == NULL && s2 != NULL)
	 length = strlen(s2) + 1;
	else if (s1 != NULL && s2 == NULL)
	 length = strlen(s1) + 1;
	/* Allocate memory for the resulting string */
	New_str = malloc(length * sizeof(char));
	/* Copy characters from s1 to the result, if s1 is not NULL */

	if (New_str == NULL)
        return (0);

	if (s1 != NULL)
	{
		for (index = 0; index < length; index++)
		{
			if (s1[index] == '\0')
				break;
			New_str[index] = s1[index];
		}
	}
	/* Copy characters from s2 to the result, if s2 is not NULL */
	if (s2 != NULL)
	{
		for (z = 0; z < length; index++, z++)
		{
			if (s2[z] == '\0')
				break;
			New_str[index] = s2[z];
		}
	}
	/* Null-terminate the resulting string */
	New_str[index] = '\0';
	/* Return the concatenated string */
	return (New_str);
}
