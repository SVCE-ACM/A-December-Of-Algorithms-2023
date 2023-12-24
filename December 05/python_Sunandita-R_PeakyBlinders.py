"""

INPUT FORMAT    :One line of Space separated integers
Example         : 2 2 3 4 5 6 2 4 6 7

"""

l=[int(x) for x in input().split()]
avg=0
sum=0
for i in l:
    sum+=i
avg=sum/len(l)
gtl=[]
for i in l:
    if(i>=avg):
        gtl.append(i)
sum=0
for i in gtl:
    sum+=i
print(sum)