#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    int result = num ^ (1 << n); // Toggle the nth bit

    printf("Result after toggling %dth bit: %d\n", n, result);
    return 0;
}
