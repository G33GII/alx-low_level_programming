#include "main.h"
/**
 * _isdigit - funtion defination that does the magic
 * @c: input value to the functioin
 * Return: 1 or 0
 * -1 for negatives
 *  0 for equal to 0
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
