word = input()
length = len(word)
palindrom = {}

for i in range(length - 1):
    start_letter = word[i]

    for j in range(i+1, length):
        end_letter = word[j]

        if start_letter == end_letter:
            for k in range(1, (j-i+2//2)):
                if word[i+k] != word[j-k]:
                    break
            else:
                palindrom[word[i:j+1]] = len(word[i:j+1])

palindrom = list(dict(sorted(palindrom.items(), key = lambda x:x[1])).keys())
if palindrom == []:
    print("Error")
else:
    print(palindrom[0])
