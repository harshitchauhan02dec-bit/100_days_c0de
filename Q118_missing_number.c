/* Q118 - Missing number from 0..n
   Input : n (array size), then n integers taken from 0..n with one missing */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    long long expected = (long long)n * (n + 1) / 2, sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    printf("%lld\n", expected - sum);
    return 0;
}
