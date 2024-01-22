stolen = eval(input("Enter amount"))
avg = 0
for i in stolen:
    avg += i
avg /= len(stolen)

aboveavg = 0
for i in stolen:
    if i >= avg:
        aboveavg += i
print(aboveavg)