"""
Module documentation: Coder of Conversions

This module defines a function decimal_to_binary to convert a decimal number to its binary representation.

Usage:
    val_set = (51, 12)
    binary_representation = decimal_to_binary(val_set)
    print("Output:")
    print(binary_representation)
"""

def decimal_to_binary(val):
    """
    Convert a decimal number to its binary representation.

    Parameters:
        val (tuple): A tuple containing two decimal values.

    Returns:
        str: The binary representation of the concatenated decimal values.
    """
    decimal_number = val[0] + val[1]

    if decimal_number == 0:
        return '0'  # binary representation of 0

    binary_digits = []
    while decimal_number > 0:
        remainder = decimal_number % 2
        binary_digits.append(str(remainder))
        decimal_number //= 2

    binary_representation = ''
    for digit in binary_digits[::-1]:  # Traverse the list in reverse order
        binary_representation += digit
    return binary_representation

if __name__ == "__main__":
    # Example: Finding the binary representation of a number
    val_set = (51, 12)
    binary_representation = decimal_to_binary(val_set)

    print("Output:")
    print(binary_representation)

