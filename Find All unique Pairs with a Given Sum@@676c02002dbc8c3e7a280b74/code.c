#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    // Track printed pairs using a 2D array
    bool printed[MAX][MAX] = {false};

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i];
                int b = arr[j];
                if (a > b) {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                if (!printed[a + 500][b + 500]) {
                    printf("%d %d\n", a, b);
                    printed[a + 500][b + 500] = true;
                }
            }
        }
    }

    return 0;
}
