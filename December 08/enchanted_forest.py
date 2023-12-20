def find_path(n):
    output = [["" for j in range(n)] for i in range(n)]#each list is column and items in it are rows
    r , c = n - 1, (n)//2
    for i in range(1, n**2 + 1):
        if r == n:
            r = 0
        if c == n:
            c = 0
        if output[c][r] != "":
            r -= 2
            c -= 1
        output[c][r] = i
        r += 1
        c += 1
    
    len_max = len(str(n**2))
    for row in output:
        for i in range(n):
            print(f"{row[i]}" + " "*(len_max - len(str(row[i]))), end = " ")
        print()

degree = int(input("Enter the degree of the matrix : "))
find_path(degree)
