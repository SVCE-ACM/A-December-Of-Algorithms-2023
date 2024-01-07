import re

def substring(name, a, b):
    return name[a-1:a+b-1]

data = [[100, "Shivnash Kumar"],[110,"Ragul Gupta"]]

ind = re.findall('\d+',input())
a,b= [int(i) for i in ind]

for i,j in data:
    print(substring(j,a,b))
