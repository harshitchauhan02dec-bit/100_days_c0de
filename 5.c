
//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() 
{
    double celsius, fahrenheit;

    printf("Enter the Celsius \n");
    scanf("%lf", &celsius); 
   

    fahrenheit=(celsius*9/5)+32;
        printf("C0nverted value:%.2f\n", fahrenheit);
    return 0;
}