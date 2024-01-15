# Give the input in the following format
# Input
# 5
# 5 4 3 2 1

n = int(input())
l = list(map(int, input().split()))

c = 1
t = 0
for i in range(1,n):
    if l[i-1] > l[i]:
        t += c
    c+=1

print(t)