#include "main.h"
#include <stdio.h>

/**
* main - followed by a new line
* fizzbuzz: multiples of three prints fizz buzz instead of the number
* @fizzbuzzcollects nothing and displays everything
* Return: Always 0 (Success)
*/

void fizzbuzz(void);

int main(void)
{
	fizzbuzz();
	return (0);
}


void fizzbuzz(void)
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

