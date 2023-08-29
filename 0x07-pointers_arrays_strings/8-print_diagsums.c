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
	int sSum = 0;
	int tSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		/* Calculate the indices for the main diagonal and anti-diagonal */
		int sIndex = i * size + i;
		int tIndex = (i + 1) * size - (i + 1);

		/* Add elements to the respective sums */
		sSum += a[sIndex];
		tSum += a[tIndex];
	}
	printf("%d, %d\n", sSum, tSum);
}
