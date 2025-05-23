#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Input: number of elements
    scanf("%d", &n);

    int arr[n];

    // Input: array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MIN)
        printf("-1\n");
    else
        printf("%d\n", second);

    return 0;
}
