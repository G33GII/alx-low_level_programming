#include "main.h"    /* Include necessary header file */
#include <stdio.h>   /* Include standard I/O library */

/**
 * print_number - Recursively prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    unsigned int num;

    /* If the number is negative, convert it to positive and print a '-' sign */
    if (n < 0)
    {
        num = -n;      /* Make the number positive */
        _putchar('-'); /* Print '-' for negative numbers */
    }
    else
    {
        num = n;       /* Use the number as is */
    }

    /* Recursive call to print each digit of the number */
    if (num / 10)
    {
        print_number(num / 10);
    }

    _putchar((num % 10) + '0'); /* Print the last digit of the number */
}
