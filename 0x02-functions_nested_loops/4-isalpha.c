#include "main.h"
#include <stdio.h>
/**
 * _isalpha - funtion defination that does the magic
 * @c: input value to the functioin
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c > 65 && c < 89) || (c > 97 && c < 123))
		return (1);
	else
		return (0);
}

