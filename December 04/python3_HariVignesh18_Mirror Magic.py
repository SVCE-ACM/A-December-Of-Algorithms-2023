a = input()
b = ""
for i in range(0,len(a)-1):
    for j in range(i+2,len(a)+1):
        sub = a[i:j]
        if sub == sub[::-1]:
            if len(b)!= "" or len(b) > len(sub):
                b = sub
if b!="":
    print(b)
else:
    print("Error")
