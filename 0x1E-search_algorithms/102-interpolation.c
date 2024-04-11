#include "search_algos.h"

/**
 * interpolation_search - search for a value in an array using the
 * interpolation search algorithm
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: value to be searched in the array
 *
 * Return: If the value is found in the array, it will return
 * the index of the first match it has found. Otherwise, it
 * returns -1.
 */
int interpolation_search(int *array, size_t size, int value)
{

	int low = 0;
	int high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		int pos = low + (((double) (high - low) / (
			array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	return (-1);
}
