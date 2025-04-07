#include <stdio.h>

// Function to reverse a portion of the array
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
    k = k % n; // Normalize k

    // Step 1: Reverse the whole array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse remaining n-k elements
    reverse(arr, k, n - 1);
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
