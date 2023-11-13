#include "main.h"

/**
* _putchar - puts a character on std output
* @c: The char variable to be printed
* Return: 0 Always
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
