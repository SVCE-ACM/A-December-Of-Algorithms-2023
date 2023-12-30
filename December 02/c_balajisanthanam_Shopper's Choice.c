#include <stdio.h>

void generateFrequency(int productIDs[], int n, int frequency[]) {
    for (int i = 0; i < n; i++) {
        frequency[productIDs[i]]++;
    }
}

int main() {
    int n;

    // Get the number of products
    printf("Enter the number of products: ");
    scanf("%d", &n);

    int productIDs[n];

    // Get the product IDs from the user
    printf("Enter the product IDs should be below 1000 only:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &productIDs[i]);
    }

    // Assuming product IDs are non-negative integers
    int maxProductID = 1000;  // Adjust this based on the maximum product ID in your dataset

    // Initialize an array to store the frequency of each product
    int frequency[maxProductID + 1];  // +1 to account for 0-based indexing
    for (int i = 0; i <= maxProductID; i++) {
        frequency[i] = 0;
    }

    // Generate the frequency array
    generateFrequency(productIDs, n, frequency);

    // Display the frequency of each product
    printf("Product ID\tFrequency\n");
    for (int i = 0; i <= maxProductID; i++) {
        if (frequency[i] > 0) {
            printf("%d\t\t%d\n", i, frequency[i]);
        }
    }

    return 0;
}
