print("py_gowsrini2004_day_29\n")
walk = ['w', 'e', 'w', 'e', 'w', 'e', 'w', 'e', 'w', 'n', 's','n']
n,s,e,w = 0,0,0,0
for i in walk:
    if i == 'n':
        n+=1
    elif i == 's':
        s+=1
    elif i == 'e':
        e+=1
    elif i == 'w':
        w+=1     

if len(walk)>=10:
    if n == s:
        if w == e:
            print("TRUE")
        else:
            print("FALSE")
    else:
        print("FALSE")