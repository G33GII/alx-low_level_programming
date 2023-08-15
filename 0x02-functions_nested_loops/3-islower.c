#include "main.h"
/**
 * c: the input for the function
 * _islower: lowercase alphabets at detected
 * Return: 1 as sucessful and 0 as failed
 */

int _islower(int c)
{
	if (c > 96)
		return (1);
	else
		return (0);
}
