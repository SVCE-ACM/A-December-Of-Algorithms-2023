input()
nums = list(map(int, input()[7:-1].split(",")))

count = 1
for i in range(len(nums) - 1):
    if nums[i] < nums[i + 1]:
        count += 1
print(count)
