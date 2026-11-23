/* Q114 - Length of longest substring without repeating characters
   Input : a string (may contain spaces) */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10001];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int best = 0, start = 0, n = (int)strlen(s);
    for (int i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
