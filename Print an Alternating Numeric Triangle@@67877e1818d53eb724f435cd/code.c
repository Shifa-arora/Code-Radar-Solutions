#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Number of rows

    for (int i = 1; i <= n; i++) {
        int value = (i % 2 == 0) ? 0 : 1; // Start with 1 on odd rows, 0 on even
        for (int j = 1; j <= i; j++) {
            printf("%d ", value);
            value = 1 - value; // Alternate between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
