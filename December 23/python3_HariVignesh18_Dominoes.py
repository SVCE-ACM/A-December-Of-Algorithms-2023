def min_rotation_time(n, dominos):
    upper_sum = 0
    lower_sum = 0
    rotation_count = 0

    for domino in dominos:
        upper_sum += domino[0]
        lower_sum += domino[1]

    if upper_sum % 2 == 0 and lower_sum % 2 == 0:
        return 0 

    if upper_sum % 2 != lower_sum % 2:
        return -1  

    for i in range(n):
        if dominos[i][0] % 2 != dominos[i][1] % 2:
            if upper_sum % 2 == 1 and dominos[i][0] % 2 == 1:
                rotation_count += 1
                upper_sum -= 1
                lower_sum += 1
            elif lower_sum % 2 == 1 and dominos[i][1] % 2 == 1:
                rotation_count += 1
                upper_sum += 1
                lower_sum -= 1

    return rotation_count

n = 3
dominos = [(4,2),(6,4)]
result = min_rotation_time(n, dominos)
print(result)
