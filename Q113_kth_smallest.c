/* Q113 - Kth smallest element
   Input : n, then n integers, then k */
#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *x, const void *y) {
    int a = *(const int *)x, b = *(const int *)y;
    return (a > b) - (a < b);
}

int main(void) {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k - 1]);
    return 0;
}
