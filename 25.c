//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("--- Positive Number Sum Calculator ---\n");
    printf("Enter positive numbers to add.\n");
    printf("Enter 0 to stop and see the result.\n\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        // goto: Jumps immediately to the end when 0 is entered
        if (num == 0) {
            goto print_result;
        }

        // continue: Skips negative numbers without adding to sum
        if (num < 0) {
            printf("Negative numbers are ignored! Try again.\n");
            continue;
        }

        // Adds only valid positive numbers
        sum += num;
        printf("Current Sum = %d\n", sum);
    }

print_result:
    printf("\nFinished! Final Total Sum = %d\n", sum);
    return 0;
}