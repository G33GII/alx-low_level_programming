#include "main.h"
/**
 * print_times_table - funtion defination that does the magic
 * @g: input value to the functioin
 */
void print_times_table(int g)
{
	int roll, col, product;


	if (g >= 0 && g <= 15)
	{
		for (roll = 0; roll <= g; roll++)
		{
			for (col = 0; col <= g; col++)
			{
				product = col * roll;

				if (col == 0)
				{
					_putchar(product + '0');
				} else if (product < 10 && col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				} else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				} else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
