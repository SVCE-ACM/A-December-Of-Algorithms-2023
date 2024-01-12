print("py_gowsrini2004_day_04\n")
string = input("Enter the string: ")
len_max = len(string)
length = len(string)
n = len(string)
output = ""
def check_palindrome(string):
    length = len(string)
    first = 0
    last = length -1 
    status = 1
    while(first<last):
        if(string[first]==string[last]):
            first=first+1
            last=last-1
        else:
            status = 0
            break
    return (status,length) 

for i in range(n - 2 + 1):
        if string[i] == string[i + 1]:
            output = (string[i]+string[i + 1])
            len_max = 2

for i in range(0,n):
    if len(string[i:n]) > 1:
        status,length = check_palindrome(string[i:n])
    if(status):
        if length < len_max:
            len_max = length
            output = string[i:n]         

for i in range(n,0,-1):
    if len(string[0:i]) > 1:
        status,length = check_palindrome(string[0:i])
    if(status):
        if length < len_max:
            len_max = length
            output = string[0:i]    
            
for i in range(n):
    if (i == n-i+1 or i == n-i):
        break
    else:
        if len(string[i:n-i]) > 1:
            status,length = check_palindrome(string[i:n-i])
        if(status):
            if length < len_max:
                len_max = length
                output = string[i:n-i]         

if output != "" : print(output)
else:print("error")