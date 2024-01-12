print("py_gowsrini2004_day_11\n")
def convetor(n):
    if n>=1:
        convetor(n//2)
        print(n%2, end='')       
input_str = eval(input())
elm = []
count = 0
for i in input_str:
    elm.append(int(i))
sume = sum(elm)
convetor(sume)