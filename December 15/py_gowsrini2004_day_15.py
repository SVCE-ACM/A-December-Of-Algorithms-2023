print("py_gowsrini2004_day_15\n")
# eml = "abcd"
# lis = []
# for i in eml:
#     if i not in lis:
#         lis.append(i)

# # for i in range(0,len(eml)-1):
# #     for j in range(0,len(eml)):
# #         if(i >= j):
# #             continue
# #         else:
# #             if(eml[i]+eml[j]) not in lis:
# #                 lis.append(eml[i]+eml[j])

# for i in range(0,len(eml)):
#     for j in range(0,len(eml)):
#         if(i >= j):
#             continue
#         else:
#             print(f"[{i}][{j}]")

# if eml not in lis:
#     lis.append(eml)
        
        
# print(lis,"\t",len(lis)+1)

#refered https://medium.com/@frozen_codes/distinct-subsequences-ii-simple-easy-explanation-dynamic-programming-python-d3e58310176c

def distinctSubseqII(s: str) -> int:

    last= {}
    mod = 10**9 +7 
    dp = [1]

    for i in range(len(s)):
        dp.append(dp[-1]*2)
        if last.get(s[i])!=None:
            dp[-1]-=dp[last[s[i]]]
        last[s[i]]=i

    return (dp[-1]-1)%mod

s = input("Enter the string: ")
print(distinctSubseqII(s)+1)