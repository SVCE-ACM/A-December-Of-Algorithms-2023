"""

INPUT FORMAT    :One line of Space separated integers
Example         : 2 2 3 4 5 6 2 4 6 7

"""


l=[int(x) for x in input().split()]
freq=[]
visited=[]
for i in l:
    if i not in visited:
        freq.append(l.count(i))
        visited.append(i)
print(freq)