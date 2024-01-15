def find_path(n):
    if n % 2 == 0:
        raise ValueError("Input must be an odd integer")

    # Create an nxn matrix filled with zeros
    matrix = [[0 for _ in range(n)] for _ in range(n)]

    # Initialize variables for the starting position
    i, j = 0, n // 2

    # Fill the matrix with consecutive numbers
    for num in range(1, n**2 + 1):
        matrix[i][j] = num

        # Update the position for the next number
        i -= 1
        j += 1

        # Check for out-of-bounds and adjust the position accordingly
        if i < 0:
            i = n - 1
        if j == n:
            j = 0

        # Check if the next position is already filled
        if matrix[i][j] != 0:
            i += 2
            j -= 1

            # Check for out-of-bounds and adjust the position accordingly
            if i >= n:
                i -= n

    return matrix

def print_matrix(matrix):
    for row in matrix:
        print(row)

# Example usage
try:
    n = int(input("Enter an odd integer 'n': "))
    if n % 2 == 0:
        raise ValueError("Input must be an odd integer")

    result_matrix = find_path(n)
    print("\nMatrix with equal sum of row, column, and diagonal elements:")
    print_matrix(result_matrix)

except ValueError as e:
    print(f"Error: {e}")
