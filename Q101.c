/* Q101 (Logic Enhancers)
   Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
   The elements in the sorted array might be repeated. You need to print the first and last
   occurrence of the target and print the index of first and last occurrence.
   Print -1, -1 if the target is not present.
   Follow-up(optional): Can you do it in O(log n) Time Complexity? */
#include <stdio.h>

/* Binary search: if findFirst is 1, look for the leftmost index, else the rightmost. */
int search(int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (findFirst) high = mid - 1;
            else low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    scanf("%d", &target);

    printf("%d, %d\n", search(nums, n, target, 1), search(nums, n, target, 0));
    return 0;
}
