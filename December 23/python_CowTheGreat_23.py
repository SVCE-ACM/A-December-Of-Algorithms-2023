n = int(input("Enter no of dominoes"))
dom = [list(map(int, input("Enter no in domine").split())) for i in range(n)]

upper_sum = sum(x for x, y in dom)
lower_sum = sum(y for x, y in dom)

if upper_sum % 2 == 0 and lower_sum % 2 == 0:
    print(0)
elif (upper_sum % 2 == 1 and lower_sum % 2 == 0) or (upper_sum % 2 == 0 and lower_sum % 2 == 1):
    print(-1)
