from collections import deque

def rotten_time(grid):
    if not grid or not grid[0]:
        return 0
    rows, cols = len(grid), len(grid[0])
    f, queue = 0, deque()
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                f+=1
            elif grid[i][j] == 2:
                queue.append((i, j, 0))
    if f==0:
        return 0

    direction=[(-1, 0), (1, 0), (0, -1), (0, 1)]
    t=0

    while queue:
        i,j,t=queue.popleft()

        for dir_i,dir_j in direction:
            ni,nj=i+dir_i,j+dir_j

            if 0 <= ni < rows and 0 <= nj < cols and grid[ni][nj] == 1:
                grid[ni][nj] = 2
                f -= 1
                queue.append((ni, nj, t + 1))

    return t if f == 0 else -1


grid=[[0,1,2],[0,1,2],[2,1,1]]
print(rotten_time(grid))