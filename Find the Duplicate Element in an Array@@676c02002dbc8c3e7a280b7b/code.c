#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Last element is always a leader
    int maxRight = arr[n - 1];
    printf("%d\n", maxRight);

    free(arr);
    return 0;
}
