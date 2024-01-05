def is_safe(board, row, col, N):
    for i in range(row):
        if board[i] == col or board[i] - i == col - row or board[i] + i == col + row:
            return False
    return True

def solve_nqueens(board, row, N, solutions):
    if row == N:
        solutions.append(tuple(board[:]))
    else:
        for col in range(N):
            if is_safe(board, row, col, N):
                board[row] = col
                solve_nqueens(board, row + 1, N, solutions)

def print_solutions(N):
    board = [-1] * N
    solutions = []
    solve_nqueens(board, 0, N, solutions)

    for solution in solutions:
        print(" ".join(f"({i + 1}, {solution[i] + 1})" for i in range(N)))

N = int(input())
print_solutions(N)
