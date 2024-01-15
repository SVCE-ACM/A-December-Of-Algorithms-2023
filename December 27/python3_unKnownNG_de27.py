# Give the input in the following manner
#  5
#  2 3 7 4 5
#  6 5 3 5 3


num = int(input())
petrolList = list(map(int, input().split()))
distanceList = list(map(int,input().split()))

c = 0

for i in range(num):
    if petrolList[i] < distanceList[i]:
        c+=1

print(c)