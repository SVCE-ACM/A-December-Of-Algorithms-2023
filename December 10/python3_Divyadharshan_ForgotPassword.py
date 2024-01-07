import re
t=["Shivnash Kumar","Ragul Gupta"]
query=input().split()
st=query[1]
l=[int(k) for k in re.findall('[0-9]+',st)]
for i in range(len(t)):
  print(t[i][l[0]-1:l[0]+l[1]-1])
