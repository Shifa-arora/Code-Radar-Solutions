#include <stdio.h>

// Function to find the maximum product of two elements
int maxProduct(int arr[], int n) {
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return -1;
    }

    int max1 = -1000000, max2 = -1000000; // Two largest values
    int min1 = 1000000, min2 = 1000000;   // Two smallest values

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    return (product1 > product2) ? product1 : product2;
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxProd = maxProduct(arr, n);
    if (maxProd != -1) {
        printf("%d\n", maxProd);
    }

    return 0;
}
