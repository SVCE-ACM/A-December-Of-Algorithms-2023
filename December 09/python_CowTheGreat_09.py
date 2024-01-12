#s = input("Enter string")
s = 'saveChangesInTheEditor'
count = 1
for i in s:
    if i.isupper():
        count += 1
print(count)