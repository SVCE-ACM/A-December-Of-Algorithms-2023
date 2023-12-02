p = [int(i) for i in input().split()]
dd = {}
for i in p:
  if i not in dd:
    dd[i] = 1
  else:
    dd[i] += 1
print(list(dd.values()))
