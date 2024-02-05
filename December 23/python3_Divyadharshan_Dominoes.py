def mintime(n, dominoes):
    upper_sum = sum(x[0] for x in dominoes)
    lower_sum = sum(x[1] for x in dominoes)

    if upper_sum % 2 == 0 and lower_sum % 2 == 0:
        return 0
    elif (upper_sum % 2 == 1 and lower_sum % 2 == 0) or (upper_sum % 2 == 0 and lower_sum % 2 == 1):
        return -1
    else:
        for i in range(n):
            if dominoes[i][0] % 2 == 0 and dominoes[i][1] % 2 == 1:
                return 1
            elif dominoes[i][0] % 2 == 1 and dominoes[i][1] % 2 == 0:
                return 1
    return -1
n=2
dominoes=[[4, 2],[6, 4]]
print(mintime(n,dominoes))
