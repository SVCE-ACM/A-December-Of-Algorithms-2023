"""
Module documentation: rectangle_in_circle

This module defines a function rectangle_in_circle to check if a rectangle with given width and height
can fit within a circle of a specified radius.

Usage:
    result = rectangle_in_circle(8, 6, 5)
    print("Output:")
    print(result)
"""


def rectangleInCircle(width, height, radius):
    """
    Check if a rectangle with given width and height can fit within a circle of a specified radius.

    Parameters:
        width (float): The width of the rectangle.
        height (float): The height of the rectangle.
        radius (float): The radius of the circle.

    Returns:
        bool: True if the rectangle can fit within the circle, False otherwise.
    """
    diag = ((width ** 2) + (height ** 2)) ** 0.5
    diameter = radius * 2

    return diag <= diameter


if __name__ == "__main__":
    result = rectangleInCircle(8, 6, 5)
    print("Output:")
    print(result)
