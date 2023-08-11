#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more - headers goes there */
/* Return: 0 */
/* betty style doc for function main goes there */

/* main - funtion starts wit int main void here */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int ch_a = 97;
	int ch_A = 65;

	for (ch_a = 97; ch_a < 123; ch_a++)
	{
		putchar(ch_a);
	}
	for (ch_A = 65; ch_A < 91; ch_A++)
	{
		putchar(ch_A);
	}

	putchar('\n');
	return (0);
}
