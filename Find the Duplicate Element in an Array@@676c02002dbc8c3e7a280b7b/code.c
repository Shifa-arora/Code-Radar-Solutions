#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* leaders = (int*)malloc(n * sizeof(int));
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1];
    leaders[count++] = maxRight;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {  // changed from >= to >
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    // Print in correct order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    free(arr);
    free(leaders);
    return 0;
}
