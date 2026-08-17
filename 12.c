//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.\

#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if-else logic
    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }
    return 0;
}