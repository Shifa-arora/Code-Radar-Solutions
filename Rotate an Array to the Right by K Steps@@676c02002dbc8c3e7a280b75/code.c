#include <stdio.h>

// Function to reverse part of the array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n;  // Normalize K

    // Reverse the entire array
    reverse(arr, 0, n - 1);

    // Reverse first k elements
    reverse(arr, 0, k - 1);

    // Reverse remaining n-k elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;

    // Input size
    scanf("%d", &n);
    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input K
    scanf("%d", &k);

    // Rotate
    rotateRight(arr, n, k);

    // Output result
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
