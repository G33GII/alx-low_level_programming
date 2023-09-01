#include <stdio.h>


/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints the number of arguments (excluding the program name)
 * passed to it through the command line.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 to indicate successful program execution.
 */

int main(int argc, char *argv[])
{
	(void)argv; /* Ignoring the command-line arguments */

	/* Print the number of arguments passed (excluding the program name) */
	printf("%d\n", argc - 1);

	/* Return 0 to indicate successful program execution */
	return (0);
}
