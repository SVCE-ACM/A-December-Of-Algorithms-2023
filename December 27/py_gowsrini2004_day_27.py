print("py_gowsrini2004_day_27\n")
starting,in_petrol,total_petrol,distance = 0,0,0,0
n = 5
petrol_lis = [2,3,7,4,5]
distance_lis = [6,5,3,5,3]
for i in range(n):
    in_petrol = petrol_lis[i]-distance_lis[i]
    total_petrol += petrol_lis[i]
    distance+=distance_lis[i]
    if in_petrol<0:
        starting +=1
        in_petrol = 0
print(starting)