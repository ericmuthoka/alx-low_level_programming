#!/usr/bin/python3
"""This module defines the function island_perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of integers): The grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
