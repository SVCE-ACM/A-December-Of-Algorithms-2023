print("py_gowsrini2004_day_12\n")
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

for i in range(0,3):
    input_str = input(f"Enter Box {i+1}= ")
    cleaned_str = input_str[1:-1]
    box = cleaned_str.split(', ')
    box.sort()
    all_box.append(box)

for i in all_box:
    out = bs(i,"Gold")
    if out != -1:
        print(f"Box{all_box.index(i)+1} Contains the Gold")
        break
    else:
        continue