#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if the rectangle can fit inside the circle
bool rectangleInCircle(int width, int height, int radius) {
    // Calculate the diagonal of the rectangle using the Pythagorean theorem
    double diagonal = sqrt(width * width + height * height);

    // Check if the diagonal is less than or equal to the diameter of the circle (2 * radius)
    return (diagonal <= 2 * radius);
}

int main() {
    int rectangleWidth, rectangleHeight, circleRadius;

    // Get input from the user
    printf("Enter the width of the rectangle: ");
    scanf("%d", &rectangleWidth);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &rectangleHeight);

    printf("Enter the radius of the circle: ");
    scanf("%d", &circleRadius);

    // Check if the rectangle can fit inside the circle
    bool result = rectangleInCircle(rectangleWidth, rectangleHeight, circleRadius);

    // Print the result
    printf("Result: %s\n", result ? "true" : "false");

    return 0;
}
