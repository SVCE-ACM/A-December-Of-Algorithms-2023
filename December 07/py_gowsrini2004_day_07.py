print("py_gowsrini2004_day_07\n")
import math
def rectangleInCircle(wid, hit, rad):
    dig = math.sqrt(wid ** 2 + hit ** 2)
    dia = rad*2
    if(dig>dia):
        print("false")
    else:
        print("true")

rectangleInCircle(5,9,5)
