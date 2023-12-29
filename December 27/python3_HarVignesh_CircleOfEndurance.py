def find_starting_point(N, petrol, distance):
    start = 0
    petrol_in_tank = 0
    total_petrol = 0
    total_distance = 0

    for i in range(N):
        petrol_in_tank = petrol[i] - distance[i]
        total_petrol += petrol[i]
        total_distance += distance[i]

        if petrol_in_tank < 0:
            start_point += 1
            petrol_in_tank = 0
    return start

N1 = 4
petrol1 = [4, 6, 7, 4]
distance1 = [6, 5, 3, 5]
print(find_starting_point(N1, petrol1, distance1))

N2 = 5
petrol2 = [2, 3, 7, 4, 5]
distance2 = [6, 5, 3, 5, 3]
print(find_starting_point(N2, petrol2, distance2))
