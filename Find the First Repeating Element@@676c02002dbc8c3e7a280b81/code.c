#include <stdio.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int index[MAX];  // Array to store first occurrence index of each value
    for (int i = 0; i < MAX; i++) {
        index[i] = -1; // Initialize all to -1
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int minIndex = n;
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        if (index[val] == -1) {
            index[val] = i;  // First time seeing this value
        } else {
            if (index[val] < minIndex) {
                minIndex = index[val];
            }
        }
    }

    if (minIndex == n) {
        printf("-1\n");
    } else {
        printf("%d\n", arr[minIndex]);
    }

    return 0;
}
