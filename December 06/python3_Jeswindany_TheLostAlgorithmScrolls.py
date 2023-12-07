def link(a, b):
    if(len(a) == len(b) and len(set(a)^set(b))==2):
        return True
    return False

words = input().split()
d = {}
f = 0
for i in words:
    d[i] = []
    for j in words:
        if(i!=j and link(i,j)):
            d[i].append(j)
            f += 1 

if f == 0:
    print("No valid chain")

else:
    res = []
    for i in words:
        if d[i] != []:
            start = i
            res.append(i)
            break
    while(1):
        if(d[start] == []):
            break
        for i in d[start]:
            if i not in res:
                res.append(i)
                start = i
                break
        else:
            break
    print(res)