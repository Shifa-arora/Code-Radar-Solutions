#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    // Check the MSB (Most Significant Bit) of a 32-bit unsigned integer
    if (num & (1U << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
