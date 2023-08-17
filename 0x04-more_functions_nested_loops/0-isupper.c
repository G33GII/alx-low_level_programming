#include "main.h"
/**
 * _isupper - funtion defination that does the magic
 * @a: input value to the functioin
 * Return: 1 or 0
 * -1 for negatives
 *  0 for equal to 0
 *
 */


int _isupper(char a)
{
	if (a >= 65 && a <= 90)
		return (1);
	else
		return (0);
}


