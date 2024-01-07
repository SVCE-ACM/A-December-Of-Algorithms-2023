def binsum(a,b):
    return bin(a+b)[2:]

a,b = [int(i) for i in input().split()]
print(binsum(a,b))