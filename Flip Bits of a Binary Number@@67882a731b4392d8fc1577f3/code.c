#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int flipped = ~num;

    printf("%d\n", flipped); // Only output flipped value as per test case format

    return 0;
}
