# Instrction 
# Give the input in the following way

# Input   
# cat cot dot dog cog coat doll

# This is the optimal input format followed by reputed websites like CodeForces,
# CodeChef, leetCode. So I programmed using the above input format 

_list = list(input().split())
resultList = []

for i in range(len(_list) -1):
    if len(_list[i]) == len(_list[i+1]):
        diff = 0
        for j in range(len(str(_list[i]))):
            if _list[i][j] != _list[i+1][j]:
                diff +=1 
        if diff == 1:
            resultList.append(_list[i])

print(resultList)