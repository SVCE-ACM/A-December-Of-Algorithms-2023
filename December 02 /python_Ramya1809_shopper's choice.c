n=int(input("Enter no. of products : "))
l=[]
for i in range(0,n):
    print("Enter product id of product ",i+1)
    e=int(input())
    l.append(e)
f=[]
lc=[]
for i in l:
   if i not in lc:
       lc.append(i)
print("The frequency of each products with product ID ",lc,"is : ")
for i in lc:
    c=l.count(i)
    if (c>0):
        f.append(c)
print(f)
