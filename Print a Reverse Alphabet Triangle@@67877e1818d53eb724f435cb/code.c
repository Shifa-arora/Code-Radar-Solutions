#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Number of rows

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n - i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    return 0;
}
