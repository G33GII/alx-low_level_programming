#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * This function reverses the order of elements in the given integer array.
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1; /* Define start and end indices */
	int temp; /* Temporary variable for swapping */


	 /* Iterate through the array while swapping elements*/
	while (start < end)
	{
		temp = a[start]; /* Store the element at start index */
		a[start] = a[end]; /* Replace start element with end element */
		a[end] = temp; /* Replace end element with stored start element */

		start++; /* Move start index towards the center */
		end--;   /* Move end index towards the center */
	}
}

