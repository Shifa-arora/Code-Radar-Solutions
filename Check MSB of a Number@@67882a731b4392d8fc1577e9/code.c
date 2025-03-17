#include <stdio.h>

void checkMSB(int num) {
    if (num & 0x80000000)
        printf("Set\n");
    else
        printf("Not Set\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkMSB(num);
    
    return 0;
}
