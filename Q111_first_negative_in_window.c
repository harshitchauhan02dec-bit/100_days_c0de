/* Q111 - First negative integer in every window of size k
   Input : n, then n integers, then k
   Output: first negative of each window (0 if none), space separated */
#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    int j = 0; /* index of next candidate negative; only moves forward -> O(n) */
    for (int i = 0; i + k <= n; i++) {
        if (j < i) j = i;
        while (j < i + k && a[j] >= 0) j++;
        printf("%d ", (j < i + k) ? a[j] : 0);
    }
    printf("\n");
    return 0;
}
