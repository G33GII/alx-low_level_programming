#include "main.h"

/**
 * _sqrt_recursion - Computes the integer square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The integer square root or -1 if not possible.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Negative number, no real square root */
	return (_sqrt_recursion_2(n, 0));
}

/**
 * _sqrt_recursion_2 - Recursively determines
 * the integer square root of a number.
 * @number: The number to calculate the square root for.
 * @guess: The current guess for the square root.
 *
 * Return: The calculated integer square root or -1 if not found.
 */

int _sqrt_recursion_2(int number, int guess)
{
	if (number == 0)
		return (0); /* The square root of 0 is 0 */
	if (guess * guess > number)
		return (-1); /* No integer square root found */
	if (guess * guess == number)
		return (guess); /* Integer square root found */
	return (_sqrt_recursion_2(number, guess + 1));
}
