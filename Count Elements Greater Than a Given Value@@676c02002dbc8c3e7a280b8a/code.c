#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    int maxEven = -1;
    int index = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0 && arr[i] > k) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
                index = i;
            }
        }
    }

    if (index == -1)
        printf("0\n");  // or whatever is expected when no such number exists
    else
        printf("%d\n", index);

    return 0;
}
