print("py_gowsrini2004_day_25\n")
tasks = [1, 2, 3, 4, 5]
dependencies = [[], [1], [2], [3], [4]]
count = 1
for i in range(0,len(tasks)):
    c = len(dependencies[i])
    count+=c
print(count)