#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copy memory from source to destination.
 * @dest: Pointer to the destination memory.
 * @src: Pointer to the source memory.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* Loop counter */

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i]; /* Copy byte from source to destination */
	}
	return (dest); /* Return pointer to the destination memory */
}

