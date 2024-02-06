# Creating empty temporary string
tempstr = " "

# Creating empty string to store reversed string
revstr = " "

# Creating empty list to store substring
substr = []

# Reading the input from user
instr = input("Enter the string: ")

# Initializing flag variable to zero
flag = 0
j = 1

# For loop to traverse string
for i in range(0, (len(instr) - 1), 1):

    # While loop to access particular element
    while (j < len(instr) + 1):

        # Temporary variable to store value
        tempstr = instr[i][j]

        # Built-in function to reverse a string is used
        revstr = tempstr.reversed

        # Checking whether the reversed value and original value are same
        if (revstr == tempstr):

            # Appending values to list
            substr.append(tempstr)

            # Flag variable enabled
            flag = 1
            j = j + 1
        else:
            pass

# Checking whether flag variable is disabled
if (flag == 0):

    # Printing error if the flag variable is still disabled
    print("Error")
else:

    # Printing the least value in list using built-in function
    print(min(substr))
