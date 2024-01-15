#Enter your input in line 23 onwards
def wordToAscii(word, lis):
    asciiValue = [ord(char) for char in word]
    lis.append(asciiValue)
    # return asciiValue

def binarySearch(lis, target, box):
    low, high = 0, len(lis) - 1

    while low <= high:
        mid = (low + high) // 2
        mid_element = lis[mid]

        if mid_element == target:
            print(f"{box} contains the Gold")
            break  
        elif mid_element < target:
            low = mid + 1  
        else:
            high = mid - 1 
    return None

# Enter your input here
Box1=["Emerald", "Ruby", "Bronze" ,"Silver"]
Box2=["Gold", "Diamond", "Ruby", "Copper"]
Box3=["Ruby", "Platinum", "Bronze", "Silver"]



Box1Ascii = []
Box2Ascii = []
Box3Ascii = []
targetAsciiValue = [ ord(i) for i in "Gold"]

for i in sorted(Box1):
    wordToAscii(i, Box1Ascii)
for j in sorted(Box2):
    wordToAscii(j, Box2Ascii)
for k in sorted(Box3):
    wordToAscii(k, Box3Ascii)

binarySearch(Box1Ascii, targetAsciiValue, "Box1")
binarySearch(Box2Ascii, targetAsciiValue, "Box2")
binarySearch(Box3Ascii, targetAsciiValue, "Box3")
