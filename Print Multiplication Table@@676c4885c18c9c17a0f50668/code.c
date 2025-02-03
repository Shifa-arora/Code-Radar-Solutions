#include <stdio.h>
int main() {
    int a, multiply;
    scanf("%d", &a);
    for(int i=1; i<=10; i++){
        multiply = a*i;
        printf("%d x %d = %d\n", a, i, multiply);
    }
    return 0;
}