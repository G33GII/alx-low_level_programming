#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - funtion defination that does the magic
 * void: input value to the functioin
 * Return: 1 or 0
 * -1 for negatives
 *  0 for equal to 0
 *
 */

void times_table(void)
	{
		int ink;
		int jack;
		int king;


		for (ink = 0; ink < 10; ink++)
		{
			for (jack = 0; jack < 10; jack++)
			{
				king = jack * ink;
				if (jack == 0)
				{
					_putchar(king + '0');
				}


				if (king < 10 && jack != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(king + '0');
				} else if (king >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((king / 10) + '0');
					_putchar((king % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
