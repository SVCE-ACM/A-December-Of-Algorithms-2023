"""
Module Documentation: Outbreak Dynamics

This module defines a function to calculate the time required for a contagion to spread in a grid.

Functions:
    - check(x, y, m, n): Checks if the coordinates (x, y) are within the grid bounds (m x n).
    - calculate_time(grid): Calculates the time required for contagion to spread in the grid.

Usage:
    - Call the calculate_time function with a 2D grid representing the contagion spread.
    - Print or use the returned value as needed.

"""

from collections import deque


def check(x, y, m, n):
    """
    Checks if the coordinates (x, y) are within the grid bounds (m x n).

    Parameters:
        x (int): The x-coordinate.
        y (int): The y-coordinate.
        m (int): The number of rows in the grid.
        n (int): The number of columns in the grid.

    Returns:
        bool: True if coordinates are within bounds, False otherwise.
    """
    return 0 <= x < m and 0 <= y < n


def calculate_time(grid):
    """
    Calculates the time required for contagion to spread in the grid.

    Parameters:
        grid (list[list[int]]): A 2D grid representing the contagion spread.
            - 1 indicates an infected cell,
            - 0 indicates a healthy cell,
            - -1 indicates an obstacle.

    Returns:
        int: The time required for contagion to spread. Returns -1 if not all cells can be infected.
    """
    time = 0
    m, n = len(grid), len(grid[0])
    q = deque()

    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                q.append((i, j))

    cur_queue_size, next_queue_size = len(q), 0

    while q:
        for _ in range(cur_queue_size):
            x, y = q.popleft()

            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                new_x, new_y = x + dx, y + dy
                if check(new_x, new_y, m, n) and grid[new_x][new_y] == 0:
                    q.append((new_x, new_y))
                    next_queue_size += 1
                    grid[new_x][new_y] = 1

        if next_queue_size == 0:
            break

        cur_queue_size = next_queue_size
        next_queue_size = 0
        time += 1

    for i in range(m):
        for j in range(n):
            if grid[i][j] == 0:
                return -1

    return time


if __name__ == "__main__":
    grid = [
        [1, 0, 1, 1, 0],
        [0, 0, 0, 1, 1],
        [1, 0, 1, 1, 1],
        [1, 0, -1, 0, 0],
        [1, 1, 0, 0, 1]
    ]
    print(calculate_time(grid))
