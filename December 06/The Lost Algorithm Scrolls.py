#Initializing the lists l, temp, temp2 and output
l=[]
temp=[]
temp2=[]
output=[]

#Initializing the variables count and k to zero
count=0
k=0

#Reading the number of words
n=int(input("Enter the number of words: "))

#For loop to read the element
for i in range(n):

    #Reading the elements from the user
    print("Enter element: ",end=" ")
    e=input()

    #Appending the element to the list l
    l.append(e)

# For loop to traverse the list l
for i in range(n):

    # Checks if the index of next element is greater than the size of list
    if (i+1)<n:

        # If the length of the two consecutive words are same
        if len(l[i])==len(l[i+1]):

            #For loop to traverse the letters of a word
            for j in range(len(l[i])):

                #Appending the letter of the current word into temp list
                temp.append(l[i][j])

                #Appending the letter of the next word into temp list
                temp2.append(l[i+1][j])

            # While loop to traverse the elements of the temp list
            while(k<len(temp)):

                #Checking if an element of temp list does not exist in temp2 list
                if temp[k] not in temp2:

                    # Incrementing the count variable
                    count=count+1

                    #Incrementing the control variable of the while loop
                    k=k+1

                #If the element of temp list exists in temp2 list
                else:

                    #Incrementing the control variable of while loop
                    k=k+1

                    #Implementing no-operation jump statement
                    pass

            #Checking if count is not equal to 1
            if (count!=1):

                #If condition is true, print No valid chain
                print("No valid chain")

            # Checking if count is equal to 1
            else:

                # Checking if an element is not in output list
                if l[i] not in output:

                    #Appending the element to output list
                    output.append(l[i])
                # If the subsequent element exists in the output list
                if l[i+1] not in output:

                    # Appending the subsequent element to output list
                    output.append(l[i+1])

                #Print the output list
                print(output)

            # Clearing all the elements of the temp list
            temp.clear()

            # Clearing all the elements of temp2 list
            temp2.clear()

        # If the length of two consecutive words are not same
        else:

            # No-operation is performed
            pass
    # If the index of the element is greater than size of list
    else:

        # No-operation is performed
        pass

