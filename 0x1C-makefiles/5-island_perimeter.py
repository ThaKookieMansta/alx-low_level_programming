#!/usr/bin/python3
"""This module has a function for measuring the perimeter
of an island."""


def island_perimeter(grid):
    """This function returns the perimeter of an island.
    Args:
        grid: A list of list of integers
    Returns: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    Corners = 0
    perim_per_sq = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perim_per_sq += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    Corners += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    Corners += 1
    return perim_per_sq * 4 - Corners * 2
