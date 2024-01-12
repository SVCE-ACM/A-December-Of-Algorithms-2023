#refered gpt
print("py_gowsrini2004_day_23\n")
n = int(input())
dominoes = [list(map(int, input().split())) for i in range(n)]

upper_sum = sum(x for x, y in dominoes)
lower_sum = sum(y for x, y in dominoes)

if upper_sum % 2 == 0 and lower_sum % 2 == 0:
    print(0)
elif (upper_sum % 2 == 1 and lower_sum % 2 == 0) or (upper_sum % 2 == 0 and lower_sum % 2 == 1):
    print(-1)
else:
    found = False
    for i in range(n):
        if dominoes[i][0] % 2 != dominoes[i][1] % 2:
            found = True
            break

    if found:
        print(1)
    else:
        print(-1)