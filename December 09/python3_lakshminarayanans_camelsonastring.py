"""
Module documentation: camelcase_word_counter

This module defines a function number_of_words_camelcase_string to count the number of words in a camelCase string.

Usage:
    total_words = number_of_words_camelcase_string('SaveChangesInTheEditor')
    print("Output:", total_words)
"""

import re


def number_of_words_camelcase_string(string):
    """
    Count the number of words in a camelCase string.

    Parameters:
        string (str): The camelCase string.

    Returns:
        int: The number of words in the camelCase string.
    """
    count = 0
    for char in string:
        if bool(re.match('[A-Z]', char)):
            count += 1

    return count


if __name__ == "__main__":
    # Example usage
    total_words = number_of_words_camelcase_string('SaveChangesInTheEditor')
    print("Output:", total_words)
