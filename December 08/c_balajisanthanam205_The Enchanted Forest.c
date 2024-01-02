#include <stdio.h>

// Function to find the magic square for the given odd integer 'n'
void findPath(int n) {
    int magicSquare[n][n];

    // Initialize the matrix with 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magicSquare[i][j] = 0;

    int i = n / 2;
    int j = n - 1;

    // Fill the matrix with numbers according to the rules
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        } else {
            if (j == n)
                j = 0;

            if (i < 0)
                i = n - 1;
        }

        if (magicSquare[i][j] != 0) {
            j -= 2;
            i++;
            continue;
        } else {
            magicSquare[i][j] = num++;
        }

        j++;
        i--;
    }

    // Print the magic square
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++)
            printf("%4d", magicSquare[x][y]);
        printf("\n");
    }
}

int main() {
    int n;

    // Get input from the user
    printf("Enter an odd integer (3 <= n <= 15): ");
    scanf("%d", &n);

    if (n % 2 != 1 || n < 3 || n > 15) {
        printf("Invalid input. Please enter an odd integer between 3 and 15.\n");
        return 1;
    }

    // Call the function to find and print the magic square
    findPath(n);

    return 0;
}
    