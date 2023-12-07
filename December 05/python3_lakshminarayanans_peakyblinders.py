"""
Module documentation: Peaky Blinders

This module provides functions for analyzing a list of amounts, specifically for finding the average amount
and calculating the total amount stolen, considering amounts greater than or equal to the average.

Usage:
    amount_list = [5, 10, 15, 20, 25]
    amount_stolen = find_amount_stolen(amount_list)
    print("Output: " + str(amount_stolen))
"""

def find_avg(amount_list):
    """
    Calculate the average of a list of amounts.

    Parameters:
        amount_list (list): A list of amounts.

    Returns:
        float: The average of the amounts.
    """
    total = sum(amount_list)
    return total / len(amount_list)


def find_amount_stolen(amount_list):
    """
    Calculate the total amount stolen, considering amounts greater than or equal to the average.

    Parameters:
        amount_list (list): A list of amounts.

    Returns:
        int: The total amount stolen.
    """
    avg = find_avg(amount_list)
    sum_amount_stolen = sum(amount for amount in amount_list if amount >= avg)
    return sum_amount_stolen


if __name__ == "__main__":
    amount_list = [5, 10, 15, 20, 25]
    amount_stolen = find_amount_stolen(amount_list)
    print("Output: " + str(amount_stolen))
