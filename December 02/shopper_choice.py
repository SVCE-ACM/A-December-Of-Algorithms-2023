items = list(map(int, input().strip()[1:-1].split(',')))
rept = {}

for num in items:
    if num not in rept:
        rept[num] = 1
    else:
        rept[num] += 1

print(list(rept.values()))
