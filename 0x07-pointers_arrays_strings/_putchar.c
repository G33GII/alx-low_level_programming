#include <unistd.h>
/**
* main - puts a character on std output
* Return: 0 Always
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
