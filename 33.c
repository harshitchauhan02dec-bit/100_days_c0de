//Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digits = 0;
    long long sum = 0;

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Not Armstrong\n");
        return 0;
    }

    original = n;
    temp = n;

    // Step 1: Count the number of digits
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = original;

    // Step 2: Calculate the sum of each digit raised to power of 'digits'
    while (temp > 0) {
        int remainder = temp % 10;
        sum += (long long)round(pow(remainder, digits));
        temp /= 10;
    }

    // Step 3: Check if sum equals original number
    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}