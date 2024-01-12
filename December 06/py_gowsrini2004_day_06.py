print("py_gowsrini2004_day_06\n")
arr = ["cat", "cot", "dot", "dog", "cog", "coat", "doll"]
count = 0
out = []
try:
    for i in range(0,len(arr)-1):
        a = arr[i]
        b = arr[i+1]
        l = len(a)
        for j in range(0,l):
            if a[j] != b[j]:
                count+=1
        if count == 1:
            out.append(a)
        count = 0
    print(out)
except:
    if len(out) != 0 :
        print(out)
    else:
        print("No valid chain.")
