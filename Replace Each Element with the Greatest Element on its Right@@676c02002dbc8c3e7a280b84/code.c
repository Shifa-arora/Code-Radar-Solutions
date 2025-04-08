#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    int maxFromRight = -1;  // Start with -1 for the last element

    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];
        arr[i] = maxFromRight;
        if (current > maxFromRight) {
            maxFromRight = current;
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    replaceWithGreatest(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
