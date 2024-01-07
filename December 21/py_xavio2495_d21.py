#December 21 - Riddle me this
x,v=input("Enter string: "),1
for i in range(26):
    s=''
    for c in x:
        y=ord(c)+v 
        s+=chr(y if y<91 else y-26)
    print("String: {}\tShift - {}".format(s,26-v))
    v=v+1