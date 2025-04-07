#include <stdio.h>

// Function to swap elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the smallest missing positive number
int findSmallestMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Place arr[i] at its correct position if possible
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Find the first index where arr[i] != i + 1
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    // All values are in place
    return n + 1;
}

int main() {
    int n;

    // Input: size of array
    scanf("%d", &n);
    int arr[n];

    // Input: array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSmallestMissing(arr, n);
    printf("%d\n", result);

    return 0;
}
