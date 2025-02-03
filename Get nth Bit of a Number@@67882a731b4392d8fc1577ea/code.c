#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int bitValue = (a>>b) & 1;
    printf("%d", bitValue);
    return 0;
}