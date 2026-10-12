/* Q87 (Strings)
   Count spaces, digits, and special characters in a string. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char ch = s[i];
        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
            special++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n", spaces, digits, special);
    return 0;
}
