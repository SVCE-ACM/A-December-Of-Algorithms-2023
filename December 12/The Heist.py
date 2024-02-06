# Defining the function for performing Binary Search
def BinarySearch(arr, low, high, x):
    # Checking if high is greater than or equal to low
    if (high >= low):

        # Calculating the middle
        mid = (high + low) // 2

        # Checking if the middle element is the search element
        if (arr[mid] == x):

            # If true, return the index of middle element
            return mid

        # Checking if the middle element is greater than search element
        elif arr[mid] > x:

            # Return the result of recursion of BinarySearch function
            return BinarySearch(arr, low, mid - 1, x)

        # If none of the above conditions are true, then perform else block
        else:

            # Return the result of recursion of BinarySearch function
            return BinarySearch(arr, mid + 1, high, x)

    # If high is not greater than or equal to low
    else:

        # Return -1
        return -1


# Reading the number of boxes
n = int(input("Enter the number of boxes: "))

# Initializing the list temp which contains the boxes
temp = []

# For loop to append elements into temp list
for i in range(n):
    # Creating Box list
    Box = []

    # Appending Box list to temp list
    temp.append(Box)

# For loop to traverse the temp list
for i in range(len(temp)):

    # Reading the number of items in Box
    print("Enter the number of items in Box-", i + 1, ": ", end=" ")
    l1 = int(input())

    # For loop to insert items into Box list
    for j in range(l1):
        # Reading the item from user
        item = input("Enter the item: ")

        # Appending the item to Box list
        temp[i].append(item)

    # Sorting the elements of Box list
    temp[i].sort()

# For loop to traverse the temp list
for i in range(n):

    # Result stores the output of Binary Search of each Box
    result = BinarySearch(temp[i], 0, n - 1, "Gold")

    # Checking if result is equal to -1
    if result == -1:

        # No-operation is performed
        pass

    # If result is not equal to -1
    else:

        # Display the Box which contains Gold
        print("Box-", i + 1, " contains Gold")
