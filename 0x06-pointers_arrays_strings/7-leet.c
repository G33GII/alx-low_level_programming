#include "main.h"

/**
 * leet - Translates a string to leetspeak
 * @str: The string to be translated.
 * Return: str value, a pointer to the modified string.
 *
 * This function converts characters
 * in the given string to their leetspeak equivalents.
 * It modifies the original string and returns str
 */
char *leet(char *str)
{
	int i, j;
	char g[] = "aAeEoOlLtT"; /* Original characters to be replaced */
	char f[] = "4433001177"; /* Leet - equivalents */

	/* Iterate through each character in the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through each character pair in g and f */
		for (j = 0; g[j] != '\0'; j++)
		{
			/* If the current character in the input */
			 /* matches a character in g */
			if (str[i] == g[j])
			{
				str[i] = f[j]; /* Replace the character with */
						/*  the corresponding leet equivalent */
			}
		}
	}

	return (str); /* Return the modified string */
}
