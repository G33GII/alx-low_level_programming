#include "main.h"

/**
 * more_numbers - funtion defination that does the magic
 * @void: no input value to the functioin only a std output
 * Return: 1 or 0
 *
 */

void more_numbers(void)
{
	int c = 0;
	int b;

	while (c < 10)
	{
		b = 0;

		while (b < 15)
		{
			if (b >= 10 && b < 19)
				_putchar (b / 10 + 48);
			_putchar (b % 10 + 48);
			b++;
		}
		_putchar('\n');
		c++;
	}
	/*_putchar('\n');*/
}
