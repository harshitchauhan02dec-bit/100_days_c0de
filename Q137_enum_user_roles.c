/* Q137 - User roles enum
   Input : 0 (ADMIN), 1 (USER) or 2 (GUEST) */
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    int v;
    scanf("%d", &v);

    switch ((enum Role)v) {
        case ADMIN: printf("Welcome, Admin! You have full access.\n"); break;
        case USER:  printf("Welcome, User! You have limited access.\n"); break;
        case GUEST: printf("Welcome, Guest! You have read-only access.\n"); break;
        default:    printf("Unknown role\n");
    }
    return 0;
}
