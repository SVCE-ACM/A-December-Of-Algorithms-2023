n=int(input())
h=[int(i) for i in input().split()]
s=1
for i in range(1,n):
    v=h[:i]
    if h[i]>=max(v):
        s+=1
print(s)
