#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	/* Initialize sign to positive and index i to 0. */
	int sign = 1, i = 0;
	/* Initialize the result variable to 0. */
	unsigned int res = 0;

	/* First, skip any non-digit characters and handle the sign. */
	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			/* Change the sign to negative if a '-' character is encountered. */
			sign *= -1;
		i++;
	}

	/* Now, parse the digits and calculate the integer value. */
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{	/* Calculate the integer value digit by digit. */
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	/* Multiply the result by the sign to account for the sign of the integer. */
	res *= sign;

	/* Return the resulting integer value. */
	return (res);
}
