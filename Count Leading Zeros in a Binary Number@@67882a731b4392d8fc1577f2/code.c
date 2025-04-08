#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    if (n == 0) return 32;

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1)
            break;
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int result = countLeadingZeros(num);
    printf("%d\n", result);

    return 0;
}
