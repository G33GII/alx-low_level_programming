#include "main.h"

/**
 * _strlen - calculates the length of characters in a char
 * @s: a copy of the string to be cunted.
 * Return: len of string.
 *
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);

}
