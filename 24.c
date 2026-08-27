//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit



#include <stdio.h>

int main() {
    int units, bill;

    printf("Enter units: ");
    scanf("%d", &units);

    switch ((units - 1) / 100) {
        case 0: // 1 to 100
            bill = units * 5;
            break;

        case 1: // 101 to 200
            bill = (100 * 5) + (units - 100) * 7;
            break;

        case 2: // 201 to 300
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            break;

        default: // 301 and above
            bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
            break;
    }

    printf("Total Bill: Rs. %d\n", bill);
    return 0;
}