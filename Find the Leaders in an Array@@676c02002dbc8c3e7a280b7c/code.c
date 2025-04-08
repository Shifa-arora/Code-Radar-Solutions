#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* leaders = (int*)malloc(n * sizeof(int)); // store leaders
    int count = 0;

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start from the end, last element is always a leader
    int maxRight = arr[n - 1];
    leaders[count++] = maxRight;

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    // Leaders were stored in reverse, print them in original order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");

    free(arr);
    free(leaders);
    return 0;
}
