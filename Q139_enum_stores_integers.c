/* Q139 - Show that enums are stored as integers */
#include <stdio.h>

enum Level { LOW = 1, MEDIUM = 5, HIGH = 10 };

int main(void) {
    enum Level l = MEDIUM;
    printf("LOW = %d\nMEDIUM = %d\nHIGH = %d\n", LOW, MEDIUM, HIGH);
    printf("l + 1 = %d (arithmetic works, so it is an integer)\n", l + 1);
    printf("sizeof(enum Level) = %zu bytes\n", sizeof(l));
    return 0;
}
