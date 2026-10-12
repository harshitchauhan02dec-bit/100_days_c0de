/* Q98 (Strings)
   Print initials of a name with the surname displayed in full. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++;
    while (len > 0 && s[len - 1] == ' ') len--;      /* ignore trailing spaces */

    int lastSpace = -1;
    for (int i = 0; i < len; i++)
        if (s[i] == ' ') lastSpace = i;

    /* initials of every word before the surname */
    for (int i = 0; i < lastSpace; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') ch -= 32;
            printf("%c. ", ch);
        }
    }
    /* surname in full */
    for (int i = lastSpace + 1; i < len; i++)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
