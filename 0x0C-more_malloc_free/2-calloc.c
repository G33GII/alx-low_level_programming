#include "main.h"

/**
 * _memset - Set memory buffer to a specific value.
 *
 * @s: Pointer to the memory buffer.
 * @b: Value to set each byte to.
 * @n: Number of bytes to set.
 *
 * Return: Pointer to the modified memory buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;  /* Declare an unsigned integer variable x. */

	for (x = 0; x < n; x++)  /* Iterate through the memory block. */
	{
		s[x] = b;  /* Set the current element of the memory block to b. */
	}

	return (s);  /* Return a pointer to the modified memory block. */
}

/**
 * _calloc - Allocate and initialize memory for an array.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pxr;  /* Declare a character pointer variable pxr. */

	if (nmemb == 0 || size == 0)
		return (NULL);  /* Check for invalid input and return NULL if found. */

	pxr = malloc(size * nmemb);  /* Allocate memory for the array. */

	if (pxr == NULL)
		return (NULL);  /* Check if memory allocation was successful. */

	_memset(pxr, 0, nmemb * size);  /* Initialize the allocated memory to zero. */

	return (pxr);  /* Return a pointer to the allocated and initialized memory. */
}
