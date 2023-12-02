a = list(map(int,input().split()))
b = []
for i in a:
    if i not in b:
        b.append(i)
c = []
for i in b:
    count = 0
    for j in a:
        if i == j:
            count += 1
    c.append(count)
print(c)
