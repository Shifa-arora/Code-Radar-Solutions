#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if((a>b && b==c) && (a>c && b==c) && (b>a && a==c) && (b>c && a==c) && (c>a && a==b) && (c>b && a==b)){
        printf("Isosceles");
    }
    else{
        printf("Scalene")
    }
    return 0;
}