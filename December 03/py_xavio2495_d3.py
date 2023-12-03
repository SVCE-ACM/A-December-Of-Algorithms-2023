#December 03 - Sunburnt
lst,c = [int(input("Enter height:")) for x in range(int(input("Enter the no. of buildings:")))],1
for x in lst: c=c+1 if x>lst[0] else c
print("Building which can see the sunlight:",c)