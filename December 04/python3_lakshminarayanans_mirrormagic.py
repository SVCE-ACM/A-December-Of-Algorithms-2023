"""
Module documentation: Mirror Magic

This module defines a function find_palindromic_substring to find the smallest palindromic substring in a given string.

Usage:
    input_name_1 = "Hollow"
    output_1 = find_palindromic_substring(input_name_1)
    print("Input:", input_name_1)
    print("Output:", output_1)

    input_name_2 = "Master"
    output_2 = find_palindromic_substring(input_name_2)
    print("\nInput:", input_name_2)
    print("Output:", output_2)
"""


def find_palindromic_substring(name):
    """
    Find the smallest palindromic substring in a given string.

    Parameters:
        name (str): The input string.

    Returns:
        str: The smallest palindromic substring, or "Error" if none is found.
    """
    length = len(name)
    possibilities = []

    for i in range(length):
        for j in range(i + 1, length + 1):
            substring = name[i:j]
            if substring == substring[::-1] and len(substring) > 1:
                possibilities.append(substring)

    if len(possibilities) < 1:
        return "Error"
    else:
        return min(possibilities)


if __name__ == "__main__":
    # Example Usage
    input_name_1 = "Hollow"
    output_1 = find_palindromic_substring(input_name_1)
    print("Input:", input_name_1)
    print("Output:", output_1)

    input_name_2 = "Master"
    output_2 = find_palindromic_substring(input_name_2)
    print("\nInput:", input_name_2)
    print("Output:", output_2)
