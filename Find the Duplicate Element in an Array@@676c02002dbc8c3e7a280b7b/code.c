#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid element input\n");
            free(arr);
            return 1;
        }
    }

    int maxFromRight = arr[n - 1];
    printf("%d ", maxFromRight); // Last element is always a leader

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", arr[i]);
        }
    }

    free(arr); // Free memory
    return 0;
}
