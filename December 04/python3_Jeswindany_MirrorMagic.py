def substrings(s):
    substrings = []
    n = len(s)

    for i in range(n):
        for j in range(i + 1, n + 1):
            substrings.append(s[i:j])
    return substrings

def palindrome(s):
    return s == s[::-1]

word = input()
sub = substrings(word)
sub.sort(key = str.__len__)
for i in range(len(word), len(sub)):
    if(palindrome(sub[i].casefold())):
        res = sub[i]
        break
else:
    res = "Error"
print(res)
