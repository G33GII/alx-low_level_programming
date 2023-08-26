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

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", f_1, f_2);

	/* Generate and print the next 98 Fibonacci numbers */
	for (m = 0; m < 98; m++)
	{
		/* Calculate the next Fibonacci number */
		sum = f_1 + f_2;

		/* Update variables for the next iteration */
		f_1 = f_2;
		f_2 = sum;

		/* Print the calculated Fibonacci number */
		printf(", %lu", sum);
	}

	/* Print a new line to finish */
	printf("\n");
	return (0);
}
