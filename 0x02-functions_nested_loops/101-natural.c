#include <stdio.h>
/**
 * main - main funtion will calculate the multiples of 3 or 5
 * below 1024 (excluded) and print their sum.
 * Return: 0 Always.
 *
 */

int main(void)
{
	unsigned int i, sum = 0;

	for(i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
