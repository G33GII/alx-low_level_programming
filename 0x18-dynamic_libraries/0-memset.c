#include <stdio.h>
#include "main.h"

/**
 * _memset - Fill a block of memory with a specified value.
 * @s: Pointer to the memory block.
 * @b: Value to set.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory block.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* Loop counter */

	for (i = 0; i < n; i++)
	{
		s[i] = b; /* Set byte value */
	}
	return (s); /* Return original memory block pointer */
}
