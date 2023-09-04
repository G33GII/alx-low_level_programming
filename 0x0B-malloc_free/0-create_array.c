#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: input
 *
 * @c: input
 * Return: a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (0);

	a = (char *)malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	for (i = 0; i < size - 1; i++)
	{
		a[i] = c;
	}

	return (a);
}
