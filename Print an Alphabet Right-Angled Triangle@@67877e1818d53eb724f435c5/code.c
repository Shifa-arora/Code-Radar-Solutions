#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            char ch=j+64;
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}