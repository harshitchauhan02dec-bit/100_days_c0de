//Write a program to calculate the factorial of a number.


#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    if (scanf("%d", &n) == 1) {
        if (n < 0) {
            printf("Factorial of a negative number does not exist.\n");
        } else {
            for (int i = 1; i <= n; i++) {
                factorial *= i;
            }
            printf("%lld\n", factorial);
        }
    }

    return 0;
}