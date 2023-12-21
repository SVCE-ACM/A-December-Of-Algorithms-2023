print("Box1 = ")
l1=[str(x) for x in input().split()]
print(l1)
print("Box2 = ")
l2=[str(x) for x in input().split()]
print("Box3 = ")
l3=[str(x) for x in input().split()]

l1.sort()
l2.sort()
l3.sort()
def binary_search(arr, target):
    low, high = 0, len(arr) - 1

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] == target:
            print("success")
            return 1
            
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1

if(binary_search(l1,"Gold")==1):
    print("Box1 Contains the Gold")
elif(binary_search(l2,"Gold")==1):
    print("Box2 Contains the Gold")
else:
    print("Box3 Contains the Gold")
    