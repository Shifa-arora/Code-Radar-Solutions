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

    int maxRight = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    // Now find the minimum among the leaders
    int min = leaders[0];
    for (int i = 1; i < count; i++) {
        if (leaders[i] < min) {
            min = leaders[i];
        }
    }

    printf("%d\n", min);

    free(arr);
    free(leaders);
    return 0;
}
