//Write a program to calculate the area and perimeter of a rectangle given its length and breadth



#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Prompt user for input
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("\n--- Results ---\n");
    printf("Area:      %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}