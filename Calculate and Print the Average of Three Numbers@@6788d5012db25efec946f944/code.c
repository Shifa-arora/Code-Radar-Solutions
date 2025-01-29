#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a,&b,&c);
    float e;
    e = (a+b+c)/3;
    printf("Average: %.2f", e);
    return 0;
}