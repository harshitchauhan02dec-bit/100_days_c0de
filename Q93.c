/* Q93 (Strings)
   Check if two strings are anagrams of each other. */
#include <stdio.h>

int main() {
    char a[1000], b[1000];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int freq[256] = {0};
    for (int i = 0; a[i] != '\0' && a[i] != '\n'; i++) {
        char ch = a[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        freq[(unsigned char)ch]++;
    }
    for (int i = 0; b[i] != '\0' && b[i] != '\n'; i++) {
        char ch = b[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        freq[(unsigned char)ch]--;
    }

    int anagram = 1;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }

    printf(anagram ? "Anagrams\n" : "Not Anagrams\n");
    return 0;
}
