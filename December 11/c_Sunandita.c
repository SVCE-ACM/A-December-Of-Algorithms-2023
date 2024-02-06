/*      INPUT FORMAT : Two space separated integers in the same line
        Example : 51 13
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printBinary(sum);
    return 0;
}
void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}
