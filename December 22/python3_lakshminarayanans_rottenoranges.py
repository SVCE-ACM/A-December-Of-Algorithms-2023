"""
Module documentation: Rotting Oranges

This module defines a function for calculating the time it takes for all oranges to rot in a given grid.

Functions:
    - rotting_time(grid): Calculates the time it takes for all oranges to rot in the grid.

Usage:
    - Define a grid with values representing the state of each cell (0 for empty, 1 for fresh orange, 2 for rotten orange).
    - Call the rotting_time function with the grid to get the time it takes for all oranges to rot.
"""

from collections import deque


def rotting_time(grid):
    """
    Calculates the time it takes for all oranges to rot in the given grid.

    Parameters:
        grid (list): A 2D grid representing the state of oranges (0 for empty, 1 for fresh orange, 2 for rotten orange).

    Returns:
        int: The time it takes for all oranges to rot. Returns -1 if it's not possible for all oranges to rot.
    """
    rows, cols = len(grid), len(grid[0])
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]  # Up, Down, Left, Right

    queue = deque()
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 2:
                queue.append((i, j, 0))

    def is_valid(x, y):
        return 0 <= x < rows and 0 <= y < cols

    time = 0
    while queue:
        i, j, time = queue.popleft()
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if is_valid(ni, nj) and grid[ni][nj] == 1:
                grid[ni][nj] = 2
                queue.append((ni, nj, time + 1))

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                return -1

    return time


# Example usage:
grid1 = [[0, 1, 2], [0, 1, 2], [2, 1, 1]]
grid2 = [[2, 2, 0, 1]]

output1 = rotting_time(grid1)
output2 = rotting_time(grid2)

print("Output 1:", output1)
print("Output 2:", output2)
