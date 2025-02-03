#include <stdio.h>
int main() {
    int a, multiply;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        multiply = a*i;
        printf("%d * %d = %d", a, i, multiply);
    }
    return 0;
}