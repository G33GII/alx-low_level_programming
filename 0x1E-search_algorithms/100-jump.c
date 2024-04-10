#include <math.h>
#include <stdio.h>
#include <stdlib.h>

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
    if (!array)
        return -1;

    int jump = sqrt(size);
    int prev = 0;

    while (array[jump] < value)
    {
        prev = jump;
        jump += sqrt(size);
        if (jump >= size)
            return -1;
    }

    while (array[prev] < value)
    {
        prev++;
        if (prev == min(jump, (int) size))
            return -1;
    }

    if (array[prev] == value)
        return prev;

    return -1;
}
