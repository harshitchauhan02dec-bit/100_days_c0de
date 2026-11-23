/* Q140 - Struct containing enum Gender
   Input : name, then gender (0 MALE, 1 FEMALE, 2 OTHER) */
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person { char name[50]; enum Gender gender; };

int main(void) {
    struct Person p;
    int g;
    scanf("%49s %d", p.name, &g);
    p.gender = (enum Gender)g;

    const char *label[] = {"Male", "Female", "Other"};
    printf("Name: %s\nGender: %s\n", p.name, label[p.gender]);
    return 0;
}
