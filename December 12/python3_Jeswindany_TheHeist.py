def binarySearch(box):
    l = 0
    h = len(box) - 1
    while(l <= h):
        m = (l+h)//2
        if(box[m].lower() == "gold"):
            return 1
        elif(box[m].lower() < "gold"):
            l = m+1
        elif(box[m].lower() > "gold"):
            h = m-1
    return 0

box1 = sorted([i.lower() for i in input().split()])
box2 = sorted([i.lower() for i in input().split()])
box3 = sorted([i.lower() for i in input().split()])

if(binarySearch(box1)):
    print("Box1 Contains the Gold")
elif(binarySearch(box2)):
    print("Box2 Contains the Gold")
elif(binarySearch(box3)):
    print("Box3 Contains the Gold")
else:
    print("Gold not Found")