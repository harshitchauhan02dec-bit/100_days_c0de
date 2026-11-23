/* Q141 - Student structure: read and print one student
   Input : name roll_no marks */
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

int main(void) {
    struct Student s;
    scanf("%49s %d %f", s.name, &s.roll_no, &s.marks);
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
