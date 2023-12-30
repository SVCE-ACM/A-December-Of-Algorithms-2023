#include <stdio.h>
#include<string.h>
void calculateProductFrequency(int products[], int numProducts, int frequency[]) {
    for (int i = 0; i < numProducts; i++) {
        int currentProduct = products[i];
        frequency[currentProduct]++;
    }
}
int main() {
    int products[100], frequency[100] = {0}, numProducts;
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);
    printf("Enter the product IDs:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d: ", i + 1);
        scanf("%d", &products[i]);
    }
    calculateProductFrequency(products, numProducts, frequency);
    printf("\nProduct Frequencies:\n");
    for (int i = 0; i < 100; i++) {
        if (frequency[i] > 0) {
            printf("Frequency of %d: %d\n", i, frequency[i]);
        }
    }
    return 0;
}
