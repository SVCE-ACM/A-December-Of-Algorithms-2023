n=int(input())
h=[int(i) for i in input().split()]
s=1
m=h[0]
for i in range(1,n):
    if h[i]>=m:
        s+=1
        m=h[i]
print(s)
