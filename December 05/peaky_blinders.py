nums = list(map(int, input().strip()[1:-1].split(",")))
average = sum(nums)/len(nums)
print(sum(list(filter(lambda num : num >= average, nums))))
