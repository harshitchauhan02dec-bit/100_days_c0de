/* Q144 - Function that accepts a structure and prints its members
   Input : name roll_no marks */
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

void printStudent(struct Student s) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main(void) {
    struct Student s;
    scanf("%49s %d %f", s.name, &s.roll_no, &s.marks);
    printStudent(s);
    return 0;
}
