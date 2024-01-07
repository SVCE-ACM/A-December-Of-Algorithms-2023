#Using **Siamese method** also known as the De la Loubère method, a method for constructing magic squares of odd order where row, columns and diagonals have same sum.

def find_path(n):
    pa = [[0]*n for p in range(n)]
    i,j=0,n//2
    for k in range(1,n*n+1):
        pa[i][j]=k
        i-=1
        j-=-1
        if k%n==0:
            i-=-2
            j-=1
        else:
            if j==n:
                j-=n
            elif i<0:
                i-=-n
    for k in pa:
        print(*k)

find_path(int(input()))
