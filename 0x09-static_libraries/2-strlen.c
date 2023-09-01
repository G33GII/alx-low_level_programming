#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

/* Iterate through the string until the null terminator is encountered. */
	while (*s != '\0')
	{	/* Increment the length for each character in the string. */
		longi++;
		s++;     /* Move to the next character in the string. */
	}

	return (longi); /* Return the length of the string. */
}
