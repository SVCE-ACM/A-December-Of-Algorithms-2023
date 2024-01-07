a = [int(i) for i in input().split()]
c = 0
s = 0
for i in a:
    s += i
    c += 1
b = s/c
s = 0
for i in a:
    if i >= b:
        s += i
print(s)
