"""
Module documentation: Cartesian Walk Validator

This module defines functions to analyze walking directions.

Functions:
    - count_directions(walk): Counts the number of steps for each unique direction in the walk.
    - is_valid_walk(walk): Checks if the walk is valid based on certain criteria.

Usage:
    - Call count_directions(walk) to get the count of steps for each unique direction.
    - Call is_valid_walk(walk) to check if the walk is valid.
"""


def count_directions(walk):
    """
    Counts the number of steps for each unique direction in the walk.

    Parameters:
        walk (list): List of directions representing the walk.

    Returns:
        list: List of dictionaries containing the count of steps for each unique direction.
    """
    direction_counts = []

    unique_directions = set(walk)

    for direction in unique_directions:
        count = walk.count(direction)
        direction_counts.append({direction: count})

    return direction_counts


def is_valid_walk(walk):
    """
    Checks if the walk is valid based on certain criteria.

    Parameters:
        walk (list): List of directions representing the walk.

    Returns:
        bool: True if the walk is valid, False otherwise.
    """
    if len(walk) != 10:
        return False

    direction_counts = count_directions(walk)

    if len(direction_counts) > 1:
        count_1 = list(direction_counts[0].values())[0]
        count_2 = list(direction_counts[1].values())[0]
        return count_1 == count_2
    return False


walk_input = input("Enter the walk sequence as a string of directions (e.g., 'n s n s n s n s'): ").lower().split(" ")
output = is_valid_walk(walk_input)

# Display the result
print("Output: ", output)
