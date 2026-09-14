//Write a program to find the LCM of two numbers

#include <stdio.h>
#include <stdlib.h>


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) {
        return 0;
    }

    return llabs((a / gcd(a, b)) * b);
}

int main() {
    long long num1, num2;

    printf("Enter two numbers: ");
    if (scanf("%lld %lld", &num1, &num2) == 2) {
        printf("LCM: %lld\n", lcm(num1, num2));
    }

    return 0;
}