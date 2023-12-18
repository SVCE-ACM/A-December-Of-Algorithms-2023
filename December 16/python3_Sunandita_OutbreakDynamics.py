from collections import deque

def min_hours_to_infect(grid):
    rows, cols = len(grid), len(grid[0])
    zombies = deque()
    
    # Find initial zombies and count humans
    total_humans = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                zombies.append((i, j, 0))
            elif grid[i][j] == 0:
                total_humans += 1

    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    while zombies:
        x, y, hours = zombies.popleft()

        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] == 0:
                grid[nx][ny] = 1
                total_humans -= 1
                zombies.append((nx, ny, hours + 1))

    if total_humans == 0:
        return hours

    return -1

# Example usage:
grid = [
 [0, 1, 0, 0],
 [1, 1, 1, 1],
 [0, 1, -1, 0],
 [0, -1, 0, 0]
]

result = min_hours_to_infect(grid)
print(result)
