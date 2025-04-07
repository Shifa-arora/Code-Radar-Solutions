#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    // Input: number of elements
    scanf("%d", &n);

    int arr[n];

    // Input: array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output results
    printf("%d ", evenCount);
    printf("%d", oddCount);

    return 0;
}
