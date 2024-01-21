print("py_gowsrini2004_day_31\n")
def safe(board, row, col, N):
    for i in range(row):
        if board[i] == col or board[i] - i == col - row or board[i] + i == col + row:
            return False
    return True

def nqueens_solve(board, row, N, solutions):
    if row == N:
        solutions.append(tuple(board[:]))
    else:
        for col in range(N):
            if safe(board, row, col, N):
                board[row] = col
                nqueens_solve(board, row + 1, N, solutions)

def print_solutions(N):
    board = [-1] * N
    solutions = []
    nqueens_solve(board, 0, N, solutions)

    for solution in solutions:
        print(" ".join(f"({i + 1}, {solution[i] + 1})" for i in range(N)))

N = int(input())
print_solutions(N)