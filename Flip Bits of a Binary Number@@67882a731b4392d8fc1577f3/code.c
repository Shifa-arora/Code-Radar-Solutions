#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    unsigned int flipped = ~num;

    printf("Original number : %u\n", num);
    printf("Flipped  number : %u\n", flipped);

    return 0;
}
