"""
Going by the way I assessed the problem statement I had a different understanding regarding the output 
of both the sample test cases.

For the Testcase 1 given Output is 3 minutes
But according to my approach i arrived at 2 minutes.


I have documented my approach below:

At 0th minute- The initial grid

grid = [
 [0, 1, 0, 0],
 [1, 1, 1, 1],          Each zombie can infect every human at a distance of 1 unit           
 [0, 1, -1, 0],         every minute
 [0, 0, 0, 0]
]

After first minute:

grid = [
 [1, 1, 1, 1],
 [1, 1, 1, 1],
 [1, 1, -1, 1],
 [0, 1, 0, 0]
]

After 2nd Minute
grid = [
 [1, 1, 1, 1],
 [1, 1, 1, 1],       So it takes 2 minutes to infect all humans
 [1, 1, -1, 1],
 [1, 1, 1, 1]
]

Simiarly for the second Test case too the output is 2 minutes But the output 
given in the question is 4.

The first section is output for Testcase 1

INPUT FORMAT : A nested list with comma separated integers

************************ INPUT FORMAT Example*************
[[0,1,1],[0,-1,1],[1,1,1]]

Eval is used to parse the input so follow the above input format without line breaks

If there is only one row even then give it as nested list.
Example : [[1,1,-1,0]]

"""

from collections import deque

def min_hours_to_infect(grid):
    rows, cols = len(grid), len(grid[0])
    zombies = deque()
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
print("input : \n grid = [\n[0, 1, 0, 0],\n[1, 1, 1, 1],\n[0, 1, -1, 0],\n[0, 0, 0, 0]]")
grid = [
 [0, 1, 0, 0],
 [1, 1, 1, 1],
 [0, 1, -1, 0],
 [0, 0, 0, 0]
]

result = min_hours_to_infect(grid)
print("Output :" ,result,"\n")

grid=eval(input("Grid = "))
for i in range(0,len(grid)):
    for j in range(0,len(grid[i])):
        grid[i][j]=int(grid[i][j])
result = min_hours_to_infect(grid)
print(result,"\n")