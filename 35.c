//Write a program to print all factors of a given number.


#include <stdio.h>

int main() {
    int n;
    
    // Ask for input
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Loop from 1 up to the number itself
    for(int i = 1; i <= n; i++) {
        // If the remainder is 0, 'i' is a factor
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n"); // Print a new line at the end
    
    return 0;
}