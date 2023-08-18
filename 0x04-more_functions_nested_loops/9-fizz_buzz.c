#include "main.h"
#include <stdio.h>

/**
* main - followed by a new line
* fizzbuzz multiples of three prints fizz buzz instead of the number
* @fizzbuzzcollects nothing and displays everything
* Return: Always 0 (Success)
*/



int main(void)
{
	int ic;

	for (ic = 1; ic <= 100; ic++)
	{
		if (ic % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (ic % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (ic % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", ic);
	}

	printf("\n");
	return (0);
}
