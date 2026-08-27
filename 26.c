//Write a program to print numbers from 1 to n.


#include <stdio.h>

int main() {
    int n;

    // Read value of n
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            printf("%d", i);
            if (i < n) {
                printf(" "); // Print space between numbers
            }
        }
        printf("\n");
    }

    return 0;
}
