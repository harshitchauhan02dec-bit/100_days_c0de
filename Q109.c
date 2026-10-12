/* Q109 (Logic Enhancers)
   Write a program to take an integer array arr and an integer k as inputs.
   Print the maximum sum of all the subarrays of size k. */
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1\n");
        return 0;
    }

    /* sliding window: sum of first k, then slide one step at a time */
    long long windowSum = 0, maxSum;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];
    maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}
