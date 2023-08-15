#include <stdio.h>
#include "main.h"
/**
* print_alphabet - A function to print all alphabets
* main - program will print alphabets followed by a new line.
* Return: 0 Always
*/

void print_alphabet(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		_putchar (alpha);
		alpha++;
	}
}
