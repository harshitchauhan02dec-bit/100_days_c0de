/* Q121 - Create info.txt and write name and age using fprintf() */
#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%99s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) { printf("Error opening file.\n"); return 1; }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");
    return 0;
}
