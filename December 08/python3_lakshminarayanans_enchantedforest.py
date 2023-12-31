"""
Module documentation: magic_square_generator

This module defines a function find_path to generate a magic square of odd order.

Usage:
    n = 3
    result = find_path(n)

    # Display the result
    for row in result:
        print(" ".join(map(str, row)))
"""


def find_path(n):
    """
    Generate a magic square of odd order.

    Parameters:
        n (int): The order of the magic square. Must be an odd integer.

    Returns:
        list: A 2D list representing the magic square.
    """
    if n % 2 == 0:
        raise ValueError("Input must be an odd integer")

    magic_square = [[0] * n for _ in range(n)]
    i, j = 0, n // 2
    num = 1

    while num <= n * n:
        magic_square[i][j] = num
        num += 1

        newi, newj = (i - 1) % n, (j + 1) % n

        if magic_square[newi][newj] == 0:
            i, j = newi, newj
        else:
            i += 1

    return magic_square


if __name__ == "__main__":
    # Example usage
    n = 3
    result = find_path(n)

    # Display the result
    for row in result:
        print(" ".join(map(str, row)))
