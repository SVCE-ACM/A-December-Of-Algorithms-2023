from collections import deque
def min_infection_time(grid):
    rows, cols = len(grid), len(grid[0])
    humans = 0
    zombies = deque()
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                zombies.append((i, j))
            elif grid[i][j] == 0:
                humans += 1
    time = 0
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    while humans > 0 and zombies:
        time += 1
        for _ in range(len(zombies)):
            x, y = zombies.popleft()
            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if 0 <= nx < rows and 0 <= ny < cols:
                    if grid[nx][ny] == 0:
                        humans -= 1
                        grid[nx][ny] = 1
                        zombies.append((nx, ny))

    return time if humans == 0 else -1
grid = [
 [1, 0, 1, 1, 0],
 [0, 0, 0, 1, 1],
 [1, 0, 1, 1, 1],
 [1, 0, -1, 0, 0],
 [1, 1, 0, 0, 1]
]
a = min_infection_time(grid)
print(a)
