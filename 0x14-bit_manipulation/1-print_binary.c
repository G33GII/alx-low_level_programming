#include "main.h"

/**
 * printBinary - Function: printBinary
 * Prints the binary representation of an unsigned long integer.
 * Leading zeros are omitted.
 * @n: The unsigned long integer to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int bitPosition, count = 0;
	unsigned long int currentBit;

	/**
     * Iterate through the bits from left to right
     * (most significant to least significant)
     */
	for (bitPosition = 20; bitPosition >= 0; bitPosition--)
	{
		currentBit = n >> bitPosition;

		/* Check if the current bit is 1 and print it */
		if (currentBit & 1)
		{
			_putchar('1');
			count++;
		}
		/* If leading ones have already been printed, print 0 for trailing zeros */
		else if (count)
		{
			_putchar('0');
		}
	}

	/* If there were no '1' bits, print a single '0' to represent zero */
	if (!count)
	{
		_putchar('0');
	}
}
