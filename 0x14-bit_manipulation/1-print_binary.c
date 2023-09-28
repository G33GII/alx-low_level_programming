#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 *                Leading zeros are omitted.
 * @n: The unsigned long integer to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int currentBit;
	int bitPosition = (sizeof(unsigned long int) * 8) - 1;
	int idx = 0;

	/**
	 *  Iterate through the bits from left to right
	 * (most significant to least significant)
	 */
	while (bitPosition >= 0)
	{
		currentBit = n >> bitPosition;

		/* Check if the current bit is 1 and print it */
		if (currentBit & 1)
		{
			_putchar('1');
			idx++;
		}
		/* If leading ones have already been printed, print 0 for trailing zeros */
		else if (idx)
		{
			_putchar('0');
		}

		bitPosition--;
	}

	/* If there were no '1' bits, print a single '0' to represent zero */
	if (!idx)
	{
		_putchar('0');
	}
}
