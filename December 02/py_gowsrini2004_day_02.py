print("py_gowsrini2004_day_02\n")
input_str = eval(input())
p_id = []
count = 0
for i in input_str:
    p_id.append(int(i))
output,visited = [],[]
i = 0
while(i<len(p_id)):
    if p_id[i] in visited:
        i += 1
        continue
    else:
        for j in p_id:
            if j == p_id[i]:
                count+=1
        output.append(count)
        count = 0
        visited.append(p_id[i])
        # print(visited)
        i += 1
print(output)
