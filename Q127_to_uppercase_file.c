/* Q127 - Read input.txt, convert to uppercase, write to output.txt */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) { printf("Error: cannot open input.txt\n"); return 1; }
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) { printf("Error: cannot create output.txt\n"); fclose(in); return 1; }

    int c;
    while ((c = fgetc(in)) != EOF) fputc(toupper(c), out);

    fclose(in);
    fclose(out);
    printf("Converted and saved to output.txt\n");
    return 0;
}
