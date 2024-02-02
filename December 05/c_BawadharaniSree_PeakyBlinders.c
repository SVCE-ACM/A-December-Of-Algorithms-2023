#include <stdio.h>
int main() {
    int amounts[100];  
    int numthieves, totalamount = 0, averageamount, aboveaveragetotal = 0;
    printf("Enter the number of thieves: ");
    scanf("%d", &numthieves);
    printf("Enter the amounts stolen by each thief:\n");
    for (int i = 0; i < numthieves; i++) {
        scanf("%d", &amounts[i]);
        totalamount += amounts[i];  
    }
    averageamount = totalamount / numthieves;
    for (int i = 0; i < numthieves; i++) {
        if (amounts[i] >= averageamount) {
            aboveaveragetotal += amounts[i];
        }
    }
    printf("Total amount stolen by thieves above average: %d\n", aboveaveragetotal);
    return 0;
}
