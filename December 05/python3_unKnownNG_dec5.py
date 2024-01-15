# Instrction 
# Give the input in the following way
# 
# Input   
# 5 10 15 20 25 
# 
# This is the optimal input format followed by reputed websites like CodeForces,
# CodeChef, leetCode. So I programmed using the above input format 



_list = list(map(int, input().split()))

_list.sort()
s = 0
avg = sum(_list)/len(_list)

for i in _list:
    if i >= avg:
        s += i
print(s)