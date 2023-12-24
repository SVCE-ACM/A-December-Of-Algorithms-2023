from math import sqrt

def rectangleInCircle(a,b,c):
    if sqrt((a**2)+(b**2)) > 2*c:
        return False
    else:
        return True
    
def main():
    a = int(input())
    b = int(input())
    c = int(input())
    print(rectangleInCircle(a,b,c))
main()