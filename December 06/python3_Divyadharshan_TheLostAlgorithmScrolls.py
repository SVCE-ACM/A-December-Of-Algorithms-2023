w=[i for i in input().split()]
def comp(w1,w2):
    c=0
    for i in range(len(w1)):
        if w1[i]!=w2[i]:
            c-=-1
        if c>1:
            return False
    return c==1
d={}
f=0
for i in range(1,len(w)):
    if len(w[i])==len(w[i-1]):
        if comp(w[i],w[i-1]):
            d[w[i-1]]=1
            d[w[i]]=1
            f=1
if f:
    print(list(d.keys()))
else:
    print("No valid chain.")
