#include "main.h"
/**
* main - puts a character on std output
* Return: 0 Always
*/


int _putchar(char n)
{
	return (write(1, &n, 1));
}
