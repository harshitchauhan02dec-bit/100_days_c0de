/* Q86 (Strings)
   Check if a string is a palindrome. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n')
        len++;

    int isPal = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
        if (s[i] != s[j]) {
            isPal = 0;
            break;
        }

    printf(isPal ? "Palindrome\n" : "Not a Palindrome\n");
    return 0;
}
