#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments including the program name
 * @argv: An array of strings containing the command-line arguments
 * Description:
 * Return: This program prints the name of the program itself,
 * which is stored in argv[0].
 */

int main(int argc, char *argv[])
{
	(void)argc;
	/* Print the program name (argv[0]) using the format specifier %s */
	printf("%s", *argv);

	/* Return 0 to indicate successful program execution */
	return (0);
}
