l=[str(x) for x in input().split()]

l2=[]
res=[]
for i in range(0,len(l)-1):
    flag=False
    if(len(l[i])==len(l[i+1])):
        count=0
        for j in range(0,len(l[i])):
            
            if(l[i][j]!=l[i+1][j]):
                count+=1
        if(count==1):
            flag=True
    elif(len(l[i])+1==len(l[i+1])):
        n=len(l[i])
        
        if((l[i][0:n]==l[i+1][0:n]) or  (l[i][0:n+1]==l[i+1][1:n+1])):
            flag=True
    elif(len(l[i])==len(l[i+1])+1):
        n=len(l[i+1])
        
        if((l[i][0:n]==l[i+1][0:n])or  (l[i][1:n+1]==l[i+1][0:n+1]) ):
            flag=True

    if(flag==True):
        if(l2==[]):
            l2.append(l[i])
            l2.append(l[i+1])
        else:
            l2.append(l[i+1])
        if(len(l2)>len(res)):
           res=l2
    else:
        l2=[]
if(res==[]):
    print("No valid chain")
else:
    print(res)

            
