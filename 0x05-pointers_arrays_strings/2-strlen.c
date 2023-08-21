#include "main.h"

/**
 * _strlen - the swap function interchanges the values for its inputs
 * @s: and the value in b will be swapped for the value in a
 * Return: len of string..
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
