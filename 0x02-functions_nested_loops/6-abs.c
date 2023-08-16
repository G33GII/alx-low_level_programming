#include "main.h"
#include <stdio.h>
/**
 * _abs - funtion defination that does the magic
 * @n: input value to the functioin
 * Return: 1 or 0
 * -1 for negatives
 *  0 for equal to 0
 *
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

