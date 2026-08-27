//Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

void printBinary(int n) {
    if (n == 0) return;
    printBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n == 0) {
            printf("0");
        } else {
            printBinary(n);
        }
        printf("\n");
    }
    return 0;
}