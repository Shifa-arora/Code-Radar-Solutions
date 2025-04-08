#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Use 1 shifted left 31 times (MSB mask for 32-bit int)
    int msb = (num & (1 << 31)) ? 1 : 0;

    printf("%d\n", msb);
    return 0;
}
