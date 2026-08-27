//Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main() {
    int a, b;
    
    // Ask for input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Store the original numbers (optional, just in case you need them later)
    int num1 = a;
    int num2 = b;
    
    // Euclidean algorithm to find HCF
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    
    // 'a' now holds the HCF
    printf("%d\n", a);
    
    return 0;
}