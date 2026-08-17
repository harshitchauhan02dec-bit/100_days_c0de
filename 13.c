//Write a program to input a year and check whether it is a leap year or not using conditional statements.


#include <stdio.h>

int main() {
    int year;

    // Prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1. Divisible by 400, OR
    // 2. Divisible by 4 and NOT divisible by 100
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}