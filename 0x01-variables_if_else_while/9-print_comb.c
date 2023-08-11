/* Headers - go here at the start of the code */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - funtion starts wit int main void here */
/**
 *main - Entry point
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	for (int s_d = 0; s_d < 10; s_d++)
	{
		putchar(48 + s_d);
		if (s_d < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
