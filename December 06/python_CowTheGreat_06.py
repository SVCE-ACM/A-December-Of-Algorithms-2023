# li = ["cat", "cot", "dot", "dog", "cog", "coat", "doll"]
li = ["apple", "orange", "banana", "grape", "peach"]

# i is for the 1st string j is for 2nd string
# x is for ele of i and y is for ele of j
# fi is final list

fi = []
fi.append(li[0])
for i in range(len(li)):
    #fi.append(li[i])
    flag = 0
    for j in range(i + 1,len(li)):
        if flag == 1:
            break
        else:
            count = 0
            if (len(li[i]) == len(li[j])):
                y = -1
                for x in range(len(li[i])):
                    y += 1
                    if li[i][x] != li[j][y]:
                        count += 1
                if count == 1:
                    fi.append(li[j])
                    flag = 1
                    break
            else:
                j = j + 1

if len(fi) > 1:
    print(fi)