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