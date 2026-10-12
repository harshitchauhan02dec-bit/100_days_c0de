/* Q95 (Strings)
   Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], temp[2001];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    if (strlen(a) != strlen(b)) {
        printf("Not a rotation\n");
        return 0;
    }

    /* b is a rotation of a only if b appears inside a+a */
    strcpy(temp, a);
    strcat(temp, a);

    printf(strstr(temp, b) != NULL ? "Rotation\n" : "Not a rotation\n");
    return 0;
}
