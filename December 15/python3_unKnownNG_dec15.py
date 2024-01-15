def subStringAllocator(word):
    if len(word) == 0:
        return ['']

    rest_subseq = subStringAllocator(word[1:])
    with_first = [word[0] + subseq for subseq in rest_subseq]

    all_subseq = with_first + rest_subseq
    return all_subseq



c = 0
word = input("Enter the string: ")
subStringList = subStringAllocator(word)
print(subStringList)
subStringSet = set(subStringList)
print(subStringSet)
c+= len(subStringSet)

print(c)
