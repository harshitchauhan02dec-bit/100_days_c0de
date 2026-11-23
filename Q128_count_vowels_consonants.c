/* Q128 - Count vowels and consonants in a file (digits/symbols ignored)
   Input : filename */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[256];
    scanf("%255s", name);
    FILE *fp = fopen(name, "r");
    if (fp == NULL) { printf("Error: file not found\n"); return 1; }

    int c, v = 0, cons = 0;
    while ((c = fgetc(fp)) != EOF) {
        if (!isalpha(c)) continue;
        switch (tolower(c)) {
            case 'a': case 'e': case 'i': case 'o': case 'u': v++; break;
            default: cons++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", v, cons);
    return 0;
}
