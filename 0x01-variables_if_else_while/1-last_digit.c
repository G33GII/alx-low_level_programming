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
	int n, l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* main - funtions of code begin here */
	l_d = n % 10;

	if (l_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	else if (l_d < 6 && l_d != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	else
		printf("Last digit of %d and is 0\n", n);
	return (0);
}
