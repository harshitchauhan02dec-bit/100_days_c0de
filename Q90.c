/* Q90 (Strings)
   Toggle case of each character in a string. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    printf("%s", s);
    return 0;
}
