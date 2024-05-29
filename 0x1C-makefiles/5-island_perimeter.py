#!/usr/bin/python3
"""This module defines the function `island_perimeter`"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    col_size = len(grid[0])
    row_size = len(grid)
    perimeter = 0

    for row in range(row_size):
        for col in range(col_size):
            if grid[row][col]:
                # check left-border
                if col - 1 < 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # check right-border
                if col + 1 == col_size or grid[row][col + 1] == 0:
                    perimeter += 1
                # check top-border
                if row - 1 < 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # check bottom-border
                if row + 1 == row_size or grid[row + 1][col] == 0:
                    perimeter += 1
    return perimeter
