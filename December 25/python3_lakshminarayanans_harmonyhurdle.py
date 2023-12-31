"""
Module documentation: Harmony Hurdle

This module defines a function to calculate the minimum time required to complete a set of tasks with dependencies.

Functions:
    - min_time_to_complete_tasks(tasks, dependencies): Calculates the minimum time to complete tasks with dependencies.

Usage:
    - Provide the list of 'tasks' and their 'dependencies'.
    - Call the min_time_to_complete_tasks function to get the minimum time required for completion.
"""

from collections import defaultdict, deque


def min_time_to_complete_tasks(tasks, dependencies):
    """
    Calculates the minimum time required to complete tasks with dependencies.

    Parameters:
        tasks (list): A list of tasks.
        dependencies (list): A list of dependencies where each element is a list representing dependencies of a task.

    Returns:
        int: The minimum time required to complete the tasks.
    """
    graph = defaultdict(list)
    in_degrees = defaultdict(int)

    for i in range(len(tasks)):
        in_degrees[tasks[i]] = 0

    for i in range(len(dependencies)):
        for j in range(1, len(dependencies[i])):
            graph[dependencies[i][j]].append(dependencies[i][0])
            in_degrees[dependencies[i][0]] += 1

    # Topological Sorting using Kahn's algorithm
    order = []
    queue = deque()

    for task in tasks:
        if in_degrees[task] == 0:
            queue.append(task)

    while queue:
        current_task = queue.popleft()
        order.append(current_task)

        for dependent_task in graph[current_task]:
            in_degrees[dependent_task] -= 1
            if in_degrees[dependent_task] == 0:
                queue.append(dependent_task)

    completion_time = {task: 0 for task in tasks}

    for task in order:
        completion_time[task] = max(completion_time[task], sum(dependencies[tasks.index(task)]) + 1)

    return max(completion_time.values())


# Example usage:
tasks1 = [1, 2, 3, 4, 5]
dependencies1 = [[], [1], [2], [3], [4, 1]]

tasks2 = [1, 2, 3, 4, 5]
dependencies2 = [[], [1], [2], [3], [4]]
output1 = min_time_to_complete_tasks(tasks1, dependencies1)
output2 = min_time_to_complete_tasks(tasks2, dependencies2)

print("Output 1:", output1)
print("Output 2:", output2)
