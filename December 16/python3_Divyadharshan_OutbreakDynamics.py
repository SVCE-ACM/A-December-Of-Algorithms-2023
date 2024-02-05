from collections import deque
def mini(grid):
    r, c = len(grid), len(grid[0])
    def is_valid(x, y):
        return 0 <= x < r and 0 <= y < c
    z = deque()
    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                z.append((i, j, 0))
    d = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    while z:
        x, y, t = z.popleft()
        for dx, dy in d:
            nx, ny = x + dx, y + dy
            if is_valid(nx, ny) and grid[nx][ny] == 0:
                grid[nx][ny] = 1
                z.append((nx, ny, t + 1))
    for row in grid:
        if 0 in row:
            return -1
    return t

g1=[[0, 1, 0, 0],[1, 1, 1, 1],[0, 1, -1, 0],[0, 0, 0, 0]]
print(mini(g1))
