#December 2 - Shopper's Choice
x,y= [int(item) for item in input("Enter the list items : ").split()],{}
for v in x:y[v]= y[v]+1 if v in y else 1
for a,b in y.items():print("{}:{}".format(a,b))