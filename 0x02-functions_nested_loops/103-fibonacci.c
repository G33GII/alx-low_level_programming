#include <stdio.h>

/**
 * main - main function
 *
 * Return: an int of 0
 */

int main(void)
{
	int m;
	long f_1 = 1, n = 2;
	long f_2 = 2;
	long sum = 0;

	for (m = 0; sum <= 4000000; m++)
	{
		sum = f_1 + f_2;

		f_1 = f_2;
		f_2 = sum;

		if (sum % 2 == 0)
			n += sum;
	}
	printf("%li", n);
	return (0);
}
