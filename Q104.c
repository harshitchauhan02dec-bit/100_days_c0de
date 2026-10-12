/* Q104 (Logic Enhancers)
   Write a Program to take a positive integer n as input, and find the pivot integer x such that
   the sum of all elements between 1 and x inclusively equals the sum of all elements between x
   and n inclusively. Print the pivot integer x. If no such integer exists, print -1.
   Assume that it is guaranteed that there will be at most one pivot integer for the given input.
   Follow-up 1 (optional): Can you do it in O(log n) Time Complexity?
   Follow-up 2 (optional): Can you do it in O(1) Time Complexity? */
#include <stdio.h>

/* sum(1..x) = x(x+1)/2 and sum(x..n) = n(n+1)/2 - x(x-1)/2.
   Setting them equal gives x*x = n(n+1)/2, so we binary search for x. */
int main() {
    long long n;
    scanf("%lld", &n);
    long long target = n * (n + 1) / 2;

    long long low = 1, high = n;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid == target) {
            printf("%lld\n", mid);
            return 0;
        } else if (mid * mid < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("-1\n");
    return 0;
}
