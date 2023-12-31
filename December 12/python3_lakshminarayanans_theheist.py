"""
Module Documentation: The Heist

This module provides a function to find the box containing "Gold" among a list of boxes.

Functions:
    - binary_search(box, target): Performs binary search on a sorted list to find the target.
    - find_gold_box(boxes): Finds the box containing "Gold" among a list of boxes.

Usage:
    - Call find_gold_box(boxes) to find the box containing "Gold" and print the result.

"""


def binary_search(box, target):
    """
    Performs binary search on a sorted list to find the target.

    Parameters:
        box (list): The sorted list to search.
        target (str): The target value to find.

    Returns:
        bool: True if the target is found, False otherwise.
    """
    low, high = 0, len(box) - 1

    while low <= high:
        mid = low + (high - low) // 2

        if box[mid] == target:
            return True
        elif box[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return False


def find_gold_box(boxes):
    """
    Finds the box containing "Gold" among a list of boxes.

    Parameters:
        boxes (list): List of boxes, where each box is represented as a list of items.

    Returns:
        str: A string indicating the result, either the box containing "Gold" or a message indicating that "Gold" is not found in any box.
    """
    for i, box in enumerate(boxes, 1):
        box.sort()
        if binary_search(box, "Gold"):
            return f"Box{i} contains the Gold"

    return "Gold not found in any box"


if __name__ == "__main__":
    # Example usage
    boxes = [
        ["Emerald", "Ruby", "Bronze", "Silver"],
        ["Gold", "Diamond", "Ruby", "Copper"],
        ["Ruby", "Platinum", "Bronze", "Silver"]
    ]

    print(find_gold_box(boxes))
