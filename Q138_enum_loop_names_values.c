/* Q138 - Print all enum names and integer values using a loop */
#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW, COLOR_COUNT };

int main(void) {
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    for (int i = 0; i < COLOR_COUNT; i++)
        printf("%s = %d\n", names[i], i);
    return 0;
}
