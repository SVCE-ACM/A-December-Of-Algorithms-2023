def rectangleInCircle(width ,height ,radius):
    diagSquare = (width**2 + height**2)
    diagonal = diagSquare**0.5
    if diagonal > radius*2:
        return False
    else:
        return True
a = [int(i) for i in input().split()]
ans = rectangleInCircle(a[0] , a[1], a[2])
if ans == True:
    print("True")
else:
    print("False")
