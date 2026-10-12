/* Q105 (Logic Enhancers)
   Write a program to take an integer array nums of size n, and print the majority element.
   The majority element is the element that appears strictly more than floor(n / 2) times.
   Print -1 if no such element exists.
   Note: Majority Element is not necessarily the element that is present most number of times.
   Follow-up (optional): Can you do it in O(n) Time Complexity? */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    /* Boyer-Moore Voting Algorithm: find a candidate */
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        count += (nums[i] == candidate) ? 1 : -1;
    }

    /* verify the candidate really appears more than n/2 times */
    int freq = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            freq++;

    printf("%d\n", freq > n / 2 ? candidate : -1);
    return 0;
}
