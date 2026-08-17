//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Prompt user for input
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping using arithmetic operations
    a = a + b;  // a now holds the total sum
    b = a - b;  // b becomes the original value of a
    a = a - b;  // a becomes the original value of b

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}