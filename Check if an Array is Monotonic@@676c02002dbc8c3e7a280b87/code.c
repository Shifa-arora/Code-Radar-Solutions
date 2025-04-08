#include <stdio.h>
#include <stdbool.h>

bool isMonotonic(int arr[], int n) {
    bool increasing = true, decreasing = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = false;
        }
        if (arr[i] < arr[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isMonotonic(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
