s = input().split()
ans = []
for i in range(0,len(s)-1):
    if len(s[i]) == len(s[i+1]):
        f = 0
        a = s[i]
        b = s[i+1]
        for i in range(0,len(s[i])):
            if a[i] != b[i]:
                f += 1
        if f == 1:
            if a not in ans:
                ans.append(a)
            ans.append(b)
if ans != []:
    print(ans)
else:
    print("No Valid Chain.")
