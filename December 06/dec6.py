def scrolls(arr):
    result = []
    i = 0
    temp = ""
    while i<len(arr):
        count = 0
        if i == 0:
            temp = arr[i]
            result.append(arr[i])
            i+=1
        else:
       
            if arr[i]!=temp:
                
                for chr1, chr2 in zip(arr[i],temp):
                    if chr1 != chr2:
                        count +=1
                if count == 1 and arr[i] not in result and len(temp) == len(arr[i]):
                    result.append(arr[i])
            temp = arr[i]
            i+=1
    return result

arr = ["cat", "cot", "dot", "dog", "cog", "coat", "doll"]

print(scrolls(arr))
 


