/* Q124 - Copy a file using fgetc() / fputc()
   Input : source filename, destination filename */
#include <stdio.h>

int main(void) {
    char src[256], dst[256];
    scanf("%255s %255s", src, dst);

    FILE *in = fopen(src, "r");
    if (in == NULL) { printf("Error: cannot open %s\n", src); return 1; }
    FILE *out = fopen(dst, "w");
    if (out == NULL) { printf("Error: cannot create %s\n", dst); fclose(in); return 1; }

    int c;
    while ((c = fgetc(in)) != EOF) fputc(c, out);

    fclose(in);
    fclose(out);
    printf("File copied successfully.\n");
    return 0;
}
