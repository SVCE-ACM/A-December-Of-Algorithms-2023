n = int(input())
_list = list(map(int, input().split()))
counter = 1
for i in range(n-1):
    if _list[i] < _list[i+1]:
        counter +=1
print(counter)
