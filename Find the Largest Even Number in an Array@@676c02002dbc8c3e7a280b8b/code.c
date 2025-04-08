#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int largestEven;
    int found = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            if (!found) {
                largestEven = arr[i];
                found = 1;
            } else if (arr[i] > largestEven) {
                largestEven = arr[i];
            }
        }
    }

    if (found)
        printf("%d\n", largestEven);
    else
        printf("-1\n");

    return 0;
}
