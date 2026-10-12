/* Q94 (Strings)
   Find the longest word in a sentence. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int bestStart = 0, bestLen = 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        while (s[i] == ' ') i++;                 /* skip spaces */
        int start = i;
        while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n') i++;
        int len = i - start;
        if (len > bestLen) {
            bestLen = len;
            bestStart = start;
        }
    }

    for (int k = 0; k < bestLen; k++)
        printf("%c", s[bestStart + k]);
    printf("\n");
    return 0;
}
