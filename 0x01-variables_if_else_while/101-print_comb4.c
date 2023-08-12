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
			int td = 0;

			while (td < 10)
			{

				if (((fd != sd) && (fd != td) && (sd != td)) &&
				((fd < sd) && (fd < td) && (sd < td)))
				{
					putchar(48 + fd);
					putchar(48 + sd);
					putchar(48 + td);
					if (fd + sd + td != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				td++;
			}
			sd++;
		}
		fd++;

	}
	putchar('\n');
	return (0);
}
