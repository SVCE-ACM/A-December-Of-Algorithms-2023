#December 09 - Camels on a string:
x,c=input("Enter a string: "),0
for m in x: c=c+1 if m.isupper()==True else c
print("Number of words: ",c)