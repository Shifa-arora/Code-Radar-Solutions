#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            char ch = k+64;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}