p_id = eval(input("Enter product IDs"))

unique = []
for i in p_id:
    if i not in unique:
        unique.append(i)

freq = []
for i in unique:
    freq.append(p_id.count(i))
    
print(freq)