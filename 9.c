//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    // Prompt user for Principal, Rate (%), and Time (years)
    printf("Enter principal, rate, and time: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate Simple Interest: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest: CI = P * (1 + R/100)^T - P
    compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    // Display results (matching typical decimal formats)
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);

    return 0;
}
