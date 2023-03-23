#!/usr/bin/python3

def island_perimeter(grid):
    """
    Computes the perimeter of the island described in the input grid.

    Args:
    grid (list of list of int): A rectangular grid where 0 represents water and 1 represents land.

    Returns:
    int: The perimeter of the island.

    Raises:
    ValueError: If the input grid is not a rectangular grid.
    """

    if any(len(row) != len(grid[0]) for row in grid[1:]):
        raise ValueError("Grid is not a rectangular grid.")


    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0


    for row in range(rows):
        for col in range(cols):
        
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter

