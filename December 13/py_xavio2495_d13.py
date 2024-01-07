#December 13 - Call Cipher
s=input("Enter the encoded phone number: ")
abc=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
     #0           3           6           9           12          15          18          21          24  
for c in s:
    if c in abc[0:3]:print(2,end='')
    elif c in abc[3:6]:print(3,end='')
    elif c in abc[6:9]:print(4,end='')
    elif c in abc[9:12]:print(5,end='')
    elif c in abc[12:15]:print(6,end='')
    elif c in abc[15:19]:print(7,end='')
    elif c in abc[19:22]:print(8,end='')
    elif c in abc[22:]:print(9,end='')
    else:print(c,end='')



