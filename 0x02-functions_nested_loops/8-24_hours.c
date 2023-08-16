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

void jack_bauer(void)
	{
		int sarah = 0;

		while (sarah < 24)
		{
			int gaza = 0;

			while (gaza < 60)
			{
				_putchar((sarah / 10) + '0');
				_putchar((sarah % 10) + '0');
				_putchar(':');
				_putchar((gaza / 10) + '0');
				_putchar((gaza % 10) + '0');
				_putchar('\n');
				gaza++;
			}
			sarah++;
		}
	}
