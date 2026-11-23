/* Q125 - Append a new line to an existing file (append mode)
   Input : filename, then the line of text */
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[256], text[1000];
    scanf("%255s", name);
    getchar(); /* eat newline left by scanf */
    fgets(text, sizeof text, stdin);
    text[strcspn(text, "\n")] = '\0';

    FILE *fp = fopen(name, "a");
    if (fp == NULL) { printf("Error opening file.\n"); return 1; }

    fprintf(fp, "%s\n", text);
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}
