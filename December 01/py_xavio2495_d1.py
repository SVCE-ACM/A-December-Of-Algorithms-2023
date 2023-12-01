#December 1 - Cricmetric
lst1 = [int(input("Enter score:")) for x in range(int(input("Enter the nos:")))]
print("The player with highest score of {} is:{}\nTeam score is:{}".format(max(lst1),lst1.index(max(lst1))+1,sum(lst1)))