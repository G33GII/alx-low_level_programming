#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the main
 * diagonal and secondary diagonal elements of a matrix.
 * @a: Pointer to the 1D array representing the matrix.
 * @size: Size of the matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int s = 0, t = 0;
	int matrix[size][size]; /* Declare a 2D matrix of size x size */

	/* Populate the matrix using the provided 1D array */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{	/* Calculate the index and assign value */
			matrix[i][j] = *(a + i * size + j);
		}
	}

	/* Calculate the sum of diagonal elements */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j) /* Check for main diagonal */
			{	/* Add the main diagonal element to 's' */
				s += matrix[i][j];
			}
			if (j == size - 1 - i) /* Check for secondary diagonal */
			{	/* Add the secondary diagonal element to 't' */
				t += matrix[i][j];
			}
		}
	}
	printf("%d, %d\n", s, t); /* Print the sum of diagonal elements */
}
