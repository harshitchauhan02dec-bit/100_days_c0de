/* Q146 - Employee structure with a nested Date structure
   Input : Employee: Raj | ID: 11 | Joining Date: 12 05 2020
   Output: Name: Raj | ID: 11 | Joining Date: 12/05/2020 */
#include <stdio.h>
#include <string.h>

struct Date { int day, month, year; };

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main(void) {
    struct Employee e;

    if (scanf(" Employee: %49[^|] | ID: %d | Joining Date: %d %d %d",
              e.name, &e.id, &e.joining.day, &e.joining.month, &e.joining.year) != 5) {
        printf("Invalid input\n");
        return 1;
    }

    /* trim trailing spaces left in the name by the [^|] match */
    size_t len = strlen(e.name);
    while (len > 0 && e.name[len - 1] == ' ') e.name[--len] = '\0';

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.joining.day, e.joining.month, e.joining.year);
    return 0;
}
