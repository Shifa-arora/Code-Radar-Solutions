#include <stdio.h>
int main() {
     int a, b;
     scanf("%d %d", &a, &b);
     int bitVise = a & ~(1<<b);
     printf("%d", bitVise);
    return 0;
}