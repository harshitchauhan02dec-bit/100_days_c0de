//Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day\
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled


#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    printf("Enter number of late days: ");
    if (scanf("%d", &days_late) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (days_late <= 0) {
        printf("No fine. Book returned on time.\n");
    } 
    else if (days_late <= 5) {
        fine = days_late * 2;
        printf("Fine: Rs. %d\n", fine);
    } 
    else if (days_late <= 10) {
        // First 5 days @ Rs. 2 + remaining days @ Rs. 4
        fine = (5 * 2) + ((days_late - 5) * 4);
        printf("Fine: Rs. %d\n", fine);
    } 
    else if (days_late <= 30) {
        // First 5 days @ Rs. 2 + next 5 days @ Rs. 4 + remaining days @ Rs. 6
        fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
        printf("Fine: Rs. %d\n", fine);
    } 
    else {
        printf("Membership Cancelled (Late by more than 30 days).\n");
    }

    return 0;
}