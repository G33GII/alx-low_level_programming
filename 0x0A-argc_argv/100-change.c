#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Description: This program calculates the minimum number of coins needed
 * to make change for a given amount of money in cents.
 * Return: 0 if successful, 1 if there's an error in the command-line input.
 */
int main(int argc, char *argv[])
{	/* Check if the correct number of command-line arguments is provided. */
	int p, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1); /* Exit with an error code. */
	}	/* Convert the input to an integer representing the amount in cents */
	p = atoi(argv[1]);
	if (p < 1)/* Check if the input amount is less than 1 cent. */
	{
		printf("0\n");
		return (0); /* Exit with a result of 0, indicating no change is needed. */
	}
	while (p >= 25)/* Calculate the minimum number of coins needed for change. */
	{
		p -= 25;
		change++;
	}
	while (p >= 10)
	{
		p -= 10;
		change++;
	}
	while (p >= 5)
	{
		p -= 5;
		change++;
	}
	while (p >= 2)
	{
		p -= 2;
		change++;
	}
	while (p >= 1)
	{
		p -= 1;
		change++;
	}	/* Print the minimum number of coins needed to make change. */
	printf("%d\n", change);
	return (0); /* Exit with a success code. */
}
