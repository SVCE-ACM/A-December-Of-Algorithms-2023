#December 12 - The Heist
a,b,c=input("Enter box1: ").split(','),input("Enter box2: ").split(','),input("Enter box3: ").split(',')
print("{} Contains gold.".format("Box1" if "Gold" in a else "Box2" if "Gold" in b else "Box3"))