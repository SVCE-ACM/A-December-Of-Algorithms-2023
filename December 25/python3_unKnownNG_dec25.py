# tasks = [1, 2, 3, 4, 5]
# dependencies = [[], [1], [2], [3], [4, 1]]


tasks = [1, 2, 3, 4, 5]
dependencies = [[], [1], [2], [3], [4]]



c = 0
for i in dependencies:
    if i == []:
        c+=1
    for j in range(len(i)):
        if j in tasks:
            i.remove(i[j])
        c+=1

print(c)