from itertools import combinations
l=[""]
k=input().strip()
for p in range(len(k)):
    for i in combinations(k,p+1):
        s="".join(i)
        if s not in l:
            l.append(s)
print(len(l))
