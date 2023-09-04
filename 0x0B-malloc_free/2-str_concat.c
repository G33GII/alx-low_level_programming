#include "main.h"

/**
 * str_concat - main functiin
 * @s1: first input
 * @s2: second input
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	size_t idx, idz, z;
	char *sx;

	idx = strlen(s1) + strlen(s2) + 1;

	sx = malloc(idx * sizeof(char));

	if (s1 == NULL || s2 == NULL)
		sx[0] = '\0';
	else
	{

		for (idz = 0; idz < strlen(s1); idz++)
		{
			sx[idz] = s1[idz];
		}
		for (z = 0; idz < idx; idz++, z++)
		{
			sx[idz] = s2[z];
		}
		sx[idz] = '\0';
	}
	return (sx);


}
