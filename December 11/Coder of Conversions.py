def Coder_of_conversions():
    # Initializing the l, conversion and remainder lists
    l = []
    conversion = []
    remainder = []

    # Reading the number of elements to sum
    n = int(input("Enter the number of elements to sum: "))

    # For loop to read inputs
    for i in range(0, n, 1):

        # Reading the elements from user
        print("Enter element: ", end=" ")
        e= int(input())

        # Appending the element to list
        l.append(e)

    # Adding the elements of the list using built-in function
    add = sum(l)

    # While loop for binary conversionn
    while (add >= 2):

        # The quotient is stored in temp_quotient
        temp_quotient = add // 2

        # Remainder is stored in temp_remainder
        temp_remainder = add % 2

        # The temp_remainder is appended to remainder list
        remainder.append(temp_remainder)

        # If temp_quotient is less than 2
        if (temp_quotient < 2):

           # If the above condition is true, temp_quotient is appended to remiander list
           remainder.append(temp_quotient)

           # Assigning temp_quotient to add variable
           add = temp_quotient
        else:

            # If the condition is true, assigning temp_quotient to add variable
            add = temp_quotient

    # The elements in remainder list is reversed
    remainder.reverse()

    # Assigning remainder to conversion variable
    conversion = remainder

    # For loop to traverse conversion list
    for i in conversion:

       # Display the element
       print(i, end=" ")

# Calling function Coder_of_conversions
Coder_of_conversions()
