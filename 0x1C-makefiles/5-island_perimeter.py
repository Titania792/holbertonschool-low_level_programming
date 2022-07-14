#!/usr/bin/python3
"""Create a function that returns the perimeter
of the island described in grid"""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                """If the current cell is land"""
                if i == 0 or grid[i-1][j] == 0:
                    """If the cell above is water"""
                    perimeter += 1
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    """If the cell below is water"""
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    """If the cell to the left is water"""
                    perimeter += 1
                if j == len(grid[i])-1 or grid[i][j+1] == 0:
                    """If the cell to the right is water"""
                    perimeter += 1
    return perimeter
