#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, target;
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    // Track if a pair was already printed
    bool printed[n];
    for (int i = 0; i < n; i++) {
        printed[i] = false;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Check if this pair was already printed
                int a = arr[i];
                int b = arr[j];

                // Ensure smaller value is printed first
                if (a > b) {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                // Check for duplicate pair before printing
                bool isDuplicate = false;
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < n; l++) {
                        int x = arr[k], y = arr[l];
                        if (x > y) {
                            int temp = x;
                            x = y;
                            y = temp;
                        }
                        if (x == a && y == b && (k != i || l != j)) {
                            isDuplicate = true;
                            break;
                        }
                    }
                    if (isDuplicate) break;
                }

                if (!isDuplicate) {
                    printf("%d %d\n", a, b);
                }
            }
        }
    }

    return 0;
}
