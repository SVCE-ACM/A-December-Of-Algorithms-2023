all_box = []
def bs(arr, x):
        l = 0
        r = len(arr) - 1
        while (l <= r): 
            m = (l + r) // 2 
            if (arr[m] == x): 
                return m
            elif (arr[m] < x): 
                l = m + 1
            else: 
                r = m - 1
        return -1

box1=["Emerald", "Ruby", "Gold", "Silver"]
box2=["Silver", "Diamond", "Emerald", "Copper"]
box3=["Ruby", "Platinum" ,"Bronze", "Silver"]

box1.sort()
all_box.append(box1)
box2.sort()
all_box.append(box2)
box3.sort()
all_box.append(box3)

for i in all_box:
    out = bs(i,"Gold")
    if out != -1:
        print(f"Box{all_box.index(i)+1} Contains the Gold")
        break
    else:
        continue