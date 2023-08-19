#include <stdio.h>
/**
 * main - function
 * Return: 0 always
 *
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%li\n", factor);

	return 0;
}
