def link(a, b):
    if(len(a) == len(b)):
        c = 0
        for i in range(len(a)):
            if(a[i] != b[i]):
                c+=1
        if(c == 1):
            return True
    elif(abs(len(a) - len(b)) == 1):
        if((a in b) or (b in a)):
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
