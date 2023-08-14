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
	int fd = 0;
	int sd = 0;

	while (fd < 99)
	{
		while (sd < 100)
		{
			sd = fd + 1;
			putchar(48 + fd / 10);
			putchar(48 + fd % 10);
			putchar(' ');
			putchar(48 + sd / 10);
			putchar(48 + sd % 10);

			if (!(fd == 98 && sd == 99))
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;




		}
		sd++;

	fd++;
	}

	putchar('\n');
	return (0);
}
