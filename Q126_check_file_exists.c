/* Q126 - Check whether a file exists (fopen returns NULL if not) and display it */
#include <stdio.h>

int main(void) {
    char name[256];
    scanf("%255s", name);

    FILE *fp = fopen(name, "r");
    if (fp == NULL) { printf("Error: file does not exist.\n"); return 1; }

    int c;
    while ((c = fgetc(fp)) != EOF) putchar(c);
    fclose(fp);
    return 0;
}
