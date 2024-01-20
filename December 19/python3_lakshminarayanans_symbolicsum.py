"""
Module Documentation: Symbolic Sum

This module defines functions for calculating the symbolic sum of a sequence.

Functions:
    - sum_subsequence(sequence, start, end): Calculates the sum of a subsequence within the given range.
    - symbolic_sum(sequence): Calculates the symbolic sum of the entire sequence.

Usage:
    - Run the main block to execute the symbolic sum calculation.
    - The result is printed to standard output.

"""

def sum_subsequence(sequence, start, end):
    """
    Calculates the sum of a subsequence within the given range.

    Parameters:
        sequence (list[str]): List of strings representing the sequence.
        start (int): Starting index of the subsequence.
        end (int): Ending index of the subsequence.

    Returns:
        int: The sum of the subsequence.
    """
    return sum(int(x) for x in sequence[start:end + 1] if x.isdigit())


def symbolic_sum(sequence):
    """
    Calculates the symbolic sum of the entire sequence.

    Parameters:
        sequence (list[str]): List of strings representing the sequence.

    Returns:
        int: The symbolic sum of the sequence.
    """
    result = 0
    n = len(sequence)
    for i in range(n):
        if sequence[i][0] == 'X':
            multiplier = 1
            if len(sequence[i]) > 1:
                multiplier = int(sequence[i][1:])
            subsum = sum_subsequence(sequence, i, n - 1)
            result += multiplier * subsum
    return result


if __name__ == "__main__":
    # Example usage
    sequence = ["X3", "3", "X2", "2", "X1", "1", "4"]
    result = symbolic_sum(sequence)
    print(result)
