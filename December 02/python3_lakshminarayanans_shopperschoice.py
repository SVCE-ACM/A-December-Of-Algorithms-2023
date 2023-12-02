"""
Module documentation: shoppers_frequency

This module defines a function shoppers_frequency to calculate the frequency of each unique product ID in a given list.

Usage:
    product_ids = [2, 2, 3, 4, 5, 6, 2, 4, 6, 7]
    shoppers_frequency(product_ids)
"""

def shoppers_frequency(product_ids):
    """
    Calculate the frequency of each unique product ID in the given list.

    Parameters:
        product_ids (list): A list of product IDs.

    Returns:
        None
    """

    unique_ids = []
    final_frequency = []

    for i in range(len(product_ids)):
        counter = 0
        current_val = product_ids[i]

        if current_val not in unique_ids:
            unique_ids.append(current_val)

            for j in range(i, len(product_ids)):
                if product_ids[j] == product_ids[i]:
                    counter += 1

            final_frequency.append(counter)

    print("Output")
    print(final_frequency)


if __name__ == "__main__":
    product_ids = [2, 2, 3, 4, 5, 6, 2, 4, 6, 7]
    shoppers_frequency(product_ids)
