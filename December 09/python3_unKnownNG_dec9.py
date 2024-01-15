string = input()
c = 0

for i in string:
    if i.isupper():
        c+=1

print(c)