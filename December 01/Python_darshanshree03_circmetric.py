#pgm to total the score and display the highest score.
n=int(input("enter the number of players:"))
c=1
l=[]
while(c<=n):
    print("Enter the score of player:",c)
    sc=eval(input())
    l.append(sc)
    c+=1
print("the total runs scored by the team is:",sum(l))
m=max(l)
print(l.index(m))
'''
for i in len(l):
    if l[i]==m:
        print("The highest scorer is player:",i)
'''
