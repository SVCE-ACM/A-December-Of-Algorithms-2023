#include <stdio.h>
#include<string.h>
int count_buildings(int heights[], int n) {
    int count = 1; 
    int max_height = heights[0];
    for (int i = 1; i < n; i++) {
        if (heights[i] > max_height) {
            count++;
            max_height = heights[i]; 
        }
    }
    return count;
}
int main() {
    int n, heights[100];
    printf("Enter the number of buildings: ");
    scanf("%d", &n);
    printf("Enter the heights of the buildings:\n");
    for (int i = 0; i < n; i++) {
        printf("Building %d: ", i + 1);
        scanf("%d", &heights[i]);
    }
    int result = count_buildings(heights, n);
    printf("\nNumber of buildings that will see the sunrise: %d\n", result);
    return 0;
}
