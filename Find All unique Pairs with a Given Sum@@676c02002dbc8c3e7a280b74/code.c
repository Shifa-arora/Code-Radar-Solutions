#include <stdio.h>

int main() {
    int n, target;
    
    // Input size and target sum
    scanf("%d %d", &n, &target);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find unique pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Check for duplicates
                int duplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[j] == arr[k+1]) ||
                        (arr[k] == arr[j] && arr[i] == arr[k+1])) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
