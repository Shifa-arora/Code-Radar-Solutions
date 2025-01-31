#include <stdio.h>
int main() {
    long int a, b;
    scanf("%d %d", &a, &b);
    if(a<0 || b<0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}