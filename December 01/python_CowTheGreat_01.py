n = int(input("Enter no of players"))
scores = []
for i in range(n):
    ele = int(input())
    scores.append(ele)
total = sum(scores)
high = scores.index(max(scores))
print(total)
print(high)