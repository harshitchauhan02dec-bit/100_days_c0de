/* Q133 - Enum for months, print days in each month (non-leap year) */
#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    const char *names[] = {"", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int m = JAN; m <= DEC; m++)
        printf("%s: %d days\n", names[m], days[m]);
    return 0;
}
