#include "main.h"
#include <stdio.h>
/**
 * main - the funtions main code
 * fizz_buzz - function for the main
 * fizz_buzz: funtion defination that does the magic
 * Return: 0 Always
 *
 */

void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}

/* fizz_buzz - function for the main */
void fizz_buzz(void) /* fizz_buzz - function for the main */
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}

	printf("\n");
}

