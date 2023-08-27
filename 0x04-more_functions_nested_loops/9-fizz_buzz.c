#include "main.h"
#include <stdio.h>

/**
 * main - followed by a new line
 * fizzbuzz multiples of three prints fizz buzz instead of the number
 * @fizzbuzzcollects nothing and displays everything
 * Return: Always 0 (Success)
 */

int main(void)
{   /* Loop variable */
	int ic;
	/* Iterate through numbers from 1 to 100 */
	for (ic = 1; ic <= 100; ic++)
	{
		if (ic == 1)
		{   /* Print the number 1 without space */
			printf("%d", ic);
		}
		else if (ic % 3 == 0 && ic % 5 != 0)
		{   /* Print "Fizz" for multiples of 3 */
			printf(" Fizz");
		}
		else if (ic % 5 == 0 && ic % 3 != 0)
		{   /* Print "Buzz" for multiples of 5 */
			printf(" Buzz");
		}
		else if (ic % 5 == 0 && ic % 3 == 0)
		{   /* Print "FizzBuzz" for multiples of both 3 and 5 */
			printf(" FizzBuzz");
		}
		else    /* Print the number for other cases with a space */
			printf(" %d", ic);
	}
	/* Print a new line to finish */
	printf("\n");
	/* Return 0 to indicate successful execution */
	return (0);
}
