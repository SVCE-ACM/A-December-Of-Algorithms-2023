"""
Module documentation: count_runs

This module defines a function count_runs to calculate the total runs scored by a given number of batsmen.
It also tracks the highest run scored and the corresponding batsman index.

Usage:
    total_n = int(input("Enter the total number of batsmen: "))
    count_runs(total_n)
"""


def count_runs(total_n):
    """
    Calculate the total runs scored by a given number of batsmen and track the highest run scored.

    Parameters:
        total_n (int): The total number of batsmen.

    Returns:
        None
    """

    runs = 0
    highest = 0
    highest_index = 0

    for i in range(total_n):
        run = int(input(f"Enter the runs scored by batsman {i + 1}: "))
        runs += run

        if highest < run:
            highest = run
            highest_index = i

    print("Total Runs:", runs)
    print("Batsman with the highest run:", highest_index)


if __name__ == "__main__":
    total_n = int(input("Enter the total number of batsmen: "))
    count_runs(total_n)
