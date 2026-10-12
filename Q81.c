/* Q81 (Strings)
   Count characters in a string without using built-in length functions. */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int count = 0;
    while (s[count] != '\0' && s[count] != '\n')
        count++;

    printf("%d\n", count);
    return 0;
}
