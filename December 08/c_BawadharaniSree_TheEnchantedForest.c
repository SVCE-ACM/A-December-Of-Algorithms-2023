#include <stdio.h>
void find_path(int n) {
    if (n % 2 == 0 || n < 3 || n > 15) {
        printf("Invalid input. Please enter an odd integer between 3 and 15.\n");
        return;
    }
    int magicSquare[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }
    int i = n / 2;
    int j = n - 1;
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        } else {
            if (j == n) {
                j = 0;
            }
            if (i < 0) {
                i = n - 1;
            }
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
    printf("Output:\n");
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("%2d ", magicSquare[row][col]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter an odd integer between 3 and 15: ");
    scanf("%d", &n);
    find_path(n);
    return 0;
}