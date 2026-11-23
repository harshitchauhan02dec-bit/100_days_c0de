/* Q143 - Student with the highest marks
   Input : 5 lines of: name roll_no marks */
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

int main(void) {
    struct Student s[5];
    for (int i = 0; i < 5; i++)
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    int top = 0;
    for (int i = 1; i < 5; i++)
        if (s[i].marks > s[top].marks) top = i;

    printf("Highest marks: %s (Roll No: %d) - %.2f\n", s[top].name, s[top].roll_no, s[top].marks);
    return 0;
}
