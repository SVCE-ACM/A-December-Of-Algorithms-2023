def is_safe(board, current_row, current_col, N):
    for i in range(current_row):
        if board[i] == current_col or board[i] - i == current_col - current_row or board[i] + i == current_col + current_row:
            return False
    return True

def solve_nqueens(board, current_row, N, solutions):
    if current_row == N:
        solutions.append(tuple(board[:]))
    else:
        for current_col in range(N):
            if is_safe(board, current_row, current_col, N):
                board[current_row] = current_col
                solve_nqueens(board, current_row + 1, N, solutions)

def print_solutions(N):
    board = [-1] * N
    solutions = []
    solve_nqueens(board, 0, N, solutions)

    for solution in solutions:
        print(" ".join(f"({i + 1}, {solution[i] + 1})" for i in range(N)))

N = int(input("Enter the size of the chessboard  "))
print_solutions(N)
