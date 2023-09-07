#include "main.h"

/**
 * array_range - Create an array of integers within a given range.
 *
 * @min: The minimum value of the range (inclusive).
 * @max: The maximum value of the range (inclusive).
 *
 * Return: A pointer to the allocated integer array containing values
 * from min to max, or NULL on failure or if min is greater than max.
 */
int *array_range(int min, int max)
{
	int *pxr;   /* Declare an integer pointer variable pxr. */
	int z, sxz;

	if (min > max)
		return (NULL);  /* Return NULL if the range is invalid. */

	sxz = max - min + 1;  /* Calculate the size of the array. */

	pxr = malloc(sizeof(int) * sxz);  /* Allocate memory for the array. */

	if (pxr == NULL)
		return (NULL);  /* Return NULL if memory allocation fails. */

	for (z = 0; min <= max; z++)
	{
		pxr[z] = min++;
	}

	return (pxr);  /* Return a pointer to the allocated integer array. */
}
