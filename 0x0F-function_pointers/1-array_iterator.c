#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - applies a function to each element of an array
 * @array: pointer to the first element of the array to iterate over
 * @size: number of elements in the array
 * @action: pointer to the function to apply to each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || size <= 0)
		return;


	for (x = 0; x < size; x++)
		action(array[x]);

}
