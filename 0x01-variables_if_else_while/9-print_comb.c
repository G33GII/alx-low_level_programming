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
	int s_d = 0;
	int lett;

	while (s_d < 10)
	{
		putchar(48 + s_d);
		lett = 44;
		putchar(lett);
		lett = ' ';
		putchar(lett);
		s_d++;
	}
	putchar('\n');
	return (0);
}
