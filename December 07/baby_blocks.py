def rectangleInCircle(width, height, radius):
    diagonal = (width ** 2 + height ** 2)**0.5
    if diagonal > radius*2:
        print("fasle")
    else:
        print("true")

w = float(input("Enter the width of the rectangle : "))
h = float(input("Enter the height of the rectangle : "))
r = float(input("Enter the radius of the circle : "))
rectangleInCircle(w, h, r)
