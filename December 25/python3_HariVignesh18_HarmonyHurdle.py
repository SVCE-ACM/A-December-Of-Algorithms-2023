from collections import defaultdict, deque

def min_time_to_complete_tasks(tasks, dependencies):
    graph = defaultdict(list)
    in_degree = {task: 0 for task in tasks}

    for i, deps in enumerate(dependencies):
        for dep in deps:
            graph[dep].append(i + 1) 
            in_degree[i + 1] += 1

    top_order = []
    queue = deque([task for task, degree in in_degree.items() if degree == 0])

    while queue:
        current_task = queue.popleft()
        top_order.append(current_task)

        for neighbor in graph[current_task]:
            in_degree[neighbor] -= 1
            if in_degree[neighbor] == 0:
                queue.append(neighbor)

    min_time = 0
    time_to_complete = {task: 0 for task in tasks}

    for task in top_order:
        for neighbor in graph[task]:
            time_to_complete[neighbor] = max(time_to_complete[neighbor], time_to_complete[task] + 1)
            min_time = max(min_time, time_to_complete[neighbor])

    return min_time

tasks = [1, 2, 3, 4, 5]
dependencies = [[], [1], [2], [3], [4, 1]]

result = min_time_to_complete_tasks(tasks, dependencies)
print(result)
