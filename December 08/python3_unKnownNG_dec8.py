n = int(input())
m = [[0] * n for _ in range(n)]

c =1
while c <= n**2:
    x = n//2
    y = n-1
    for i in range(n):
        for j in range(n):
            if x < 0:
                x = n-1
            if y > n-1:
                y = 0
            m[x][y] = c
            if j !=n-1:
                x-=1
                y+=1
            c+=1
        y-=1

for i in m:
    print(i)