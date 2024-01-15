_string = input()
notFound = True
strLen = len(_string)


for i in range(strLen -1):
    if _string[i] == _string[i+1]:
        print(_string[i:i+2])
        notFound = False
        break
if notFound:
    for j in range(strLen - 2):
        if _string[j] == _string[j+2]:
            print(_string[j:j+3])
            notFound = False
            break
if notFound:
    print("Error")
