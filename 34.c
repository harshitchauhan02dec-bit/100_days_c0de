//Write a program to check if a number is prime.


#include <stdio.h>

int main() {
    int n, isPrime = 1;

    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check divisors from 2 to n/2
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a factor, so not prime
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
  