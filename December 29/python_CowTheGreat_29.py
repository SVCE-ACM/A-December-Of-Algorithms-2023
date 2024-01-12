walk = ['w', 'e', 'w', 'e', 'w', 'e', 'w', 'e', 'w', 'n']
dist = 0
for x in walk:
    if x == "n":
        dist = dist + 1
    elif x == "s":
        dist = dist - 1
    elif x == "w":
        dist = dist + 100
    else:
        dist = dist - 100
if dist == 0:
    print("True")
else:
    print("False")