#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if(ch>=A && ch<=Z){
        printf("Uppercase");
    }
    else if(ch>=a && ch<=Z){
        printf("Lowercase");
    }
    else{
        pritnf("Not an alphabet");
    }
    return 0;
}