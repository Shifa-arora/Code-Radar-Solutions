#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    int e;
    e = (a+b+c)/3;
    printf("Average: %.2d", e);
    return 0;
}