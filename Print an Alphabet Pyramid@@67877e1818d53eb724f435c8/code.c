#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Number of rows

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print increasing characters
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            printf("%c", ch++);
        }

        // Print decreasing characters
        ch -= 2;
        for (int j = 0; j < i; j++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}
