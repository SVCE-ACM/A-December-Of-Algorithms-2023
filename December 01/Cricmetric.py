# Reading the number of batsmen from the user
n = int(input("Enter the number of batsmen: "))

# Creating empty list to store runs of each player
run_player = []

# For loop to traverse the list
for i in range(0, n, 1):

    # Reading the run of each batsman from the user
    print("Enter the run scored by batsman-", i + 1, ":")
    run = int(input())

    # Appending the run scored to list
    run_player.append(run)

# Calculating total runs by using built-in function
total_run = sum(run_player)

# Calculating the maximum runs scored
max_batsman = max(run_player)

# Printing the total runs scored
print("The total runs scored by the team is: ", total_run)

# Printing the maximum run scored by a batsman
print("The maximum run scored by a batsman is: ", max_batsman)
