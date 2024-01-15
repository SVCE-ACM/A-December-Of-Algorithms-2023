def rectangleInCircle(x,y,r):
    if x*y <= (22/7) * (r**2):
        return True
    else:
        return False




print(rectangleInCircle(5, 9, 5))