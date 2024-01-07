t = [int(i) for i in input().split()]
ave = sum(t)/len(t)
s = 0
for i in t:
  if i>=ave:
    s+=i
print(s)
