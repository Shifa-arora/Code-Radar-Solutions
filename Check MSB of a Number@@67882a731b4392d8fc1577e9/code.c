#include <stdio.h>

void checkMSB(int num) {
    if (num & 0x80000000)
        printf("MSB is set (1)\n");
    else
        printf("MSB is not set (0)\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkMSB(num);
    
    return 0;
}
