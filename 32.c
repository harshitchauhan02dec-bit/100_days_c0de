//Write a program to check if a number is a palindrome.


#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Not palindrome\n");
        return 0;
    }

    if (n == reverseNum(n, 0)) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}