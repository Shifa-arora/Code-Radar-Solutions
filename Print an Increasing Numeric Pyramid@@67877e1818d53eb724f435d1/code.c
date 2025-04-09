#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print initial spaces for alignment
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Print numbers with extra spaces
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
