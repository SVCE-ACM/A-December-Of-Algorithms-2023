def camel(s):
    count =0
    for i in s:
        if i.isupper(): 
            count+=1
    return count
