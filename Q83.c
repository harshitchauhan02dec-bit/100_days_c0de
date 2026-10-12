/* Q83 (Strings)
   Count vowels and consonants in a string. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;               /* convert to lowercase */
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
