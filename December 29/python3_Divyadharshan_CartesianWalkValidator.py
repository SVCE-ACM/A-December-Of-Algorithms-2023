walk=[i for i in input().split()]
x,y=0,0
for i in walk:
  if i=="n":
    y+=1
  elif i=="s":
    y-=1
  elif i=="e":
    x+=1
  elif i=="w":
    x-=1
if x==0 and y==0:
  print("TRUE")
else:
  print("FALSE")
