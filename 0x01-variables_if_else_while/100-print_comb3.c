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

	while (fd < 10)
	{
		int sd = 0;

		while (sd < 10)
		{
			if ((fd != sd) && (fd < sd))
			{
				putchar(48 + fd);
				putchar(48 + sd);
				if (fd + sd != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
