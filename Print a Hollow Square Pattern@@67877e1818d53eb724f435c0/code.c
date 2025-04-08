#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print '*' on the borders, otherwise print space
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
