#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* leaders = (int*)malloc(n * sizeof(int)); // at most n leaders
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1];
    leaders[count++] = maxRight;

    // Traverse from right to left and collect leaders
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    // Print leaders in original order (reverse the collected array)
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    free(arr);
    free(leaders);
    return 0;
}
