# Reading the number of buildings
n = int(input("Enter the number of buildings: "))

# Initializing the empty Height list and count variable to zero
Height = []
count = 1

# For loop to read the height of each building
for i in range(0, n, 1):

    # Reading height of building
    print("Enter height of building-", i + 1, ":", end=" ")
    h = int(input())

    # Appending the height of building to Height list
    Height.append(h)

# List of buildings are displayed
print(Height)

# Intializing the variable i to zero
i = 0

# Intializing the variable j to be greater than the value of variable i
j = i + 1

# While loop when i vslue is less than number of buildings in the list
while (i < (n - 1)):

    # Checking condition whether the current element is lesser than the subsequent element
    if (Height[i] < Height[j]):

        # Updating the count,i and j values
        count = count + 1
        i = i + 1
        j = j + 1
    else:

        # Updating the i and j values only
        i = i + 1
        j = j + 1

# The number of buildings that will enjoy sunlight is displayed
print("The number of buildings that enjoy sunlight: ",count)
