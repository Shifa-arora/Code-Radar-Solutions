#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int minDiff = INT_MAX;
    int a = 0, b = 0;

    // Check adjacent pairs for minimum difference
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i] - arr[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    printf("%d %d\n", a, b);

    free(arr);
    return 0;
}
