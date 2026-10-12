/* Q99 (Strings)
   Change the date format from dd/04/yyyy to dd-Apr-yyyy. */
#include <stdio.h>

int main() {
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int dd, mm, yyyy;
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm < 1 || mm > 12) {
        printf("Invalid date\n");
        return 0;
    }
    printf("%02d-%s-%d\n", dd, months[mm - 1], yyyy);
    return 0;
}
