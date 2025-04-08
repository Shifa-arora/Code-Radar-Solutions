#include <stdio.h>

int main() {
    int n, k, count = 0;

    // Input size of the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value of K
    scanf("%d", &k);

    // Count elements greater than K
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }

    // Output the result
    printf("%d %d\n", k, count);

    return 0;
}
