#include "search_algos.h"
#include <stdio.h>

/**
 * jump_search - search for a value in an array using the
 * jump search algorithm
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: value to be searched in the array
 *
 * Return: If the value is found in the array, it will return
 * the index of the first match it has found. Otherwise, it
 * returns -1.
 */
int jump_search(int *array, size_t size, int value)
{

	size_t jump = sqrt(size);
	int prev = 0;

	if (!array)
		return (-1);

	while (array[jump] < value)
	{
		prev = jump;
		jump += sqrt(size);
		if (jump >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == fmin(jump, (int) size))
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
