"""
Module documentation: Dominoes

This module defines a function for calculating the minimum rotations needed to achieve even sums for dominoes.

Functions:
    - min_rotations_for_even_sums(n, dominoes): Calculates the minimum rotations needed to achieve even sums for dominoes.

Usage:
    - Provide the number of dominoes 'n' and a list of dominoes 'dominoes' with their values.
    - Call the min_rotations_for_even_sums function to get the minimum rotations needed for even sums.
"""


def min_rotations_for_even_sums(n, dominoes):
    """
    Calculates the minimum rotations needed to achieve even sums for dominoes.

    Parameters:
        n (int): The number of dominoes.
        dominoes (list): A list of tuples representing the values of dominoes.

    Returns:
        int: The minimum rotations needed to achieve even sums. Returns 0 if even sums are already achieved,
        1 for one rotation needed, and -1 if it's not possible to achieve even sums.
    """
    upper_sum = sum(domino[0] for domino in dominoes)
    lower_sum = sum(domino[1] for domino in dominoes)

    if upper_sum % 2 == 0 and lower_sum % 2 == 0:
        return 0  # No rotations needed

    if upper_sum % 2 == 1 and lower_sum % 2 == 1:
        for i in range(n):
            if dominoes[i][0] % 2 != dominoes[i][1] % 2:
                return 1  # One rotation needed
        return -1  # Not possible to achieve even sums

    return -1  # Not possible to achieve even sums


# Example usage:
n1 = 2
dominoes1 = [(4, 2), (6, 4)]

n2 = 1
dominoes2 = [(2, 3)]

output1 = min_rotations_for_even_sums(n1, dominoes1)
output2 = min_rotations_for_even_sums(n2, dominoes2)

print("Output 1:", output1)
print("Output 2:", output2)
