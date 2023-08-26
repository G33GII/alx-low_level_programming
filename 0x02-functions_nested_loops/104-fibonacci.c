#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m;
	unsigned long f_1 = 1;
	unsigned long f_2 = 2;
	unsigned long sum;

	unsigned long b_1, b_2;
	unsigned long n_1, n_2;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", f_1, f_2);

	/* Generate and print the next 98 Fibonacci numbers */
	for (m = 0; m < 90; m++)
	{
		/* Calculate the next Fibonacci number */
		sum = f_1 + f_2;

		/* Update variables for the next iteration */
		f_1 = f_2;
		f_2 = sum;

		/* Print the calculated Fibonacci number */
		printf(", %lu", sum);
	}
	
	b_1 = (f_1 / 1000000000);
	b_2 = (f_1 % 1000000000);

	n_1 = (f_2 / 1000000000);
	n_2 = (f_2 % 1000000000);

	for (m = 90; m < 97; m++)
	{
		printf(", %lu", n_1 + ( n_2 / 1000000000));
		printf("%lu", n_2 % 1000000000);

		n_1 += b_1;
		b_1 = n_1 - b_1;

		n_2 += b_2;
		b_2 = n_2 - b_2;
	}


	/* Print a new line to finish */
	printf("\n");
	return (0);
}
