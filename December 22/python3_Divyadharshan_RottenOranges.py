from collections import deque
def rottime(grid):
    if not grid or not grid[0]:
        return 0
    rows, cols = len(grid), len(grid[0])
    f, q = 0, deque()
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                f+=1
            elif grid[i][j] == 2:
                q.append((i, j, 0))
    if f==0:
        return 0
    d=[(-1, 0), (1, 0), (0, -1), (0, 1)]
    t=0

    while q:
        i,j,t=q.popleft()
        for di,dj in d:
            ni,nj=i+di,j+dj
            if 0 <= ni < rows and 0 <= nj < cols and grid[ni][nj] == 1:
                grid[ni][nj] = 2
                f -= 1
                q.append((ni, nj, t + 1))
    return t if f == 0 else -1
  
grid=[[2, 2, 0, 1]]
print(rottime(grid))
