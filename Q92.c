/* Q92 (Strings)
   Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>

/* Prints the first character (in order of appearance) that occurs more than once. */
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            freq[s[i] - 'a']++;

    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 1) {
            printf("%c\n", s[i]);
            return 0;
        }

    printf("No repeating character\n");
    return 0;
}
