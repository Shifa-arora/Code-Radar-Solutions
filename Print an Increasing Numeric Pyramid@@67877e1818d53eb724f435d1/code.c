#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);  // Input number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces for centering
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        printf("\n");
    }

    return 0;
}
