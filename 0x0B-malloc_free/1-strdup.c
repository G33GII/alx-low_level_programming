#include "main.h"

/**
 * _strdup - function
 *
 * @str: input
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *b;
	size_t idx, m;

	if (str == NULL)
		return (0);

	idx = strlen(str);

	b = malloc(idx * sizeof(char));

	for (m = 0; m < idx; m++)
	{
		b[m] = str[m];
	}
	if (strlen(b) != idx)
		return (0);
	b[m] = '\0';


	return (b);
}
