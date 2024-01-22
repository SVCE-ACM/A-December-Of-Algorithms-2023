tasks = [1, 2, 3, 4, 5]
dependencies = [[], [1], [2], [3], [4]]

time_required = [0] * len(tasks)

for i in range(len(tasks)):
    for dep in dependencies[i]:
        time_required[i] = max(time_required[i], time_required[dep] + tasks[dep])

result = max(time_required) 
print("Minimum time needed to complete all tasks:", result)
