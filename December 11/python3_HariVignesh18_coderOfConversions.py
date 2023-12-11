def decToBinary(n):
    s = n[0] + n[1]
    binaryNum = [0] * s; 
    i = 0; 
    while (s > 0):  
        binaryNum[i] = s % 2; 
        s = int(s / 2); 
        i += 1; 
    for j in range(i - 1, -1, -1): 
        print(binaryNum[j], end = "");
n = [int(i) for i in input().split()]
decToBinary(n);
