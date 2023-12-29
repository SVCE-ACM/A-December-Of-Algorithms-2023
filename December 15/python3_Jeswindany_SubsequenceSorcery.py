def subsequence(s, sub, substr = ""):
    if(len(s) == 0):
        sub.append(substr)
        return
    subsequence(s[:-1], sub, substr + s[-1])
    subsequence(s[:-1], sub, substr)
    return

s = input()
sub = []
subsequence(s, sub)
print(len(set(sub)))