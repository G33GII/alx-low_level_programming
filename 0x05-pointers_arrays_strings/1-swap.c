#include "main.h"

/**
 * swap_int - the swap function interchanges the values for its inputs
 * @a: the value in a will be swapped for the value in b
 * @b: and the value in b will be swapped for the value in a
 * Returns void.
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
