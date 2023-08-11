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
	int ch_a = 0;

	for (ch_a = 0; ch_a < 10; ch_a++)
	{
		putchar(48 + ch_a);
	}
	putchar('\n');
	return (0);
}
