#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    // Input: number of elements
    scanf("%d", &n);

    int arr[n];

    // Input: array elements
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;

    // Find max and min
    for(i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Output result
    printf("\n%d ", min);
    printf("%d", max);
    

    return 0;
}
