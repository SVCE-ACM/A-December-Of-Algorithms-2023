def buildingHieght(arr):
    count = 1
    for i in range(1,len(arr)):
        if arr[i-1] < arr[i]:
            count+=1
    return count

def main():
    n = int(input())
    Harr = []
    for i in range(n):
        h = int(input())
        Harr.append(h)
    print(buildingHieght(Harr))
main()
