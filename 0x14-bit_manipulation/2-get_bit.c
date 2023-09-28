#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve (0 to 63).
 *
 * Return: The value of the bit at the specified index (0 or 1).
 *         Returns -1 if the index is out of range (greater than 63).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	/* Check if the index is within the valid range (0 to 63) */
	if (index > 63)
	{
		return (-1); /* Return -1 to indicate an out-of-range index */
	}

	/**
	 * Right-shift the number to position the bit
	 *		at the index as the least significant bit
	 */
	bitValue = (n >> index) & 1;

	return (bitValue);
}
