#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool rectangleInCircle(int width, int height, int radius) {
    double diagonal = sqrt(width * width + height * height);
    return (2 * radius >= diagonal);
}
int main() {
    int width, height, radius;
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    if (rectangleInCircle(width, height, radius)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}