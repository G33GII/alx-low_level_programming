#include <stdio.h>

/**
 * main - Should print numbers counting from 0000 - 9899
 * Return: 0 Always
 */

int main(void)
{
	int fd = 0;

	while ( fd < 99 )
	{
		
		for ( int sd = fd + 1; sd < 100; sd++ )
		{
			

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
			
		}
		fd++;
	}
	putchar ('\n');
	return (0);
}
