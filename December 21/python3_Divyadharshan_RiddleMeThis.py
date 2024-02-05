l=input("Enter code : ")
shift=25
inc=26-shift
um=""
for i in l:
  d=ord(i)
  if i.islower() and (d+inc)>122:
    d=95+inc
  elif i.isupper() and (d+inc)>90:
    d=64+inc
  else:
    d=ord(i)+inc
  um+=chr(d)
print(f"The Bomb location is : {um} - SHIFT {shift}")
