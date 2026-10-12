/* Q91 (Strings)
   Remove all vowels from a string. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
