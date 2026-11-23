/* Q112 - Maximum contiguous subarray sum (Kadane's algorithm)
   Input : n, then n integers
   Works for all-negative arrays (prints the least negative element) */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int cur = a[0], best = a[0];
    for (int i = 1; i < n; i++) {
        cur = (a[i] > cur + a[i]) ? a[i] : cur + a[i];
        if (cur > best) best = cur;
    }
    printf("%d\n", best);
    return 0;
}
