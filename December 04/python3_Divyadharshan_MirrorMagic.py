s=input().strip()
p=[]
for i in range(len(s)):
     for j in range(i,len(s)):
          if s[i:j+1]==s[i:j+1][::-1]:
               if len(s[i:j+1])!=1:
                    p.append(s[i:j+1])
p.sort(key=len)
if p:
     print(p[0])
else:
     print("Error")
