#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a>b){
        if((b*b)==a){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else{
        printf("No");
    }
    return 0;
}