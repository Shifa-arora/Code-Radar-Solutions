#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[n];

    // Normalize K in case it's greater than n
    k = k % n;

    // Copy last k elements to the beginning
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements
    for(int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    // Copy back to original array
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    // Input: size of array
    scanf("%d", &n);

    int arr[n];

    // Input: array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: number of steps to rotate
    scanf("%d", &k);

    // Rotate and print result
    rotateRight(arr, n, k);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
