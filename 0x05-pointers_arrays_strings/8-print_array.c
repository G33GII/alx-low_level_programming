#include "main.h"
#include <stdio.h>
/**
 * print_array - A function
 * @a: This holds a copy of the string sent to the function.
 * @n: this is another input value
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");

}
