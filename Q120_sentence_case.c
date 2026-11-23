/* Q120 - Convert a string to sentence case
   First letter of every sentence (after . ! ?) is upper-case, rest lower-case */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[10001];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';

    int newSentence = 1;
    for (int i = 0; s[i]; i++) {
        if (isalpha((unsigned char)s[i])) {
            s[i] = newSentence ? toupper((unsigned char)s[i]) : tolower((unsigned char)s[i]);
            newSentence = 0;
        } else if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
            newSentence = 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
