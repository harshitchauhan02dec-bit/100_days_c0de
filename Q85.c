/* Q85 (Strings)
   Reverse a string. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
