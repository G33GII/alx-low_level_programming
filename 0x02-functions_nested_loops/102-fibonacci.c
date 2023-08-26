#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long f_0 = 1;
	long f_1 = 2;
	long add;

	/* Print the initial two Fibonacci numbers */
	printf("1, 2");

	/* Generate and print the next 48 Fibonacci numbers */
	for (i = 0; i < 48; i++)
	{
		/* Calculate the next Fibonacci number */
		add = f_0 + f_1;

		/* Print the calculated Fibonacci number */
		printf(", %li", add);

		/* Update variables for the next iteration */
		f_0 = f_1;
		f_1 = add;
	}

	/* Print a new line to finish */
	printf("\n");
	return (0);
}

