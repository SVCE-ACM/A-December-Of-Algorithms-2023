sales = [int(i) for i in input().split()]
visited = []
frequency = []
for i in sales:
    if i not in visited:
        visited.append(i)
        frequency.append(sales.count(i))
print(frequency)
