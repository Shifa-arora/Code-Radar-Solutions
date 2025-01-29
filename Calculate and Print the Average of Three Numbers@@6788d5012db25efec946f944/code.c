#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    float e;
    e = (a+b+c)/3;
    printf("Average: %.2f", e);
    return 0;
}