#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 0) return -1;
    if (n == 1) return arr[0]; // Only one element, it's a peak

    // Check first element
    if (arr[0] > arr[1])
        return arr[0];

    // Check elements from 1 to n-2
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    return -1; // No peak found
}

int main() {
    int n;

    scanf("%d", &n);  // Removed extra prompt

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    if (peak != -1)
        printf("%d\n", peak);  // Only print the peak value
    else
        printf("-1\n");

    return 0;
}
