#include <stdio.h>

int countTrailingZeros(unsigned int n) {
    if (n == 0) return 32; // or handle as special case

    int count = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int result = countTrailingZeros(num);
    printf("Trailing zeros: %d\n", result);

    return 0;
}
