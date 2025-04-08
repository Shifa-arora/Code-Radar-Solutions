#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1];
    int minLeader = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            if (arr[i] < minLeader) {
                minLeader = arr[i];
            }
        }
    }

    printf("%d\n", minLeader);

    free(arr);
    return 0;
}
