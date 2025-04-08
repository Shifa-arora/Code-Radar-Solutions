#include <stdio.h>

int main() {
    int n, largestEven = -1;

    // Input size of the array
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if even and larger than current largestEven
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }

    // Output result
    if (largestEven == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", largestEven);
    }

    return 0;
}
