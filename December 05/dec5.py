def peakyBlinders(arr):
    avg = sum(arr)/len(arr)
    total = 0
    for i in arr :
        if i >= avg:
            total += i
    return total 

def main():
    arr = list(map(int,input().split(" ")))
    print(peakyBlinders(arr))

main()