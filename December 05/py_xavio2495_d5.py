#December 05 - Peaky Blinder
x,m= [int(item) for item in input("Enter the amt robbed : ").split()],0
for v in x: m= m+v if v>int(sum(x)/len(x)) else m
print(m)