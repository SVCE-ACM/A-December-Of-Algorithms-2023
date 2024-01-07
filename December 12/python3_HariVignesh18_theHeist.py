def find(box):
    target = 'Gold'
    l = 0
    r = len(box)-1
    while l<=r:
        mid = (l+r)//2
        if box[mid] == target:
            return True
        elif box[mid] < target:
            l = mid+1
        else:
            r = mid-1
    return False

box1 = input().split()
box2 = input().split()
box3 = input().split()
box1.sort()
box2.sort()
box3.sort()
if find(box1):
    print("Box1 contains the Gold")
elif find(box2):
    print("Box2 contains the Gold")
else:
    print("Box3 contains the Gold")
