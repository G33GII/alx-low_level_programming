#include <stdio.h>
/**
 * main - main funtion will calculate the multiples of 3 or 5
 * below 1024 (excluded) and print their sum.
 * Return: 0 Always.
 *
 */

int main(void)
{
	unsigned int i, j, sum = 0, sum2 = 0;

	for (i = 3; i < 1024; i += 3)
	{
		sum += i;
	}
	for (j = 5; j < 1024; j += 5)
	{
		sum2 += j;
	}
	printf("%i\n", sum2 + sum);
	return (0);
}
