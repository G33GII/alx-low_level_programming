#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print chessboard pattern
 * .
 * @a: Pointer to a 2D array representing the chessboard.
 * This function prints the characters stored in the 2D array
 * in a chessboard pattern using '/' and '*' characters.
 */
void print_chessboard(char (*a)[8])
{
	int row; /* Loop index for rows */
	int col; /* Loop index for columns */

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{	/* Print character at position (row, col) */
			_putchar(a[row][col]);
		}
		_putchar('\n'); /* Move to the next row after printing a row */
	}
}
