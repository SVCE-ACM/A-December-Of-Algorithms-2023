d={"ABC":2,"DEF":3,"GHI":4,"JKL":5,"MNO":6,"PQRS":7,"TUV":8,"WXYZ":9}
s=input()
def textToNum(v):
    s=""
    for i in v:
        if 65<=ord(i)<=90:
            for j in d:
                if i in j:
                    s+=str(d[j])
                    break
        else:
            s+=i
    print(s)
textToNum(s)
