#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - funtion defination that does the magic
 * @gh: input value to the functioin
 * Return: 1 or 0
 * -1 for negatives
 *  0 for equal to 0
 *
 */

int print_last_digit(int gh)
{
	int gaza;

	if (gh < 0)
		gh = -gh;

	gaza = gh % 10;

	_putchar(gaza + '0');
	return (gaza);
}

