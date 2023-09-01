/*#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments including the program name
 * @argv: An array of strings containing the command-line arguments
 * Description:
 * Return: This program prints the name of the program itself,
 * which is stored in argv[0].
 */

//int main(int argc((unused)), char* argv[])
//{
	/* Print the program name (argv[0]) using the format specifier %s */
//	printf("%s", argv[0]);

	/* Return 0 to indicate successful program execution */
//	return (0);
//}*/

#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

