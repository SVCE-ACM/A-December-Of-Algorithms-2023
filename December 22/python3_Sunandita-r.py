"""
************************ INPUT FORMAT Example*************
[[0,1,2],[0,1,2],[2,1,1]]

Eval is used to parse the input so follow the above format without line breaks

"""

from collections import deque

def oranges_rotting(grid):
    rows, cols = len(grid), len(grid[0])
    minutes = 0

    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]

    rotten_queue = deque()

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 2:
                rotten_queue.append((i, j))

    while rotten_queue:
        size = len(rotten_queue)

        for _ in range(size):
            x, y = rotten_queue.popleft()

            for d in range(4):
                nx, ny = x + dx[d], y + dy[d]

                if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] == 1:
                    grid[nx][ny] = 2
                    rotten_queue.append((nx, ny))

        if rotten_queue:
            minutes += 1

    if any(1 in row for row in grid):
        return -1

    return minutes

grid=eval(input())
for i in range(0,len(grid)):
    for j in range(0,len(grid[i])):
        grid[i][j]=int(grid[i][j])


print(oranges_rotting(grid))


