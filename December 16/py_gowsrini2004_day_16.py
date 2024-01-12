print("py_gowsrini2004_day_16\n")
from collections import deque

def infect_time(grid):
    zomb = deque()
    total_person = 0
    rows, cols = len(grid), len(grid[0])
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                zomb.append((i, j, 0))
            elif grid[i][j] == 0:
                total_person += 1

    moves = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    while zomb:
        x, y, hours = zomb.popleft()

        for dx, dy in moves:
            nx, ny = x + dx, y + dy

            if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] == 0:
                grid[nx][ny] = 1
                total_person -= 1
                zomb.append((nx, ny, hours + 1))

    if total_person == 0:
        return hours

    return -1

grid = [
 [1, 0, 1, 1, 0],
 [0, 0, 0, 1, 1],
 [1, 0, 1, 1, 1],
 [1, 0, -1, 0, 0],
 [1, 1, 0, 0, 1]
]
print("Output :" ,infect_time(grid))