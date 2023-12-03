#December 03 - Sunburnt
lst,c =[int(input("Enter height:")) for x in range(int(input("Enter the no. of buildings:")))],1
m=lst[0]
for x in lst:m,c= x if x>m else m,c+1 if x>m else c
print("Building which can see the sunlight:",c)