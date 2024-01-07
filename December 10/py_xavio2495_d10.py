#December 10 - Forgot Password
empname=['Shivnash Kumar','Ragul Gupta','Antony Immanuel','Kevin Christopher','Michael Jackson']
x,y=int(input("Enter Start value: "))-1,int(input("Enter length: "))
for j in empname:
    if x+y > len(j):print(j[x:])
    else:print(j[x:x+y])
