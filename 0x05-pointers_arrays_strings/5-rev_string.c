#include "main.h"
/**
 * rev_string - A function that chances the order of a string.
 * @s: This holds a copy of the string sent to the function.
 *
 */

void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
