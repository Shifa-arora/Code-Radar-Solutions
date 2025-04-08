#include <stdio.h>

int main() {
    int n, k;
    
    // Read size of array and the value K
    scanf("%d %d", &n, &k);

    int arr[n];
    int count = 0;

    // Read array elements and count matches
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == k) {
            count++;
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}
