def cricketScore(arr):
    temp = 0
    print(sum(arr))
    for i in range(len(arr)):
        if arr[temp] < arr[i]:
            temp = i
    print(temp)

def  main():
    n = int(input())
    arr = input().split(" ")
    arr = list(map(int, arr))
    cricketScore(arr)

main()