def find_path(n):

    magic_square = [[0] * n for _ in range(n)]

    i, j = 0, n // 2
    num = 1

    while num <= n * n:
        magic_square[i][j] = num
        num += 1
        i -= 1
        j += 1

        if i == -1 and j == n:
            i, j = 1, n - 1
        elif i == -1:
            i = n - 1
        elif j == n:
            j = 0
        elif magic_square[i][j] != 0:
            i += 2
            j -= 1

    for row in magic_square:
        print(row)

n = 5
find_path(n)
