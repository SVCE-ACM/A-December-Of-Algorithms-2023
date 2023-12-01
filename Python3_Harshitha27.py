players=int(input("Enter the number of players:")) 
lst=[]
print("Enter the runs scored by the respective players:") 
for i in range(0, players) :
    ele=int(input())
    lst.append(ele) 

Sum=sum(lst) 
x=max(lst) 
y=lst.index(x) 
print("The total runs scored by the team:", Sum) 
print("The player scored maximum runs:", y) 


    
    
 
