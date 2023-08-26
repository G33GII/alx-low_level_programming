#include <stdio.h>
/**
 * main - main function generates 98 fibonacci numbers
 * Return: 0 Always
 */
int main(void)
{
	int m;	/* Loop variable */
	unsigned long f = 1;	/* First Fibonacci number */
	unsigned long s = 2;	/* Second Fibonacci number */
	unsigned long f1, f2;	/* First Fibonacci number split into parts */
	unsigned long s1, s2;	/* Second Fibonacci number split into parts */

	printf("%lu", f);          /* Print the first Fibonacci number */

	/* Generate and print the next 98 Fibonacci numbers */
	for (m = 1; m < 91; m++)
	{
		printf(", %lu", s);	/* Print the current Fibonacci number */

		/* Calculate the next Fibonacci number */
		s = s + f;
		f = s - f;
	}
	/* Splitting and printing the remaining Fibonacci numbers */
	f1 = (f / 1000000000);
	f2 = (f % 1000000000);
	s1 = (s / 1000000000);
	s2 = (s % 1000000000);
	for (m = 92; m < 99; m++)
	{
		printf(", %lu", s1 + (s2 / 1000000000));
		printf("%lu", s2 % 1000000000);
		/* Calculate and update the next Fibonacci number parts */
		s1 += f1;
		f1 = s1 - f1;
		s2 += f2;
		f2 = s2 - f2;
	}
	printf("\n");	/* Print a new line to finish */
	return (0);	/* Return 0 to indicate successful execution */
}
