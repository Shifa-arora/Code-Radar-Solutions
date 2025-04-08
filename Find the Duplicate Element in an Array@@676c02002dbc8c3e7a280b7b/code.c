#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input size of array (including the duplicate)

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Floyd's Tortoise and Hare (Cycle Detection)
    int slow = arr[0];
    int fast = arr[0];

    // Step 1: Move slow by 1 and fast by 2 to find meeting point
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Step 2: Move slow to start and find entrance to the cycle (duplicate)
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    printf("Duplicate element: %d\n", slow);
    return 0;
}
