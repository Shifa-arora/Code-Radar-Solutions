#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<0 && b<0){
        pritnf("True");
    }
    else{
        printf("False");
    }
    return 0;
}