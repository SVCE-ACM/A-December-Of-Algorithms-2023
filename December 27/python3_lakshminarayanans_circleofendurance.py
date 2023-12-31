"""
Module documentation: Circle of Endurance

This module defines a function to find the starting point for a circular tour given the petrol and distance arrays.

Functions:
    - find_starting_point(N, petrol, distance): Finds the starting point for a circular tour.

Usage:
    - Call find_starting_point(N, petrol, distance) to get the starting point for a circular tour.
"""


def find_starting_point(N, petrol, distance):
    """
    Finds the starting point for a circular tour.

    Parameters:
        N (int): Number of petrol pumps.
        petrol (list): List of petrol available at each pump.
        distance (list): List of distances to the next pump.

    Returns:
        int: The index of the starting petrol pump if possible, -1 otherwise.
    """
    start = 0
    end = 1
    curr_petrol = petrol[start] - distance[start]

    while start != end or curr_petrol < 0:

        while curr_petrol < 0 and start != end:
            curr_petrol -= petrol[start] - distance[start]
            start = (start + 1) % N

            if start == 0:
                return -1

        curr_petrol += petrol[end] - distance[end]
        end = (end + 1) % N

    if curr_petrol >= 0:
        return start + 1
    else:
        return -1


# Example usage:
N = 4
petrol = [4, 6, 7, 4]
distance = [6, 5, 3, 5]

output = find_starting_point(N, petrol, distance)

print("Output:", output)
