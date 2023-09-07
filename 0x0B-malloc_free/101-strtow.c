#include "main.h"

/**
 * word_count - Counts the number of words in a string.
 * @s: The input string.
 *
 * Return: The number of words in the string.
 */

int word_count(char *s)
{
	int wx = 0, x;    /* Word count */
	int flag = 0;  /* Flag to track word boundaries */

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
		{
			flag = 0; /* Reset flag when encountering a space */
		}
		else if (flag == 0)
		{
			flag = 1; /* Set flag to 1 when starting a new word */
			wx++;     /* Increment word count */
		}
	}

	return (wx);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words.
 */
char **strtow(char *str)
{
	int i = 0;

	char *str_copy = strdup(str);         /* Make a copy of the string */
	int x = word_count(str_copy);         /* Count words in the copy */

	char **pp = malloc(sizeof(char *) * x); /* Allocate memory for the words */
	char *ttx = strtok(str_copy, " ");    /* Tokenize the copy */

	while (ttx != NULL)
	{
		pp[i] = strdup(ttx); /* Make a copy of the token */
		ttx = strtok(NULL, " ");
		i++;
	}

	return (pp);
}
