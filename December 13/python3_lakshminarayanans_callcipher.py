"""
Module documentation: Call Cipher

This module defines a function textToNum to convert an alphanumeric phone number to its numeric representation.

Usage:
    output = textToNum("123-647-EYES")
    print("Output:")
    print(output)
"""


def textToNum(number_string):
    """
    Convert an alphanumeric phone number to its numeric representation.

    Parameters:
        number_string (str): The alphanumeric phone number.

    Returns:
        str: The numeric representation of the phone number.
    """
    phone_dictionary = {
        0: '',
        1: '',
        2: 'ABC',
        3: 'DEF',
        4: 'GHI',
        5: 'JKL',
        6: 'MNO',
        7: 'PQRS',
        8: 'TUV',
        9: 'WXYZ',
    }

    final_string = number_string.upper()  # Convert to uppercase for case insensitivity
    new_string_list = []

    for char in final_string:
        if char.isalpha():  # Check if the character is alphabetic
            for digit, letters in phone_dictionary.items():
                if char in letters:
                    new_string_list.append(str(digit))
        else:
            new_string_list.append(char)

    return ''.join(new_string_list)


if __name__ == "__main__":
    # Example usage
    output = textToNum("123-647-EYES")
    print("Output:")
    print(output)
