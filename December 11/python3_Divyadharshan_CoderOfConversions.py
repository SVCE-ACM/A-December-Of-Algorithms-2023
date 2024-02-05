k,p=[int(i) for i in input().split()]
k=k+p
p=""
while k:
  p=str(k%2)+p
  k//=2
print(p)
