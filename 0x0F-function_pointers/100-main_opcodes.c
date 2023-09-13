#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print the hexadecimal
 * representation of its own bytecode.
 * @argc: The number of command-line arguments.
 * @argv: An x_rray of pointers to the arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int x_byt;
	int x = 0;
	char *x_rr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x_byt = atoi(argv[1]);

	if (x_byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	x_rr = (char *)main;

	while (x < x_byt)
	{
		if (x == x_byt - 1)
		{
			printf("%02hhx\n", x_rr[x]);
			break;
		}
		printf("%02hhx ", x_rr[x]);
		x++;
	}
	return (0);
}
