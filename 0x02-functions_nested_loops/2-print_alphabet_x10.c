#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print all alphabet in lowercase
*
* Return: 0 Always
*/

void print_alphabet_x10(void)
{
	int nu_of_alpha = 0;

	while (nu_of_alpha < 10)
	{
		int alpha = 97;

		while (alpha < 123)
		{
			_putchar (alpha);
			alpha++;
		}
		_putchar ('\n');
		nu_of_alpha++;
	}

}
