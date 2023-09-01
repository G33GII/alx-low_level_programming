#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line argument.
 * This program multiplies two numbers provided as command-line argumen
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int result = 1; /* Initialize the result to 1,*/
	int c;

	if (argc != 3)
	{
		/* Check if the number of arguments is not equal 3*/
		printf("Error\n");
		return (1); /* Return an error code */
	}

	for (c = 1; c < argc; c++)
	{
		/* Convert the command-line argument to an integer */
		int num = atoi(argv[c]);

		/* Multiply the current number with the result */
		result *= num;
	}

	/* Print the result of the multiplication */
	printf("%d\n", result);

	return (0); /* Return 0 to indicate successful execution */
}

