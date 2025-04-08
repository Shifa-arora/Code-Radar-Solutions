#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Check if neither is greater than 0 using ! and &&
    if (!(a > 0) && !(b > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
