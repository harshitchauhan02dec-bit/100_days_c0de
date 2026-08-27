//Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 2) {
        printf("0\n");
        return 0;
    }

    long long product = 1;

    // Calculate the product of even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Print the product and the multiplication breakdown
    printf("%lld (", product);
    for (int i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(" * ");
        }
    }
    printf(")\n");

    return 0;
}