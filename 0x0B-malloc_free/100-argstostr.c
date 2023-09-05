#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenate an array of strings into a single string with each
 * string on a new line.
 * @ac: The number of strings in av.
 * @av: An array of strings.
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int x, y, total_length = 0;
	char *result;
	char *current;

	if (ac == 0 || av == NULL)
	{
		/* Return NULL for invalid input */
		return (NULL);
	}
	/* The total length of all strings, including newlines & null terminators */
	for (x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
		{
			/* Return NULL if any of the strings are NULL */
			return (NULL);
		}
		total_length += strlen(av[x]) + 1; /* +1 for the newline character */
	}
	/* Allocate memory for the concatenated string */
	result = malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	current = result;
	/* Copy each string from av into the result string with a newline character */
	for (x = 0; x < ac; x++)
	{
		y = strlen(av[x]);
		strncpy(current, av[x], y);
		current += y;
		*current = '\n'; /* Add a newline character between concatenated strings */
		current++;
	}
	*(current - 1)= '\n';
	*(current ) = '\0'; /* Replace the last newline with a null terminator */
	return (result);
}
