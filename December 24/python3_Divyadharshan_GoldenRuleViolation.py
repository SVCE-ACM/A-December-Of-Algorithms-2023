n=int(input())
l=[int(i) for i in input().split()]
v=0
for i in range(n-1):
  for j in range(i+1,n):
    if l[j]<l[i]:
      v+=1
print(v)
