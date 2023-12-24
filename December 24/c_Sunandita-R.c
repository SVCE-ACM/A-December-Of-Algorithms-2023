/*
    INPUT FORMAT : First Line consists number of values n
                   Second line contains n space separated integers.


    ********        INPUT FORMAT EXAMPLE   ********
    5
    5 4 3 2 1
*/

#include <stdio.h>
int countViolations(int array[], int n) {
    int violations = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                violations++;
            }
        }
    }

    return violations;
}
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int violations = countViolations(array, n);
    printf("%d\n", violations);
    return 0;
}
