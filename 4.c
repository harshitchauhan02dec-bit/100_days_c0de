//Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Prompt user for radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("\n--- Results ---\n");
    printf("Area:          %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}