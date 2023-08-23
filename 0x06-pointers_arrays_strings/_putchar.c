#include "main.h"
/**
 * _putchar - This is the function that writes to standard output
 * @c: Thisi is the variable that holds the value passed to the function
 * which is a char.
 * Return: int to std output
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
