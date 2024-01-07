def find_path(n):
    ans = [[0]*n for _ in range(n)]
    c = 0
    i = 0
    j = n//2
    for k in range(1,(n*n)+1):
        ans [i][j] = k
        i -= 1
        j += 1
        c += 1
        if c == n:
            i += 2
            j -= 1
            c = 0
        else:
            if j == n:
                j -= n
            elif i < 0:
                i += n
    for row in ans:
        print(*row)
n = int(input())
find_path(n)
