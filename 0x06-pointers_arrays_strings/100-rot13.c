#include "main.h"
#include <stdio.h>

/**
* rot13 - Encodes a string using the ROT13 cipher.
 * @str: Pointer to the string to be encoded.
 *
 * This function applies the
 * ROT13 encoding technique to the input string.
 *
 * It modifies the original string and
 * Return: a pointer to the modified string.
 */

char *rot13(char *str)
{
	int m, n;
char string_alphabets[] =
	"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char rot_cypher[] =
	"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	/* Iterate through each character in the input string */
	for (m = 0; str[m] != '\0'; m++)
	{
		/* Iterate through each character in the string_alphabets array */
		for (n = 0; string_alphabets[n] != '\0'; n++)
		{
			/* If the current character in the input */
			 /* matches a character in string_alphabets */
			if (str[m] == string_alphabets[n])
			{
				str[m] = rot_cypher[n]; /* Replace with the */
							 /*  corresponding ROT13 character */
				break; /* Exit the loop, as the replacement has been done */
			}
		}
	}

	return (str); /* Return the modified string */
}
