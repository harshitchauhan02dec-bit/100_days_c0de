/* Q96 (Strings)
   Reverse each word in a sentence without changing the word order. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] == ' ') {
            printf(" ");
            i++;
        } else {
            int start = i;
            while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n') i++;
            for (int k = i - 1; k >= start; k--)
                printf("%c", s[k]);
        }
    }
    printf("\n");
    return 0;
}
