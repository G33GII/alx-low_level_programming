#include <stdio.h>
#include "main.h"
/**
 * _atoi - function name
 * @s: source
 * Return: an integer.
 */
int _atoi(char *s)
{
	unsigned int number = 0, n = 1;

	while (!(*s >= '0' && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			n = -1;
		if (*s == ' ' || *s == '\t' || *s == '+')
			n = 1;
		s++;
	}
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		number = (number * 10) + (*s - '0');
		s++;
	}

	if (number == 0)
		return (0);

	return (number * n);
}
