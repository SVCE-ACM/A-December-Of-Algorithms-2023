def analyse(arr):
    result = []
    for i in set(arr):
        result.append(arr.count(i))
    return result
def main():
    arr = input().split(" ")
    arr = list(map(int,arr))
    print(analyse(arr))

main()
