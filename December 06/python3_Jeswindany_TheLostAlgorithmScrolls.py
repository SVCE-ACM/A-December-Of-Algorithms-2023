def link(a, b):
    if(len(a) == len(b) and len(set(a)^set(b))==2):
        return True
    elif((a in b) or (b in a)):
        return True
    return False

words = input().split()
start = ""
res = []
for i in words:
    for j in words:
        if(i!=j and link(i,j)):
            start = i
            res.append(i)
            break
    if(start != ""):
        break

if start == "":
    print("No valid chain")
else:
    while(1):
        for i in words:
            if(i!=start and link(start,i) and (i not in res)):
                start = i
                res.append(i)
                break
        else:
            break
    print(res)

