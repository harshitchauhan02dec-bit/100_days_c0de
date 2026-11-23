/* Q119 - Find the single repeated element in ONE pass
   Input : n, then n integers (values 0..1000000)
   A seen[] table lets us stop at the first duplicate. */
#include <stdio.h>

static char seen[1000001];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (seen[x]) { printf("%d\n", x); return 0; }
        seen[x] = 1;
    }
    return 0;
}
