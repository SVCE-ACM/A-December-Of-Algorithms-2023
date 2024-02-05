def starting_point(N, petrol, distance):
    c=0
    for i in range(N):
        if distance[i]>petrol[i]:
            c-=-1
    return c

N=4
petrol=[4, 6, 7, 4]
distance=[6, 5, 3, 5]
print(starting_point(N,petrol,distance))
