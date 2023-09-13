#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a given
 *             comparison function.
 * @array: The integer array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first element for which the cmp function
 *         doesn't return 0. If no elements match, or if size is 0 or
 *         if array or cmp is NULL, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0, z;

	/* Check for NULL array or NULL comparison function */
	if (array == NULL || cmp == NULL)
		return (-1);

	/* Check if the size is non-positive */
	if (size <= 0)
		return (-1);

	/* Iterate through the array and call cmp function on each element */
	for (z = 0; z < size; z++)
	{
		x = cmp(array[z]);

		/* If cmp returns a non-zero value, return the index */
		if (x != 0)
			return (z);
	}

	/* If no element matched the condition, return -1 */
	return (-1);
}
