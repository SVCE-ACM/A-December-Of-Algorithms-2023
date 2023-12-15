l=[int(x) for x in input().split()]
freq=[]
visited=[]
for i in l:
    if i not in visited:
        freq.append(l.count(i))
        visited.append(i)
print(freq)