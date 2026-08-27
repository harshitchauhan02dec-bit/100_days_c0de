//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    double cp, sp, percent;
    if (scanf("%lf %lf", &cp, &sp) != 2 || cp <= 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (sp > cp) 
    {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %g%%\n", percent);
    } 
    else if (cp > sp) 
    {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %g%%\n", percent);
    } 
    else 
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}