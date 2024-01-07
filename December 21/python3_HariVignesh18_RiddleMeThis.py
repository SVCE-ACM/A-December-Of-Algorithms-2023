s = "RQHODQTLATCTQ"
ans = ""
for i in s:
    a = ord(i)
    a = a-25
    if a < 65:
        a +=26
    ans += chr(a)
print(ans)
