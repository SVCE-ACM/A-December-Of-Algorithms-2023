# Reading the input string from user
instr = input("Enter the string: ")

# Initializing the output list and count variable to zero
output = []
count = 0

# For loop to traverse the instr
for i in range(len(instr)):

    # Checking if an element of instr is in uppercase
    if (instr[i].isupper() == True):

        # For loop to traverse the remaining elements of list.
        for j in range(i + 1, len(instr), 1):

            # Checking if j is equal to the index of the last element
            if (j == (len(instr) - 1)):

                # Store the j value incremented by one
                idx = j + 1

                # Break the inner for loop
                break

            # Checking if an element is in uppercase
            elif (instr[j].isupper() == True):

                # The value of j is stored in idx
                idx = j

                # Break the inner loop
                break

            # Checking if an element is in lowercase
            elif (instr[j].islower() == True):

                # Perform no-operation
                pass

        # Append the substring obtained
        output.append(instr[i:idx:1])

    # If an element is not in uppercase
    else:

        # Perform no-operation
        pass

# For loop to traverse output list
for i in output:
    # Increment the count variable
    count = count + 1

# Display the number of words in a given string
print(count)
