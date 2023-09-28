#include "main.h"

/**
 * clear_bit - Clears a bit at a given index in an unsigned long integer
 * @num: Pointer to the number
 * @bit_index: Index of the bit to clear
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *num, unsigned int bit_index)
{
	/* Check if the index is within the range of an unsigned long int */
	if (bit_index >= sizeof(*num) * CHAR_BIT)
	{
		return (-1);
	}

	/**
	 *  Create a mask with a 0 at the bit_index and 1s elsewhere.
	 * The "&" operator then sets the bit at bit_index in
	 * n: to 0 and leaves the other bits unchanged.
	 */
	*num = (~(1UL << bit_index) & *num);

	/* Return 1 to indicate success */
	return (1);
}
