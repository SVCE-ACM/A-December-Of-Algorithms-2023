"""
Module documentation: N Queens

This module provides functions to solve the N-Queens problem.

Functions:
    - is_safe(board, row, col, n): Checks if it's safe to place a queen at the specified position.
    - solve_n_queens_util(board, row, n, solutions): Recursive utility function to find all solutions for N-Queens.
    - solve_n_queens(n): Finds all solutions for the N-Queens problem.
    - print_solutions(solutions): Prints the solutions in a readable format.
    - main(): Reads input from the user and calls the solve_n_queens function.

Usage:
    - Call solve_n_queens(N) to find all solutions for the N-Queens problem.
    - Call print_solutions(solutions) to print the solutions in a readable format.
    - Call main() to run the program and input the value of N.

"""

def is_safe(board, row, col, n):
    """
    Checks if it's safe to place a queen at the specified position.

    Parameters:
        board (list): The chessboard configuration.
        row (int): The current row.
        col (int): The current column.
        n (int): The size of the chessboard.

    Returns:
        bool: True if safe, False otherwise.
    """
    # Check if there is a queen in the same column
    for i in range(row):
        if board[i][col] == 1:
            return False

    # Check upper left diagonal
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    # Check upper right diagonal
    for i, j in zip(range(row, -1, -1), range(col, n)):
        if board[i][j] == 1:
            return False

    return True

def solve_n_queens_util(board, row, n, solutions):
    """
    Recursive utility function to find all solutions for N-Queens.

    Parameters:
        board (list): The chessboard configuration.
        row (int): The current row.
        n (int): The size of the chessboard.
        solutions (list): List to store the found solutions.
    """
    if row == n:
        # Found a solution, add it to the list
        solution = [(i + 1, j + 1) for i, j in enumerate(board[row])]
        solutions.append(solution)
        return

    for col in range(n):
        if is_safe(board, row, col, n):
            board[row][col] = 1
            solve_n_queens_util(board, row + 1, n, solutions)
            board[row][col] = 0  # Backtrack

def solve_n_queens(n):
    """
    Finds all solutions for the N-Queens problem.

    Parameters:
        n (int): The size of the chessboard.

    Returns:
        list: List of solutions, where each solution is a list of coordinates.
    """
    board = [[0] * n for _ in range(n)]
    solutions = []
    solve_n_queens_util(board, 0, n, solutions)
    return solutions

def print_solutions(solutions):
    """
    Prints the solutions in a readable format.

    Parameters:
        solutions (list): List of solutions, where each solution is a list of coordinates.
    """
    for solution in solutions:
        print(" ".join(f"({row}, {col})" for row, col in solution))

def main():
    """
    Reads input from the user and calls the solve_n_queens function.
    """
    N = int(input("Enter the value of N: "))
    solutions = solve_n_queens(N)
    print_solutions(solutions)

if __name__ == "__main__":
    main()
