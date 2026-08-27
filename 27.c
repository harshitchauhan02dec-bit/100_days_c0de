//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) == 1) {
        // The sum of the first n odd numbers is always n * n (n^2)
        int sum = n * n;
        printf("%d\n", sum);
    }
    
    return 0;
}