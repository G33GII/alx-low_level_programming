#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory and checks for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{	/* Declaring pointer of any data type */
	void *pxr;	/* Pointer to the allocated memory of any data type */

	pxr = malloc(b);

	/* Check if malloc was successful */
	if (pxr == NULL)
		exit(98);

	return (pxr);
}
