#include <stdio.h>
#include "main.h"

/**
 * _strspn - Calculate the length of the initial segment of a string
 *           consisting only of characters from a given set.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of characters to accept.
 *
 * Return: Length of the initial segment of
 * @s containing only characters
 *         from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{	/* Length of the matching segment */
	unsigned int segment_length = 0, j, i;

	/* Iterate through the input string */
	for (i = 0; s[i] != '\0'; i++)
	{	/* Flag to track character match */
		int char_found = 0;
		/* Iterate through the accept set */
		for (j = 0; accept[j] != '\0'; j++)
		{	/* Check if current character matches */
			if (s[i] == accept[j])
			{	/* Mark character as found in the accept set */
				char_found = 1;
				break; /* Exit the loop once a match is found */
			}
		}
		if (char_found == 0) /* If character not found in accept set */
		{	/* Return the length of the matching segment */
			return (segment_length);
		}
	/* Increment the count for each matching character */
segment_length++;
	}
	/* Return the length of the entire string if all match */
	return (segment_length);
}
