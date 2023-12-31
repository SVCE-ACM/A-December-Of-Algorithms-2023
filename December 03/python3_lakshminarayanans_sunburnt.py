"""
Module documentation: count_buildings_with_sunrise

This module defines a function count_buildings_with_sunrise to determine the number of buildings with a sunrise view.

Usage:
    buildings_height = [7, 4, 8, 2, 9]
    count_buildings_with_sunrise(buildings_height)
"""

def count_buildings_with_sunrise(buildings_height):
    """
    Count the number of buildings with a sunrise view based on their heights.

    Parameters:
        buildings_height (list): A list representing the heights of buildings.

    Returns:
        None
    """

    count = 1
    highest = buildings_height[0]

    for height in buildings_height[1:]:
        if height > highest:
            count += 1
            highest = height

    print("Output")
    print(count)


if __name__ == "__main__":
    buildings_height = [7, 4, 8, 2, 9]
    count_buildings_with_sunrise(buildings_height)
