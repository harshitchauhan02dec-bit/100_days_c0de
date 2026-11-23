/* Q132 - Traffic light enum
   Input : 0 (RED), 1 (YELLOW) or 2 (GREEN) */
#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main(void) {
    int v;
    scanf("%d", &v);
    enum Light l = (enum Light)v;

    switch (l) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n");   break;
        default:     printf("Invalid\n");
    }
    return 0;
}
