//Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>

int main() {
    float a,b,c;

    // Prompt user for three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f ",&a,&b,&c);

    // Determine the largest number using logical operators
    if (a >= b && a >= c) {
        printf("Largest is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest is %d\n", b);
    } else {
        printf("Largest is %d\n", c);
    }

    return 0;
}

