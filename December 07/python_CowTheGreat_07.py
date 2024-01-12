def rectangleInCircle(w,h,r):
    if ((w ** 2 ) + (h ** 2)) <= ((2 * r) * (2 * r)):
        print("true")
    else:
        print("false")

rectangleInCircle(8, 6, 5)
rectangleInCircle(5, 9, 5)