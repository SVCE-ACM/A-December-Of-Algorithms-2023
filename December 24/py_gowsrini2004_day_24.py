print("py_gowsrini2004_day_24\n")
n = int(input("n: "))
input_line = input()
numbers = []
numbers = list(map(int, input_line.split()))
total_c = 0
def find_before(numbers,num):
    count = 0
    c = numbers.index(num)
    for i in range(c-1,-1,-1):
        if numbers[i] < num:
            break
        else:
            count +=1
    return(count)

for i in numbers:
    total_c += find_before(numbers,i)

print(total_c)