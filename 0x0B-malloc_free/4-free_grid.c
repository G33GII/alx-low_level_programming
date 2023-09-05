#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array.
 *
 * @grid: The 2D array to be freed.
 * @height: The height of the 2D array.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]); /* Free memory for each row of the 2D array */

	free(grid); /* Free the memory for the array of row pointers */
}
