/* Q145 - Function that returns a structure holding the top student
   Input : n, then n lines of: name roll_no marks */
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > top.marks) top = s[i];
    return top;
}

int main(void) {
    int n;
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++)
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    struct Student top = findTopper(s, n);
    printf("Top Student\nName: %s\nRoll No: %d\nMarks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
