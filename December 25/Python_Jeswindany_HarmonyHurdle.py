tasks = [1, 2, 3, 4, 5]
dependancies = [[], [1], [2], [3], [4,1]]
d = {}
c = 0
t = 0

for i in range(len(tasks)):
    d[tasks[i]] = dependancies[i]

while(d):
    t += 1
    l = []
    for i in d:
        if d[i] == []:
            l.append(i)
    for i in l:
        d.pop(i)
    for i in d:
        for j in d[i]:
            if j in l:
                d[i].remove(j)
print(t)
        
