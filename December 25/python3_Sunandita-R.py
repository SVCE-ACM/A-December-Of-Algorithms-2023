"""
First section of output is the sample IO for testcase 1

It is then followed by user input with two linen

INPUT FORMAT : Line 1 has a list of tasks with comma separated numbers
               Line 2 has a nested list with comma separated numbers.

INPUT EXAMPLE:

[1,2,3,4,5]
[[],[1],[2],[3],[4,1]]

Both use Eval for taking input so maintain format and give the lists without quotes

"""

from collections import defaultdict

def min_completion_time(tasks, dependencies):
    graph = defaultdict(list)
    in_degree = [0] * len(tasks)
    
    for i, deps in enumerate(dependencies):
        for dep in deps:
            graph[dep].append(i)
            in_degree[i] += 1
    
    completion_time = [0] * len(tasks)
    
    for i in range(len(tasks)):
        for node in range(len(tasks)):
            if in_degree[node] == 0:
                completion_time[node] = max(completion_time[node], i) + tasks[node]
                
                for neighbor in graph[node]:
                    in_degree[neighbor] -= 1
    
    for node in range(len(tasks)):
        if len(dependencies[node]) >= 2:
            completion_time[node] += 1
    
            return max(completion_time)+len(dependencies[node])-1
    return max(completion_time)

print("INPUT 1 : \ntasks=[1,2,3,4,5]\ndependencies=[[],[1],[2],[3],[4,1]]")
tasks1 = [1, 2, 3, 4, 5]
dependencies1 = [[], [1], [2], [3], [4, 1]]
output1 = min_completion_time(tasks1, dependencies1)
print("Output 1:", output1,"\n")
tasks2=eval(input("tasks = "))
dependencies2=eval(input("dependencies = "))
tasks=[int(x) for x in tasks2]
output1 = min_completion_time(tasks, dependencies2)
print( output1)
