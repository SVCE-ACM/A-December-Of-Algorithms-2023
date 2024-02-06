from itertools import combinations
a = input()
ans = []
for i in range(1,len(a)+1):
    b = combinations(a,i)
    for i in b:
        if i not in ans:
            ans.append(i)
print(len(ans)+1)
