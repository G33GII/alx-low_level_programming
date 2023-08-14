#include <stdio.h>

/***
 *  * main - Should print numbers counting from 0000 - 9899
 *   * Return: 0 Always
 *   */

int main(void)
{
	int fd =0;
	int sd =0;

	while (fd < 99)
	{
		while (sd < 100)
		{
			sd = fd + 1;
			putchar ((fd / 10) + 48);
			putchar ((fd % 10) + 48);
			putchar (' ');
			putchar ((sd / 10) + 48);
			putchar ((sd % 10) + 48);

			if (!(fd == 98 && sd == 99))
			{
				putchar (',');
				putchar (' ');
			}else
				continue;

			sd++;
		}
		fd++;
	}
	putchar ('\n');
	return (0);
}
