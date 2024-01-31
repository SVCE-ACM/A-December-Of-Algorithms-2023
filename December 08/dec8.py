def find_path(n):
    matrix = []
    for i in range(n):
        x=[]
        for j in range(n):
            x.append(0)
        matrix.append(x)
    x=n//2
    y=-1
    matrix[x][y] = 1
    x=n//2-1
    y=0
    for i in range(2,(n**2)+1):
        if x == -n-1:
                x= 0
        if y == n:
            y=0
        while matrix[x][y] !=0:
            x+=1
            y-=2
            if y <= -n-1:
                y=-2
            if x==n:
                x=0
        
        matrix[x][y] = i
        x -= 1
        y += 1
    return matrix
print(find_path(3))
        

        


            
    
    
    