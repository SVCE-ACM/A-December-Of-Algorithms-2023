import statistics
print("py_gowsrini2004_day_05\n")
lis = []
n = int(input("Enter n: "))
for i in range(n):
    e = int(input(f"Enter element {i + 1}: "))
    lis.append(e)
out = []  
avg = statistics.mean(lis)
for i in lis:
    if i>= avg:
        out.append(i)
print(sum(out))