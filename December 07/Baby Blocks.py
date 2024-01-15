# Importing all the functions from math library
from math import *


# Defining the function to solve the given problem called "Baby Blocks"
def rectangleincircle(w, h, r):
    # Calcualating diagonal using Pythogaras Theorem
    diagonal = sqrt(pow(w, 2) + pow(h, 2))

    # Calculating diameter of the circle
    diameter = r * 2

    # Checking condition whether diagonal is lesser than or equal to diameter
    if (diagonal <= diameter):
        print("True")

    # Checking condition whether diagonal is lesser than or equal to diameter
    elif (diagonal > diameter):
        print("False")


# Reading the width of rectangle
width = int(input("Enter the width of rectangle: "))

# Reading the height of rectangle
height = int(input("Enter the height of rectangle: "))

# Reading the radius of circle
radius = int(input("Enter the radius of circle: "))

# Calling function
rectangleincircle(width, height, radius)
