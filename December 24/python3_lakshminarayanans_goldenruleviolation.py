"""
Module documentation: Golden Rule Violation

This module defines a function for counting violations in a list of numbers.

Functions:
    - count_violations(n, numbers): Counts the number of violations in the given list of numbers.

Usage:
    - Provide the number of elements 'n' and a list of 'numbers'.
    - Call the count_violations function to get the count of violations in the list.
"""

def count_violations(n, numbers):
    """
    Counts the number of violations in the given list of numbers.

    Parameters:
        n (int): The number of elements in the list.
        numbers (list): A list of numbers.

    Returns:
        int: The count of violations in the list.
    """
    violations = 0

    for i in range(n - 1):
        for j in range(i + 1, n):
            if numbers[i] > numbers[j]:
                violations += 1

    return violations

# Example usage:
n1 = 5
numbers1 = [4, 5, 6, 7, 1]

n2 = 5
numbers2 = [5, 4, 3, 2, 1]

output1 = count_violations(n1, numbers1)
output2 = count_violations(n2, numbers2)

print("Output 1:", output1)
print("Output 2:", output2)
