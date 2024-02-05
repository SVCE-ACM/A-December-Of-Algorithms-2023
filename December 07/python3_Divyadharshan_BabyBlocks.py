w,h,r=[int(i) for i in input().split()]
def rectangleInCircle(w,h,r):
    d=(w**2+h**2)**0.5
    if d<=r*2:
        print("true")
    else:
        print("false")
rectangleInCircle(w,h,r)
