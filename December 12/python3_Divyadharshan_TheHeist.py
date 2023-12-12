box1=[i for i in input().split()]
box2=[i for i in input().split()]
box3=[i for i in input().split()]
def search(k):
  l=0
  h=len(k)-1
  while l<=h:
    m=(l+h)//2
    if k[m]=="Gold":
      return 1
    else:
      if k[m]<"Gold":
        l=m+1
      else:
        h=m-1
  return 0
box1.sort()
box2.sort()
box3.sort()
if search(box1):
    print("Box1 Contains the Gold")
elif search(box2):
    print("Box2 Contains the Gold")
elif search(box3):
    print("Box3 Contains the Gold")
