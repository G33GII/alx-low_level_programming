#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints all
 * possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{

	for (int s_d = 0; s_d < 10; s_d++)
	{

		for (int f_d = 0; f_d < 10; f_d++)
		{
			if (!((f_d == s_d) || (s_d > f_d)))
			{
				putchar('0' + s_d);
				putchar('0' + f_d);
				if (!(f_d == 9 && s_d == 8))
					putchar(',');
					putchar(' ');
			}

		}

	}
putchar('\n');
return (0);
}
