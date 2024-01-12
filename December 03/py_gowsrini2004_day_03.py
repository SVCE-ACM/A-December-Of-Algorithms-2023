print("py_gowsrini2004_day_03\n")
h = []
n = int(input("Enter n: "))
for i in range(n):
    e = int(input(f"Enter element {i + 1}: "))
    h.append(e)
count = 1
max_value = h[0]
for i in range(1, n):
    if h[i] > max_value:
        max_value = h[i]
        count += 1
print(count)