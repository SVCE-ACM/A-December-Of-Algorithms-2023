n = int(input("Enter no buildings"))
arr = []
for i in range(n):
    ele = int(input())
    arr.append(ele)

count  = 1
for i in range(1,n):
    flag = 1
    for j in range(i):
        if arr[i] < arr[j]:
            flag = 0
    if flag == 1:
        count = count + 1
print(count)
