#December 06 - The Lost Algorithm Scrolls
x,c,p,f= input("Enter the spells : ").split(),0,[],[]
for z in range(len(x)-1):
    v1,v2=x[z],x[z+1]
    if len(v2)!=len(v1):continue
    for a in range(len(v1)):c=c+1 if v1[a]!=v2[a] else c
    if c==1:p.extend([v1,v2])
    c=0
[f.append(x) for x in p if x not in f]
print(f) if len(f)!=0 else print("No Valid Chain Found")