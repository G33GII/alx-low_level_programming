#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies numbers.
 * @argc: Number of arguments.
 * @argv: Argument array.
 *
 * Return: 0 on success, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int c, j, result; /* Changed variable names: i to c, sum to result*/

	c = 1;      /* Initialize c to 1 for the first argument. */
	result = 0; /* Initialize result for accumulating the numbers. */

	if (argc < 2)
	{
		printf("0\n"); /* Print 0 and exit if no arguments. */
		return (0);
	}

	while (c < argc)
	{
		for (j = 0; argv[c][j] != '\0'; j++)
		{
			if (argv[c][j] < '0' || argv[c][j] > '9')
			{
				printf("Error\n"); /* Print an  */
				return (0);
			}
		}
		result = result + atoi(argv[c]); /* Convert and add. */
		c++;
	}

	printf("%d\n", result); /* Print the sum of the numbers. */
	return (0);
}

