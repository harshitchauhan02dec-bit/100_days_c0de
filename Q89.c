/* Q89 (Strings)
   Count frequency of a given character in a string. */
#include <stdio.h>

int main() {
    char s[1000], ch;
    fgets(s, sizeof(s), stdin);
    scanf(" %c", &ch);

    int count = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] == ch)
            count++;

    printf("%d\n", count);
    return 0;
}
