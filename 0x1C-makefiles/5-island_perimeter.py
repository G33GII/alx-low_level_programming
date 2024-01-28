#!/usr/bin/python3
""" Project """


def island_perimeter(grid):
    """
    Method: returns the perimeter of the island described in grid
    p = 2(l + w)
    """

    island_perimeter = 0

    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):

            # (island_perimeter * 4 - shared_edge * 2)
            if grid[i][j] == 1:
                island_perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    island_perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    island_perimeter -= 2

    return island_perimeter
