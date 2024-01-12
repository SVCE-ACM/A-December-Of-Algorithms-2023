n = int(input("Enter no of elements: "))
input_line = input("Enter numbers")
numbers = list(map(int, input_line.split()))

total_c = 0

def find(numbers, num):
    count = 0
    c = numbers.index(num)
    for i in range(c-1, -1, -1):
        if numbers[i] < num:
            break
        else:
            count += 1
    return count

for i in numbers:
    total_c += find(numbers, i)

print(total_c)
