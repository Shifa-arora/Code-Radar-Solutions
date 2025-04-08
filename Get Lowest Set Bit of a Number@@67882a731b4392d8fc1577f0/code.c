#include <stdio.h>

int getLowestSetBitPosition(int n) {
    if (n == 0) return 0;  // No set bit in 0

    int position = 1;
    while ((n & 1) == 0) {
        n = n >> 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);

    int pos = getLowestSetBitPosition(num);

    if (pos == 0)
        printf("No set bits found.\n");
    else
        printf("Position of lowest set bit: %d\n", pos);

    return 0;
}
