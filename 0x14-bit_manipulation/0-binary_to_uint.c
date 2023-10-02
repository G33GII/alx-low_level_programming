#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string.
 * Return: The decimal representation of the binary string,or 0 if b is NULL or
 *         contains non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;  /* Initialize sum to store the decimal result. */
	unsigned int base = 1;     /* Initialize base for binary place value. */
	size_t length = 0;         /* Initialize length to store the string length. */
	int i = 0;                 /* Initialize i for string traversal. */

	/* Check for NULL input. */
	if (b == NULL)
	{
		return (0);
	}

	/* Calculate the length of the input binary string. */
	length = strlen(b);

	/* Start from the rightmost (least significant) bit. */
	i = length - 1;

	/* Iterate through the binary string. */
	while (i >= 0)
	{
		/* Check if the character is not '0' or '1'. */
		if (b[i] < '0' || b[i] >  '1')
		{
			return (0);
		}

/* If the character is '1',add the corresponding binary value to the result. */
		if (b[i] == '1')
		{
			decimal = decimal + base;
		}

		/* Update the binary place value. */
		base *= 2;

		/* Move to the next character in the string. */
		i--;
	}

	return (decimal);
}
