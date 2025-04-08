#include <stdio.h>

void computeRunningSum(int arr[], int n, int result[]) {
    result[0] = arr[0];
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + arr[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], result[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    computeRunningSum(arr, n, result);

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
