/* Q123 - Count characters, words and lines in a text file
   Input : filename */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[256];
    scanf("%255s", name);
    FILE *fp = fopen(name, "r");
    if (fp == NULL) { printf("Error: file not found\n"); return 1; }

    int c, chars = 0, words = 0, lines = 0, inWord = 0, last = '\n';
    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) inWord = 0;
        else if (!inWord) { inWord = 1; words++; }
        last = c;
    }
    if (chars > 0 && last != '\n') lines++; /* last line without trailing newline */
    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
