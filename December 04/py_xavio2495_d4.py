#December 04 - Mirror Magic
x=input("Enter the keyword: ")
y=[x[m:-m] for m in range(1,int((len(x)+1)/2)) if x[m:-m]==x[m:-m][::-1]]
if len(y)==0:exit("Horus says:'Error'")
print(y[-1]) if len(y[-1])>=2 else print(y[-2])