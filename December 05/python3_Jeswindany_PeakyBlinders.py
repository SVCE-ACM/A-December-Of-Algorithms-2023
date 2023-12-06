loot = [int(i) for i in input().split()]
avg = sum(loot)/len(loot)
res_sum = 0
for i in loot:
    if(i>=avg):
        res_sum += i
print(res_sum)