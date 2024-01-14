#include <stdio.h>
void addAndConvertToBinary(int num1, int num2) 
{
    int sum = num1 + num2;
    int binary[32]; 
    int index = 0;
    while (sum > 0) 
    {
        binary[index++] = sum % 2;
        sum = sum / 2;
    }
    for (int i = index - 1; i >= 0; i--) 
    {
        printf("%d", binary[i]);
    }

    printf("\n");
}
int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Input: (%d, %d)\nOutput: ", num1, num2);
    addAndConvertToBinary(num1, num2);
    return 0;
}
