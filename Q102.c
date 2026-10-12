/* Q102 (Logic Enhancers)
   Write a Program to take a sorted array arr[] and an integer x as input, find the index
   (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
   This element is called the ceil of x. If such an element does not exist, print -1.
   Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
   Follow-up(optional): Can you do it in O(log n) Time Complexity? */
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);

    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;          /* possible answer, try to find an earlier one */
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
