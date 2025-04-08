#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k); // Accepting size and any other input (like in the test cases)

    int arr[n];
    int maxEven = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check for non-negative even number
        if (arr[i] % 2 == 0 && arr[i] >= 0) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }

    // Output result
    if (maxEven == -1)
        printf("0\n");  // As per expected output when no non-negative even number is found
    else
        printf("%d\n", maxEven);

    return 0;
}
