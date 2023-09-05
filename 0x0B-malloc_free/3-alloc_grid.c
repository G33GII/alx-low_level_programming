#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers with a given width and height.
 *
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to the allocated 2D array.
 */

int **alloc_grid(int width, int height)
{
    int x, z;
    int **rxx;

    if (width < 1 || height < 1)
        return (0);

    rxx = malloc(sizeof(int *) * height);

    if (rxx == NULL)
        return (0);

    for (x = 0; x < height; x++)
    {
        rxx[x] = malloc(width * sizeof(int));

        if (rxx[x] == NULL)
            return (0);
/* Note that arr[i][j] is same as *(*(arr+i)+j) */
        for (z = 0; z < width; z++)
            rxx[x][z] = 0; /* Initialize each element to 0 */
    }
    return (rxx);
}
