/* Q130 - Store student records with fprintf(), read them back with fscanf()
   Input : n, then n lines of: name roll_no marks */
#include <stdio.h>

struct Student { char name[50]; int roll; float marks; };

int main(void) {
    int n;
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) { printf("Error opening file.\n"); return 1; }
    for (int i = 0; i < n; i++) {
        struct Student s;
        scanf("%49s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) { printf("Error opening file.\n"); return 1; }
    struct Student s;
    while (fscanf(fp, "%49s %d %f", s.name, &s.roll, &s.marks) == 3)
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);
    return 0;
}
