/* Q115 - Valid anagram (lowercase letters)
   Input : s and t */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10001], t[10001];
    scanf("%s %s", s, t);

    int freq[26] = {0};
    if (strlen(s) != strlen(t)) { printf("Not Anagram\n"); return 0; }

    for (size_t i = 0; s[i]; i++) { freq[s[i] - 'a']++; freq[t[i] - 'a']--; }
    for (int i = 0; i < 26; i++)
        if (freq[i] != 0) { printf("Not Anagram\n"); return 0; }

    printf("Anagram\n");
    return 0;
}
