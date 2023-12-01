#December 1 - Cricmetric
lst1 = [int(input("Enter score:")) for x in range(int(input("Enter the nos:")))]
print("The player with highest score is:{}\nTeam scsore is:{}".format(lst1.index(max(lst1))+1,sum(lst1)))