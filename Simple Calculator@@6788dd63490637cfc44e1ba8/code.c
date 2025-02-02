#include <stdio.h>
int main() {
    char op;
    int a, b, result;
    scanf("%d %d %c",&a, &b &op);
    switch op{
        case '+':
            result = a+b;
            printf("%d", result);
            break;
        case '-':
            result = a-b;
            printf("%d", result);
            break;
        case '*':
            result = a*b;
            printf("%d", result);
            break;
        case '/':
            result = a/b;
            printf("%d", result);
            break;
    }
    return 0;
}