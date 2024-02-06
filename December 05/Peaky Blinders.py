# Empty list to store money stolen
stolen = []

# Initializing total variable to zero
total = 0

# Number of robberies
n = int(input("Enter the number of robberies: "))

# For loop to traverse the list
for i in range(0, n, 1):
    # Money stolen is entered into list
    r = int(input("Enter the money stolen: "))

    # Appending the element to list
    stolen.append(r)

# Average amount stolen
average = sum(l) / n

# Loop to locate the index of average element in stolen list
for i in range(0, n, 1):

    # Checking whether an element is equal to average
    if (stolen[i] == average):

        # Intializinng the element to avg variable
        avg = i
    else:
        pass

# Checking whether average value exists in the stolen list
if average in stolen:

    # Traversing the list from average value
    for i in range(avg, n, 1):
        # Total amount of money stolen is calculated
        total = total + l[i]
else:
    # If average element does not exist report error
    print("Error")

# Printing the total amount stolen by the thieves
print("Total amount of money stolen by the thieves: ", total)
