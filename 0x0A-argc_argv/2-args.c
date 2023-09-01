#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints all the arguments it receives through the command line,
 * including the program name itself.
 *
 * @argc: The number of command-line arguments (including the program name).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 to indicate successful program execution.
 */
int main(int argc, char *argv[])
{
	int c;

	/* Loop through each command-line argument and print it */
	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}

	/* Return 0 to indicate successful program execution */
	return (0);
}
