#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to convert one unsigned long integer to another.
 *
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that must be flipped to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int bitPosition = (sizeof(unsigned long int) * 8) - 1;
    unsigned int count = 0;
    unsigned long int exclusive = n ^ m;

    /* Iterate through the bits from left to right (most significant to least significant) */
    while (bitPosition >= 0)
    {
        unsigned long int current = exclusive >> bitPosition;
        if (current & 1)
            count++;

        bitPosition--;
    }

    return count;
}
