print("py_gowsrini2004_day_01\n")
n = int(input())
array = input()
score = []
temp = array.strip().split()
for i in temp:
    score.append(int(i))

sumu = sum(score)
max = max(score)
max_index = score.index(max)

print("\n")
print(sumu)
print(max_index)