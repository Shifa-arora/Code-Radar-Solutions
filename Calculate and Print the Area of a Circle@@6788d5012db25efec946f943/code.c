#include <stdio.h>
int main() {
    int radius;
    scanf("%f",&radius);
    int area;
    area = 3.14 * radius * radius;
    printf("Area: %.2f",area);
    return 0;
}