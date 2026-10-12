/* Q97 (Strings)
   Print the initials of a name. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        /* a letter is an initial if it starts the string or follows a space */
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') ch -= 32;
            printf("%c.", ch);
        }
    }
    printf("\n");
    return 0;
}
