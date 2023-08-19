#include <stdio.h>
/**
 * main - function
 * Return: 0 always
 *
 */
int main(void)
{
	long long num = 612852475143;
	long long factor = 2;

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
	printf("%lld\n", factor);

	return 0;
}
