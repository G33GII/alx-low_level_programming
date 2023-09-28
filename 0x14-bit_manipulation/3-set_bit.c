#include "main.h"

/**
 * set_bit - Sets the value of a specific bit at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set (0 to 63).
 *
 * Return: 1 on success, or -1 if the index is out of range (greater than 63).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range (0 to 63) */
	if (index > 64)
	{
		return (-1); /* Return -1 to indicate an out-of-range index */
	}

	/* Set the bit at the specified index to 1 using a bitwise OR operation */
	*n = ((1UL << index) | *n);

	return (1); /* Return 1 to indicate success */
}
