a = ['Shivansh Kumar','Ragul Gupta']
query = input().split()
b = ['1','2','3','4','5','6','7','8','9','0']
c = [0]*2
j = 0
cl = 0
for i in query[1]:
    if i in b:
        if cl == 0:
            c[j] += int(i)
        else:
            c[j] = c[j]*10 + int(i)
        cl += 1
    if i not in b:
        if cl > 0:
            j += 1
        cl = 0
for i in a:
    print(i[c[0]-1:c[0]+c[1]-1])
