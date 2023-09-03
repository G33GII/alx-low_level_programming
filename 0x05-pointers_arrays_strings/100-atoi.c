#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the input string.
 */
int _atoi(char *s)
{
	unsigned int number = 0, n = 1;

	/* Skip leading non-digit characters */
	while (!(*s >= '0' && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			n *= -1;
		if (*s == ' ' || *s == '\t' || *s == '+')
			n *= 1;
		s++;
	}

	/* Process and convert digits to integer */
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		number = (number * 10) + (*s - '0');
		s++;
	}

	/* Handle the case when the input is not a valid number */
	if (number == 0)
		return (0);

	return (number * n);
}
